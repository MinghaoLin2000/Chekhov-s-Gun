_$s19ControlCenterHelper0abC8DelegateC8listener_25shouldAcceptNewConnectionSbSo13NSXPCListenerC_So15NSXPCConnectionCtF
Swift::Bool __swiftcall ControlCenterHelperDelegate.listener(_:shouldAcceptNewConnection:)(
        NSXPCListener _,
        NSXPCConnection shouldAcceptNewConnection)
{
  __int64 v3; // x0
  __int64 v4; // x20
  id v5; // x21

  v3 = type metadata accessor for ControlCenterHelper();
  v4 = swift_allocObject(v3, 16LL, 7LL);
  v5 = objc_retainAutoreleasedReturnValue(
         objc_msgSend(
           (id)objc_opt_self(&OBJC_CLASS___NSXPCInterface),
           "interfaceWithProtocol:",
           &OBJC_PROTOCOL____TtP19ControlCenterHelper27ControlCenterHelperProtocol_));
  -[objc_class setExportedInterface:](shouldAcceptNewConnection.super.isa, "setExportedInterface:", v5);
  objc_release(v5);
  -[objc_class setExportedObject:](shouldAcceptNewConnection.super.isa, "setExportedObject:", v4);
  -[objc_class resume](shouldAcceptNewConnection.super.isa, "resume");
  swift_release(v4);
  return 1;
}