-[LSRConnection trainAppLmFromNgramsSerializedData:customPronsData:language:writeToDirectory:sandboxExtension:completion:]
void __cdecl -[LSRConnection trainAppLmFromNgramsSerializedData:customPronsData:language:writeToDirectory:sandboxExtension:completion:](
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
  id v15; // x28
  id v16; // x21
  id v17; // x22
  id v18; // x23
  id v19; // x24
  _QWORD *v20; // x25
  os_log_s *v21; // x26
  NSArray *v22; // x26
  unsigned __int8 v23; // w28
  os_log_s *v24; // x26
  void *v25; // x26
  NSFileManager *v26; // x21
  void *v27; // x28
  unsigned __int8 v28; // w19
  os_log_s *v29; // x26
  void *v30; // x20
  unsigned __int8 v31; // w19
  os_log_s *v32; // x19
  void *v33; // x19
  LSRLanguageModel *lsrLanguageModel; // x0
  id v35; // x27
  id v36; // x26
  os_log_s *v37; // x28
  NSFileManager *v38; // x0
  void *v39; // x27
  os_log_s *v40; // x19
  id v41; // [xsp+8h] [xbp-F8h]
  id v42; // [xsp+10h] [xbp-F0h]
  NSFileManager *v43; // [xsp+18h] [xbp-E8h]
  id v44; // [xsp+20h] [xbp-E0h]
  id v45; // [xsp+28h] [xbp-D8h]
  id v46; // [xsp+30h] [xbp-D0h]
  id v47; // [xsp+38h] [xbp-C8h] BYREF
  id v48; // [xsp+40h] [xbp-C0h] BYREF
  id v49; // [xsp+48h] [xbp-B8h] BYREF
  id v50; // [xsp+50h] [xbp-B0h] BYREF
  _QWORD v51[4]; // [xsp+58h] [xbp-A8h] BYREF
  id v52; // [xsp+78h] [xbp-88h]
  uint8_t buf[4]; // [xsp+80h] [xbp-80h] BYREF
  const char *v54; // [xsp+84h] [xbp-7Ch]
  __int16 v55; // [xsp+8Ch] [xbp-74h]
  id v56; // [xsp+8Eh] [xbp-72h]
  id v57; // [xsp+98h] [xbp-68h] BYREF

  v14 = objc_retain(a3);
  v15 = objc_retain(a4);
  v16 = objc_retain(a5);
  v17 = objc_retain(a6);
  v18 = objc_retain(a7);
  v51[0] = _NSConcreteStackBlock;
  v51[1] = 3254779904LL;
  v51[2] = sub_100037450;
  v51[3] = &unk_10005A138;
  v19 = objc_retain(objc_retain(a8));
  v52 = v19;
  v20 = objc_retainBlock(v51);
  v21 = (os_log_s *)SFLogConnection;
  if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_INFO) )
  {
    *(_DWORD *)buf = 136315138;
    v54 = "-[LSRConnection trainAppLmFromNgramsSerializedData:customPronsData:language:writeToDirectory:sandboxExtension:completion:]";
    _os_log_impl(
      (void *)&_mh_execute_header,
      v21,
      OS_LOG_TYPE_INFO,
      "%s Starting training of App LM from ngram count.",
      buf,
      0xCu);
  }
  if ( (sub_100035FE0() & 1) != 0 )
  {
    v46 = v15;
    v57 = v18;
    v22 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", &v57, 1LL));
    v50 = 0LL;
    v23 = -[LSRConnection _consumeSandboxExtensions:error:](self, "_consumeSandboxExtensions:error:", v22, &v50);
    v45 = objc_retain(v50);
    objc_release(v22);
    v24 = (os_log_s *)SFLogConnection;
    if ( (v23 & 1) == 0 )
    {
      v30 = v45;
      if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_ERROR) )
      {
        *(_DWORD *)buf = 136315394;
        v54 = "-[LSRConnection trainAppLmFromNgramsSerializedData:customPronsData:language:writeToDirectory:sandboxExtens"
              "ion:completion:]";
        v55 = 2112;
        v56 = v45;
        _os_log_error_impl(
          (void *)&_mh_execute_header,
          v24,
          OS_LOG_TYPE_ERROR,
          "%s Failed to consume sandbox extensions: %@",
          buf,
          0x16u);
      }
      ((void (__fastcall *)(_QWORD *, _QWORD, _QWORD))v20[2])(v20, 0LL, 0LL);
      v15 = v46;
      goto LABEL_25;
    }
    v42 = v16;
    v44 = v14;
    if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_INFO) )
    {
      *(_DWORD *)buf = 136315138;
      v54 = "-[LSRConnection trainAppLmFromNgramsSerializedData:customPronsData:language:writeToDirectory:sandboxExtension:completion:]";
      _os_log_impl(
        (void *)&_mh_execute_header,
        v24,
        OS_LOG_TYPE_INFO,
        "%s Successfully consumed sandbox extensions",
        buf,
        0xCu);
    }
    v25 = objc_retainAutoreleasedReturnValue(objc_msgSend(v17, "URLByAppendingPathComponent:", CFSTR("app-lm")));
    v26 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
    v27 = objc_retainAutoreleasedReturnValue(objc_msgSend(v25, "path"));
    v28 = -[NSFileManager fileExistsAtPath:](v26, "fileExistsAtPath:", v27);
    objc_release(v27);
    v43 = v26;
    if ( (v28 & 1) != 0 )
    {
      v41 = 0LL;
      v15 = v46;
      v16 = v42;
    }
    else
    {
      v49 = 0LL;
      v31 = -[NSFileManager createDirectoryAtURL:withIntermediateDirectories:attributes:error:](
              v26,
              "createDirectoryAtURL:withIntermediateDirectories:attributes:error:",
              v25,
              0LL,
              0LL,
              &v49);
      v41 = objc_retain(v49);
      v15 = v46;
      if ( (v31 & 1) == 0 )
      {
        v40 = (os_log_s *)SFLogConnection;
        v39 = v41;
        v16 = v42;
        if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_ERROR) )
        {
          *(_DWORD *)buf = 136315394;
          v54 = "-[LSRConnection trainAppLmFromNgramsSerializedData:customPronsData:language:writeToDirectory:sandboxExte"
                "nsion:completion:]";
          v55 = 2112;
          v56 = v41;
          _os_log_error_impl(
            (void *)&_mh_execute_header,
            v40,
            OS_LOG_TYPE_ERROR,
            "%s Write failed error:%@",
            buf,
            0x16u);
        }
        ((void (__fastcall *)(_QWORD *, _QWORD, _QWORD))v20[2])(v20, 0LL, 0LL);
        v14 = v44;
        v30 = v45;
        v38 = v43;
        goto LABEL_24;
      }
      v32 = (os_log_s *)SFLogConnection;
      v16 = v42;
      if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_INFO) )
      {
        *(_DWORD *)buf = 136315138;
        v54 = "-[LSRConnection trainAppLmFromNgramsSerializedData:customPronsData:language:writeToDirectory:sandboxExtens"
              "ion:completion:]";
        _os_log_impl((void *)&_mh_execute_header, v32, OS_LOG_TYPE_INFO, "%s Write successfull", buf, 0xCu);
      }
    }
    v33 = objc_retainAutoreleasedReturnValue(objc_msgSend(v17, "URLByAppendingPathComponent:", CFSTR("SpeechProfile")));
    lsrLanguageModel = self->_lsrLanguageModel;
    v47 = v33;
    v48 = v25;
    -[LSRLanguageModel trainAppLmFromNgramsSerializedData:customPronsData:language:writeToAppLmDir:vocabFile:](
      lsrLanguageModel,
      "trainAppLmFromNgramsSerializedData:customPronsData:language:writeToAppLmDir:vocabFile:",
      v44,
      v15,
      v16,
      &v48,
      &v47);
    v35 = objc_retain(v48);
    objc_release(v25);
    v36 = objc_retain(v47);
    objc_release(v33);
    v37 = (os_log_s *)SFLogConnection;
    if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_INFO) )
    {
      *(_DWORD *)buf = 136315138;
      v54 = "-[LSRConnection trainAppLmFromNgramsSerializedData:customPronsData:language:writeToDirectory:sandboxExtension:completion:]";
      _os_log_impl(
        (void *)&_mh_execute_header,
        v37,
        OS_LOG_TYPE_INFO,
        "%s Finished training of App LM from ngram count.",
        buf,
        0xCu);
    }
    ((void (__fastcall *)(_QWORD *, id, id))v20[2])(v20, v35, v36);
    objc_release(v36);
    v25 = v35;
    v14 = v44;
    v30 = v45;
    v15 = v46;
    v38 = v43;
    v39 = v41;
LABEL_24:
    objc_release(v38);
    objc_release(v25);
    objc_release(v39);
LABEL_25:
    objc_release(v30);
    goto LABEL_26;
  }
  v29 = (os_log_s *)SFLogConnection;
  if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_ERROR) )
  {
    *(_DWORD *)buf = 136315138;
    v54 = "-[LSRConnection trainAppLmFromNgramsSerializedData:customPronsData:language:writeToDirectory:sandboxExtension:completion:]";
    _os_log_error_impl((void *)&_mh_execute_header, v29, OS_LOG_TYPE_ERROR, "%s Request not authorized", buf, 0xCu);
  }
  ((void (__fastcall *)(_QWORD *, _QWORD, _QWORD))v20[2])(v20, 0LL, 0LL);
LABEL_26:
  objc_release(v20);
  objc_release(v52);
  objc_release(v19);
  objc_release(v18);
  objc_release(v17);
  objc_release(v16);
  objc_release(v15);
  objc_release(v14);
}