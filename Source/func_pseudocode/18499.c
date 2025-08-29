-[_TtC19ControlCenterHelper19ControlCenterHelper joinNetworkError:]
void __cdecl -[ControlCenterHelper joinNetworkError:](
        _TtC19ControlCenterHelper19ControlCenterHelper *self,
        SEL a2,
        id a3)
{
  id v4; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retain(a3);
  swift_retain(self);
  ControlCenterHelper.joinNetworkError(_:)((__int64)v4);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  swift_release(self);
}