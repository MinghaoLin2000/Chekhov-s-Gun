-[_TtC34AppleMediaServicesUIDynamicService31ServiceConnectionExportedObject performWithRequestData:completion:]
void __cdecl -[ServiceConnectionExportedObject performWithRequestData:completion:](
        _TtC34AppleMediaServicesUIDynamicService31ServiceConnectionExportedObject *self,
        SEL a2,
        id a3,
        id a4)
{
  void *v6; // x21
  id v7; // x22
  __int64 v8; // x19
  __int64 v9; // x1
  __int64 v10; // x23
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v6 = _Block_copy(a4);
  v7 = objc_retain(a3);
  swift_retain(self);
  v8 = sub_100045638(a3);
  v10 = v9;
  objc_release(v7);
  _Block_copy(v6);
  sub_10003FF74(v8, v10, self, v6);
  _Block_release(v6);
  sub_10002773C(v8, v10);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  swift_release(self);
}