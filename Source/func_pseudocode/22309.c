-[ECTIHelperDelegate _controlTextDidChange]
void __cdecl -[ECTIHelperDelegate _controlTextDidChange](ECTIHelperDelegate *self, SEL a2)
{
  xpc_object_t v3; // x20
  const char *v4; // x0
  double v5; // d2
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( self->_peer )
  {
    v3 = xpc_dictionary_create(0LL, 0LL, 0LL);
    xpc_dictionary_set_string(v3, "message", "stringUpdate");
    v4 = (const char *)objc_msgSend(-[NSTextField stringValue](self->_textField, "stringValue"), "UTF8String");
    if ( v4 )
    {
      xpc_dictionary_set_string(v3, "stringValue", v4);
      -[NSTextField frame](self->_textField, "frame");
      xpc_dictionary_set_double(v3, "fieldWidth", v5);
      if ( self->_editingComplete )
      {
        xpc_dictionary_set_bool(v3, "editingComplete", 1);
        self->_editingComplete = 0;
      }
    }
    xpc_connection_send_message(self->_peer, v3);
    xpc_release(v3);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[ECTIHelperDelegate resizeTextFieldToText](self, "resizeTextFieldToText");
}