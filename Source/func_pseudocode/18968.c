-[_RemoteViewBridgeViewControllerProxy hostPositionWindowForGlobalContentFrame:]
void __cdecl -[_RemoteViewBridgeViewControllerProxy hostPositionWindowForGlobalContentFrame:](
        _RemoteViewBridgeViewControllerProxy *self,
        SEL a2,
        CGRect a3)
{
  double height; // d8
  double width; // d9
  double y; // d10
  double x; // d11
  RemoteViewBridgeHostProtocol *v7; // x19
  __int64 vars8; // [xsp+38h] [xbp+8h]

  height = a3.size.height;
  width = a3.size.width;
  y = a3.origin.y;
  x = a3.origin.x;
  v7 = objc_retainAutoreleasedReturnValue(-[_RemoteViewBridgeViewControllerProxy delegate](self, "delegate"));
  -[RemoteViewBridgeHostProtocol hostPositionWindowForGlobalContentFrame:](
    v7,
    "hostPositionWindowForGlobalContentFrame:",
    x,
    y,
    width,
    height);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v7);
}