-[UINSSystemPreferencesSettingsManager refreshSettingsWithAdditionalSettings:completionHandler:]
void __cdecl -[UINSSystemPreferencesSettingsManager refreshSettingsWithAdditionalSettings:completionHandler:](
        UINSSystemPreferencesSettingsManager *self,
        SEL a2,
        unsigned __int64 a3,
        id a4)
{
  void (__fastcall **v6)(id, bool); // x21
  id v7; // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = (void (__fastcall **)(id, bool))objc_retain(a4);
  v7 = objc_retainAutoreleasedReturnValue(-[UINSSystemPreferencesSettingsManager _bundleIDForCurrentConnection](self, "_bundleIDForCurrentConnection"));
  -[UINSSystemPreferencesSettingsManager _updateSettingsIfNeededForApplicationWithBundleIdentifier:additionalSettings:](
    self,
    "_updateSettingsIfNeededForApplicationWithBundleIdentifier:additionalSettings:",
    v7,
    a3);
  objc_release(v7);
  v6[2](v6, -[NSArray count](self->_settings, "count") != 0);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}