-[PhotoThemeServiceDelegate listener:shouldAcceptNewConnection:]
bool __cdecl -[PhotoThemeServiceDelegate listener:shouldAcceptNewConnection:](
        PhotoThemeServiceDelegate *self,
        SEL a2,
        id a3,
        id a4)
{
  id v4; // x21
  NSXPCInterface *v5; // x19
  SUContainedSoftwareUpdateController *v6; // x19
  NSXPCInterface *v7; // x20

  v4 = objc_retain(a4);
  v5 = objc_retainAutoreleasedReturnValue(
         +[NSXPCInterface interfaceWithProtocol:](
           &OBJC_CLASS___NSXPCInterface,
           "interfaceWithProtocol:",
           &OBJC_PROTOCOL___PhotoThemeService));
  objc_msgSend(v4, "setExportedInterface:", v5);
  objc_release(v5);
  v6 = objc_opt_new(&OBJC_CLASS___SUContainedSoftwareUpdateController);
  objc_msgSend(v4, "setExportedObject:", v6);
  v7 = objc_retainAutoreleasedReturnValue(
         +[NSXPCInterface interfaceWithProtocol:](
           &OBJC_CLASS___NSXPCInterface,
           "interfaceWithProtocol:",
           &OBJC_PROTOCOL___PhotoThemeService));
  objc_msgSend(v4, "setRemoteObjectInterface:", v7);
  objc_release(v7);
  -[SUContainedSoftwareUpdateController setXpcConnection:](v6, "setXpcConnection:", v4);
  objc_msgSend(v4, "resume");
  objc_release(v4);
  objc_release(v6);
  return 1;
}