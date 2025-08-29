-[UINSSystemPreferencesSettingsManager _updatedSettingsForApplicationWithBundleIdentifier:additionalSettings:]
id __cdecl -[UINSSystemPreferencesSettingsManager _updatedSettingsForApplicationWithBundleIdentifier:additionalSettings:](
        UINSSystemPreferencesSettingsManager *self,
        SEL a2,
        id a3,
        unsigned __int64 a4)
{
  id v6; // x21
  void *v7; // x19
  void *v8; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = objc_retain(a3);
  v7 = objc_retainAutoreleasedReturnValue(
         objc_msgSend(
           (id)objc_opt_class(self),
           "_settingsForApplicationWithBundleIdentifier:additionalSettings:",
           v6,
           a4));
  objc_release(v6);
  if ( qword_100011B88 != -1 )
    dispatch_once(&qword_100011B88, &stru_10000C2B0);
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "sortedArrayUsingComparator:", &stru_10000C2F0));
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v8);
}