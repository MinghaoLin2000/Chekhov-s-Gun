-[_TtC19ControlCenterHelper19ControlCenterHelper confirmItemDeletionWithResponse:]
void __cdecl -[ControlCenterHelper confirmItemDeletionWithResponse:](
        _TtC19ControlCenterHelper19ControlCenterHelper *self,
        SEL a2,
        id a3)
{
  void *v4; // x20
  __int64 v5; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = _Block_copy(a3);
  v5 = swift_allocObject(&unk_10008B420, 24LL, 7LL);
  *(_QWORD *)(v5 + 16) = v4;
  swift_retain(self);
  ControlCenterHelper.confirmItemDeletion(response:)((__int64)sub_100014E00, v5);
  swift_release(self);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  swift_release(v5);
}