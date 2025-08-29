-[_TtC19ControlCenterHelper19ControlCenterHelper presentBackgroundReplacementPickerWithBundleID:appName:cameraID:onDisplay:useVerboseTitle:]
void __cdecl -[ControlCenterHelper presentBackgroundReplacementPickerWithBundleID:appName:cameraID:onDisplay:useVerboseTitle:](
        _TtC19ControlCenterHelper19ControlCenterHelper *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        unsigned int a6,
        bool a7)
{
  void *v12; // x1
  __int64 v13; // x24
  void *v14; // x22
  __int64 v15; // x26
  __int64 v16; // x25
  void *v17; // x1
  void *v18; // x27
  Swift::String v19; // x0
  Swift::String_optional v20; // x2
  Swift::String v21; // x4
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v13 = sub_1000700D0(a3, a2);
  v14 = v12;
  if ( a4 )
  {
    v15 = sub_1000700D0(a4, v12);
    a4 = v12;
  }
  else
  {
    v15 = 0LL;
  }
  v16 = sub_1000700D0(a5, v12);
  v18 = v17;
  swift_retain(self);
  v19._countAndFlagsBits = v13;
  v19._object = v14;
  v20.value._countAndFlagsBits = v15;
  v20.value._object = a4;
  v21._countAndFlagsBits = v16;
  v21._object = v18;
  ControlCenterHelper.presentBackgroundReplacementPicker(bundleID:appName:cameraID:onDisplay:useVerboseTitle:)(
    v19,
    v20,
    v21,
    a6,
    a7);
  swift_release(self);
  swift_bridgeObjectRelease(v14);
  swift_bridgeObjectRelease(v18);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  swift_bridgeObjectRelease(a4);
}