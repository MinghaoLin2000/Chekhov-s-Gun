+[UINSSystemPreferencesSettingsManager _settingsForApplicationWithBundleIdentifier:additionalSettings:]
id __cdecl +[UINSSystemPreferencesSettingsManager _settingsForApplicationWithBundleIdentifier:additionalSettings:](
        id a1,
        SEL a2,
        id a3,
        unsigned __int64 a4)
{
  char v4; // w22
  id v5; // x19
  void *v6; // x20
  id v7; // x21
  id v8; // x22
  id v9; // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = a4;
  v5 = objc_retain(a3);
  v6 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v7 = objc_retainAutoreleasedReturnValue(
         +[UINSSystemPreferencesLocationSetting settingForApplicationWithBundleIdentifier:](
           &OBJC_CLASS___UINSSystemPreferencesLocationSetting,
           "settingForApplicationWithBundleIdentifier:",
           v5));
  if ( v7 )
    objc_msgSend(v6, "addObject:", v7);
  if ( (v4 & 1) != 0 )
  {
    v8 = objc_retainAutoreleasedReturnValue(
           +[UINSSystemPreferencesNotificationSetting settingForApplicationWithBundleIdentifier:](
             &OBJC_CLASS___UINSSystemPreferencesNotificationSetting,
             "settingForApplicationWithBundleIdentifier:",
             v5));
    if ( v8 )
      objc_msgSend(v6, "addObject:", v8);
    objc_release(v8);
  }
  v9 = objc_retainAutoreleasedReturnValue(
         +[UINSSystemPreferencesTCCSetting settingsForApplicationWithBundleIdentifier:](
           &OBJC_CLASS___UINSSystemPreferencesTCCSetting,
           "settingsForApplicationWithBundleIdentifier:",
           v5));
  objc_msgSend(v6, "addObjectsFromArray:", v9);
  objc_release(v9);
  objc_release(v7);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}