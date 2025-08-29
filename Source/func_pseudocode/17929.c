-[IKPTRecentsService listener:shouldAcceptNewConnection:]
bool __cdecl -[IKPTRecentsService listener:shouldAcceptNewConnection:](IKPTRecentsService *self, SEL a2, id a3, id a4)
{
  id v5; // x22
  NSXPCInterface *v6; // x20

  v5 = objc_retain(a4);
  v6 = objc_retainAutoreleasedReturnValue(
         +[NSXPCInterface interfaceWithProtocol:](
           &OBJC_CLASS___NSXPCInterface,
           "interfaceWithProtocol:",
           &OBJC_PROTOCOL___IKPTRecentsService));
  objc_msgSend(v5, "setExportedInterface:", v6);
  objc_release(v6);
  objc_msgSend(v5, "setExportedObject:", self);
  objc_msgSend(v5, "resume");
  objc_release(v5);
  return 1;
}