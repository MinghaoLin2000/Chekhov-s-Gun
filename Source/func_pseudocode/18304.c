-[AUCrashHandlerService _isUserCode:]
bool __cdecl -[AUCrashHandlerService _isUserCode:](AUCrashHandlerService *self, SEL a2, id a3)
{
  NSURL *v4; // x19
  OSStatus v5; // w20
  os_log_s *v8; // x21
  SecStaticCodeRef staticCode; // [xsp+8h] [xbp-48h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-40h] BYREF
  const char *v11; // [xsp+14h] [xbp-3Ch]
  __int16 v12; // [xsp+1Ch] [xbp-34h]
  int v13; // [xsp+1Eh] [xbp-32h]
  __int16 v14; // [xsp+22h] [xbp-2Eh]
  OSStatus v15; // [xsp+24h] [xbp-2Ch]

  staticCode = 0LL;
  v4 = objc_retainAutoreleasedReturnValue(+[NSURL URLWithString:](&OBJC_CLASS___NSURL, "URLWithString:", a3));
  if ( !SecStaticCodeCreateWithPath((CFURLRef)v4, 0, &staticCode) )
  {
    v5 = SecStaticCodeCheckValidity(staticCode, 0x10047u, self->_appleSignedReq);
    if ( staticCode )
    {
      CFRelease(staticCode);
      staticCode = 0LL;
    }
    if ( (unsigned int)(v5 + 67062) <= 0x20 && ((1LL << ((unsigned __int8)v5 - 10)) & 0x100001003LL) != 0 )
    {
      LOBYTE(v5) = 1;
      goto LABEL_11;
    }
    if ( !v5 )
      goto LABEL_11;
    sub_100003198();
    v8 = (os_log_s *)objc_retainAutorelease((id)qword_10000D080);
    if ( os_log_type_enabled(v8, OS_LOG_TYPE_ERROR) )
    {
      *(_DWORD *)buf = 136315650;
      v11 = "AUCrashHandlerService.mm";
      v12 = 1024;
      v13 = 289;
      v14 = 1024;
      v15 = v5;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v8,
        OS_LOG_TYPE_ERROR,
        "%25s:%-5d Error checking codesigning: %d",
        buf,
        0x18u);
    }
  }
  LOBYTE(v5) = 0;
LABEL_11:
  objc_release(v4);
  return v5;
}