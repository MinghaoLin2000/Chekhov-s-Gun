+[CoreMLModelSecurity codeSigningIdentifierFor:processIdentifier:]
// local variable allocation has failed, the output may be wrong!
id __cdecl +[CoreMLModelSecurity codeSigningIdentifierFor:processIdentifier:](
        id a1,
        SEL a2,
        $115C4C562B26FF47E01F9F4EA65B5887 *a3,
        int a4)
{
  __int64 v4; // x21
  __int128 v6; // q1
  __SecTask *v7; // x0
  __SecTask *v8; // x20
  __CFString *v9; // x19
  os_log_s *v10; // x21
  NSString *v11; // x22
  os_log_s *v12; // x19
  NSString *v13; // x0
  os_log_s *v14; // x23
  NSString *v15; // x0
  CFErrorRef error; // [xsp+8h] [xbp-78h] BYREF
  audit_token_t token; // [xsp+10h] [xbp-70h] BYREF
  uint8_t buf[4]; // [xsp+30h] [xbp-50h] BYREF
  NSString *v20; // [xsp+34h] [xbp-4Ch]
  __int16 v21; // [xsp+3Ch] [xbp-44h]
  __CFString *v22; // [xsp+3Eh] [xbp-42h]
  __int64 vars8; // [xsp+88h] [xbp+8h]

  v4 = *(_QWORD *)&a4;
  v6 = *(_OWORD *)&a3->var0[4];
  *(_OWORD *)token.val = *(_OWORD *)a3->var0;
  *(_OWORD *)&token.val[4] = v6;
  v7 = SecTaskCreateWithAuditToken(kCFAllocatorDefault, &token);
  v8 = v7;
  if ( v7 )
  {
    error = 0LL;
    v9 = (__CFString *)SecTaskCopySigningIdentifier(v7, &error);
    if ( v9 )
    {
      v10 = objc_retainAutoreleasedReturnValue(+[MLLogging coreChannel](&OBJC_CLASS___MLLogging, "coreChannel"));
      if ( os_log_type_enabled(v10, OS_LOG_TYPE_INFO) )
      {
        v11 = objc_retainAutoreleasedReturnValue(NSStringFromSelector(a2));
        *(_DWORD *)buf = 138412546;
        v20 = v11;
        v21 = 2112;
        v22 = v9;
        _os_log_impl(
          (void *)&_mh_execute_header,
          v10,
          OS_LOG_TYPE_INFO,
          "%@: SecTaskCopySigningIdentifier() returned signingIdentifier=\"%@\"",
          buf,
          0x16u);
        objc_release(v11);
      }
      objc_release(v10);
    }
    else
    {
      v14 = objc_retainAutoreleasedReturnValue(+[MLLogging coreChannel](&OBJC_CLASS___MLLogging, "coreChannel"));
      if ( os_log_type_enabled(v14, OS_LOG_TYPE_ERROR) )
      {
        v15 = objc_retainAutoreleasedReturnValue(NSStringFromSelector(a2));
        sub_10000B28C(v15, buf, v4, v14);
      }
      objc_release(v14);
      CFRelease(error);
    }
    CFRelease(v8);
  }
  else
  {
    v12 = objc_retainAutoreleasedReturnValue(+[MLLogging coreChannel](&OBJC_CLASS___MLLogging, "coreChannel"));
    if ( os_log_type_enabled(v12, OS_LOG_TYPE_ERROR) )
    {
      v13 = objc_retainAutoreleasedReturnValue(NSStringFromSelector(a2));
      sub_10000B1FC(v13, buf, v4, v12);
    }
    objc_release(v12);
    v9 = 0LL;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v9);
}