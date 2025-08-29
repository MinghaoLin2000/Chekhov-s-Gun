-[_RemoteViewBridgeViewControllerProxy .cxx_destruct]
void __cdecl -[_RemoteViewBridgeViewControllerProxy .cxx_destruct](_RemoteViewBridgeViewControllerProxy *self, SEL a2)
{
  objc_destroyWeak((id *)&self->_delegate);
}