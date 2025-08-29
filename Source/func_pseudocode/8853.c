-[_TtC34AppleMediaServicesUIDynamicService14JSClientObject metricsOverlay]
NSDictionary *__cdecl -[JSClientObject metricsOverlay](
        _TtC34AppleMediaServicesUIDynamicService14JSClientObject *self,
        SEL a2)
{
  __int64 v2; // x0
  __int64 v3; // x19
  void *v4; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = sub_100014638();
  if ( v2 )
  {
    v3 = v2;
    v4 = (void *)sub_1000460E8(
                   v2,
                   &type metadata for String,
                   (char *)&type metadata for Any + 8,
                   &protocol witness table for String);
    swift_bridgeObjectRelease(v3);
  }
  else
  {
    v4 = 0LL;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (NSDictionary *)objc_autoreleaseReturnValue(v4);
}