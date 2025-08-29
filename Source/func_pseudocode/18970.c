-[_RemoteViewBridgeViewControllerProxy setDelegate:]
void __cdecl -[_RemoteViewBridgeViewControllerProxy setDelegate:](
        _RemoteViewBridgeViewControllerProxy *self,
        SEL a2,
        id a3)
{
  objc_storeWeak((id *)&self->_delegate, a3);
}