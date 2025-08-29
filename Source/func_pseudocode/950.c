-[DeviceSettingsAudiobooksViewController saveAudiobooksToDeviceSyncPrefs:]
void __cdecl -[DeviceSettingsAudiobooksViewController saveAudiobooksToDeviceSyncPrefs:](
        DeviceSettingsAudiobooksViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  NSSet *v5; // x21
  id v6; // x21
  NSButton *v7; // x21
  NSButton *v8; // x20
  __int64 v9; // x2
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(+[NSSet set](&OBJC_CLASS___NSSet, "set"));
  objc_msgSend(v4, "setSelectedAudiobookPlaylistIDs:", v5);
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsAudiobooksViewController selectedAudiobookTrackIDs](self, "selectedAudiobookTrackIDs"));
  objc_msgSend(v4, "setSelectedAudiobookTrackIDs:", v6);
  objc_release(v6);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsAudiobooksViewController syncOntoCheckBox](self, "syncOntoCheckBox"));
  objc_msgSend(v4, "setUpdateAudiobooks:", (void *)-[NSButton state](v7, "state") == (void *)1);
  objc_release(v7);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsAudiobooksViewController allRadioButton](self, "allRadioButton"));
  if ( (void *)-[NSButton state](v8, "state") == (void *)1 )
    v9 = 1LL;
  else
    v9 = 2LL;
  objc_msgSend(v4, "setAudiobookUpdateMode:", v9);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v8);
}