-[RemoteViewBridgeServiceContainer setCurrentFence:]
void __cdecl -[RemoteViewBridgeServiceContainer setCurrentFence:](
        RemoteViewBridgeServiceContainer *self,
        SEL a2,
        id a3)
{
  objc_storeStrong((id *)&self->_currentFence, a3);
}