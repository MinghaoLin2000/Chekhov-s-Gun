-[UINSSystemPreferencesSettingsManager _bundleIDForCurrentConnection]
id __cdecl -[UINSSystemPreferencesSettingsManager _bundleIDForCurrentConnection](
        UINSSystemPreferencesSettingsManager *self,
        SEL a2)
{
  NSXPCConnection *v2; // x0
  const char *v3; // x1
  NSXPCConnection *v4; // x19
  void *v5; // x20
  void *v6; // x0
  void *v7; // x19
  void *v8; // x21
  void *v9; // x22
  _OWORD v11[2]; // [xsp+0h] [xbp-60h] BYREF
  __int128 v12; // [xsp+20h] [xbp-40h] BYREF
  __int128 v13; // [xsp+30h] [xbp-30h]
  __int64 vars8; // [xsp+68h] [xbp+8h]

  v12 = 0u;
  v13 = 0u;
  v2 = objc_retainAutoreleasedReturnValue(+[NSXPCConnection currentConnection](&OBJC_CLASS___NSXPCConnection, "currentConnection"));
  v4 = v2;
  if ( v2 )
  {
    objc_msgSend_auditToken(&v12, v2, v3);
  }
  else
  {
    v12 = 0u;
    v13 = 0u;
  }
  objc_release(v4);
  v11[0] = v12;
  v11[1] = v13;
  v5 = (void *)_LSCopyLSASNForAuditToken(0xFFFFFFFFLL, v11);
  if ( v5 )
  {
    v6 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSRunningApplication), "initWithApplicationSerialNumber:", v5);
    if ( v6 )
    {
      v7 = v6;
      v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "bundleURL"));
      v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "bundleIdentifier"));
      v5 = objc_msgSend(v9, "copy");
      objc_release(v9);
      objc_release(v8);
      objc_release(v7);
    }
    else
    {
      CFRelease(v5);
      v5 = 0LL;
    }
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}