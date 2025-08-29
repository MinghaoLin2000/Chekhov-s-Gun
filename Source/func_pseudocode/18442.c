-[_TtC19ControlCenterHelper19ControlCenterHelper closeBackgroundReplacementPickerWithBundleID:]
void __cdecl -[ControlCenterHelper closeBackgroundReplacementPickerWithBundleID:](
        _TtC19ControlCenterHelper19ControlCenterHelper *self,
        SEL a2,
        id a3)
{
  __int64 v4; // x20
  void *v5; // x1
  void *v6; // x21
  Swift::String v7; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = sub_1000700D0(a3, a2);
  v6 = v5;
  swift_retain(self);
  v7._countAndFlagsBits = v4;
  v7._object = v6;
  ControlCenterHelper.closeBackgroundReplacementPicker(bundleID:)(v7);
  swift_release(self);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  swift_bridgeObjectRelease(v6);
}