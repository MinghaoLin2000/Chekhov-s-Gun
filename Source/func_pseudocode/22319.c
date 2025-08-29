-[ECTIHelperDelegate _handleSetupMiniViewMessage:forPeer:]
void __cdecl -[ECTIHelperDelegate _handleSetupMiniViewMessage:forPeer:](ECTIHelperDelegate *self, SEL a2, id a3, id a4)
{
  void *v7; // x22
  void *v8; // x22
  double v9; // d2
  double v10; // d8
  double v11; // d3
  double v12; // d9
  double v13; // d10
  double v14; // d0
  xpc_object_t reply; // x0
  void *v16; // x21
  double v17; // d2
  uint8_t v18[16]; // [xsp+0h] [xbp-50h] BYREF

  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
  {
    *(_WORD *)v18 = 0;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_INFO,
      "ECTI: _handleSetupMiniViewMessage",
      v18,
      2u);
  }
  _TSMSetRemoteViewActivation(1LL);
  _TSMRegisterRemoteViewClient(1LL);
  if ( !objc_msgSend(objc_msgSend(NSApp, "dockTile"), "miniView") )
  {
    v7 = objc_msgSend(NSApp, "dockTile");
    objc_msgSend(v7, "setMiniView:", -[NSTextField superview](self->_textField, "superview"));
    objc_msgSend(v7, "_setMiniViewWindowLevel:", 27LL);
    objc_msgSend(-[NSTextField window](self->_textField, "window"), "setDelegate:", self);
  }
  v8 = -[NSTextField window](self->_textField, "window");
  objc_msgSend(v8, "frame");
  v10 = v9;
  v12 = v11;
  v13 = xpc_dictionary_get_double(a3, "locx");
  +[NSScreen _zeroScreenHeight](&OBJC_CLASS___NSScreen, "_zeroScreenHeight");
  objc_msgSend(v8, "setFrame:display:", 0LL, v13, v14 - (v12 + xpc_dictionary_get_double(a3, "locy")), v10, v12);
  -[ECTIHelperDelegate _handleSetStringValue:](self, "_handleSetStringValue:", a3);
  -[NSTextField selectText:](self->_textField, "selectText:", self);
  reply = xpc_dictionary_create_reply(a3);
  if ( reply )
  {
    v16 = reply;
    -[NSTextField frame](self->_textField, "frame");
    xpc_dictionary_set_double(v16, "fieldWidth", v17);
    xpc_connection_send_message((xpc_connection_t)a4, v16);
    xpc_release(v16);
  }
}