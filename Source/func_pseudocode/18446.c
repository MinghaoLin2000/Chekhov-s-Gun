-[_TtC19ControlCenterHelper19ControlCenterHelper isShowingBackgroundReplacementPickerWithResponse:]
void __cdecl -[ControlCenterHelper isShowingBackgroundReplacementPickerWithResponse:](
        _TtC19ControlCenterHelper19ControlCenterHelper *self,
        SEL a2,
        id a3)
{
  void *v4; // x20
  __int64 v5; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = _Block_copy(a3);
  _Block_copy(v4);
  v5 = swift_retain(self);
  sub_10000AC90(v5, v4);
  _Block_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  swift_release(self);
}