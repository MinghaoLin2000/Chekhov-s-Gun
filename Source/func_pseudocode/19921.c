-[lite_job_t postGlobalNotification:logMsg:]
void __cdecl -[lite_job_t postGlobalNotification:logMsg:](lite_job_t *self, SEL a2, unsigned int a3, id a4)
{
  id v6; // x19
  os_log_s *v7; // x22
  unsigned int v8; // w23
  unsigned int v9; // w0
  os_log_s *v10; // x22
  unsigned int v11; // w23
  unsigned int v12; // w0
  os_log_s *v13; // x21
  unsigned int v14; // w22
  unsigned int v15; // w0
  int v16; // [xsp+0h] [xbp-50h] BYREF
  unsigned int v17; // [xsp+4h] [xbp-4Ch]
  __int16 v18; // [xsp+8h] [xbp-48h]
  unsigned int v19; // [xsp+Ah] [xbp-46h]
  __int16 v20; // [xsp+Eh] [xbp-42h]
  id v21; // [xsp+10h] [xbp-40h]

  v6 = objc_retain(a4);
  if ( objc_msgSend(v6, "length") )
  {
    v7 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryProgress[0]));
    if ( os_log_type_enabled(v7, OS_LOG_TYPE_DEFAULT) )
    {
      v8 = -[lite_job_t printd_job_id](self, "printd_job_id");
      if ( self )
        v9 = -[lite_job_t destination_job_id](self, "destination_job_id");
      else
        v9 = -1;
      v16 = 67109634;
      v17 = v8;
      v18 = 1024;
      v19 = v9;
      v20 = 2112;
      v21 = v6;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v7,
        OS_LOG_TYPE_DEFAULT,
        "[Job %d][%d] postGlobalNotification(%@)",
        (uint8_t *)&v16,
        0x18u);
    }
    objc_release(v7);
  }
  if ( (int)a3 >= 0x4000 )
  {
    if ( a3 == 0x4000 )
    {
LABEL_22:
      v13 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryProgress[0]));
      if ( os_log_type_enabled(v13, OS_LOG_TYPE_DEFAULT) )
      {
        v14 = -[lite_job_t printd_job_id](self, "printd_job_id");
        if ( self )
          v15 = -[lite_job_t destination_job_id](self, "destination_job_id");
        else
          v15 = -1;
        v16 = 67109376;
        v17 = v14;
        v18 = 1024;
        v19 = v15;
        _os_log_impl(
          (void *)&_mh_execute_header,
          v13,
          OS_LOG_TYPE_DEFAULT,
          "[Job %d][%d] Sending com.apple.printd.job-list event",
          (uint8_t *)&v16,
          0xEu);
      }
      objc_release(v13);
      quantized_notify_post(2LL, "com.apple.printd.job-list");
      goto LABEL_28;
    }
    if ( a3 != 0x10000 && a3 != 0x8000 )
      goto LABEL_28;
  }
  else if ( a3 != 2048 )
  {
    if ( a3 != 4096 && a3 != 0x2000 )
      goto LABEL_28;
    goto LABEL_22;
  }
  v10 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryProgress[0]));
  if ( os_log_type_enabled(v10, OS_LOG_TYPE_DEFAULT) )
  {
    v11 = -[lite_job_t printd_job_id](self, "printd_job_id");
    if ( self )
      v12 = -[lite_job_t destination_job_id](self, "destination_job_id");
    else
      v12 = -1;
    v16 = 67109376;
    v17 = v11;
    v18 = 1024;
    v19 = v12;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v10,
      OS_LOG_TYPE_DEFAULT,
      "[Job %d][%d] Sending com.apple.printd.job-progress event",
      (uint8_t *)&v16,
      0xEu);
  }
  objc_release(v10);
  quantized_notify_post(4LL, "com.apple.printd.job-progress");
  if ( a3 != 0x10000 )
    goto LABEL_22;
LABEL_28:
  objc_release(v6);
}