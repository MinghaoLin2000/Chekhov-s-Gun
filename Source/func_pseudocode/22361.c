-[ECAPHelperDelegate dismissWithAction:]
void __cdecl -[ECAPHelperDelegate dismissWithAction:](ECAPHelperDelegate *self, SEL a2, id a3)
{
  xpc_object_t v4; // x0
  void *v5; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = xpc_dictionary_create(0LL, 0LL, 0LL);
  if ( v4 )
  {
    v5 = v4;
    xpc_dictionary_set_string(v4, "message", "dismissWithAction");
    xpc_connection_send_message(self->_peer, v5);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    xpc_release(v5);
  }
}