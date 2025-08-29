____ZL23MTLServiceHandleMessagePU24objcproto13OS_xpc_object8NSObject_block_invoke
void __fastcall ___ZL23MTLServiceHandleMessagePU24objcproto13OS_xpc_object8NSObject_block_invoke(
        __int64 a1,
        unsigned int a2,
        const void *a3,
        size_t a4,
        const char *a5)
{
  xpc_object_t reply; // x0
  void *v11; // x19
  xpc_object_t v12; // x21
  _xpc_connection_s *remote_connection; // x0
  __int64 vars8; // [xsp+38h] [xbp+8h]

  reply = xpc_dictionary_create_reply(*(xpc_object_t *)(a1 + 32));
  if ( reply )
  {
    v11 = reply;
    if ( a2 )
    {
      xpc_dictionary_set_uint64(reply, "error", a2);
      if ( a5 )
        xpc_dictionary_set_string(v11, "errorMessage", a5);
    }
    else
    {
      v12 = xpc_data_create(a3, a4);
      xpc_dictionary_set_uint64(v11, "error", 0LL);
      xpc_dictionary_set_value(v11, "reply", v12);
      xpc_release(v12);
    }
    remote_connection = xpc_dictionary_get_remote_connection(*(xpc_object_t *)(a1 + 32));
    xpc_connection_send_message(remote_connection, v11);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    xpc_release(v11);
  }
}