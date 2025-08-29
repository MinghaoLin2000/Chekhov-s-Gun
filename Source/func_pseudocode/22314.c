-[ECTIHelperDelegate _handleGetStringValue:forPeer:]
void __cdecl -[ECTIHelperDelegate _handleGetStringValue:forPeer:](ECTIHelperDelegate *self, SEL a2, id a3, id a4)
{
  xpc_object_t reply; // x0
  void *v7; // x20
  const char *v8; // x0
  double v9; // d2
  __int64 vars8; // [xsp+28h] [xbp+8h]

  reply = xpc_dictionary_create_reply(a3);
  if ( reply )
  {
    v7 = reply;
    v8 = (const char *)objc_msgSend(-[NSTextField stringValue](self->_textField, "stringValue"), "UTF8String");
    if ( v8 )
    {
      xpc_dictionary_set_string(v7, "stringValue", v8);
      -[NSTextField frame](self->_textField, "frame");
      xpc_dictionary_set_double(v7, "fieldWidth", v9);
      if ( self->_editingComplete )
      {
        xpc_dictionary_set_bool(v7, "editingComplete", 1);
        self->_editingComplete = 0;
      }
    }
    xpc_connection_send_message((xpc_connection_t)a4, v7);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    xpc_release(v7);
  }
}