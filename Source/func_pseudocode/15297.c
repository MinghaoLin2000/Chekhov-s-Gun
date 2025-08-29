-[UARPDisplayUpdaterServiceDelegate listener:shouldAcceptNewConnection:]
bool __cdecl -[UARPDisplayUpdaterServiceDelegate listener:shouldAcceptNewConnection:](
        UARPDisplayUpdaterServiceDelegate *self,
        SEL a2,
        id a3,
        id a4)
{
  id v4; // x21
  NSXPCInterface *v5; // x19
  UARPUpdaterServiceDisplay *v6; // x19

  v4 = objc_retain(a4);
  v5 = objc_retainAutoreleasedReturnValue(
         +[NSXPCInterface interfaceWithProtocol:](
           &OBJC_CLASS___NSXPCInterface,
           "interfaceWithProtocol:",
           &OBJC_PROTOCOL___UARPUpdaterService));
  objc_msgSend(v4, "setExportedInterface:", v5);
  objc_release(v5);
  v6 = objc_opt_new(&OBJC_CLASS___UARPUpdaterServiceDisplay);
  objc_msgSend(v4, "setExportedObject:", v6);
  objc_msgSend(v4, "resume");
  objc_release(v4);
  objc_release(v6);
  return 1;
}