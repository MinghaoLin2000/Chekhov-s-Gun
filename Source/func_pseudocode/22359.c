-[ECAPHelperDelegate _handleClosePanelMessage:forPeer:]
void __cdecl -[ECAPHelperDelegate _handleClosePanelMessage:forPeer:](ECAPHelperDelegate *self, SEL a2, id a3, id a4)
{
  xpc_object_t reply; // x0
  void *v7; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  -[NSPopover close](-[ECAPHelperDelegate popover](self, "popover"), "close");
  reply = xpc_dictionary_create_reply(a3);
  if ( reply )
  {
    v7 = reply;
    xpc_connection_send_message((xpc_connection_t)a4, reply);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    xpc_release(v7);
  }
}