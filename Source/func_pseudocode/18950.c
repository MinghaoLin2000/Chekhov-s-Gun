-[RemoteViewBridgeHostContainer setDelegate:]
void __cdecl -[RemoteViewBridgeHostContainer setDelegate:](RemoteViewBridgeHostContainer *self, SEL a2, id a3)
{
  objc_storeWeak((id *)&self->_delegate, a3);
}