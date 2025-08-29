-[RemoteViewBridgeServiceWindow initWithSize:]
RemoteViewBridgeServiceWindow *__cdecl -[RemoteViewBridgeServiceWindow initWithSize:](
        RemoteViewBridgeServiceWindow *self,
        SEL a2,
        CGSize a3)
{
  RemoteViewBridgeServiceWindow *v3; // x0
  RemoteViewBridgeServiceWindow *v4; // x19
  void *v5; // x20
  void *v6; // x21
  objc_super v8; // [xsp+0h] [xbp-30h] BYREF

  v8.receiver = self;
  v8.super_class = (Class)&OBJC_CLASS___RemoteViewBridgeServiceWindow;
  v3 = -[RemoteViewBridgeServiceWindow initWithContentRect:styleMask:backing:defer:](
         &v8,
         "initWithContentRect:styleMask:backing:defer:",
         128LL,
         3LL,
         1LL,
         0.0,
         0.0,
         a3.width,
         a3.height);
  v4 = v3;
  if ( v3 )
  {
    -[RemoteViewBridgeServiceWindow setHidesOnDeactivate:](v3, "setHidesOnDeactivate:", 0LL);
    -[RemoteViewBridgeServiceWindow setCanHostLayersInWindowServer:](v4, "setCanHostLayersInWindowServer:", 1LL);
    -[RemoteViewBridgeServiceWindow setFloatingPanel:](v4, "setFloatingPanel:", 1LL);
    v5 = objc_retainAutoreleasedReturnValue(-[RemoteViewBridgeServiceWindow contentView](v4, "contentView"));
    v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "superview"));
    objc_msgSend(v6, "setWantsLayer:", 1LL);
    objc_release(v6);
    objc_release(v5);
    -[RemoteViewBridgeServiceWindow setAutorecalculatesKeyViewLoop:](v4, "setAutorecalculatesKeyViewLoop:", 1LL);
  }
  return v4;
}