-[_TtC34AppleMediaServicesUIDynamicService16JSAppQueryObject queryAlmondApps]
id __cdecl -[JSAppQueryObject queryAlmondApps](
        _TtC34AppleMediaServicesUIDynamicService16JSAppQueryObject *self,
        SEL a2)
{
  _TtC34AppleMediaServicesUIDynamicService16JSAppQueryObject *v2; // x20
  void *v3; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = objc_retain(self);
  v3 = (void *)sub_1000115D4();
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}