-[UINSSystemPreferencesServiceViewController _updateSettingsIfNeeded]
void __cdecl -[UINSSystemPreferencesServiceViewController _updateSettingsIfNeeded](
        UINSSystemPreferencesServiceViewController *self,
        SEL a2)
{
  id v3; // x20
  NSArray *v4; // x20
  id v5; // x23
  void *v6; // x22
  id v7; // x23
  __int64 vars8; // [xsp+38h] [xbp+8h]

  if ( !self->_isObserving )
  {
    v3 = objc_retainAutoreleasedReturnValue(
           +[UINSSystemPreferencesSettingsManager sharedManager](
             &OBJC_CLASS___UINSSystemPreferencesSettingsManager,
             "sharedManager"));
    objc_msgSend(v3, "addObserver:forKeyPath:options:context:", self, CFSTR("settings"), 0LL, off_100011A58);
    objc_release(v3);
  }
  v4 = objc_retain(self->_settings);
  v5 = objc_retainAutoreleasedReturnValue(
         +[UINSSystemPreferencesSettingsManager sharedManager](
           &OBJC_CLASS___UINSSystemPreferencesSettingsManager,
           "sharedManager"));
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "settings"));
  objc_release(v5);
  if ( !v4 || ((unsigned int)-[NSArray isEqual:](v4, "isEqual:", v6) & 1) == 0 )
  {
    v7 = objc_retainAutoreleasedReturnValue(-[UINSSystemPreferencesServiceViewController _selectedSetting](self, "_selectedSetting"));
    objc_storeStrong((id *)&self->_settings, v6);
    -[UINSSystemPreferencesServiceViewController _updateUISelectingSetting:](self, "_updateUISelectingSetting:", v7);
    objc_release(v7);
  }
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}