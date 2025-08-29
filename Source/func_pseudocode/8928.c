-[_TtC34AppleMediaServicesUIDynamicService28JSSessionAuthenticatorObject getCredentials]
id __cdecl -[JSSessionAuthenticatorObject getCredentials](
        _TtC34AppleMediaServicesUIDynamicService28JSSessionAuthenticatorObject *self,
        SEL a2)
{
  _TtC34AppleMediaServicesUIDynamicService28JSSessionAuthenticatorObject *v2; // x19
  void *v3; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = objc_retain(self);
  v3 = (void *)sub_1000292D8();
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}