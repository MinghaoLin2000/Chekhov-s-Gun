+[MXMTerminateProcessConfiguration configWithDictionary:error:]
id __cdecl +[MXMTerminateProcessConfiguration configWithDictionary:error:](id a1, SEL a2, id a3, id *a4)
{
  id v5; // x19
  __int64 v6; // x0
  os_log_s *v7; // x21
  NSDictionary *v8; // x22
  MXMTerminateProcessConfiguration *v9; // x21
  void *v10; // x22
  void *v11; // x23
  __int64 v12; // x0
  char isKindOfClass; // w24
  NSString *v14; // x22
  NSDictionary *v15; // x24
  void *v16; // x22
  void *v17; // x22
  void *v18; // x23
  __int64 v19; // x0
  char v20; // w24
  NSString *v21; // x22
  NSDictionary *v22; // x24
  void *v23; // x22
  void *v24; // x22
  void *v25; // x23
  __int64 v26; // x0
  char v27; // w24
  NSString *v28; // x22
  NSDictionary *v29; // x24
  NSString *v30; // x22
  void *v31; // x24
  void *v32; // x25
  NSDictionary *v33; // x23
  void *v34; // x20
  uint8_t buf[8]; // [xsp+10h] [xbp-A0h] BYREF
  NSErrorUserInfoKey v37; // [xsp+18h] [xbp-98h] BYREF
  NSString *v38; // [xsp+20h] [xbp-90h] BYREF
  NSErrorUserInfoKey v39; // [xsp+28h] [xbp-88h] BYREF
  NSString *v40; // [xsp+30h] [xbp-80h] BYREF
  NSErrorUserInfoKey v41; // [xsp+38h] [xbp-78h] BYREF
  NSString *v42; // [xsp+40h] [xbp-70h] BYREF
  NSErrorUserInfoKey v43; // [xsp+48h] [xbp-68h] BYREF
  NSString *v44; // [xsp+50h] [xbp-60h] BYREF
  NSErrorUserInfoKey v45; // [xsp+58h] [xbp-58h] BYREF
  const __CFString *v46; // [xsp+60h] [xbp-50h] BYREF
  __int64 vars8; // [xsp+B8h] [xbp+8h]

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
        "Invalid dictionary received. Unable to create MXMTerminateProcessConfiguration.",
        buf,
        2u);
    }
    objc_release(v7);
    if ( a4 )
    {
      v45 = NSLocalizedDescriptionKey;
      v46 = CFSTR("terminateProcessConfigDictionary is not a valid dictionary.");
      v8 = objc_retainAutoreleasedReturnValue(
             +[NSDictionary dictionaryWithObjects:forKeys:count:](
               &OBJC_CLASS___NSDictionary,
               "dictionaryWithObjects:forKeys:count:",
               &v46,
               &v45,
               1LL));
      *a4 = objc_autorelease(
              objc_retainAutoreleasedReturnValue(
                +[NSError errorWithDomain:code:userInfo:](
                  &OBJC_CLASS___NSError,
                  "errorWithDomain:code:userInfo:",
                  CFSTR("MXMTerminateProcessConfigurationErrorDomain"),
                  1LL,
                  v8)));
      objc_release(v8);
    }
  }
  v9 = objc_alloc_init(&OBJC_CLASS___MXMTerminateProcessConfiguration);
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "valueForKey:", CFSTR("processName")));
  objc_release(v10);
  if ( v10 )
  {
    v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "valueForKey:", CFSTR("processName")));
    v12 = objc_opt_class(&OBJC_CLASS___NSString);
    isKindOfClass = objc_opt_isKindOfClass(v11, v12);
    objc_release(v11);
    if ( (isKindOfClass & 1) == 0 )
    {
      v43 = NSLocalizedDescriptionKey;
      v14 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithFormat:](
                &OBJC_CLASS___NSString,
                "stringWithFormat:",
                CFSTR("%@ is not a string type."),
                CFSTR("processName")));
      v44 = v14;
      v15 = objc_retainAutoreleasedReturnValue(
              +[NSDictionary dictionaryWithObjects:forKeys:count:](
                &OBJC_CLASS___NSDictionary,
                "dictionaryWithObjects:forKeys:count:",
                &v44,
                &v43,
                1LL));
      *a4 = objc_autorelease(
              objc_retainAutoreleasedReturnValue(
                +[NSError errorWithDomain:code:userInfo:](
                  &OBJC_CLASS___NSError,
                  "errorWithDomain:code:userInfo:",
                  CFSTR("MXMTerminateProcessConfigurationErrorDomain"),
                  1LL,
                  v15)));
      objc_release(v15);
      objc_release(v14);
    }
    v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "valueForKey:", CFSTR("processName")));
    -[MXMTerminateProcessConfiguration setProcessName:](v9, "setProcessName:", v16);
    objc_release(v16);
  }
  v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "valueForKey:", CFSTR("timeout")));
  objc_release(v17);
  if ( v17 )
  {
    v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "valueForKey:", CFSTR("timeout")));
    v19 = objc_opt_class(&OBJC_CLASS___NSNumber);
    v20 = objc_opt_isKindOfClass(v18, v19);
    objc_release(v18);
    if ( (v20 & 1) == 0 )
    {
      v41 = NSLocalizedDescriptionKey;
      v21 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithFormat:](
                &OBJC_CLASS___NSString,
                "stringWithFormat:",
                CFSTR("%@ is not a double type."),
                CFSTR("timeout")));
      v42 = v21;
      v22 = objc_retainAutoreleasedReturnValue(
              +[NSDictionary dictionaryWithObjects:forKeys:count:](
                &OBJC_CLASS___NSDictionary,
                "dictionaryWithObjects:forKeys:count:",
                &v42,
                &v41,
                1LL));
      *a4 = objc_autorelease(
              objc_retainAutoreleasedReturnValue(
                +[NSError errorWithDomain:code:userInfo:](
                  &OBJC_CLASS___NSError,
                  "errorWithDomain:code:userInfo:",
                  CFSTR("MXMTerminateProcessConfigurationErrorDomain"),
                  1LL,
                  v22)));
      objc_release(v22);
      objc_release(v21);
    }
    v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "valueForKey:", CFSTR("timeout")));
    objc_msgSend(v23, "doubleValue");
    -[MXMTerminateProcessConfiguration setTimeout:](v9, "setTimeout:");
    objc_release(v23);
  }
  v24 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "valueForKey:", CFSTR("requiredForTestContinuation")));
  objc_release(v24);
  if ( v24 )
  {
    v25 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "valueForKey:", CFSTR("requiredForTestContinuation")));
    v26 = objc_opt_class(&OBJC_CLASS___NSNumber);
    v27 = objc_opt_isKindOfClass(v25, v26);
    objc_release(v25);
    if ( (v27 & 1) == 0 )
    {
      v39 = NSLocalizedDescriptionKey;
      v28 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithFormat:](
                &OBJC_CLASS___NSString,
                "stringWithFormat:",
                CFSTR("%@ is not a boolean type."),
                CFSTR("requiredForTestContinuation")));
      v40 = v28;
      v29 = objc_retainAutoreleasedReturnValue(
              +[NSDictionary dictionaryWithObjects:forKeys:count:](
                &OBJC_CLASS___NSDictionary,
                "dictionaryWithObjects:forKeys:count:",
                &v40,
                &v39,
                1LL));
      *a4 = objc_autorelease(
              objc_retainAutoreleasedReturnValue(
                +[NSError errorWithDomain:code:userInfo:](
                  &OBJC_CLASS___NSError,
                  "errorWithDomain:code:userInfo:",
                  CFSTR("MXMTerminateProcessConfigurationErrorDomain"),
                  1LL,
                  v29)));
      objc_release(v29);
      objc_release(v28);
    }
    v30 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "valueForKey:", CFSTR("requiredForTestContinuation")));
    if ( -[NSString unsignedLongValue](v30, "unsignedLongValue") )
    {
      v31 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "valueForKey:", CFSTR("requiredForTestContinuation")));
      v32 = objc_msgSend(v31, "unsignedLongValue");
      objc_release(v31);
      objc_release(v30);
      if ( v32 == (void *)1 )
      {
LABEL_22:
        v34 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "valueForKey:", CFSTR("requiredForTestContinuation")));
        -[MXMTerminateProcessConfiguration setRequiredForTestContinuation:](
          v9,
          "setRequiredForTestContinuation:",
          objc_msgSend(v34, "boolValue"));
        objc_release(v34);
        goto LABEL_23;
      }
      v37 = NSLocalizedDescriptionKey;
      v30 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithFormat:](
                &OBJC_CLASS___NSString,
                "stringWithFormat:",
                CFSTR("%@ is not a boolean type."),
                CFSTR("requiredForTestContinuation")));
      v38 = v30;
      v33 = objc_retainAutoreleasedReturnValue(
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
                  CFSTR("MXMTerminateProcessConfigurationErrorDomain"),
                  1LL,
                  v33)));
      objc_release(v33);
    }
    objc_release(v30);
    goto LABEL_22;
  }
LABEL_23:
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v9);
}