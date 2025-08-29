-[_TtC9SPIHelper9SPIHelper existingShareForFile:withReply:]
void __cdecl -[SPIHelper existingShareForFile:withReply:](_TtC9SPIHelper9SPIHelper *self, SEL a2, id a3, id a4)
{
  __int64 v7; // x22
  __int64 v8; // x24
  __int64 v9; // x8
  char *v10; // x23
  void *v11; // x19
  _TtC9SPIHelper9SPIHelper *v12; // x20
  __int64 v13; // [xsp+0h] [xbp-30h] BYREF

  v7 = sub_1000A44B0(0LL);
  v8 = *(_QWORD *)(v7 - 8);
  __chkstk_darwin(v7);
  v10 = (char *)&v13 - ((v9 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v11 = _Block_copy(a4);
  sub_1000A4470(a3);
  _Block_copy(v11);
  v12 = objc_retain(self);
  sub_10009AC20(v10, v11);
  _Block_release(v11);
  _Block_release(v11);
  objc_release(v12);
  (*(void (__fastcall **)(char *, __int64))(v8 + 8))(v10, v7);
}