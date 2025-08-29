-[LSRConnection trainFromPlainTextAndWriteToDirectory:sandboxExtension:completion:]
void __cdecl -[LSRConnection trainFromPlainTextAndWriteToDirectory:sandboxExtension:completion:](
        LSRConnection *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v8; // x19
  id v9; // x20
  id v10; // x21
  _QWORD *v11; // x22
  NSArray *v12; // x25
  unsigned __int8 v13; // w26
  id v14; // x27
  os_log_s *v15; // x25
  void *v16; // x26
  NSFileManager *v17; // x25
  void *v18; // x27
  unsigned __int8 v19; // w28
  id v20; // x28
  os_log_s *v21; // x23
  unsigned __int8 v22; // w27
  os_log_s *v23; // x23
  void *v24; // x27
  LSRLanguageModel *lsrLanguageModel; // x0
  id v26; // x24
  id v27; // x26
  void *v28; // [xsp+0h] [xbp-D0h]
  id v29; // [xsp+8h] [xbp-C8h] BYREF
  id v30; // [xsp+10h] [xbp-C0h] BYREF
  id v31; // [xsp+18h] [xbp-B8h] BYREF
  id v32; // [xsp+20h] [xbp-B0h] BYREF
  _QWORD v33[4]; // [xsp+28h] [xbp-A8h] BYREF
  id v34; // [xsp+48h] [xbp-88h]
  uint8_t buf[4]; // [xsp+50h] [xbp-80h] BYREF
  const char *v36; // [xsp+54h] [xbp-7Ch]
  __int16 v37; // [xsp+5Ch] [xbp-74h]
  id v38; // [xsp+5Eh] [xbp-72h]
  id v39; // [xsp+70h] [xbp-60h] BYREF

  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  v33[0] = _NSConcreteStackBlock;
  v33[1] = 3254779904LL;
  v33[2] = sub_100037B2C;
  v33[3] = &unk_10005A138;
  v10 = objc_retain(objc_retain(a5));
  v34 = v10;
  v11 = objc_retainBlock(v33);
  if ( (sub_100035FE0() & 1) != 0 )
  {
    v39 = v9;
    v12 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", &v39, 1LL));
    v32 = 0LL;
    v13 = -[LSRConnection _consumeSandboxExtensions:error:](self, "_consumeSandboxExtensions:error:", v12, &v32);
    v14 = objc_retain(v32);
    objc_release(v12);
    v15 = (os_log_s *)SFLogConnection;
    if ( (v13 & 1) == 0 )
    {
      if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_ERROR) )
      {
        *(_DWORD *)buf = 136315394;
        v36 = "-[LSRConnection trainFromPlainTextAndWriteToDirectory:sandboxExtension:completion:]";
        v37 = 2112;
        v38 = v14;
        _os_log_error_impl(
          (void *)&_mh_execute_header,
          v15,
          OS_LOG_TYPE_ERROR,
          "%s Failed to consume sandbox extensions: %@",
          buf,
          0x16u);
      }
      ((void (__fastcall *)(_QWORD *, _QWORD, _QWORD))v11[2])(v11, 0LL, 0LL);
      goto LABEL_21;
    }
    if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_INFO) )
    {
      *(_DWORD *)buf = 136315138;
      v36 = "-[LSRConnection trainFromPlainTextAndWriteToDirectory:sandboxExtension:completion:]";
      _os_log_impl(
        (void *)&_mh_execute_header,
        v15,
        OS_LOG_TYPE_INFO,
        "%s Successfully consumed sandbox extensions",
        buf,
        0xCu);
    }
    v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "URLByAppendingPathComponent:", CFSTR("app-lm"), v14));
    v17 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
    v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "path"));
    v19 = -[NSFileManager fileExistsAtPath:](v17, "fileExistsAtPath:", v18);
    objc_release(v18);
    if ( (v19 & 1) != 0 )
    {
      v20 = 0LL;
    }
    else
    {
      v31 = 0LL;
      v22 = -[NSFileManager createDirectoryAtURL:withIntermediateDirectories:attributes:error:](
              v17,
              "createDirectoryAtURL:withIntermediateDirectories:attributes:error:",
              v16,
              0LL,
              0LL,
              &v31);
      v20 = objc_retain(v31);
      v23 = (os_log_s *)SFLogConnection;
      if ( (v22 & 1) == 0 )
      {
        if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_ERROR) )
        {
          *(_DWORD *)buf = 136315394;
          v36 = "-[LSRConnection trainFromPlainTextAndWriteToDirectory:sandboxExtension:completion:]";
          v37 = 2112;
          v38 = v20;
          _os_log_error_impl(
            (void *)&_mh_execute_header,
            v23,
            OS_LOG_TYPE_ERROR,
            "%s Write failed error:%@",
            buf,
            0x16u);
        }
        ((void (__fastcall *)(_QWORD *, _QWORD, _QWORD))v11[2])(v11, 0LL, 0LL);
        goto LABEL_20;
      }
      if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_INFO) )
      {
        *(_DWORD *)buf = 136315138;
        v36 = "-[LSRConnection trainFromPlainTextAndWriteToDirectory:sandboxExtension:completion:]";
        _os_log_impl((void *)&_mh_execute_header, v23, OS_LOG_TYPE_INFO, "%s Write successfull", buf, 0xCu);
      }
    }
    v24 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "URLByAppendingPathComponent:", CFSTR("SpeechProfile")));
    lsrLanguageModel = self->_lsrLanguageModel;
    v29 = v24;
    v30 = v16;
    -[LSRLanguageModel trainAppLmFromPlainTextAndWriteToAppDirectory:vocabFile:](
      lsrLanguageModel,
      "trainAppLmFromPlainTextAndWriteToAppDirectory:vocabFile:",
      &v30,
      &v29);
    v26 = objc_retain(v30);
    objc_release(v16);
    v27 = objc_retain(v29);
    objc_release(v24);
    ((void (__fastcall *)(_QWORD *, id, id))v11[2])(v11, v26, v27);
    objc_release(v27);
    v16 = v26;
LABEL_20:
    v14 = v28;
    objc_release(v17);
    objc_release(v16);
    objc_release(v20);
LABEL_21:
    objc_release(v14);
    goto LABEL_22;
  }
  v21 = (os_log_s *)SFLogConnection;
  if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_ERROR) )
  {
    *(_DWORD *)buf = 136315138;
    v36 = "-[LSRConnection trainFromPlainTextAndWriteToDirectory:sandboxExtension:completion:]";
    _os_log_error_impl((void *)&_mh_execute_header, v21, OS_LOG_TYPE_ERROR, "%s Request not authorized", buf, 0xCu);
  }
  ((void (__fastcall *)(_QWORD *, _QWORD, _QWORD))v11[2])(v11, 0LL, 0LL);
LABEL_22:
  objc_release(v11);
  objc_release(v34);
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
}