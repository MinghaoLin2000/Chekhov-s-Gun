-[_TtC34AppleMediaServicesUIDynamicService28JSSessionAuthenticatorObject startSignInSession:]
id __cdecl -[JSSessionAuthenticatorObject startSignInSession:](
        _TtC34AppleMediaServicesUIDynamicService28JSSessionAuthenticatorObject *self,
        SEL a2,
        id a3)
{
  id v4; // x20
  _TtC34AppleMediaServicesUIDynamicService28JSSessionAuthenticatorObject *v5; // x19
  void *v6; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retain(self);
  v6 = (void *)sub_10002988C(v4);
  objc_release(v4);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}