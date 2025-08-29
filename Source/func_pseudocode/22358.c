-[ECAPHelperDelegate _handleShowPanelMessage:forPeer:]
void __cdecl -[ECAPHelperDelegate _handleShowPanelMessage:forPeer:](ECAPHelperDelegate *self, SEL a2, id a3, id a4)
{
  NSWindow *v7; // x0
  NSWindow *v8; // x22
  CGSize size; // q1
  __int64 v10; // x23
  double v11; // d0
  double v12; // d2
  double v13; // d8
  double v14; // d3
  double v15; // d9
  xpc_object_t reply; // x0
  void *v17; // x20
  CGPoint origin; // [xsp+0h] [xbp-70h] BYREF
  CGSize v19; // [xsp+10h] [xbp-60h]
  NSRect v20; // 0:d0.8,8:d1.8,16:d2.8,24:d3.8
  NSRect v21; // 0:d0.8,8:d1.8,16:d2.8,24:d3.8

  v7 = -[NSView window](self->_view, "window");
  if ( v7 )
  {
    v8 = v7;
    size = CGRectZero.size;
    origin = CGRectZero.origin;
    v19 = size;
    v10 = CGSMainConnectionID();
    if ( !(unsigned int)CGSGetWindowBounds(v10, -[NSWindow windowNumber](v8, "windowNumber"), &origin) )
    {
      +[NSScreen _zeroScreenHeight](&OBJC_CLASS___NSScreen, "_zeroScreenHeight");
      origin.y = v11 - (origin.y + v19.height);
      -[NSWindow _setFrame:](v8, "_setFrame:", origin.x);
    }
  }
  -[NSView frame](self->_view, "frame");
  v13 = v12;
  v15 = v14;
  -[NSView frame](self->_view, "frame");
  v21 = NSInsetRect(v20, (double)((int)(v13 * 0.5) - 10), (double)((int)(v15 * 0.5) - 10));
  -[NSPopover showRelativeToRect:ofView:preferredEdge:](
    -[ECAPHelperDelegate popover](self, "popover"),
    "showRelativeToRect:ofView:preferredEdge:",
    self->_view,
    1LL,
    v21.origin.x,
    v21.origin.y,
    v21.size.width,
    v21.size.height);
  -[NSWindow setLevel:](
    -[NSView window](
      -[NSViewController view](
        -[NSPopover contentViewController](-[ECAPHelperDelegate popover](self, "popover"), "contentViewController"),
        "view"),
      "window"),
    "setLevel:",
    106LL);
  reply = xpc_dictionary_create_reply(a3);
  if ( reply )
  {
    v17 = reply;
    xpc_connection_send_message((xpc_connection_t)a4, reply);
    xpc_release(v17);
  }
}