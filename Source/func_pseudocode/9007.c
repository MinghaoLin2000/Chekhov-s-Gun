-[_TtC34AppleMediaServicesUIDynamicService20XPCServiceConnection listener:shouldAcceptNewConnection:]
bool __cdecl -[XPCServiceConnection listener:shouldAcceptNewConnection:](
        _TtC34AppleMediaServicesUIDynamicService20XPCServiceConnection *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x21
  id v7; // x19
  _TtC34AppleMediaServicesUIDynamicService20XPCServiceConnection *v8; // x20

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = objc_retain(self);
  sub_10003BD20();
  objc_release(v6);
  objc_release(v7);
  objc_release(v8);
  return 1;
}