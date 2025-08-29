+[UINSSystemPreferencesNotificationSetting settingForApplicationWithBundleIdentifier:]
id __cdecl +[UINSSystemPreferencesNotificationSetting settingForApplicationWithBundleIdentifier:](id a1, SEL a2, id a3)
{
  id v4; // x24
  NSBundle *v5; // x19
  char v6; // w25
  NSString *v7; // x21
  void *v8; // x22
  NSString *v9; // x23
  const __CFString *v10; // x2
  const __CFString *v11; // x3
  NSString *v12; // x24
  void *v13; // x20
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v6 = _os_feature_enabled_impl("SystemPrefsApp", "Pantheon");
  v7 = objc_retainAutoreleasedReturnValue(
         -[NSBundle localizedStringForKey:value:table:](
           v5,
           "localizedStringForKey:value:table:",
           CFSTR("NOTIFICATION_CENTER_TITLE"),
           CFSTR("Notifications"),
           CFSTR("UIKitMacHelperSystemPreferences")));
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "iconWithName:", CFSTR("preferences-notifications")));
  v9 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("id=%@"), v4));
  objc_release(v4);
  if ( (v6 & 1) != 0 )
  {
    v10 = CFSTR("NOTIFICATION_CENTER_INSTRUCTIONS_FORMAT");
    v11 = CFSTR("Change your notifications settings in System Settings.");
  }
  else
  {
    v10 = CFSTR("NOTIFICATION_CENTER_INSTRUCTIONS_FORMAT_OLD");
    v11 = CFSTR("Change your notifications settings in System Preferences.");
  }
  v12 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v5,
            "localizedStringForKey:value:table:",
            v10,
            v11,
            CFSTR("UIKitMacHelperSystemPreferences")));
  v13 = objc_retainAutoreleasedReturnValue(
          objc_msgSend(
            a1,
            "settingWithIdentifier:title:icon:preferencePaneIdentifier:preferencePaneRevealKey:usageKeys:instructionsFormat:",
            CFSTR("NotificationCenter"),
            v7,
            v8,
            CFSTR("com.apple.preference.notifications"),
            v9,
            &__NSArray0__struct,
            v12));
  objc_release(v12);
  objc_release(v9);
  objc_release(v8);
  objc_release(v7);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v13);
}