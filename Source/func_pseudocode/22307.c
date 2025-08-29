-[ECTIHelperDelegate applicationDidFinishLaunching:]
void __cdecl -[ECTIHelperDelegate applicationDidFinishLaunching:](ECTIHelperDelegate *self, SEL a2, id a3)
{
  void *v4; // x20
  uint8_t v5[16]; // [xsp+0h] [xbp-20h] BYREF

  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
  {
    *(_WORD *)v5 = 0;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_INFO,
      "ECTI: applicationDidFinishLaunching",
      v5,
      2u);
  }
  v4 = -[NSTextField cell](self->_textField, "cell");
  objc_msgSend(v4, "setWraps:", 0LL);
  objc_msgSend(v4, "setBackgroundStyle:", 3LL);
  objc_msgSend(v4, "setWantsNotificationForMarkedText:", 1LL);
  -[NSTextField setDelegate:](self->_textField, "setDelegate:", self);
}