__Z17PKLocalizedStringP8NSStringPKc
NSString *__fastcall PKLocalizedString(NSString *a1, const char *a2)
{
  NSString *v2; // x19
  NSBundle *v3; // x20
  NSString *v4; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v2 = objc_retain(a1);
  v3 = objc_retainAutoreleasedReturnValue(
         +[NSBundle bundleWithIdentifier:](
           &OBJC_CLASS___NSBundle,
           "bundleWithIdentifier:",
           CFSTR("com.apple.framework.PrintKit")));
  v4 = objc_retainAutoreleasedReturnValue(
         -[NSBundle localizedStringForKey:value:table:](
           v3,
           "localizedStringForKey:value:table:",
           v2,
           v2,
           CFSTR("Localizable")));
  objc_release(v3);
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}