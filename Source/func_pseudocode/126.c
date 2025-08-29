-[_TtC9SPIHelper9SPIHelper currentUserSharingStatusFor:withReply:]
void __cdecl -[SPIHelper currentUserSharingStatusFor:withReply:](_TtC9SPIHelper9SPIHelper *self, SEL a2, id a3, id a4)
{
  void *v6; // x21
  __int64 v7; // x22
  id v8; // x19
  _TtC9SPIHelper9SPIHelper *v9; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = _Block_copy(a4);
  v7 = swift_allocObject(&unk_1000C3690, 24LL, 7LL);
  *(_QWORD *)(v7 + 16) = v6;
  v8 = objc_retain(a3);
  v9 = objc_retain(self);
  sub_1000785EC(v8, sub_10009ED40, v7);
  swift_release(v7);
  objc_release(v9);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v8);
}