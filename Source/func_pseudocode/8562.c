-[_TtC13IngestService15ServiceDelegate listener:shouldAcceptNewConnection:]
bool __cdecl -[ServiceDelegate listener:shouldAcceptNewConnection:](
        _TtC13IngestService15ServiceDelegate *self,
        SEL a2,
        id a3,
        id a4)
{
  void *v7; // x23
  id v8; // x19
  id v9; // x20
  _TtC13IngestService15ServiceDelegate *v10; // x21
  id v11; // x22
  id v12; // x22

  v7 = (void *)objc_opt_self(&OBJC_CLASS___NSXPCInterface);
  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  v10 = objc_retain(self);
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "interfaceWithProtocol:", &OBJC_PROTOCOL____TtP14DendriteIngest21IngestServiceProtocol_));
  objc_msgSend(v9, "setExportedInterface:", v11);
  objc_release(v11);
  v12 = objc_msgSend(objc_allocWithZone((Class)type metadata accessor for IngestService(0LL)), "init");
  objc_msgSend(v9, "setExportedObject:", v12);
  objc_msgSend(v9, "resume");
  objc_release(v8);
  objc_release(v9);
  objc_release(v10);
  objc_release(v12);
  return 1;
}