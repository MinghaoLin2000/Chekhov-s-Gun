__ZL17conection_handlerP17_xpc_connection_s
void __fastcall conection_handler(_xpc_connection_s *a1)
{
  char *v2; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = xpc_copy_description(a1);
  free(v2);
  xpc_connection_set_event_handler(a1, &__block_literal_global);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  xpc_connection_activate(a1);
}