+[UINSSystemPreferencesLocationSetting _setting]
id __cdecl +[UINSSystemPreferencesLocationSetting _setting](id a1, SEL a2)
{
  NSBundle *v3; // x19
  char v4; // w23
  NSString *v5; // x21
  void *v6; // x22
  const __CFString *v7; // x2
  const __CFString *v8; // x3
  NSString *v9; // x23
  void *v10; // x20
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v4 = _os_feature_enabled_impl("SystemPrefsApp", "Pantheon");
  v5 = objc_retainAutoreleasedReturnValue(
         -[NSBundle localizedStringForKey:value:table:](
           v3,
           "localizedStringForKey:value:table:",
           CFSTR("LOCATION_SERVICES_TITLE"),
           CFSTR("Location Services"),
           CFSTR("UIKitMacHelperSystemPreferences")));
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "iconWithName:", CFSTR("privacy-locationservices")));
  if ( (v4 & 1) != 0 )
  {
    v7 = CFSTR("LOCATION_SERVICES_INSTRUCTIONS_FORMAT");
    v8 = CFSTR("Allow %@ to access your location in System Settings.");
  }
  else
  {
    v7 = CFSTR("LOCATION_SERVICES_INSTRUCTIONS_FORMAT_OLD");
    v8 = CFSTR("Allow %@ to access your location in System Preferences.");
  }
  v9 = objc_retainAutoreleasedReturnValue(
         -[NSBundle localizedStringForKey:value:table:](
           v3,
           "localizedStringForKey:value:table:",
           v7,
           v8,
           CFSTR("UIKitMacHelperSystemPreferences")));
  v10 = objc_retainAutoreleasedReturnValue(
          objc_msgSend(
            a1,
            "settingWithIdentifier:title:icon:preferencePaneIdentifier:preferencePaneRevealKey:usageKeys:instructionsFormat:",
            CFSTR("LocationServices"),
            v5,
            v6,
            CFSTR("com.apple.preference.security"),
            CFSTR("Privacy_LocationServices"),
            &off_10000D7D0,
            v9));
  objc_release(v9);
  objc_release(v6);
  objc_release(v5);
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v10);
}