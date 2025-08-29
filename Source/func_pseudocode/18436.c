-[_TtC19ControlCenterHelper19ControlCenterHelper confirmTurnOffBluetoothWithRequest:response:]
void __cdecl -[ControlCenterHelper confirmTurnOffBluetoothWithRequest:response:](
        _TtC19ControlCenterHelper19ControlCenterHelper *self,
        SEL a2,
        id a3,
        id a4)
{
  __int64 v7; // x19
  __int64 v8; // x24
  __int64 v9; // x8
  char *v10; // x23
  void *v11; // x21
  __int64 v12; // x22
  __int64 v13; // [xsp+0h] [xbp-30h] BYREF

  v7 = sub_10006ED20(0LL, a2);
  v8 = *(_QWORD *)(v7 - 8);
  __chkstk_darwin();
  v10 = (char *)&v13 - ((v9 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v11 = _Block_copy(a4);
  sub_10006ED10(a3);
  v12 = swift_allocObject(&unk_10008AE58, 24LL, 7LL);
  *(_QWORD *)(v12 + 16) = v11;
  swift_retain(self);
  ControlCenterHelper.confirmTurnOffBluetooth(request:response:)((__int64)v10, (__int64)sub_100009E74, v12);
  swift_release(self);
  swift_release(v12);
  (*(void (__fastcall **)(char *, __int64))(v8 + 8))(v10, v7);
}