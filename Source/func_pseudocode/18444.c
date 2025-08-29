-[_TtC19ControlCenterHelper19ControlCenterHelper useVerboseTitle:]
void __cdecl -[ControlCenterHelper useVerboseTitle:](
        _TtC19ControlCenterHelper19ControlCenterHelper *self,
        SEL a2,
        bool a3)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  swift_retain(self);
  ControlCenterHelper.useVerboseTitle(_:)(a3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  swift_release(self);
}