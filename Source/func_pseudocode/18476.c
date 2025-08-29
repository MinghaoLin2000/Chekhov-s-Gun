-[_TtC19ControlCenterHelper19ControlCenterHelper presentUniversalControlError:]
void __cdecl -[ControlCenterHelper presentUniversalControlError:](
        _TtC19ControlCenterHelper19ControlCenterHelper *self,
        SEL a2,
        id a3)
{
  id v4; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retain(a3);
  swift_retain(self);
  ControlCenterHelper.presentUniversalControlError(_:)((__int64)v4);
  swift_release(self);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}