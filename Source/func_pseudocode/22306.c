-[ECTIHelperDelegate keyEvent]
void __cdecl -[ECTIHelperDelegate keyEvent](ECTIHelperDelegate *self, SEL a2)
{
  unsigned int v3; // w0
  bool v4; // w20
  xpc_object_t v5; // x0
  void *v6; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( self->_peer )
  {
    v3 = (unsigned int)objc_msgSend(
                         -[NSTextInputContext client](
                           +[NSTextInputContext currentInputContext](
                             &OBJC_CLASS___NSTextInputContext,
                             "currentInputContext"),
                           "client"),
                         "hasMarkedText");
    if ( self->_hasMarkedText != v3 )
    {
      v4 = v3;
      self->_hasMarkedText = v3;
      v5 = xpc_dictionary_create(0LL, 0LL, 0LL);
      if ( v5 )
      {
        v6 = v5;
        xpc_dictionary_set_string(v5, "message", "hasMarked");
        xpc_dictionary_set_bool(v6, "hasMarked", v4);
        xpc_connection_send_message(self->_peer, v6);
        if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
          __break(0xC471u);
        xpc_release(v6);
      }
    }
  }
}