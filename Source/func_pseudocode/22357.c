-[ECAPHelperDelegate _handleSetupMiniViewMessage:forPeer:]
void __cdecl -[ECAPHelperDelegate _handleSetupMiniViewMessage:forPeer:](ECAPHelperDelegate *self, SEL a2, id a3, id a4)
{
  void *v7; // x22
  xpc_object_t reply; // x0
  void *v9; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  _TSMSetRemoteViewActivation(1LL, a2);
  _TSMRegisterRemoteViewClient(1LL);
  if ( !objc_msgSend(objc_msgSend(NSApp, "dockTile"), "miniView") )
  {
    v7 = objc_msgSend(NSApp, "dockTile");
    objc_msgSend(v7, "setMiniView:", self->_view);
    objc_msgSend(v7, "_setMiniViewWindowLevel:", 11LL);
    -[NSWindow setDelegate:](-[NSView window](self->_view, "window"), "setDelegate:", self);
  }
  reply = xpc_dictionary_create_reply(a3);
  if ( reply )
  {
    v9 = reply;
    xpc_connection_send_message((xpc_connection_t)a4, reply);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    xpc_release(v9);
  }
}