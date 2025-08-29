-[_TtC34AppleMediaServicesUIDynamicService31ServiceConnectionExportedObject updateWithAccount:completion:]
void __cdecl -[ServiceConnectionExportedObject updateWithAccount:completion:](
        _TtC34AppleMediaServicesUIDynamicService31ServiceConnectionExportedObject *self,
        SEL a2,
        id a3,
        id a4)
{
  void *v6; // x21
  id v7; // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = _Block_copy(a4);
  _Block_copy(v6);
  v7 = objc_retain(a3);
  swift_retain(self);
  sub_100041334(a3, self, v6);
  _Block_release(v6);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  swift_release(self);
}