-[DeviceSettingsAudiobooksViewController areAudiobooksDirty]
bool __cdecl -[DeviceSettingsAudiobooksViewController areAudiobooksDirty](
        DeviceSettingsAudiobooksViewController *self,
        SEL a2)
{
  NSButton *v3; // x20
  int v4; // w22
  AMPDeviceSyncPrefs *v5; // x20
  unsigned int v6; // w21
  NSButton *v7; // x21
  bool v8; // w20
  __int64 v9; // x23
  AMPDeviceSyncPrefs *v10; // x21
  void *v11; // x22
  AMPDeviceSyncPrefs *v12; // x20
  void *v13; // x21
  id v14; // x19
  unsigned __int8 v15; // w22

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsAudiobooksViewController syncOntoCheckBox](self, "syncOntoCheckBox"));
  v4 = (void *)-[NSButton state](v3, "state") != (void *)1;
  objc_release(v3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v6 = (unsigned int)-[AMPDeviceSyncPrefs updateAudiobooks](v5, "updateAudiobooks");
  objc_release(v5);
  if ( v4 == v6 )
    return 1;
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsAudiobooksViewController allRadioButton](self, "allRadioButton"));
  v8 = 1;
  if ( (void *)-[NSButton state](v7, "state") == (void *)1 )
    v9 = 1LL;
  else
    v9 = 2LL;
  objc_release(v7);
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v11 = -[AMPDeviceSyncPrefs audiobookUpdateMode](v10, "audiobookUpdateMode");
  objc_release(v10);
  if ( v11 == (void *)v9 )
  {
    v12 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v13 = objc_retainAutoreleasedReturnValue(-[AMPDeviceSyncPrefs selectedAudiobookTrackIDs](v12, "selectedAudiobookTrackIDs"));
    v14 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsAudiobooksViewController selectedAudiobookTrackIDs](self, "selectedAudiobookTrackIDs"));
    v15 = (unsigned __int8)objc_msgSend(v13, "isEqualToSet:", v14);
    objc_release(v14);
    objc_release(v13);
    objc_release(v12);
    return v15 ^ 1;
  }
  return v8;
}