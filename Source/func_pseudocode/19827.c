-[job_spool_client_t initWithClientID:printer:printSettings:]
job_spool_client_t *__cdecl -[job_spool_client_t initWithClientID:printer:printSettings:](
        job_spool_client_t *self,
        SEL a2,
        int a3,
        id a4,
        id a5)
{
  id v9; // x19
  id v10; // x20
  job_spool_client_t *v11; // x0
  job_spool_client_t *v12; // x21
  os_log_s *v13; // x23
  os_log_s *v14; // x23
  void *v15; // x22
  os_log_s *v16; // x23
  void *v17; // x22
  void *v18; // x24
  objc_super v20; // [xsp+0h] [xbp-60h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-50h] BYREF
  void *v22; // [xsp+14h] [xbp-4Ch]

  v9 = objc_retain(a4);
  v10 = objc_retain(a5);
  v20.receiver = self;
  v20.super_class = (Class)&OBJC_CLASS___job_spool_client_t;
  v11 = -[job_spool_client_t init](&v20, "init");
  v12 = v11;
  if ( v11 )
  {
    v11->_clientID = a3;
    objc_storeStrong((id *)&v11->_printer, a4);
    objc_storeStrong((id *)&v12->_printSettings, a5);
    v13 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryProgress[0]));
    if ( os_log_type_enabled(v13, OS_LOG_TYPE_DEFAULT) )
    {
      *(_DWORD *)buf = 67109120;
      LODWORD(v22) = a3;
      _os_log_impl((void *)&_mh_execute_header, v13, OS_LOG_TYPE_DEFAULT, "Job Init: Client ID %d", buf, 8u);
    }
    objc_release(v13);
    v14 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryProgress[0]));
    if ( os_log_type_enabled(v14, OS_LOG_TYPE_DEFAULT) )
    {
      v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "debugDescription"));
      *(_DWORD *)buf = 138412290;
      v22 = v15;
      _os_log_impl((void *)&_mh_execute_header, v14, OS_LOG_TYPE_DEFAULT, "Job Init: Printer %@", buf, 0xCu);
      objc_release(v15);
    }
    objc_release(v14);
    v16 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryProgress[0]));
    if ( os_log_type_enabled(v16, OS_LOG_TYPE_DEFAULT) )
    {
      v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "userCodableDictionary"));
      v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v17, "debugDescription"));
      *(_DWORD *)buf = 138412290;
      v22 = v18;
      _os_log_impl((void *)&_mh_execute_header, v16, OS_LOG_TYPE_DEFAULT, "Job Init: Settings: %@", buf, 0xCu);
      objc_release(v18);
      objc_release(v17);
    }
    objc_release(v16);
  }
  objc_release(v10);
  objc_release(v9);
  return v12;
}