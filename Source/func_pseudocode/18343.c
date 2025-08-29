-[ATEnforcementService isInternalInstall]
bool __cdecl -[ATEnforcementService isInternalInstall](ATEnforcementService *self, SEL a2)
{
  void *v2; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  v2 = objc_msgSend(CFSTR("com.apple.AppTrackingTransparency"), "cStringUsingEncoding:", 30LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return _os_variant_has_internal_content(v2);
}