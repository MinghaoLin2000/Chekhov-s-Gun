-[RemoteViewBridgeViewController exportedInterface]
id __cdecl -[RemoteViewBridgeViewController exportedInterface](RemoteViewBridgeViewController *self, SEL a2)
{
  return +[NSXPCInterface interfaceWithProtocol:](
           &OBJC_CLASS___NSXPCInterface,
           "interfaceWithProtocol:",
           &OBJC_PROTOCOL___RemoteViewBridgeHostProtocol);
}