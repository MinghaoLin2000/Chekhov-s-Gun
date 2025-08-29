+[CoreMLModelSecurity teamIdentifierFor:processIdentifier:]
// local variable allocation has failed, the output may be wrong!
id __cdecl +[CoreMLModelSecurity teamIdentifierFor:processIdentifier:](
        id a1,
        SEL a2,
        $115C4C562B26FF47E01F9F4EA65B5887 *a3,
        int a4)
{
  __int64 v4; // x20
  __int128 v6; // q1
  SecTaskRef v7; // x0
  SecTaskRef v8; // x23
  void *v9; // x19
  os_log_s *v10; // x22
  NSString *v11; // x0
  os_log_s *v12; // x22
  NSString *v13; // x0
  os_log_s *v14; // x22
  NSString *v15; // x20
  CFTypeRef cf; // [xsp+8h] [xbp-78h] BYREF
  audit_token_t token; // [xsp+10h] [xbp-70h] BYREF
  uint8_t buf[4]; // [xsp+30h] [xbp-50h] BYREF
  NSString *v20; // [xsp+34h] [xbp-4Ch]
  __int16 v21; // [xsp+3Ch] [xbp-44h]
  void *v22; // [xsp+3Eh] [xbp-42h]
  __int64 vars8; // [xsp+88h] [xbp+8h]

  v4 = *(_QWORD *)&a4;
  v6 = *(_OWORD *)&a3->var0[4];
  *(_OWORD *)token.val = *(_OWORD *)a3->var0;
  *(_OWORD *)&token.val[4] = v6;
  v7 = SecTaskCreateWithAuditToken(kCFAllocatorDefault, &token);
  v8 = v7;
  if ( v7 )
  {
    cf = 0LL;
    v9 = (void *)SecTaskCopyTeamIdentifier(v7, &cf);
    CFRelease(v8);
    if ( cf )
    {
      v10 = objc_retainAutoreleasedReturnValue(+[MLLogging coreChannel](&OBJC_CLASS___MLLogging, "coreChannel"));
      if ( os_log_type_enabled(v10, OS_LOG_TYPE_ERROR) )
      {
        v11 = objc_retainAutoreleasedReturnValue(NSStringFromSelector(a2));
        sub_10000B244(v11, buf, v4, v10);
      }
      objc_release(v10);
      CFRelease(cf);
    }
    else
    {
      v14 = objc_retainAutoreleasedReturnValue(+[MLLogging coreChannel](&OBJC_CLASS___MLLogging, "coreChannel"));
      if ( os_log_type_enabled(v14, OS_LOG_TYPE_INFO) )
      {
        v15 = objc_retainAutoreleasedReturnValue(NSStringFromSelector(a2));
        *(_DWORD *)buf = 138412546;
        v20 = v15;
        v21 = 2112;
        v22 = v9;
        _os_log_impl(
          (void *)&_mh_execute_header,
          v14,
          OS_LOG_TYPE_INFO,
          "%@: SecTaskCopyTeamIdentifier() returned teamIdentity=\"%@\"",
          buf,
          0x16u);
        objc_release(v15);
      }
      objc_release(v14);
    }
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