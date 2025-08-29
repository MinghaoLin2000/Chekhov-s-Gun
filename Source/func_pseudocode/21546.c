-[LSRConnection dealloc]
void __cdecl -[LSRConnection dealloc](LSRConnection *self, SEL a2)
{
  _EARSpeechRecognitionAudioBuffer *audioBuffer; // x0
  os_log_s *v4; // x20
  objc_super v5; // [xsp+0h] [xbp-40h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-30h] BYREF
  const char *v7; // [xsp+14h] [xbp-2Ch]
  __int16 v8; // [xsp+1Ch] [xbp-24h]
  LSRConnection *v9; // [xsp+1Eh] [xbp-22h]

  -[NSXPCConnection invalidate](self->_connection, "invalidate");
  -[_EARSpeechRecognitionAudioBuffer cancelRecognition](self->_audioBuffer, "cancelRecognition");
  -[NSMutableArray enumerateObjectsUsingBlock:](
    self->_consumedSandboxExtensions,
    "enumerateObjectsUsingBlock:",
    &stru_100059BE0);
  audioBuffer = self->_audioBuffer;
  if ( audioBuffer == (_EARSpeechRecognitionAudioBuffer *)qword_100065420 )
  {
    qword_100065420 = 0LL;
    objc_release(audioBuffer);
  }
  v4 = (os_log_s *)SFLogConnection;
  if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_DEBUG) )
  {
    *(_DWORD *)buf = 136315394;
    v7 = "-[LSRConnection dealloc]";
    v8 = 2112;
    v9 = self;
    _os_log_debug_impl((void *)&_mh_execute_header, v4, OS_LOG_TYPE_DEBUG, "%s %@ deallocating", buf, 0x16u);
  }
  v5.receiver = self;
  v5.super_class = (Class)&OBJC_CLASS___LSRConnection;
  -[LSRConnection dealloc](&v5, "dealloc");
}