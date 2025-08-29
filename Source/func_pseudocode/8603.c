+[MXMUncacheConfiguration configWithDictionary:error:]
id __cdecl +[MXMUncacheConfiguration configWithDictionary:error:](id a1, SEL a2, id a3, id *a4)
{
  id v5; // x19
  __int64 v6; // x0
  os_log_s *v7; // x21
  NSDictionary *v8; // x22
  MXMUncacheConfiguration *v9; // x21
  void *v10; // x22
  void *v11; // x23
  __int64 v12; // x0
  char isKindOfClass; // w24
  NSString *v14; // x22
  NSDictionary *v15; // x24
  void *v16; // x22
  void *v17; // x23
  void *v18; // x22
  void *v19; // x23
  __int64 v20; // x0
  char v21; // w24
  NSString *v22; // x22
  NSDictionary *v23; // x24
  NSString *v24; // x22
  void *v25; // x24
  void *v26; // x25
  NSDictionary *v27; // x23
  void *v28; // x20
  uint8_t buf[8]; // [xsp+10h] [xbp-90h] BYREF
  NSErrorUserInfoKey v31; // [xsp+18h] [xbp-88h] BYREF
  NSString *v32; // [xsp+20h] [xbp-80h] BYREF
  NSErrorUserInfoKey v33; // [xsp+28h] [xbp-78h] BYREF
  NSString *v34; // [xsp+30h] [xbp-70h] BYREF
  NSErrorUserInfoKey v35; // [xsp+38h] [xbp-68h] BYREF
  NSString *v36; // [xsp+40h] [xbp-60h] BYREF
  NSErrorUserInfoKey v37; // [xsp+48h] [xbp-58h] BYREF
  const __CFString *v38; // [xsp+50h] [xbp-50h] BYREF
  __int64 vars8; // [xsp+A8h] [xbp+8h]

  v5 = objc_retain(a3);
  if ( !v5 || (v6 = objc_opt_class(&OBJC_CLASS___NSDictionary), (objc_opt_isKindOfClass(v5, v6) & 1) == 0) )
  {
    v7 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_MXMGetLog());
    if ( os_log_type_enabled(v7, OS_LOG_TYPE_DEBUG) )
    {
      *(_WORD *)buf = 0;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v7,
        OS_LOG_TYPE_DEBUG,
        "Invalid dictionary received. Unable to create MXMUncacheConfiguration.",
        buf,
        2u);
    }
    objc_release(v7);
    if ( a4 )
    {
      v37 = NSLocalizedDescriptionKey;
      v38 = CFSTR("uncacheConfigDictionary is not a valid dictionary.");
      v8 = objc_retainAutoreleasedReturnValue(
             +[NSDictionary dictionaryWithObjects:forKeys:count:](
               &OBJC_CLASS___NSDictionary,
               "dictionaryWithObjects:forKeys:count:",
               &v38,
               &v37,
               1LL));
      *a4 = objc_autorelease(
              objc_retainAutoreleasedReturnValue(
                +[NSError errorWithDomain:code:userInfo:](
                  &OBJC_CLASS___NSError,
                  "errorWithDomain:code:userInfo:",
                  CFSTR("MXMUncacheConfigurationErrorDomain"),
                  1LL,
                  v8)));
      objc_release(v8);
    }
  }
  v9 = objc_alloc_init(&OBJC_CLASS___MXMUncacheConfiguration);
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "valueForKey:", CFSTR("filepath")));
  objc_release(v10);
  if ( v10 )
  {
    v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "valueForKey:", CFSTR("filepath")));
    v12 = objc_opt_class(&OBJC_CLASS___NSString);
    isKindOfClass = objc_opt_isKindOfClass(v11, v12);
    objc_release(v11);
    if ( (isKindOfClass & 1) == 0 )
    {
      v35 = NSLocalizedDescriptionKey;
      v14 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithFormat:](
                &OBJC_CLASS___NSString,
                "stringWithFormat:",
                CFSTR("%@ is not a string type."),
                CFSTR("filepath")));
      v36 = v14;
      v15 = objc_retainAutoreleasedReturnValue(
              +[NSDictionary dictionaryWithObjects:forKeys:count:](
                &OBJC_CLASS___NSDictionary,
                "dictionaryWithObjects:forKeys:count:",
                &v36,
                &v35,
                1LL));
      *a4 = objc_autorelease(
              objc_retainAutoreleasedReturnValue(
                +[NSError errorWithDomain:code:userInfo:](
                  &OBJC_CLASS___NSError,
                  "errorWithDomain:code:userInfo:",
                  CFSTR("MXMUncacheConfigurationErrorDomain"),
                  1LL,
                  v15)));
      objc_release(v15);
      objc_release(v14);
    }
    v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "valueForKey:", CFSTR("filepath")));
    v17 = objc_msgSend(v16, "copy");
    -[MXMUncacheConfiguration setFilepath:](v9, "setFilepath:", v17);
    objc_release(v17);
    objc_release(v16);
  }
  v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "valueForKey:", CFSTR("requiredForTestContinuation")));
  objc_release(v18);
  if ( v18 )
  {
    v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "valueForKey:", CFSTR("requiredForTestContinuation")));
    v20 = objc_opt_class(&OBJC_CLASS___NSNumber);
    v21 = objc_opt_isKindOfClass(v19, v20);
    objc_release(v19);
    if ( (v21 & 1) == 0 )
    {
      v33 = NSLocalizedDescriptionKey;
      v22 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithFormat:](
                &OBJC_CLASS___NSString,
                "stringWithFormat:",
                CFSTR("%@ is not a boolean type."),
                CFSTR("requiredForTestContinuation")));
      v34 = v22;
      v23 = objc_retainAutoreleasedReturnValue(
              +[NSDictionary dictionaryWithObjects:forKeys:count:](
                &OBJC_CLASS___NSDictionary,
                "dictionaryWithObjects:forKeys:count:",
                &v34,
                &v33,
                1LL));
      *a4 = objc_autorelease(
              objc_retainAutoreleasedReturnValue(
                +[NSError errorWithDomain:code:userInfo:](
                  &OBJC_CLASS___NSError,
                  "errorWithDomain:code:userInfo:",
                  CFSTR("MXMUncacheConfigurationErrorDomain"),
                  1LL,
                  v23)));
      objc_release(v23);
      objc_release(v22);
    }
    v24 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "valueForKey:", CFSTR("requiredForTestContinuation")));
    if ( -[NSString unsignedLongValue](v24, "unsignedLongValue") )
    {
      v25 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "valueForKey:", CFSTR("requiredForTestContinuation")));
      v26 = objc_msgSend(v25, "unsignedLongValue");
      objc_release(v25);
      objc_release(v24);
      if ( v26 == (void *)1 )
      {
LABEL_18:
        v28 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "valueForKey:", CFSTR("requiredForTestContinuation")));
        -[MXMUncacheConfiguration setRequiredForTestContinuation:](
          v9,
          "setRequiredForTestContinuation:",
          objc_msgSend(v28, "boolValue"));
        objc_release(v28);
        goto LABEL_19;
      }
      v31 = NSLocalizedDescriptionKey;
      v24 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithFormat:](
                &OBJC_CLASS___NSString,
                "stringWithFormat:",
                CFSTR("%@ is not a boolean type."),
                CFSTR("requiredForTestContinuation")));
      v32 = v24;
      v27 = objc_retainAutoreleasedReturnValue(
              +[NSDictionary dictionaryWithObjects:forKeys:count:](
                &OBJC_CLASS___NSDictionary,
                "dictionaryWithObjects:forKeys:count:",
                &v32,
                &v31,
                1LL));
      *a4 = objc_autorelease(
              objc_retainAutoreleasedReturnValue(
                +[NSError errorWithDomain:code:userInfo:](
                  &OBJC_CLASS___NSError,
                  "errorWithDomain:code:userInfo:",
                  CFSTR("MXMUncacheConfigurationErrorDomain"),
                  1LL,
                  v27)));
      objc_release(v27);
    }
    objc_release(v24);
    goto LABEL_18;
  }
LABEL_19:
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v9);
}