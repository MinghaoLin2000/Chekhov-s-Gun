-[DeviceOptionsShuffleViewController selectedVoiceOverLanguageCode]
id __cdecl -[DeviceOptionsShuffleViewController selectedVoiceOverLanguageCode](
        DeviceOptionsShuffleViewController *self,
        SEL a2)
{
  AMPDeviceSyncPrefs *v3; // x20
  void *v4; // x21
  NSPopUpButton *v5; // x19
  void *v6; // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v4 = objc_retainAutoreleasedReturnValue(-[AMPDeviceSyncPrefs voiceOverSupportedLanguageCodes](v3, "voiceOverSupportedLanguageCodes"));
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsShuffleViewController voiceOverLanguagePopUpButton](self, "voiceOverLanguagePopUpButton"));
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectAtIndexedSubscript:", -[NSPopUpButton indexOfSelectedItem](v5, "indexOfSelectedItem")));
  objc_release(v5);
  objc_release(v4);
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}