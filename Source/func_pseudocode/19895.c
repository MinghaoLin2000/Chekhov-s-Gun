-[lite_job_t resetJob]
void __cdecl -[lite_job_t resetJob](lite_job_t *self, SEL a2)
{
  lite_printer_t *v3; // x20
  unsigned __int8 v4; // w21
  lite_printer_t *v5; // x20
  lite_printer_t *v6; // x21
  lite_printer_t *v7; // x20
  os_log_s *v8; // x21
  unsigned int v9; // w22
  unsigned int v10; // w0
  __int64 v11; // x0
  dispatch_source_s *v12; // x19
  dispatch_time_t v13; // x0
  _DWORD v14[2]; // [xsp+0h] [xbp-40h] BYREF
  __int16 v15; // [xsp+8h] [xbp-38h]
  unsigned int v16; // [xsp+Ah] [xbp-36h]

  pthread_mutex_lock(&stru_1000C3AA0);
  objc_msgSend((id)qword_1000C3EF8, "removeObject:", self);
  -[lite_job_t setLocalJobState:](self, "setLocalJobState:", 3LL);
  -[lite_job_t clear_cancel_flag](self, "clear_cancel_flag");
  -[lite_job_t setReadyTime:](self, "setReadyTime:", 0LL);
  -[lite_job_t setSheetsCompleted:](self, "setSheetsCompleted:", 0LL);
  v3 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](self, "printer"));
  v4 = (unsigned __int8)-[lite_printer_t reasons](v3, "reasons");
  objc_release(v3);
  if ( (v4 & 0x20) != 0 )
  {
    pthread_mutex_unlock(&stru_1000C3AA0);
    sleep(3u);
    pthread_mutex_lock(&stru_1000C3AA0);
  }
  v5 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](self, "printer"));
  v6 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](self, "printer"));
  -[lite_printer_t setReasonsBits:](v5, "setReasonsBits:", -[lite_printer_t reasons](v6, "reasons") & 0xFFE6BFDD);
  objc_release(v6);
  objc_release(v5);
  -[lite_job_t setDestination_job_id:](self, "setDestination_job_id:", 0LL);
  -[lite_job_t postGlobalNotification:logMsg:](self, "postGlobalNotification:logMsg:", 2048LL, CFSTR("Job restarting."));
  v7 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](self, "printer"));
  -[lite_printer_t setCurrentJob:](v7, "setCurrentJob:", 0LL);
  v8 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryProgress[0]));
  if ( os_log_type_enabled(v8, OS_LOG_TYPE_DEFAULT) )
  {
    v9 = -[lite_job_t printd_job_id](self, "printd_job_id");
    if ( self )
      v10 = -[lite_job_t destination_job_id](self, "destination_job_id");
    else
      v10 = -1;
    v14[0] = 67109376;
    v14[1] = v9;
    v15 = 1024;
    v16 = v10;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v8,
      OS_LOG_TYPE_DEFAULT,
      "[Job %d][%d] Restarting JobTimer to this job to go again",
      (uint8_t *)v14,
      0xEu);
  }
  objc_release(v8);
  v12 = (dispatch_source_s *)qword_1000C3F00;
  if ( qword_1000C3F00 )
  {
    v13 = dispatch_time(0LL, 1000000000LL);
    dispatch_source_set_timer(v12, v13, 0xFFFFFFFFFFFFFFFFLL, 0x2540BE400uLL);
  }
  else
  {
    sub_100019FC4(v11);
  }
  pthread_mutex_unlock(&stru_1000C3AA0);
  objc_release(v7);
}