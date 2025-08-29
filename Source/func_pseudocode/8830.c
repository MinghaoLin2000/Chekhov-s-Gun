-[_TtC34AppleMediaServicesUIDynamicService15JSAccountObject privacyAcknowledgementState::]
id __cdecl -[JSAccountObject privacyAcknowledgementState::](
        _TtC34AppleMediaServicesUIDynamicService15JSAccountObject *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x21
  id v7; // x19
  _TtC34AppleMediaServicesUIDynamicService15JSAccountObject *v8; // x20
  void *v9; // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = objc_retain(self);
  v9 = (void *)sub_10000F808(v6, v7);
  objc_release(v6);
  objc_release(v7);
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v9);
}