-[RemoteViewBridgeViewController serviceViewControllerInterface]
id __cdecl -[RemoteViewBridgeViewController serviceViewControllerInterface](
        RemoteViewBridgeViewController *self,
        SEL a2)
{
  return +[NSXPCInterface interfaceWithProtocol:](
           &OBJC_CLASS___NSXPCInterface,
           "interfaceWithProtocol:",
           &OBJC_PROTOCOL___RemoteViewBridgeServiceProtocol);
}