-[_TtC9SPIHelper15ServiceDelegate listener:shouldAcceptNewConnection:]
bool __cdecl -[ServiceDelegate listener:shouldAcceptNewConnection:](
        _TtC9SPIHelper15ServiceDelegate *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  id v7; // x21
  _TtC9SPIHelper15ServiceDelegate *v8; // x22
  id v9; // x20
  id v10; // x0
  void *v11; // x20
  id v12; // x23

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = objc_retain(self);
  v9 = objc_msgSend(v7, "processIdentifier");
  v10 = objc_allocWithZone((Class)type metadata accessor for SPIHelper(0LL));
  v11 = (void *)sub_10005E910(v9);
  v12 = objc_retainAutoreleasedReturnValue(
          objc_msgSend(
            (id)objc_opt_self(&OBJC_CLASS___NSXPCInterface),
            "interfaceWithProtocol:",
            &OBJC_PROTOCOL____TtP9SPIHelper17SPIHelperProtocol_));
  objc_msgSend(v7, "setExportedInterface:", v12);
  objc_release(v12);
  objc_msgSend(v7, "setExportedObject:", v11);
  objc_msgSend(v7, "resume");
  objc_release(v6);
  objc_release(v7);
  objc_release(v8);
  objc_release(v11);
  return 1;
}