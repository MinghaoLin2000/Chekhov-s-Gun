-[_TtC34AppleMediaServicesUIDynamicService15JSServiceObject url]
NSString *__cdecl -[JSServiceObject url](_TtC34AppleMediaServicesUIDynamicService15JSServiceObject *self, SEL a2)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x19
  void *v5; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = sub_100025D94();
  v4 = v3;
  v5 = (void *)sub_100046128(v2);
  swift_bridgeObjectRelease(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (NSString *)objc_autoreleaseReturnValue(v5);
}