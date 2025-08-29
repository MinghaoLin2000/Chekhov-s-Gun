-[LSRAudioDump initWithTaskIdentifier:]
LSRAudioDump *__cdecl -[LSRAudioDump initWithTaskIdentifier:](LSRAudioDump *self, SEL a2, id a3)
{
  id v4; // x19
  id v5; // x20
  id v6; // x0
  void *v7; // x8
  NSFileManager *v8; // x21
  id v9; // x22
  OSStatus v10; // w0
  NSError *v11; // x21
  void *v12; // x22
  os_log_s *v13; // x22
  void *v14; // x23
  __int64 v15; // x8
  const char *v16; // x3
  OSStatus v17; // w0
  void *v18; // x22
  LSRAudioDump *v19; // x21
  OSStatus v20; // w0
  NSError *v21; // x21
  void *v22; // x22
  os_log_s *v23; // x21
  void *v24; // x8
  __int64 v26; // x8
  os_log_s *v27; // x22
  void *v28; // x23
  __int64 v29; // x8
  objc_super v30; // [xsp+0h] [xbp-70h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-60h] BYREF
  const char *v32; // [xsp+14h] [xbp-5Ch]
  __int16 v33; // [xsp+1Ch] [xbp-54h]
  void *v34; // [xsp+1Eh] [xbp-52h]
  __int16 v35; // [xsp+26h] [xbp-4Ah]
  __int64 v36; // [xsp+28h] [xbp-48h]

  v4 = objc_retain(a3);
  v30.receiver = self;
  v30.super_class = (Class)&OBJC_CLASS___LSRAudioDump;
  v5 = -[LSRAudioDump init](&v30, "init");
  if ( !v5 )
  {
LABEL_14:
    v19 = (LSRAudioDump *)objc_retain(v5);
    goto LABEL_15;
  }
  v6 = objc_retainAutoreleasedReturnValue(+[LSRAudioDump urlForTaskIdentifier:](&OBJC_CLASS___LSRAudioDump, "urlForTaskIdentifier:", v4));
  v7 = (void *)*((_QWORD *)v5 + 1);
  *((_QWORD *)v5 + 1) = v6;
  objc_release(v7);
  v8 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  v9 = objc_retainAutoreleasedReturnValue(+[LSRAudioDump dumpDirectory](&OBJC_CLASS___LSRAudioDump, "dumpDirectory"));
  -[NSFileManager createDirectoryAtURL:withIntermediateDirectories:attributes:error:](
    v8,
    "createDirectoryAtURL:withIntermediateDirectories:attributes:error:",
    v9,
    1LL,
    0LL,
    0LL);
  objc_release(v9);
  objc_release(v8);
  v10 = AudioFileCreateWithURL(
          *((CFURLRef *)v5 + 1),
          0x57415645u,
          (const AudioStreamBasicDescription *)SupportedASBD,
          1u,
          (AudioFileID *)v5 + 2);
  if ( v10 )
  {
    v11 = objc_retainAutoreleasedReturnValue(
            +[NSError errorWithDomain:code:userInfo:](
              &OBJC_CLASS___NSError,
              "errorWithDomain:code:userInfo:",
              NSOSStatusErrorDomain,
              v10,
              0LL));
    v12 = (void *)SFLogConnection;
    if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_ERROR) )
    {
      v13 = objc_retain(v12);
      v14 = objc_retainAutoreleasedReturnValue(-[NSError description](v11, "description"));
      v15 = *((_QWORD *)v5 + 1);
      *(_DWORD *)buf = 136315650;
      v32 = "-[LSRAudioDump initWithTaskIdentifier:]";
      v33 = 2112;
      v34 = v14;
      v35 = 2112;
      v36 = v15;
      v16 = "%s Failed to create audio dump file. Error: %@, URL: %@";
LABEL_17:
      _os_log_error_impl((void *)&_mh_execute_header, v13, OS_LOG_TYPE_ERROR, v16, buf, 0x20u);
      objc_release(v14);
      objc_release(v13);
      goto LABEL_7;
    }
    goto LABEL_7;
  }
  v17 = ExtAudioFileWrapAudioFileID(*((AudioFileID *)v5 + 2), 1u, (ExtAudioFileRef *)v5 + 3);
  if ( !v17 )
  {
    v20 = ExtAudioFileWriteAsync(*((ExtAudioFileRef *)v5 + 3), 0, 0LL);
    if ( v20 )
    {
      v21 = objc_retainAutoreleasedReturnValue(
              +[NSError errorWithDomain:code:userInfo:](
                &OBJC_CLASS___NSError,
                "errorWithDomain:code:userInfo:",
                NSOSStatusErrorDomain,
                v20,
                0LL));
      v22 = (void *)SFLogConnection;
      if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_ERROR) )
      {
        v27 = objc_retain(v22);
        v28 = objc_retainAutoreleasedReturnValue(-[NSError description](v21, "description"));
        v29 = *((_QWORD *)v5 + 1);
        *(_DWORD *)buf = 136315650;
        v32 = "-[LSRAudioDump initWithTaskIdentifier:]";
        v33 = 2112;
        v34 = v28;
        v35 = 2112;
        v36 = v29;
        _os_log_error_impl(
          (void *)&_mh_execute_header,
          v27,
          OS_LOG_TYPE_ERROR,
          "%s Failed to prewarm dump file. Error: %@, URL: %@",
          buf,
          0x20u);
        objc_release(v28);
        objc_release(v27);
      }
      objc_release(v21);
    }
    v23 = (os_log_s *)SFLogConnection;
    if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_INFO) )
    {
      v24 = (void *)*((_QWORD *)v5 + 1);
      *(_DWORD *)buf = 136315394;
      v32 = "-[LSRAudioDump initWithTaskIdentifier:]";
      v33 = 2112;
      v34 = v24;
      _os_log_impl((void *)&_mh_execute_header, v23, OS_LOG_TYPE_INFO, "%s Created audio file at: %@", buf, 0x16u);
    }
    goto LABEL_14;
  }
  v11 = objc_retainAutoreleasedReturnValue(
          +[NSError errorWithDomain:code:userInfo:](
            &OBJC_CLASS___NSError,
            "errorWithDomain:code:userInfo:",
            NSOSStatusErrorDomain,
            v17,
            0LL));
  v18 = (void *)SFLogConnection;
  if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_ERROR) )
  {
    v13 = objc_retain(v18);
    v14 = objc_retainAutoreleasedReturnValue(-[NSError description](v11, "description"));
    v26 = *((_QWORD *)v5 + 1);
    *(_DWORD *)buf = 136315650;
    v32 = "-[LSRAudioDump initWithTaskIdentifier:]";
    v33 = 2112;
    v34 = v14;
    v35 = 2112;
    v36 = v26;
    v16 = "%s Failed to extend audio dump file. Error: %@, URL: %@";
    goto LABEL_17;
  }
LABEL_7:
  objc_release(v11);
  v19 = 0LL;
LABEL_15:
  objc_release(v4);
  objc_release(v5);
  return v19;
}