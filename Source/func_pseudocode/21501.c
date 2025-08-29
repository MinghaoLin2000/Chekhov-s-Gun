-[LSRConnection trainAppLmFromNgramCountsArtifact:forApp:language:writeToDirectory:sandboxExtensions:completion:]
void __cdecl -[LSRConnection trainAppLmFromNgramCountsArtifact:forApp:language:writeToDirectory:sandboxExtensions:completion:](
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
  id v15; // x22
  id v16; // x23
  id v17; // x25
  _QWORD *v18; // x24
  os_log_s *v19; // x27
  unsigned __int8 v20; // w28
  id v21; // x20
  os_log_s *v22; // x27
  id v23; // x25
  void *v24; // x28
  void *v25; // x27
  NSFileManager *v26; // x19
  NSFileManager *v27; // x19
  LSRLanguageModel *lsrLanguageModel; // x0
  id v29; // x2
  void *v30; // x21
  void *v31; // x25
  id v32; // x26
  id v33; // x28
  os_log_s *v34; // x27
  id v35; // [xsp+0h] [xbp-C0h]
  void *v36; // [xsp+0h] [xbp-C0h]
  id v37; // [xsp+8h] [xbp-B8h]
  id v38; // [xsp+10h] [xbp-B0h] BYREF
  id v39; // [xsp+18h] [xbp-A8h] BYREF
  id v40; // [xsp+20h] [xbp-A0h] BYREF
  _QWORD v41[4]; // [xsp+28h] [xbp-98h] BYREF
  id v42; // [xsp+48h] [xbp-78h]
  uint8_t buf[4]; // [xsp+50h] [xbp-70h] BYREF
  const char *v44; // [xsp+54h] [xbp-6Ch]
  __int16 v45; // [xsp+5Ch] [xbp-64h]
  id v46; // [xsp+5Eh] [xbp-62h]

  v14 = objc_retain(a3);
  v37 = objc_retain(a4);
  v35 = objc_retain(a5);
  v15 = objc_retain(a6);
  v41[0] = _NSConcreteStackBlock;
  v41[1] = 3254779904LL;
  v41[2] = sub_1000368C8;
  v41[3] = &unk_10005A138;
  v16 = objc_retain(objc_retain(a8));
  v42 = v16;
  v17 = objc_retain(a7);
  v18 = objc_retainBlock(v41);
  v19 = (os_log_s *)SFLogConnection;
  if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_INFO) )
  {
    *(_DWORD *)buf = 136315138;
    v44 = "-[LSRConnection trainAppLmFromNgramCountsArtifact:forApp:language:writeToDirectory:sandboxExtensions:completion:]";
    _os_log_impl(
      (void *)&_mh_execute_header,
      v19,
      OS_LOG_TYPE_INFO,
      "%s Starting training of App LM from ngram count.",
      buf,
      0xCu);
  }
  v40 = 0LL;
  v20 = -[LSRConnection _consumeSandboxExtensions:error:](self, "_consumeSandboxExtensions:error:", v17, &v40, v35);
  objc_release(v17);
  v21 = objc_retain(v40);
  v22 = (os_log_s *)SFLogConnection;
  if ( (v20 & 1) != 0 )
  {
    v23 = v14;
    if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_INFO) )
    {
      *(_DWORD *)buf = 136315138;
      v44 = "-[LSRConnection trainAppLmFromNgramCountsArtifact:forApp:language:writeToDirectory:sandboxExtensions:completion:]";
      _os_log_impl(
        (void *)&_mh_execute_header,
        v22,
        OS_LOG_TYPE_INFO,
        "%s Successfully consumed sandbox extensions",
        buf,
        0xCu);
    }
    v24 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "URLByAppendingPathComponent:", CFSTR("AppLmModelFile")));
    v25 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "URLByAppendingPathComponent:", CFSTR("SpeechProfile")));
    v26 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
    -[NSFileManager removeItemAtURL:error:](v26, "removeItemAtURL:error:", v24, 0LL);
    objc_release(v26);
    v27 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
    -[NSFileManager removeItemAtURL:error:](v27, "removeItemAtURL:error:", v25, 0LL);
    objc_release(v27);
    lsrLanguageModel = self->_lsrLanguageModel;
    v38 = v25;
    v39 = v24;
    v14 = v23;
    v29 = v23;
    v31 = v36;
    v30 = v37;
    -[LSRLanguageModel trainAppLmFromNgramCountsArtifact:forApp:language:appLmArtifact:vocabFile:](
      lsrLanguageModel,
      "trainAppLmFromNgramCountsArtifact:forApp:language:appLmArtifact:vocabFile:",
      v29,
      v37,
      v36,
      &v39,
      &v38);
    v32 = objc_retain(v39);
    objc_release(v24);
    v33 = objc_retain(v38);
    objc_release(v25);
    v34 = (os_log_s *)SFLogConnection;
    if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_INFO) )
    {
      *(_DWORD *)buf = 136315138;
      v44 = "-[LSRConnection trainAppLmFromNgramCountsArtifact:forApp:language:writeToDirectory:sandboxExtensions:completion:]";
      _os_log_impl(
        (void *)&_mh_execute_header,
        v34,
        OS_LOG_TYPE_INFO,
        "%s Finished training of App LM from ngram count.",
        buf,
        0xCu);
    }
    ((void (__fastcall *)(_QWORD *, id, id))v18[2])(v18, v32, v33);
    objc_release(v33);
    objc_release(v32);
  }
  else
  {
    if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_ERROR) )
    {
      *(_DWORD *)buf = 136315394;
      v44 = "-[LSRConnection trainAppLmFromNgramCountsArtifact:forApp:language:writeToDirectory:sandboxExtensions:completion:]";
      v45 = 2112;
      v46 = v21;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        v22,
        OS_LOG_TYPE_ERROR,
        "%s Failed to consume sandbox extensions: %@",
        buf,
        0x16u);
    }
    ((void (__fastcall *)(_QWORD *, _QWORD, _QWORD))v18[2])(v18, 0LL, 0LL);
    v31 = v36;
    v30 = v37;
  }
  objc_release(v21);
  objc_release(v18);
  objc_release(v42);
  objc_release(v16);
  objc_release(v15);
  objc_release(v31);
  objc_release(v30);
  objc_release(v14);
}