-[DeviceClientListenerDelegate listener:shouldAcceptNewConnection:]
bool __cdecl -[DeviceClientListenerDelegate listener:shouldAcceptNewConnection:](
        DeviceClientListenerDelegate *self,
        SEL a2,
        id a3,
        id a4)
{
  id v4; // x21
  NSXPCInterface *v5; // x19
  id v6; // x19
  NSXPCInterface *v7; // x20

  v4 = objc_retain(a4);
  v5 = objc_retainAutoreleasedReturnValue(
         +[NSXPCInterface interfaceWithProtocol:](
           &OBJC_CLASS___NSXPCInterface,
           "interfaceWithProtocol:",
           &OBJC_PROTOCOL___DeviceServiceSideProtocol));
  objc_msgSend(v4, "setExportedInterface:", v5);
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue(+[DeviceServiceSideConnection sharedConnection](&OBJC_CLASS___DeviceServiceSideConnection, "sharedConnection"));
  objc_msgSend(v4, "setExportedObject:", v6);
  objc_msgSend(v6, "setClientConnection:", v4);
  v7 = objc_retainAutoreleasedReturnValue(
         +[NSXPCInterface interfaceWithProtocol:](
           &OBJC_CLASS___NSXPCInterface,
           "interfaceWithProtocol:",
           &OBJC_PROTOCOL___DeviceClientProtocol));
  objc_msgSend(v4, "setRemoteObjectInterface:", v7);
  objc_release(v7);
  objc_msgSend(v4, "resume");
  objc_release(v4);
  objc_release(v6);
  return 1;
}