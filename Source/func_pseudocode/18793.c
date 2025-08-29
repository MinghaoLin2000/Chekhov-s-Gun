-[RemoteViewBridgeServiceViewService remoteViewControllerInterface]
id __cdecl -[RemoteViewBridgeServiceViewService remoteViewControllerInterface](
        RemoteViewBridgeServiceViewService *self,
        SEL a2)
{
  return +[NSXPCInterface interfaceWithProtocol:](
           &OBJC_CLASS___NSXPCInterface,
           "interfaceWithProtocol:",
           &OBJC_PROTOCOL___RemoteViewBridgeHostProtocol);
}