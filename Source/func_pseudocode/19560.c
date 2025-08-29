-[StickiesMigration listener:shouldAcceptNewConnection:]
bool __cdecl -[StickiesMigration listener:shouldAcceptNewConnection:](StickiesMigration *self, SEL a2, id a3, id a4)
{
  id v5; // x19
  NSXPCInterface *v6; // x21
  NSXPCInterface *v7; // x21
  NSXPCConnection *v8; // x20

  v5 = objc_retain(a4);
  v6 = objc_retainAutoreleasedReturnValue(
         +[NSXPCInterface interfaceWithProtocol:](
           &OBJC_CLASS___NSXPCInterface,
           "interfaceWithProtocol:",
           &OBJC_PROTOCOL___StickiesMigrationProtocol));
  objc_msgSend(v5, "setExportedInterface:", v6);
  objc_release(v6);
  objc_msgSend(v5, "setExportedObject:", self);
  objc_msgSend(v5, "setInvalidationHandler:", &stru_1000041B0);
  objc_msgSend(v5, "setInterruptionHandler:", &stru_1000041D0);
  -[StickiesMigration setConnection:](self, "setConnection:", v5);
  v7 = objc_retainAutoreleasedReturnValue(
         +[NSXPCInterface interfaceWithProtocol:](
           &OBJC_CLASS___NSXPCInterface,
           "interfaceWithProtocol:",
           &OBJC_PROTOCOL___StickiesProtocol));
  v8 = objc_retainAutoreleasedReturnValue(-[StickiesMigration connection](self, "connection"));
  -[NSXPCConnection setRemoteObjectInterface:](v8, "setRemoteObjectInterface:", v7);
  objc_release(v8);
  objc_release(v7);
  objc_msgSend(v5, "resume");
  objc_release(v5);
  return 1;
}