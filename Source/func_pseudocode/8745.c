_$s34AppleMediaServicesUIDynamicService15AccountsWrapperC10accessLock33_C70CE914FF0A2925D0CD30259F15E879LLSo6NSLockCvpfi
id variable initialization expression of AccountsWrapper.accessLock()
{
  id v0; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  v0 = objc_allocWithZone((Class)&OBJC_CLASS___NSLock);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_msgSend(v0, "init");
}