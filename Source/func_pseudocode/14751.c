-[UINSSystemPreferencesServiceDelegate listener:shouldAcceptNewConnection:]
bool __cdecl -[UINSSystemPreferencesServiceDelegate listener:shouldAcceptNewConnection:](
        UINSSystemPreferencesServiceDelegate *self,
        SEL a2,
        id a3,
        id a4)
{
  id v4; // x21
  NSXPCInterface *v5; // x19
  id v6; // x19

  v4 = objc_retain(a4);
  v5 = objc_retainAutoreleasedReturnValue(
         +[NSXPCInterface interfaceWithProtocol:](
           &OBJC_CLASS___NSXPCInterface,
           "interfaceWithProtocol:",
           &OBJC_PROTOCOL___UINSSystemPreferencesService));
  objc_msgSend(v4, "setExportedInterface:", v5);
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue(
         +[UINSSystemPreferencesSettingsManager sharedManager](
           &OBJC_CLASS___UINSSystemPreferencesSettingsManager,
           "sharedManager"));
  objc_msgSend(v4, "setExportedObject:", v6);
  objc_msgSend(v4, "resume");
  objc_release(v4);
  objc_release(v6);
  return 1;
}