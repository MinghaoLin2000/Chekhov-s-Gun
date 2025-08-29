+[ATKeychainStore objectForKey:error:]
id __cdecl +[ATKeychainStore objectForKey:error:](id a1, SEL a2, id a3, id *a4)
{
  id v7; // x19
  void *v8; // x21
  id v9; // x22
  _BOOL4 v10; // w0
  void *v11; // x0
  id v12; // x24
  id v13; // x24
  __int64 v14; // x25
  void *v15; // x24
  id v16; // x26
  id v17; // x0
  void *v18; // x25
  id v19; // x23
  void *v20; // x0
  id v21; // x23
  __int64 v22; // x23
  void *v23; // x27
  NSAssertionHandler *v25; // x22
  id v26; // [xsp+20h] [xbp-80h] BYREF
  id v27; // [xsp+28h] [xbp-78h] BYREF
  uint8_t buf[4]; // [xsp+30h] [xbp-70h] BYREF
  void *v29; // [xsp+34h] [xbp-6Ch]
  __int16 v30; // [xsp+3Ch] [xbp-64h]
  id v31; // [xsp+3Eh] [xbp-62h]
  __int64 vars8; // [xsp+A8h] [xbp+8h]

  v7 = objc_retain(a3);
  if ( !a4 )
  {
    v25 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v25,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      a1,
      CFSTR("ATKeychainStore.m"),
      23LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("error"));
    objc_release(v25);
  }
  v27 = 0LL;
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "_readDataFromKeychain:error:", v7, &v27));
  v9 = objc_retain(v27);
  v10 = os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT);
  if ( v8 )
  {
    if ( v10 )
    {
      v11 = (void *)objc_opt_class(a1);
      *(_DWORD *)buf = 138412546;
      v29 = v11;
      v30 = 2112;
      v31 = v7;
      v12 = objc_retain(v11);
      _os_log_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_DEFAULT,
        "[%@]: Successfully read key: %@",
        buf,
        0x16u);
      objc_release(v12);
    }
    v13 = objc_alloc((Class)&OBJC_CLASS___NSSet);
    v14 = objc_opt_class(&OBJC_CLASS___NSNumber);
    v15 = objc_msgSend(v13, "initWithObjects:", v14, objc_opt_class(&OBJC_CLASS___NSDate), 0LL);
    v26 = 0LL;
    v16 = objc_retainAutoreleasedReturnValue(
            +[NSKeyedUnarchiver unarchivedObjectOfClasses:fromData:error:](
              &OBJC_CLASS___NSKeyedUnarchiver,
              "unarchivedObjectOfClasses:fromData:error:",
              v15,
              v8,
              &v26));
    v17 = objc_retain(v26);
    v18 = v17;
    if ( !v16 || v17 )
    {
      v22 = objc_opt_class(a1);
      v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v18, "description"));
      NSLog(&CFSTR("[%@]: Error unarchiving data: %@. Error: %@").isa, v22, v8, v23);
      objc_release(v23);
      v19 = 0LL;
      if ( a4 )
        *a4 = objc_retainAutorelease(v18);
    }
    else
    {
      v19 = objc_retain(v16);
    }
    objc_release(v16);
    objc_release(v15);
    objc_release(v18);
  }
  else
  {
    if ( v10 )
    {
      v20 = (void *)objc_opt_class(a1);
      *(_DWORD *)buf = 138412546;
      v29 = v20;
      v30 = 2112;
      v31 = v7;
      v21 = objc_retain(v20);
      _os_log_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_DEFAULT,
        "[%@]: Unable to find key: %@",
        buf,
        0x16u);
      objc_release(v21);
    }
    v19 = 0LL;
    if ( a4 )
      *a4 = objc_retainAutorelease(v9);
  }
  objc_release(v8);
  objc_release(v9);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v19);
}