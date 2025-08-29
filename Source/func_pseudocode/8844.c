-[_TtC34AppleMediaServicesUIDynamicService16JSAppQueryObject queryBundleIds:]
id __cdecl -[JSAppQueryObject queryBundleIds:](
        _TtC34AppleMediaServicesUIDynamicService16JSAppQueryObject *self,
        SEL a2,
        id a3)
{
  id v4; // x21
  _TtC34AppleMediaServicesUIDynamicService16JSAppQueryObject *v5; // x20
  void *v6; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retain(self);
  v6 = (void *)sub_100011F38(v4);
  objc_release(v4);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}