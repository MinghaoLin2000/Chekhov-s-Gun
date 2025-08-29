-[_TtC22localspeechrecognition9LSRAssets .cxx_destruct]
void __cdecl -[LSRAssets .cxx_destruct](_TtC22localspeechrecognition9LSRAssets *self, SEL a2)
{
  char *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x0
  __int64 (__fastcall *v6)(__int64); // x8
  __int64 v7; // x0
  __int64 v8; // x0
  char *v9; // x20
  __int64 v10; // x21
  __int64 v11; // x1
  __int64 v12; // x16
  void (__fastcall *v13)(char *, __int64); // x22
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = (char *)self + OBJC_IVAR____TtC22localspeechrecognition9LSRAssets_locale;
  v4 = sub_100040FE0(0LL);
  sub_100016A24(v4, v4);
  v5 = sub_100016AE8(v3);
  v7 = v6(v5);
  v8 = sub_100016B08(v7);
  sub_100016B08(v8);
  sub_1000168A8((char *)self + OBJC_IVAR____TtC22localspeechrecognition9LSRAssets_modelOverridePath, &unk_1000641C0);
  v9 = (char *)self + OBJC_IVAR____TtC22localspeechrecognition9LSRAssets_configurationFile;
  v10 = sub_100040E70(0LL);
  sub_100016A24(v10, v11);
  v13 = *(void (__fastcall **)(char *, __int64))(v12 + 8);
  v13(v9, v10);
  v14 = ((__int64 (__fastcall *)(char *, __int64))v13)(
          (char *)self + OBJC_IVAR____TtC22localspeechrecognition9LSRAssets_modelRoot,
          v10);
  v15 = sub_100016B08(v14);
  sub_100016B08(v15);
  swift_bridgeObjectRelease(*(Class *)((char *)&self->super.isa
                                     + OBJC_IVAR____TtC22localspeechrecognition9LSRAssets_modelTaskNames));
  swift_bridgeObjectRelease(*(Class *)((char *)&self->super.isa
                                     + OBJC_IVAR____TtC22localspeechrecognition9LSRAssets_modelSamplingRates));
  sub_100015E60(*(Class *)((char *)&self->super.isa
                         + OBJC_IVAR____TtC22localspeechrecognition9LSRAssets____lazy_storage___contextualData));
  v16 = *(__int64 *)((char *)&self->super.isa
                   + OBJC_IVAR____TtC22localspeechrecognition9LSRAssets____lazy_storage___geoLMHelper);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  sub_100015E60(v16);
}