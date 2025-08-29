-[SiriNCService scdaShouldContinue:]
void __cdecl -[SiriNCService scdaShouldContinue:](SiriNCService *self, SEL a2, id a3)
{
  os_log_s *v3; // x19
  int v4; // [xsp+0h] [xbp-30h] BYREF
  const char *v5; // [xsp+4h] [xbp-2Ch]

  v3 = (os_log_s *)AFSiriLogContextConnection;
  if ( os_log_type_enabled(AFSiriLogContextConnection, OS_LOG_TYPE_DEFAULT) )
  {
    v4 = 136315138;
    v5 = "-[SiriNCService scdaShouldContinue:]";
    _os_log_impl(
      (void *)&_mh_execute_header,
      v3,
      OS_LOG_TYPE_DEFAULT,
      "%s [Invocation] BTLE Device continues to interact",
      (uint8_t *)&v4,
      0xCu);
  }
}