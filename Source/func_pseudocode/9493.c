+[TSPDocumentProperties documentRevisionAtURL:]
id __cdecl +[TSPDocumentProperties documentRevisionAtURL:](id a1, SEL a2, id a3)
{
  id v3; // x19
  TSPDocumentProperties *v4; // x21
  id v5; // x20
  void *v6; // x22
  TSPDocumentRevision *v7; // x22
  objc_class *v9; // x0
  NSString *v10; // x23
  void *v11; // x24
  void *v12; // x0
  id v13; // [xsp+8h] [xbp-78h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-70h] BYREF
  NSString *v15; // [xsp+14h] [xbp-6Ch]
  __int16 v16; // [xsp+1Ch] [xbp-64h]
  void *v17; // [xsp+1Eh] [xbp-62h]
  __int16 v18; // [xsp+26h] [xbp-5Ah]
  void *v19; // [xsp+28h] [xbp-58h]
  __int16 v20; // [xsp+30h] [xbp-50h]
  id v21; // [xsp+32h] [xbp-4Eh]
  __int64 vars8; // [xsp+88h] [xbp+8h]

  v3 = objc_retain(a3);
  v13 = 0LL;
  v4 = -[TSPDocumentProperties initWithDocumentURL:error:](
         objc_alloc(&OBJC_CLASS___TSPDocumentProperties),
         "initWithDocumentURL:error:",
         v3,
         &v13);
  v5 = objc_retain(v13);
  if ( v5 )
  {
    if ( TSUDefaultCat_init_token != -1 )
      dispatch_once(&TSUDefaultCat_init_token, &stru_1001D3588);
    v6 = objc_retain(TSUDefaultCat_log_t);
    if ( os_log_type_enabled((os_log_t)v6, OS_LOG_TYPE_ERROR) )
    {
      v9 = (objc_class *)objc_opt_class(v5);
      v10 = objc_retain(objc_retainAutoreleasedReturnValue(NSStringFromClass(v9)));
      v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "domain"));
      v12 = objc_msgSend(v5, "code");
      *(_DWORD *)buf = 138544130;
      v15 = v10;
      v16 = 2114;
      v17 = v11;
      v18 = 2048;
      v19 = v12;
      v20 = 2112;
      v21 = v5;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        (os_log_t)v6,
        OS_LOG_TYPE_ERROR,
        "Failed to read TSPDocumentProperties with error: errorClass=%{public}@, domain=%{public}@, code=%zd (%@) ",
        buf,
        0x2Au);
      objc_release(v10);
      objc_release(v11);
      objc_release(v10);
    }
    objc_release(v6);
    v7 = 0LL;
  }
  else
  {
    v7 = objc_retainAutoreleasedReturnValue(-[TSPDocumentProperties revision](v4, "revision"));
  }
  objc_release(v4);
  objc_release(v5);
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}