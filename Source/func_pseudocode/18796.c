-[RemoteViewBridgeServiceViewService remoteViewSizeChanged:transaction:]
bool __cdecl -[RemoteViewBridgeServiceViewService remoteViewSizeChanged:transaction:](
        RemoteViewBridgeServiceViewService *self,
        SEL a2,
        CGSize a3,
        id a4)
{
  objc_super v5; // [xsp+0h] [xbp-10h] BYREF

  v5.receiver = self;
  v5.super_class = (Class)&OBJC_CLASS___RemoteViewBridgeServiceViewService;
  -[RemoteViewBridgeServiceViewService remoteViewSizeChanged:transaction:](
    &v5,
    "remoteViewSizeChanged:transaction:",
    a4,
    a3.width,
    a3.height);
  return 0;
}