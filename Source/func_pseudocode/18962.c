-[RemoteViewBridgeViewController setDelegate:]
void __cdecl -[RemoteViewBridgeViewController setDelegate:](RemoteViewBridgeViewController *self, SEL a2, id a3)
{
  id *p_delegate; // x20
  id v5; // x21
  id v6; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  p_delegate = &self->_delegate;
  v5 = objc_retain(a3);
  objc_storeWeak(p_delegate, v5);
  v6 = objc_retainAutoreleasedReturnValue(-[RemoteViewBridgeViewController _proxyCreateIfNecessary](self, "_proxyCreateIfNecessary"));
  objc_msgSend(v6, "setDelegate:", v5);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}