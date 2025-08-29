-[LSRAudioDump appendBytes:]
void __cdecl -[LSRAudioDump appendBytes:](LSRAudioDump *self, SEL a2, id a3)
{
  id v4; // x20
  UInt32 v5; // w21
  id v6; // x20
  void *v7; // x22
  OSStatus v8; // w0
  NSError *v9; // x20
  void *v10; // x21
  os_log_s *v11; // x21
  void *v12; // x22
  NSURL *url; // x8
  AudioBufferList ioData; // [xsp+8h] [xbp-68h] BYREF
  uint8_t buf[4]; // [xsp+20h] [xbp-50h] BYREF
  const char *v16; // [xsp+24h] [xbp-4Ch]
  __int16 v17; // [xsp+2Ch] [xbp-44h]
  void *v18; // [xsp+2Eh] [xbp-42h]
  __int16 v19; // [xsp+36h] [xbp-3Ah]
  NSURL *v20; // [xsp+38h] [xbp-38h]

  if ( self->_extendedFile )
  {
    v4 = objc_retain(a3);
    v5 = (unsigned int)objc_msgSend(v4, "length");
    v6 = objc_retainAutorelease(v4);
    v7 = objc_msgSend(v6, "bytes");
    objc_release(v6);
    *(_QWORD *)&ioData.mNumberBuffers = 1LL;
    ioData.mBuffers[0].mNumberChannels = 1;
    ioData.mBuffers[0].mDataByteSize = v5;
    ioData.mBuffers[0].mData = v7;
    v8 = ExtAudioFileWriteAsync(self->_extendedFile, v5 / SupportedASBD[6], &ioData);
    if ( v8 )
    {
      v9 = objc_retainAutoreleasedReturnValue(
             +[NSError errorWithDomain:code:userInfo:](
               &OBJC_CLASS___NSError,
               "errorWithDomain:code:userInfo:",
               NSOSStatusErrorDomain,
               v8,
               0LL));
      v10 = (void *)SFLogConnection;
      if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_ERROR) )
      {
        v11 = objc_retain(v10);
        v12 = objc_retainAutoreleasedReturnValue(-[NSError description](v9, "description"));
        url = self->_url;
        *(_DWORD *)buf = 136315650;
        v16 = "-[LSRAudioDump appendBytes:]";
        v17 = 2112;
        v18 = v12;
        v19 = 2112;
        v20 = url;
        _os_log_error_impl(
          (void *)&_mh_execute_header,
          v11,
          OS_LOG_TYPE_ERROR,
          "%s Failed to write to dump file. Error: %@, URL: %@",
          buf,
          0x20u);
        objc_release(v12);
        objc_release(v11);
      }
      objc_release(v9);
    }
  }
}