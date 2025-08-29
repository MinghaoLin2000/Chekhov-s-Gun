-[SiriNCService _performThreadSafePresentationDependentBlocksBlock:]
void __cdecl -[SiriNCService _performThreadSafePresentationDependentBlocksBlock:](SiriNCService *self, SEL a2, id a3)
{
  void (__fastcall **v4)(_QWORD); // x19
  void *v5; // x21
  os_log_s *v6; // x21
  NSThread *v7; // x22
  os_log_s *v8; // x21
  os_log_s *v9; // x20
  int v10; // [xsp+0h] [xbp-50h] BYREF
  const char *v11; // [xsp+4h] [xbp-4Ch]
  __int16 v12; // [xsp+Ch] [xbp-44h]
  NSQualityOfService v13; // [xsp+Eh] [xbp-42h]

  v4 = (void (__fastcall **)(_QWORD))objc_retain(a3);
  v5 = (void *)AFSiriLogContextConnection;
  if ( os_log_type_enabled(AFSiriLogContextConnection, OS_LOG_TYPE_DEFAULT) )
  {
    v6 = objc_retain(v5);
    v7 = objc_retainAutoreleasedReturnValue(+[NSThread currentThread](&OBJC_CLASS___NSThread, "currentThread"));
    v10 = 136315394;
    v11 = "-[SiriNCService _performThreadSafePresentationDependentBlocksBlock:]";
    v12 = 2048;
    v13 = -[NSThread qualityOfService](v7, "qualityOfService");
    _os_log_impl(
      (void *)&_mh_execute_header,
      v6,
      OS_LOG_TYPE_DEFAULT,
      "%s #locks #noisy _presentationDependentBlocksLock about to lock with qos: %zd",
      (uint8_t *)&v10,
      0x16u);
    objc_release(v6);
    objc_release(v7);
  }
  -[NSLock lock](self->_presentationDependentBlocksLock, "lock");
  v8 = (os_log_s *)AFSiriLogContextConnection;
  if ( os_log_type_enabled(AFSiriLogContextConnection, OS_LOG_TYPE_DEFAULT) )
  {
    v10 = 136315138;
    v11 = "-[SiriNCService _performThreadSafePresentationDependentBlocksBlock:]";
    _os_log_impl(
      (void *)&_mh_execute_header,
      v8,
      OS_LOG_TYPE_DEFAULT,
      "%s #locks #noisy _presentationDependentBlocksLock successfully locked",
      (uint8_t *)&v10,
      0xCu);
  }
  v4[2](v4);
  -[NSLock unlock](self->_presentationDependentBlocksLock, "unlock");
  v9 = (os_log_s *)AFSiriLogContextConnection;
  if ( os_log_type_enabled(AFSiriLogContextConnection, OS_LOG_TYPE_DEFAULT) )
  {
    v10 = 136315138;
    v11 = "-[SiriNCService _performThreadSafePresentationDependentBlocksBlock:]";
    _os_log_impl(
      (void *)&_mh_execute_header,
      v9,
      OS_LOG_TYPE_DEFAULT,
      "%s #locks #noisy _presentationDependentBlocksLock unlocked",
      (uint8_t *)&v10,
      0xCu);
  }
  objc_release(v4);
}