-[SiriNCAlertViewController _localeChanged:]
void __cdecl -[SiriNCAlertViewController _localeChanged:](SiriNCAlertViewController *self, SEL a2, id a3)
{
  void *v3; // x19
  void *v4; // x24
  void *v5; // x26
  NSLocale *v6; // x23
  NSString *v7; // x24
  void *v8; // x25
  NSLocale *v9; // x26
  void *v10; // x27
  void *v11; // x28
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v3 = (void *)CFPreferencesCopyValue(
                 CFSTR("AppleLocale"),
                 kCFPreferencesCurrentApplication,
                 kCFPreferencesCurrentUser,
                 kCFPreferencesAnyHost);
  v4 = objc_retainAutoreleasedReturnValue(+[AFPreferences sharedPreferences](&OBJC_CLASS___AFPreferences, "sharedPreferences"));
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "languageCode"));
  v6 = objc_retainAutoreleasedReturnValue(+[NSLocale localeWithLocaleIdentifier:](&OBJC_CLASS___NSLocale, "localeWithLocaleIdentifier:", v5));
  objc_release(v5);
  objc_release(v4);
  v7 = objc_retainAutoreleasedReturnValue(-[NSLocale languageIdentifier](v6, "languageIdentifier"));
  v8 = (void *)CFPreferencesCopyValue(
                 CFSTR("AppleLocale"),
                 kCFPreferencesAnyApplication,
                 kCFPreferencesCurrentUser,
                 kCFPreferencesAnyHost);
  v9 = objc_retainAutoreleasedReturnValue(+[NSLocale localeWithLocaleIdentifier:](&OBJC_CLASS___NSLocale, "localeWithLocaleIdentifier:", v8));
  v10 = objc_retainAutoreleasedReturnValue(-[NSLocale localeByChangingLanguageTo:](v9, "localeByChangingLanguageTo:", v7));
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "localeIdentifier"));
  if ( ((unsigned int)objc_msgSend(v3, "isEqualToString:", v11) & 1) == 0 )
  {
    CFPreferencesSetValue(
      CFSTR("AppleLocale"),
      v11,
      kCFPreferencesCurrentApplication,
      kCFPreferencesCurrentUser,
      kCFPreferencesAnyHost);
    _CFLocaleResetCurrent();
  }
  objc_release(v11);
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
  objc_release(v7);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v3);
}