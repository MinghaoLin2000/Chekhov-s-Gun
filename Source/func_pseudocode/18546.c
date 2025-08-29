-[_TtC19ControlCenterHelper19ControlCenterHelper presentScreenMirroringAlertWithDisplayID:displayName:displayIsSpatial:options:response:]
void __cdecl -[ControlCenterHelper presentScreenMirroringAlertWithDisplayID:displayName:displayIsSpatial:options:response:](
        _TtC19ControlCenterHelper19ControlCenterHelper *self,
        SEL a2,
        unsigned int a3,
        id a4,
        bool a5,
        id a6,
        id a7)
{
  void *v12; // x24
  __int64 v13; // x1
  __int64 v14; // x21
  __int64 v15; // x1
  __int64 v16; // x25
  __int64 v17; // x19
  __int64 v18; // x26
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v12 = _Block_copy(a7);
  v14 = sub_1000700D0(a4, v13);
  v16 = v15;
  v17 = sub_100070270(a6, &type metadata for Int, &protocol witness table for Int);
  v18 = swift_allocObject(&unk_10008BA40, 24LL, 7LL);
  *(_QWORD *)(v18 + 16) = v12;
  swift_retain(self);
  ControlCenterHelper.presentScreenMirroringAlert(displayID:displayName:displayIsSpatial:options:response:)(
    a3,
    v14,
    v16,
    a5,
    v17,
    (__int64)sub_1000202FC,
    v18);
  swift_release(self);
  swift_bridgeObjectRelease(v16);
  swift_bridgeObjectRelease(v17);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  swift_release(v18);
}