+[LSRConnection _jitProfileWithLanguage:modelRoot:]
id __cdecl +[LSRConnection _jitProfileWithLanguage:modelRoot:](id a1, SEL a2, id a3, id a4)
{
  id v5; // x19
  id v6; // x20
  bool v7; // zf
  os_log_s *v8; // x21
  id v9; // x21
  os_log_s *v10; // x21
  void *v11; // x22
  void *v12; // x23
  void *v13; // x0
  void *v14; // x8
  os_log_s *v15; // x21
  int v17; // [xsp+0h] [xbp-60h] BYREF
  const char *v18; // [xsp+4h] [xbp-5Ch]
  __int16 v19; // [xsp+Ch] [xbp-54h]
  id v20; // [xsp+Eh] [xbp-52h]
  __int16 v21; // [xsp+16h] [xbp-4Ah]
  id v22; // [xsp+18h] [xbp-48h]
  __int64 vars8; // [xsp+68h] [xbp+8h]

  v5 = objc_retain(a3);
  v6 = objc_retain(a4);
  if ( v6 )
  {
    if ( (unsigned int)objc_msgSend((id)qword_100065440, "isEqualToString:", v5) )
      v7 = qword_100065448 == 0;
    else
      v7 = 1;
    if ( v7 || !(unsigned int)objc_msgSend((id)qword_100065450, "isEqualToString:", v6) )
    {
      v10 = (os_log_s *)SFLogConnection;
      if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_DEBUG) )
      {
        v17 = 136315650;
        v18 = "+[LSRConnection _jitProfileWithLanguage:modelRoot:]";
        v19 = 2112;
        v20 = v5;
        v21 = 2112;
        v22 = v6;
        _os_log_debug_impl(
          (void *)&_mh_execute_header,
          v10,
          OS_LOG_TYPE_DEBUG,
          "%s Initialized a new JIT profile builder for language=%@ modelRoot=%@",
          (uint8_t *)&v17,
          0x20u);
      }
      v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "stringByAppendingPathComponent:", CFSTR("mini.json")));
      v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "stringByAppendingPathComponent:", CFSTR("ncs")));
      v13 = objc_msgSend(
              objc_alloc((Class)&OBJC_CLASS____EARJitProfile),
              "initWithConfiguration:ncsRoot:language:",
              v11,
              v12,
              v5);
      v14 = (void *)qword_100065448;
      qword_100065448 = (__int64)v13;
      objc_release(v14);
      v9 = objc_retain((id)qword_100065448);
      objc_release(v12);
      objc_release(v11);
    }
    else
    {
      v8 = (os_log_s *)SFLogConnection;
      if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_DEBUG) )
      {
        v17 = 136315650;
        v18 = "+[LSRConnection _jitProfileWithLanguage:modelRoot:]";
        v19 = 2112;
        v20 = v5;
        v21 = 2112;
        v22 = v6;
        _os_log_debug_impl(
          (void *)&_mh_execute_header,
          v8,
          OS_LOG_TYPE_DEBUG,
          "%s Using cached JIT profile builder for language=%@ modelRoot=%@",
          (uint8_t *)&v17,
          0x20u);
      }
      v9 = objc_retain((id)qword_100065448);
    }
  }
  else
  {
    v15 = (os_log_s *)SFLogConnection;
    if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_ERROR) )
    {
      v17 = 136315138;
      v18 = "+[LSRConnection _jitProfileWithLanguage:modelRoot:]";
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        v15,
        OS_LOG_TYPE_ERROR,
        "%s Could not locate asset",
        (uint8_t *)&v17,
        0xCu);
    }
    v9 = 0LL;
  }
  objc_release(v6);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v9);
}