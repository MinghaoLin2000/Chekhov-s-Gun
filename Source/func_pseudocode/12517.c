-[NSURL tsu_createImageSourceFromURLAfterForcingFileCoordination]
CGImageSource *__cdecl -[NSURL tsu_createImageSourceFromURLAfterForcingFileCoordination](NSURL *self, SEL a2)
{
  void *v3; // x19
  NSString *v4; // x20
  id v5; // x19
  id v6; // x20
  void *v7; // x22
  CGImageSource *v8; // x21
  NSString *v10; // x21
  objc_class *v11; // x0
  NSString *v12; // x23
  void *v13; // x24
  void *v14; // x0
  _QWORD v15[5]; // [xsp+0h] [xbp-C0h] BYREF
  id v16; // [xsp+28h] [xbp-98h] BYREF
  __int64 v17; // [xsp+30h] [xbp-90h] BYREF
  __int64 *v18; // [xsp+38h] [xbp-88h]
  __int64 v19; // [xsp+40h] [xbp-80h]
  __int64 v20; // [xsp+48h] [xbp-78h]
  uint8_t buf[4]; // [xsp+50h] [xbp-70h] BYREF
  NSString *v22; // [xsp+54h] [xbp-6Ch]
  __int16 v23; // [xsp+5Ch] [xbp-64h]
  NSString *v24; // [xsp+5Eh] [xbp-62h]
  __int16 v25; // [xsp+66h] [xbp-5Ah]
  void *v26; // [xsp+68h] [xbp-58h]
  __int16 v27; // [xsp+70h] [xbp-50h]
  void *v28; // [xsp+72h] [xbp-4Eh]
  __int16 v29; // [xsp+7Ah] [xbp-46h]
  id v30; // [xsp+7Ch] [xbp-44h]

  v17 = 0LL;
  v18 = &v17;
  v19 = 0x2020000000LL;
  v20 = 0LL;
  if ( TSUDefaultCat_init_token != -1 )
    dispatch_once(&TSUDefaultCat_init_token, &stru_1001DC438);
  v3 = objc_retain(TSUDefaultCat_log_t);
  if ( os_log_type_enabled((os_log_t)v3, OS_LOG_TYPE_INFO) )
  {
    v4 = objc_retainAutoreleasedReturnValue(-[NSURL path](self, "path"));
    *(_DWORD *)buf = 138412290;
    v22 = v4;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)v3,
      OS_LOG_TYPE_INFO,
      "About to perform file coordination to create image source from %@:",
      buf,
      0xCu);
    objc_release(v4);
  }
  objc_release(v3);
  v5 = objc_alloc_init((Class)&OBJC_CLASS___NSFileCoordinator);
  v15[0] = _NSConcreteStackBlock;
  v15[1] = 3254779904LL;
  v15[2] = sub_100121334;
  v15[3] = &unk_1001DC458;
  v15[4] = &v17;
  v16 = 0LL;
  objc_msgSend(v5, "coordinateReadingItemAtURL:options:error:byAccessor:", self, 0LL, &v16, v15);
  v6 = objc_retain(v16);
  if ( v6 )
  {
    if ( TSUDefaultCat_init_token != -1 )
      dispatch_once(&TSUDefaultCat_init_token, &stru_1001DC488);
    v7 = objc_retain(TSUDefaultCat_log_t);
    if ( os_log_type_enabled((os_log_t)v7, OS_LOG_TYPE_ERROR) )
    {
      v10 = objc_retainAutoreleasedReturnValue(-[NSURL path](self, "path"));
      v11 = (objc_class *)objc_opt_class(v6);
      v12 = objc_retain(objc_retainAutoreleasedReturnValue(NSStringFromClass(v11)));
      v13 = objc_retain(objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "domain")));
      v14 = objc_msgSend(v6, "code");
      *(_DWORD *)buf = 138413314;
      v22 = v10;
      v23 = 2114;
      v24 = v12;
      v25 = 2114;
      v26 = v13;
      v27 = 2048;
      v28 = v14;
      v29 = 2112;
      v30 = v6;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        (os_log_t)v7,
        OS_LOG_TYPE_ERROR,
        "Failed to coordinate access to URL: %@ error: errorClass=%{public}@, domain=%{public}@, code=%zd (%@) ",
        buf,
        0x34u);
      objc_release(v13);
      objc_release(v12);
      objc_release(v10);
      objc_release(v13);
      objc_release(v12);
    }
    objc_release(v7);
  }
  v8 = (CGImageSource *)v18[3];
  objc_release(v5);
  objc_release(v6);
  _Block_object_dispose(&v17, 8);
  return v8;
}