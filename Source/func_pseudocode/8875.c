-[_TtC34AppleMediaServicesUIDynamicService20JSLocalizationObject strings]
NSDictionary *__cdecl -[JSLocalizationObject strings](
        _TtC34AppleMediaServicesUIDynamicService20JSLocalizationObject *self,
        SEL a2)
{
  __int64 v2; // x19
  void *v3; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = sub_10001A368();
  v3 = (void *)sub_1000460E8(
                 v2,
                 &type metadata for String,
                 (char *)&type metadata for Any + 8,
                 &protocol witness table for String);
  swift_bridgeObjectRelease(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (NSDictionary *)objc_autoreleaseReturnValue(v3);
}