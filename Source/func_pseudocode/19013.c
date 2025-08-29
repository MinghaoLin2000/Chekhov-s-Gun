-[SiriNCAlertViewController siriViewControllerDidChangeVisibility:]
void __cdecl -[SiriNCAlertViewController siriViewControllerDidChangeVisibility:](
        SiriNCAlertViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x20
  void *v5; // x21
  os_log_s *v6; // x21
  int v7; // [xsp+0h] [xbp-40h] BYREF
  const char *v8; // [xsp+4h] [xbp-3Ch]
  __int16 v9; // [xsp+Ch] [xbp-34h]
  unsigned int v10; // [xsp+Eh] [xbp-32h]

  v4 = objc_retain(a3);
  v5 = (void *)AFSiriLogContextConnection;
  if ( os_log_type_enabled(AFSiriLogContextConnection, OS_LOG_TYPE_DEFAULT) )
  {
    v6 = objc_retain(v5);
    v7 = 136315394;
    v8 = "-[SiriNCAlertViewController siriViewControllerDidChangeVisibility:]";
    v9 = 1024;
    v10 = (unsigned int)objc_msgSend(v4, "isVisible");
    _os_log_impl(
      (void *)&_mh_execute_header,
      v6,
      OS_LOG_TYPE_DEFAULT,
      "%s siriViewControllerDidChangeVisibility %d",
      (uint8_t *)&v7,
      0x12u);
    objc_release(v6);
  }
  if ( ((unsigned int)objc_msgSend(v4, "isVisible") & 1) == 0 )
    -[SiriNCAlertViewController _wasDismissed](self, "_wasDismissed");
  objc_release(v4);
}