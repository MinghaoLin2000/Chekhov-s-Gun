-[_TtC19ControlCenterHelper27ControlCenterHelperDelegate listener:shouldAcceptNewConnection:]
bool __cdecl -[ControlCenterHelperDelegate listener:shouldAcceptNewConnection:](
        _TtC19ControlCenterHelper27ControlCenterHelperDelegate *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x21
  id v7; // x19
  _TtC19ControlCenterHelper27ControlCenterHelperDelegate *v8; // x20

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = objc_retain(self);
  ControlCenterHelperDelegate.listener(_:shouldAcceptNewConnection:)((NSXPCListener)v8, (NSXPCConnection)v7);
  objc_release(v6);
  objc_release(v7);
  objc_release(v8);
  return 1;
}