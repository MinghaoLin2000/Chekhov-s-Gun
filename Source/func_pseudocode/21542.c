-[LSRConnection _callerHasWritePriviledge:]
bool __cdecl -[LSRConnection _callerHasWritePriviledge:](LSRConnection *self, SEL a2, id a3)
{
  id v4; // x19
  const char *v5; // x1
  int v6; // w20
  os_log_s *v7; // x21
  _BOOL4 v8; // w0
  const char *v9; // x3
  uint8_t v11[32]; // [xsp+10h] [xbp-60h] BYREF
  uint8_t buf[4]; // [xsp+30h] [xbp-40h] BYREF
  const char *v13; // [xsp+34h] [xbp-3Ch]
  __int16 v14; // [xsp+3Ch] [xbp-34h]
  id v15; // [xsp+3Eh] [xbp-32h]

  v4 = objc_retain(a3);
  objc_msgSend__auditToken(v11, self, v5);
  v6 = sandbox_check_by_audit_token(v11, "file-write-create", 1LL);
  v7 = (os_log_s *)SFLogConnection;
  v8 = os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_DEBUG);
  if ( v6 )
  {
    if ( v8 )
    {
      *(_DWORD *)buf = 136315394;
      v13 = "-[LSRConnection _callerHasWritePriviledge:]";
      v14 = 2112;
      v15 = v4;
      v9 = "%s Caller does not have write priviledges for: %@";
LABEL_7:
      _os_log_debug_impl((void *)&_mh_execute_header, v7, OS_LOG_TYPE_DEBUG, v9, buf, 0x16u);
    }
  }
  else if ( v8 )
  {
    *(_DWORD *)buf = 136315394;
    v13 = "-[LSRConnection _callerHasWritePriviledge:]";
    v14 = 2112;
    v15 = v4;
    v9 = "%s Caller has write priviledges for: %@";
    goto LABEL_7;
  }
  objc_release(v4);
  return v6 == 0;
}