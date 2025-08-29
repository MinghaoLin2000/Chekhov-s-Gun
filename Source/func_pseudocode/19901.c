-[lite_job_t finishJob:]
void __cdecl -[lite_job_t finishJob:](lite_job_t *self, SEL a2, signed __int64 a3)
{
  os_log_s *v5; // x21
  unsigned int v6; // w22
  unsigned int v7; // w0
  const char *v8; // x8
  NSString *v9; // x20
  lite_printer_t *v10; // x20
  OS_dispatch_source *cancel_source; // x0
  dispatch_source_s *v12; // x20
  OS_os_activity *jobActivity; // x0
  OS_os_transaction *jobTransaction; // x0
  uint8_t buf[4]; // [xsp+10h] [xbp-40h] BYREF
  unsigned int v16; // [xsp+14h] [xbp-3Ch]
  __int16 v17; // [xsp+18h] [xbp-38h]
  unsigned int v18; // [xsp+1Ah] [xbp-36h]
  __int16 v19; // [xsp+1Eh] [xbp-32h]
  int v20; // [xsp+20h] [xbp-30h]

  v5 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryProgress[0]));
  if ( os_log_type_enabled(v5, OS_LOG_TYPE_DEFAULT) )
  {
    v6 = -[lite_job_t printd_job_id](self, "printd_job_id");
    if ( self )
      v7 = -[lite_job_t destination_job_id](self, "destination_job_id");
    else
      v7 = -1;
    *(_DWORD *)buf = 67109632;
    v16 = v6;
    v17 = 1024;
    v18 = v7;
    v19 = 1024;
    v20 = a3;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v5,
      OS_LOG_TYPE_DEFAULT,
      "[Job %d][%d] Finishing job, new job-state %d",
      buf,
      0x14u);
  }
  objc_release(v5);
  pthread_mutex_lock(&stru_1000C3AA0);
  objc_msgSend((id)qword_1000C3EF0, "removeObject:", self);
  objc_msgSend((id)qword_1000C3EF8, "removeObject:", self);
  -[lite_job_t setLocalJobState:](self, "setLocalJobState:", a3);
  -[lite_job_t setCompletedTime:](self, "setCompletedTime:", time(0LL));
  v8 = "completed.";
  if ( a3 == 8 )
    v8 = "aborted.";
  if ( a3 == 7 )
    v8 = "canceled.";
  v9 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("Job %s"), v8));
  -[lite_job_t postGlobalNotification:logMsg:](self, "postGlobalNotification:logMsg:", 0x2000LL, v9);
  objc_release(v9);
  v10 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](self, "printer"));
  -[lite_printer_t setCurrentJob:](v10, "setCurrentJob:", 0LL);
  objc_release(v10);
  cancel_source = self->_cancel_source;
  if ( cancel_source )
  {
    self->_cancel_source = 0LL;
    v12 = objc_retain(cancel_source);
    objc_release(v12);
    dispatch_source_cancel(v12);
    objc_release(v12);
  }
  if ( qword_1000C3F00 )
    dispatch_source_set_timer((dispatch_source_t)qword_1000C3F00, 0LL, 0xFFFFFFFFFFFFFFFFLL, 0LL);
  if ( self->_jobActivity )
  {
    os_activity_scope_leave(&self->_jobActivityState);
    jobActivity = self->_jobActivity;
    self->_jobActivity = 0LL;
    objc_release(jobActivity);
  }
  jobTransaction = self->_jobTransaction;
  if ( jobTransaction )
  {
    self->_jobTransaction = 0LL;
    objc_release(jobTransaction);
  }
  pthread_mutex_unlock(&stru_1000C3AA0);
}