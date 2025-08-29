-[LSRConnection createPhraseCountsArtifactWithIdentifier:rawPhraseCountsPath:customPronunciationsPath:writeToDirectory:sandboxExtensions:completion:]
void __cdecl -[LSRConnection createPhraseCountsArtifactWithIdentifier:rawPhraseCountsPath:customPronunciationsPath:writeToDirectory:sandboxExtensions:completion:](
        LSRConnection *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6,
        id a7,
        id a8)
{
  id v14; // x19
  id v15; // x20
  id v16; // x21
  id v17; // x22
  id v18; // x23
  id v19; // x26
  _QWORD *v20; // x24
  unsigned __int8 v21; // w28
  id v22; // x26
  os_log_s *v23; // x27
  void *v24; // x27
  id v25; // [xsp+0h] [xbp-A0h] BYREF
  _QWORD v26[4]; // [xsp+8h] [xbp-98h] BYREF
  id v27; // [xsp+28h] [xbp-78h]
  uint8_t buf[4]; // [xsp+30h] [xbp-70h] BYREF
  const char *v29; // [xsp+34h] [xbp-6Ch]
  __int16 v30; // [xsp+3Ch] [xbp-64h]
  id v31; // [xsp+3Eh] [xbp-62h]

  v14 = objc_retain(a3);
  v15 = objc_retain(a4);
  v16 = objc_retain(a5);
  v17 = objc_retain(a6);
  v26[0] = _NSConcreteStackBlock;
  v26[1] = 3254779904LL;
  v26[2] = sub_100036E30;
  v26[3] = &unk_10005A168;
  v18 = objc_retain(objc_retain(a8));
  v27 = v18;
  v19 = objc_retain(a7);
  v20 = objc_retainBlock(v26);
  v25 = 0LL;
  v21 = -[LSRConnection _consumeSandboxExtensions:error:](self, "_consumeSandboxExtensions:error:", v19, &v25);
  objc_release(v19);
  v22 = objc_retain(v25);
  v23 = (os_log_s *)SFLogConnection;
  if ( (v21 & 1) != 0 )
  {
    if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_INFO) )
    {
      *(_DWORD *)buf = 136315138;
      v29 = "-[LSRConnection createPhraseCountsArtifactWithIdentifier:rawPhraseCountsPath:customPronunciationsPath:writeT"
            "oDirectory:sandboxExtensions:completion:]";
      _os_log_impl(
        (void *)&_mh_execute_header,
        v23,
        OS_LOG_TYPE_INFO,
        "%s Successfully consumed sandbox extensions",
        buf,
        0xCu);
    }
    v24 = objc_retainAutoreleasedReturnValue(objc_msgSend(v17, "URLByAppendingPathComponent:isDirectory:", CFSTR("PhraseCountsFile"), 0LL));
    -[LSRLanguageModel createPhraseCountArtifactWithIdentifier:rawPhraseCountsPath:customPronunciationsPath:saveTo:](
      self->_lsrLanguageModel,
      "createPhraseCountArtifactWithIdentifier:rawPhraseCountsPath:customPronunciationsPath:saveTo:",
      v14,
      v15,
      v16,
      v24);
    ((void (__fastcall *)(_QWORD *, void *))v20[2])(v20, v24);
    objc_release(v24);
  }
  else
  {
    if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_ERROR) )
    {
      *(_DWORD *)buf = 136315394;
      v29 = "-[LSRConnection createPhraseCountsArtifactWithIdentifier:rawPhraseCountsPath:customPronunciationsPath:writeT"
            "oDirectory:sandboxExtensions:completion:]";
      v30 = 2112;
      v31 = v22;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        v23,
        OS_LOG_TYPE_ERROR,
        "%s Failed to consume sandbox extensions: %@",
        buf,
        0x16u);
    }
    ((void (__fastcall *)(_QWORD *, _QWORD))v20[2])(v20, 0LL);
  }
  objc_release(v22);
  objc_release(v20);
  objc_release(v27);
  objc_release(v18);
  objc_release(v17);
  objc_release(v16);
  objc_release(v15);
  objc_release(v14);
}