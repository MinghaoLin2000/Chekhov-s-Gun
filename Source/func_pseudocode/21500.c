-[LSRConnection appLmNeedsRebuild:language:sandboxExtensions:completion:]
void __cdecl -[LSRConnection appLmNeedsRebuild:language:sandboxExtensions:completion:](
        LSRConnection *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6)
{
  id v10; // x19
  id v11; // x20
  id v12; // x21
  void (__fastcall **v13)(id, void *, id); // x22
  os_log_s *v14; // x23
  unsigned __int8 v15; // w25
  id v16; // x23
  LSRLanguageModel *lsrLanguageModel; // x0
  _BOOL8 v18; // x24
  id v19; // x25
  os_log_s *v20; // x24
  id v21; // [xsp+0h] [xbp-70h] BYREF
  id v22; // [xsp+8h] [xbp-68h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-60h] BYREF
  const char *v24; // [xsp+14h] [xbp-5Ch]
  __int16 v25; // [xsp+1Ch] [xbp-54h]
  id v26; // [xsp+1Eh] [xbp-52h]

  v10 = objc_retain(a3);
  v11 = objc_retain(a4);
  v12 = objc_retain(a5);
  v13 = (void (__fastcall **)(id, void *, id))objc_retain(a6);
  v14 = (os_log_s *)SFLogConnection;
  if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_INFO) )
  {
    *(_DWORD *)buf = 136315138;
    v24 = "-[LSRConnection appLmNeedsRebuild:language:sandboxExtensions:completion:]";
    _os_log_impl((void *)&_mh_execute_header, v14, OS_LOG_TYPE_INFO, "%s Checking if app LM needs a rebuild", buf, 0xCu);
  }
  v22 = 0LL;
  v15 = -[LSRConnection _consumeSandboxExtensions:error:](self, "_consumeSandboxExtensions:error:", v12, &v22);
  v16 = objc_retain(v22);
  if ( (v15 & 1) != 0 )
  {
    lsrLanguageModel = self->_lsrLanguageModel;
    v21 = 0LL;
    v18 = -[LSRLanguageModel appLmNeedsRebuild:language:error:](
            lsrLanguageModel,
            "appLmNeedsRebuild:language:error:",
            v10,
            v11,
            &v21);
    v19 = objc_retain(v21);
    v13[2](v13, (void *)v18, v19);
    objc_release(v19);
  }
  else
  {
    v20 = (os_log_s *)SFLogConnection;
    if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_ERROR) )
    {
      *(_DWORD *)buf = 136315394;
      v24 = "-[LSRConnection appLmNeedsRebuild:language:sandboxExtensions:completion:]";
      v25 = 2112;
      v26 = v16;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        v20,
        OS_LOG_TYPE_ERROR,
        "%s Failed to consume sandbox extensions when checking for App LM rebuild: %@",
        buf,
        0x16u);
    }
    v13[2](v13, (void *)1, v16);
  }
  objc_release(v16);
  objc_release(v13);
  objc_release(v12);
  objc_release(v11);
  objc_release(v10);
}