-[RemoteViewBridgeViewController _proxyCreateIfNecessary]
id __cdecl -[RemoteViewBridgeViewController _proxyCreateIfNecessary](RemoteViewBridgeViewController *self, SEL a2)
{
  _RemoteViewBridgeViewControllerProxy *v3; // x20
  _RemoteViewBridgeViewControllerProxy *v4; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[RemoteViewBridgeViewController proxy](self, "proxy"));
  objc_release(v3);
  if ( !v3 )
  {
    v4 = objc_opt_new(&OBJC_CLASS____RemoteViewBridgeViewControllerProxy);
    -[RemoteViewBridgeViewController setProxy:](self, "setProxy:", v4);
    objc_release(v4);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return -[RemoteViewBridgeViewController proxy](self, "proxy");
}