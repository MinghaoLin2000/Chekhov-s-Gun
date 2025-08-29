-[LSRConnection synchronousCreateEuclidInstanceForLanguageStr:clientID:inputFormat:loadingOption:completion:]
void __cdecl -[LSRConnection synchronousCreateEuclidInstanceForLanguageStr:clientID:inputFormat:loadingOption:completion:](
        LSRConnection *self,
        SEL a2,
        id a3,
        id a4,
        signed __int64 a5,
        signed __int64 a6,
        id a7)
{
  id v11; // x19
  id v12; // x20
  void (__fastcall **v13)(id, _QWORD); // x21
  os_log_s *v14; // x22
  id v15; // x22
  void *v16; // x23
  _EAREuclid *v17; // x0
  _EAREuclid *euclidInstance; // x8
  os_log_s *v19; // x24
  NSString *v20; // x25
  NSDictionary *v21; // x26
  NSError *v22; // x24
  __int64 v23; // [xsp+0h] [xbp-70h] BYREF
  NSString *v24; // [xsp+8h] [xbp-68h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-60h] BYREF
  const char *v26; // [xsp+14h] [xbp-5Ch]
  __int16 v27; // [xsp+1Ch] [xbp-54h]
  id v28; // [xsp+1Eh] [xbp-52h]

  v11 = objc_retain(a3);
  v12 = objc_retain(a4);
  v13 = (void (__fastcall **)(id, _QWORD))objc_retain(a7);
  v14 = (os_log_s *)SFLogConnection;
  if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_DEBUG) )
  {
    *(_DWORD *)buf = 136315394;
    v26 = "-[LSRConnection synchronousCreateEuclidInstanceForLanguageStr:clientID:inputFormat:loadingOption:completion:]";
    v27 = 2112;
    v28 = v11;
    _os_log_debug_impl(
      (void *)&_mh_execute_header,
      v14,
      OS_LOG_TYPE_DEBUG,
      "%s Initializing _EAREuclid instance for languageStr: %@",
      buf,
      0x16u);
  }
  v15 = objc_retainAutoreleasedReturnValue(
          +[LSRConnection modelRootWithLanguage:assetType:clientID:modelOverrideURL:isSpelling:error:](
            &OBJC_CLASS___LSRConnection,
            "modelRootWithLanguage:assetType:clientID:modelOverrideURL:isSpelling:error:",
            v11,
            3LL,
            v12,
            0LL,
            0LL,
            0LL));
  v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "stringByAppendingPathComponent:", CFSTR("mini.json")));
  v17 = (_EAREuclid *)objc_msgSend(
                        objc_alloc((Class)&OBJC_CLASS____EAREuclid),
                        "initWithConfiguration:euclidEncoderType:initFlag:",
                        v16,
                        a5,
                        1LL);
  euclidInstance = self->_euclidInstance;
  self->_euclidInstance = v17;
  objc_release(euclidInstance);
  if ( self->_euclidInstance )
  {
    v13[2](v13, 0LL);
  }
  else
  {
    v19 = (os_log_s *)SFLogConnection;
    if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_DEBUG) )
    {
      *(_DWORD *)buf = 136315138;
      v26 = "-[LSRConnection synchronousCreateEuclidInstanceForLanguageStr:clientID:inputFormat:loadingOption:completion:]";
      _os_log_debug_impl(
        (void *)&_mh_execute_header,
        v19,
        OS_LOG_TYPE_DEBUG,
        "%s Initialization of _EAREuclid instance failed",
        buf,
        0xCu);
    }
    v20 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithFormat:](
              &OBJC_CLASS___NSString,
              "stringWithFormat:",
              CFSTR("Initialization of _EAREuclid instance failed"),
              NSLocalizedDescriptionKey));
    v24 = v20;
    v21 = objc_retainAutoreleasedReturnValue(
            +[NSDictionary dictionaryWithObjects:forKeys:count:](
              &OBJC_CLASS___NSDictionary,
              "dictionaryWithObjects:forKeys:count:",
              &v24,
              &v23,
              1LL));
    v22 = objc_retainAutoreleasedReturnValue(
            +[NSError errorWithDomain:code:userInfo:](
              &OBJC_CLASS___NSError,
              "errorWithDomain:code:userInfo:",
              CFSTR("kLSRErrorDomain"),
              0LL,
              v21));
    objc_release(v21);
    objc_release(v20);
    ((void (__fastcall **)(id, NSError *))v13)[2](v13, v22);
    objc_release(v22);
  }
  objc_release(v16);
  objc_release(v15);
  objc_release(v13);
  objc_release(v12);
  objc_release(v11);
}