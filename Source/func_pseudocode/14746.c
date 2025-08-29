-[UINSSystemPreferencesSettingsManager _updateSettingsIfNeededForApplicationWithBundleIdentifier:additionalSettings:]
void __cdecl -[UINSSystemPreferencesSettingsManager _updateSettingsIfNeededForApplicationWithBundleIdentifier:additionalSettings:](
        UINSSystemPreferencesSettingsManager *self,
        SEL a2,
        id a3,
        unsigned __int64 a4)
{
  NSArray **p_settings; // x21
  NSArray *v8; // x19
  id v9; // x22
  __int64 vars8; // [xsp+38h] [xbp+8h]

  p_settings = &self->_settings;
  v8 = objc_retain(self->_settings);
  v9 = objc_retainAutoreleasedReturnValue(
         -[UINSSystemPreferencesSettingsManager _updatedSettingsForApplicationWithBundleIdentifier:additionalSettings:](
           self,
           "_updatedSettingsForApplicationWithBundleIdentifier:additionalSettings:",
           a3,
           a4));
  if ( !v8 || ((unsigned int)-[NSArray isEqual:](v8, "isEqual:", v9) & 1) == 0 )
  {
    -[UINSSystemPreferencesSettingsManager willChangeValueForKey:](self, "willChangeValueForKey:", CFSTR("settings"));
    objc_storeStrong((id *)p_settings, v9);
    -[UINSSystemPreferencesSettingsManager didChangeValueForKey:](self, "didChangeValueForKey:", CFSTR("settings"));
  }
  objc_release(v9);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v8);
}