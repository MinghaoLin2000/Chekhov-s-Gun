-[_RemoteViewBridgeViewControllerProxy hostRequestSizeChange:fenceRight:]
void __cdecl -[_RemoteViewBridgeViewControllerProxy hostRequestSizeChange:fenceRight:](
        _RemoteViewBridgeViewControllerProxy *self,
        SEL a2,
        CGSize a3,
        id a4)
{
  double height; // d8
  double width; // d9
  id v7; // x20
  RemoteViewBridgeHostProtocol *v8; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  height = a3.height;
  width = a3.width;
  v7 = objc_retain(a4);
  v8 = objc_retainAutoreleasedReturnValue(-[_RemoteViewBridgeViewControllerProxy delegate](self, "delegate"));
  -[RemoteViewBridgeHostProtocol hostRequestSizeChange:fenceRight:](
    v8,
    "hostRequestSizeChange:fenceRight:",
    v7,
    width,
    height);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v8);
}