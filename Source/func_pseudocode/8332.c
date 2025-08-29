_ASDLocalizedString
id __fastcall ASDLocalizedString(void *a1)
{
  id v1; // x20
  NSBundle *v2; // x19
  NSArray *v3; // x21
  NSArray *v4; // x22
  NSArray *v5; // x23
  id v6; // x24
  void *v7; // x25
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v1 = objc_retain(a1);
  v2 = objc_retainAutoreleasedReturnValue(
         +[NSBundle bundleWithPath:](
           &OBJC_CLASS___NSBundle,
           "bundleWithPath:",
           CFSTR("/System/Library/PrivateFrameworks/AppStoreDaemon.framework")));
  v3 = objc_retainAutoreleasedReturnValue(+[NSLocale preferredLanguages](&OBJC_CLASS___NSLocale, "preferredLanguages"));
  v4 = objc_retainAutoreleasedReturnValue(-[NSBundle localizations](v2, "localizations"));
  v5 = objc_retainAutoreleasedReturnValue(
         +[NSBundle preferredLocalizationsFromArray:forPreferences:](
           &OBJC_CLASS___NSBundle,
           "preferredLocalizationsFromArray:forPreferences:",
           v4,
           v3));
  v6 = objc_retainAutoreleasedReturnValue(-[NSArray firstObject](v5, "firstObject"));
  v7 = objc_retainAutoreleasedReturnValue(
         -[NSBundle localizedStringForKey:value:table:localization:](
           v2,
           "localizedStringForKey:value:table:localization:",
           v1,
           0LL,
           0LL,
           v6));
  objc_release(v1);
  objc_release(v6);
  objc_release(v5);
  objc_release(v4);
  objc_release(v3);
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}