__ZL29MTLCompilerServiceHandleEventPU24objcproto13OS_xpc_object8NSObject
void __fastcall MTLCompilerServiceHandleEvent(xpc_connection_t connection)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( serial_queue(void)::onceToken != -1 )
    dispatch_once(&serial_queue(void)::onceToken, &__block_literal_global);
  xpc_connection_set_target_queue(connection, (dispatch_queue_t)serial_queue(void)::_serial_queue);
  xpc_connection_set_event_handler(connection, &__block_literal_global_8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  xpc_connection_resume(connection);
}