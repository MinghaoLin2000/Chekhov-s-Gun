__Z17PKLocalizedStringPK10__CFStringPKc
CFStringRef __fastcall PKLocalizedString(const __CFString *a1, const char *a2)
{
  __CFBundle *BundleWithIdentifier; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  BundleWithIdentifier = CFBundleGetBundleWithIdentifier(CFSTR("com.apple.framework.PrintKit"));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return CFBundleCopyLocalizedString(BundleWithIdentifier, a1, a1, CFSTR("Localizable"));
}