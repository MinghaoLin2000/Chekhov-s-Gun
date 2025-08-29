-[lite_job_t dealloc]
void __cdecl -[lite_job_t dealloc](lite_job_t *self, SEL a2)
{
  os_log_s *v3; // x20
  unsigned int v4; // w21
  unsigned int v5; // w0
  NSString *v6; // x0
  bool v7; // w20
  char v8; // w8
  os_log_s *v9; // x20
  unsigned int v10; // w21
  unsigned int v11; // w23
  NSString *v12; // x22
  NSString *v13; // x20
  JobRequestAttributes_Base *request_attrs; // x0
  objc_super v15; // [xsp+10h] [xbp-60h] BYREF
  uint8_t buf[4]; // [xsp+20h] [xbp-50h] BYREF
  unsigned int v17; // [xsp+24h] [xbp-4Ch]
  __int16 v18; // [xsp+28h] [xbp-48h]
  unsigned int v19; // [xsp+2Ah] [xbp-46h]
  __int16 v20; // [xsp+2Eh] [xbp-42h]
  NSString *v21; // [xsp+30h] [xbp-40h]

  v3 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryProgress[0]));
  if ( os_log_type_enabled(v3, OS_LOG_TYPE_DEFAULT) )
  {
    v4 = -[lite_job_t printd_job_id](self, "printd_job_id");
    if ( self )
      v5 = -[lite_job_t destination_job_id](self, "destination_job_id");
    else
      v5 = -1;
    *(_DWORD *)buf = 67109376;
    v17 = v4;
    v18 = 1024;
    v19 = v5;
    _os_log_impl((void *)&_mh_execute_header, v3, OS_LOG_TYPE_DEFAULT, "[Job %d][%d] Freeing job.", buf, 0xEu);
  }
  objc_release(v3);
  v6 = objc_retainAutoreleasedReturnValue(-[lite_job_t spoolDocumentFilename](self, "spoolDocumentFilename"));
  v7 = v6 == 0LL;
  objc_release(v6);
  if ( PreserveJobFiles )
    v8 = 1;
  else
    v8 = v7;
  if ( (v8 & 1) == 0 )
  {
    v9 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryProgress[0]));
    if ( os_log_type_enabled(v9, OS_LOG_TYPE_DEFAULT) )
    {
      v10 = -[lite_job_t printd_job_id](self, "printd_job_id");
      if ( self )
        v11 = -[lite_job_t destination_job_id](self, "destination_job_id");
      else
        v11 = -1;
      v12 = objc_retainAutoreleasedReturnValue(-[lite_job_t spoolDocumentFilename](self, "spoolDocumentFilename"));
      *(_DWORD *)buf = 67109634;
      v17 = v10;
      v18 = 1024;
      v19 = v11;
      v20 = 2112;
      v21 = v12;
      _os_log_impl((void *)&_mh_execute_header, v9, OS_LOG_TYPE_DEFAULT, "[Job %d][%d] Removing \"%@\".", buf, 0x18u);
      objc_release(v12);
    }
    objc_release(v9);
    v13 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(-[lite_job_t spoolDocumentFilename](self, "spoolDocumentFilename")));
    unlink(-[NSString UTF8String](v13, "UTF8String"));
    objc_release(v13);
  }
  request_attrs = self->_request_attrs;
  if ( request_attrs )
    (*((void (__fastcall **)(JobRequestAttributes_Base *))request_attrs->var0 + 3))(request_attrs);
  v15.receiver = self;
  v15.super_class = (Class)&OBJC_CLASS___lite_job_t;
  -[lite_job_t dealloc](&v15, "dealloc");
}