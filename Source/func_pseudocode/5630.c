-[ServiceDelegate listener:shouldAcceptNewConnection:]
bool __cdecl -[ServiceDelegate listener:shouldAcceptNewConnection:](ServiceDelegate *self, SEL a2, id a3, id a4)
{
  id v4; // x21
  NSXPCInterface *v5; // x19
  KeyboardSettingsMediator *v6; // x19
  void *v7; // x20

  v4 = objc_retain(a4);
  v5 = objc_retainAutoreleasedReturnValue(
         +[NSXPCInterface interfaceWithProtocol:](
           &OBJC_CLASS___NSXPCInterface,
           "interfaceWithProtocol:",
           &OBJC_PROTOCOL___CloudSettingsServiceProtocol));
  objc_msgSend(v4, "setExportedInterface:", v5);
  objc_release(v5);
  v6 = objc_opt_new(&OBJC_CLASS___KeyboardSettingsMediator);
  v7 = objc_msgSend(
         objc_alloc((Class)&OBJC_CLASS___CloudSettingsService),
         "initWithStoreIdentifier:settingsMediator:",
         CFSTR("com.apple.cloudsettings.keyboard"),
         v6);
  objc_msgSend(v4, "setExportedObject:", v7);
  objc_msgSend(v4, "resume");
  objc_release(v4);
  objc_release(v7);
  objc_release(v6);
  return 1;
}