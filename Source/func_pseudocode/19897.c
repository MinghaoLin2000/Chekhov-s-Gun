-[lite_job_t initWithRequestParams:session:printer:printSettings:]
lite_job_t *__cdecl -[lite_job_t initWithRequestParams:session:printer:printSettings:](
        lite_job_t *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6)
{
  id v10; // x19
  id v11; // x21
  id v12; // x22
  id v13; // x23
  lite_job_t *v14; // x24
  lite_job_t *v15; // x20
  __int64 v16; // x28
  int v17; // w9
  JobRequestAttributes_Base *v18; // x0
  NSString *v19; // x0
  NSString *spoolDocumentFormat; // x8
  __int64 v21; // x0
  OS_os_transaction *jobTransaction; // x8
  os_activity_t v23; // x0
  OS_os_activity *jobActivity; // x8
  os_log_s *v25; // x25
  unsigned int v26; // w24
  unsigned int v27; // w0
  objc_super v29; // [xsp+0h] [xbp-80h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-70h] BYREF
  unsigned int v31; // [xsp+14h] [xbp-6Ch]
  __int16 v32; // [xsp+18h] [xbp-68h]
  unsigned int v33; // [xsp+1Ah] [xbp-66h]

  v10 = objc_retain(a3);
  v11 = objc_retain(a4);
  v12 = objc_retain(a5);
  v13 = objc_retain(a6);
  v29.receiver = self;
  v29.super_class = (Class)&OBJC_CLASS___lite_job_t;
  v14 = -[lite_job_t init](&v29, "init");
  v15 = v14;
  if ( v14 )
  {
    v16 = operator new(184LL, 0x1081C40BDAC1F38LL);
    JobRequestAttributes_FromRequestParams::JobRequestAttributes_FromRequestParams(v16, v10);
    v14->_request_attrs = (JobRequestAttributes_Base *)v16;
    objc_storeStrong((id *)&v14->_ippSession, a4);
    objc_storeStrong((id *)&v14->_printer, a5);
    objc_storeStrong((id *)&v14->_printSettings, a6);
    v14->_localJobState = 4LL;
    v14->_createdTime = time(0LL);
    v17 = dword_1000C3A38++;
    v14->_printd_job_id = v17;
    v18 = -[lite_job_t request_attrs](v14, "request_attrs");
    v19 = (NSString *)objc_retainAutoreleasedReturnValue((id)(*((__int64 (__fastcall **)(JobRequestAttributes_Base *))v18->var0
                                                              + 20))(v18));
    spoolDocumentFormat = v14->_spoolDocumentFormat;
    v14->_spoolDocumentFormat = v19;
    objc_release(spoolDocumentFormat);
    if ( !v14->_spoolDocumentFormat )
    {
      v14->_spoolDocumentFormat = (NSString *)CFSTR("application/octet-stream");
      objc_release(0LL);
    }
    -[lite_job_t _setupCancelSource](v14, "_setupCancelSource");
    v21 = os_transaction_create("com.apple.printd");
    jobTransaction = v14->_jobTransaction;
    v14->_jobTransaction = (OS_os_transaction *)v21;
    objc_release(jobTransaction);
    v23 = _os_activity_create(
            (void *)&_mh_execute_header,
            "Print A Job",
            (os_activity_t)&_os_activity_current,
            OS_ACTIVITY_FLAG_DEFAULT);
    jobActivity = v14->_jobActivity;
    v14->_jobActivity = v23;
    objc_release(jobActivity);
    os_activity_scope_enter(v14->_jobActivity, &v14->_jobActivityState);
    v25 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryProgress[0]));
    if ( os_log_type_enabled(v25, OS_LOG_TYPE_DEFAULT) )
    {
      v26 = -[lite_job_t printd_job_id](v14, "printd_job_id");
      v27 = -[lite_job_t destination_job_id](v15, "destination_job_id");
      *(_DWORD *)buf = 67109376;
      v31 = v26;
      v32 = 1024;
      v33 = v27;
      _os_log_impl((void *)&_mh_execute_header, v25, OS_LOG_TYPE_DEFAULT, "[Job %d][%d] Allocated job.", buf, 0xEu);
    }
    objc_release(v25);
  }
  objc_release(v13);
  objc_release(v12);
  objc_release(v11);
  objc_release(v10);
  return v15;
}