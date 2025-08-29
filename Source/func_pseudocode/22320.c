-[ECTIHelperDelegate _handleSynchronizeWindowLocation:forPeer:]
void __cdecl -[ECTIHelperDelegate _handleSynchronizeWindowLocation:forPeer:](
        ECTIHelperDelegate *self,
        SEL a2,
        id a3,
        id a4)
{
  void *v6; // x20
  double v7; // d2
  double v8; // d8
  double v9; // d3
  double v10; // d9
  double v11; // d10
  double v12; // d0
  uint8_t v13[16]; // [xsp+0h] [xbp-40h] BYREF

  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
  {
    *(_WORD *)v13 = 0;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_INFO,
      "ECTI: _handleSynchronizeWindowLocation",
      v13,
      2u);
  }
  v6 = -[NSTextField window](self->_textField, "window");
  objc_msgSend(v6, "frame");
  v8 = v7;
  v10 = v9;
  v11 = xpc_dictionary_get_double(a3, "locx");
  +[NSScreen _zeroScreenHeight](&OBJC_CLASS___NSScreen, "_zeroScreenHeight");
  objc_msgSend(v6, "_setFrame:", v11, v12 - (v10 + xpc_dictionary_get_double(a3, "locy")), v8, v10);
}