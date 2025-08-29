-[LSRConnection createNgramCountsArtifactFromPhraseCountArtifact:writeToDirectory:sandboxExtensions:completion:]
void __cdecl -[LSRConnection createNgramCountsArtifactFromPhraseCountArtifact:writeToDirectory:sandboxExtensions:completion:](
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
  id v13; // x24
  _QWORD *v14; // x22
  unsigned __int8 v15; // w26
  id v16; // x24
  os_log_s *v17; // x25
  void *v18; // x25
  id v19; // [xsp+0h] [xbp-90h] BYREF
  _QWORD v20[4]; // [xsp+8h] [xbp-88h] BYREF
  id v21; // [xsp+28h] [xbp-68h]
  uint8_t buf[4]; // [xsp+30h] [xbp-60h] BYREF
  const char *v23; // [xsp+34h] [xbp-5Ch]
  __int16 v24; // [xsp+3Ch] [xbp-54h]
  id v25; // [xsp+3Eh] [xbp-52h]

  v10 = objc_retain(a3);
  v11 = objc_retain(a4);
  v20[0] = _NSConcreteStackBlock;
  v20[1] = 3254779904LL;
  v20[2] = sub_100036B64;
  v20[3] = &unk_10005A168;
  v12 = objc_retain(objc_retain(a6));
  v21 = v12;
  v13 = objc_retain(a5);
  v14 = objc_retainBlock(v20);
  v19 = 0LL;
  v15 = -[LSRConnection _consumeSandboxExtensions:error:](self, "_consumeSandboxExtensions:error:", v13, &v19);
  objc_release(v13);
  v16 = objc_retain(v19);
  v17 = (os_log_s *)SFLogConnection;
  if ( (v15 & 1) != 0 )
  {
    if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_INFO) )
    {
      *(_DWORD *)buf = 136315138;
      v23 = "-[LSRConnection createNgramCountsArtifactFromPhraseCountArtifact:writeToDirectory:sandboxExtensions:completion:]";
      _os_log_impl(
        (void *)&_mh_execute_header,
        v17,
        OS_LOG_TYPE_INFO,
        "%s Successfully consumed sandbox extensions",
        buf,
        0xCu);
    }
    v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "URLByAppendingPathComponent:isDirectory:", CFSTR("NgramCountsFile"), 0LL));
    -[LSRLanguageModel createNgramCountsArtifactFromPhraseCountArtifact:saveTo:](
      self->_lsrLanguageModel,
      "createNgramCountsArtifactFromPhraseCountArtifact:saveTo:",
      v10,
      v18);
    ((void (__fastcall *)(_QWORD *, void *))v14[2])(v14, v18);
    objc_release(v18);
  }
  else
  {
    if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_ERROR) )
    {
      *(_DWORD *)buf = 136315394;
      v23 = "-[LSRConnection createNgramCountsArtifactFromPhraseCountArtifact:writeToDirectory:sandboxExtensions:completion:]";
      v24 = 2112;
      v25 = v16;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        v17,
        OS_LOG_TYPE_ERROR,
        "%s Failed to consume sandbox extensions: %@",
        buf,
        0x16u);
    }
    ((void (__fastcall *)(_QWORD *, _QWORD))v14[2])(v14, 0LL);
  }
  objc_release(v16);
  objc_release(v14);
  objc_release(v21);
  objc_release(v12);
  objc_release(v11);
  objc_release(v10);
}