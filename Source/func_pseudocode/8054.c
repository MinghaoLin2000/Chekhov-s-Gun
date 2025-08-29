-[SPMessagesHelperListenerDelegate listener:shouldAcceptNewConnection:]
bool __cdecl -[SPMessagesHelperListenerDelegate listener:shouldAcceptNewConnection:](
        SPMessagesHelperListenerDelegate *self,
        SEL a2,
        id a3,
        id a4)
{
  id v4; // x20
  SPMessagesHelper *v5; // x19
  NSXPCInterface *v6; // x21

  v4 = objc_retain(a4);
  v5 = objc_alloc_init(&OBJC_CLASS___SPMessagesHelper);
  objc_msgSend(v4, "setExportedObject:", v5);
  v6 = objc_retainAutoreleasedReturnValue(
         +[NSXPCInterface interfaceWithProtocol:](
           &OBJC_CLASS___NSXPCInterface,
           "interfaceWithProtocol:",
           &OBJC_PROTOCOL___SPMessagesHelper));
  objc_msgSend(v4, "setExportedInterface:", v6);
  objc_release(v6);
  objc_msgSend(v4, "resume");
  objc_release(v4);
  objc_release(v5);
  return 1;
}