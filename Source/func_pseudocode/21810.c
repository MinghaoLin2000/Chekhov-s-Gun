__ZN10XpcSandbox7consumeEPKc
void __fastcall XpcSandbox::consume(xpc_connection_t *this, const char *a2)
{
  xpc_object_t v4; // x21
  xpc_object_t v5; // x0
  const char *string; // x1
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = xpc_dictionary_create(0LL, 0LL, 0LL);
  xpc_dictionary_set_string(v4, "consume", a2);
  v5 = xpc_connection_send_message_with_reply_sync(*this, v4);
  if ( v5 )
  {
    string = xpc_dictionary_get_string(v5, "consumeToken");
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    XpcSandbox::consumeExtension((XpcSandbox *)this, string);
  }
}