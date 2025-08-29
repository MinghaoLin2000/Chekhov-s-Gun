-[UINSSystemPreferencesSettingsManager refreshSettingsWithAdditionalSettings:]
void __cdecl -[UINSSystemPreferencesSettingsManager refreshSettingsWithAdditionalSettings:](
        UINSSystemPreferencesSettingsManager *self,
        SEL a2,
        unsigned __int64 a3)
{
  id v5; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = objc_retainAutoreleasedReturnValue(-[UINSSystemPreferencesSettingsManager _bundleIDForCurrentConnection](self, "_bundleIDForCurrentConnection"));
  -[UINSSystemPreferencesSettingsManager _updateSettingsIfNeededForApplicationWithBundleIdentifier:additionalSettings:](
    self,
    "_updateSettingsIfNeededForApplicationWithBundleIdentifier:additionalSettings:",
    v5,
    a3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}