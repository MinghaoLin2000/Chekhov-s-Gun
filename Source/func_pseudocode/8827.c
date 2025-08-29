-[_TtC34AppleMediaServicesUIDynamicService15JSAccountObject appStoreLocal]
JSValue *__cdecl -[JSAccountObject appStoreLocal](
        _TtC34AppleMediaServicesUIDynamicService15JSAccountObject *self,
        SEL a2)
{
  _TtC34AppleMediaServicesUIDynamicService15JSAccountObject *v2; // x20
  void *v3; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = objc_retain(self);
  v3 = (void *)sub_10000F63C();
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (JSValue *)objc_autoreleaseReturnValue(v3);
}