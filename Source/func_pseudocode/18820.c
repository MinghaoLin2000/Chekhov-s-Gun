-[RemoteViewBridgeServiceContainer setDelegate:]
void __cdecl -[RemoteViewBridgeServiceContainer setDelegate:](RemoteViewBridgeServiceContainer *self, SEL a2, id a3)
{
  objc_storeWeak((id *)&self->_delegate, a3);
}