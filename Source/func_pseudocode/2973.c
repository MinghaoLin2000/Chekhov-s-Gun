-[DeviceOptionsShuffleViewController isDirty]
bool __cdecl -[DeviceOptionsShuffleViewController isDirty](DeviceOptionsShuffleViewController *self, SEL a2)
{
  AMPDeviceSyncPrefs *v3; // x20
  unsigned int v4; // w21
  NSButton *v5; // x22
  int v6; // w23
  AMPDeviceSyncPrefs *v7; // x20
  unsigned int v8; // w21
  NSButton *v9; // x22
  int v10; // w23
  AMPDeviceSyncPrefs *v11; // x20
  unsigned int v12; // w21
  NSButton *v13; // x22
  int v14; // w23
  AMPDeviceSyncPrefs *v15; // x20
  unsigned int v16; // w21
  NSButton *v17; // x22
  int v18; // w23
  AMPDeviceSyncPrefs *v19; // x20
  void *v20; // x21
  NSSlider *v21; // x22
  void *v22; // x23
  AMPDeviceInfo *v23; // x20
  AMPDeviceSyncPrefs *v24; // x21
  unsigned __int8 v25; // w22
  NSButton *v26; // x23
  char v27; // w22
  unsigned int v28; // w19
  AMPDeviceInfo *v30; // x20
  AMPDeviceInfo *v31; // x21
  AMPDeviceSyncPrefs *v32; // x22
  void *v33; // x23
  id v34; // x24
  objc_super v35; // [xsp+0h] [xbp-40h] BYREF

  v35.receiver = self;
  v35.super_class = (Class)&OBJC_CLASS___DeviceOptionsShuffleViewController;
  if ( -[DeviceOptionsViewController isDirty](&v35, "isDirty") )
    goto LABEL_9;
  v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v4 = (unsigned int)-[AMPDeviceSyncPrefs useSoundCheck](v3, "useSoundCheck");
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsShuffleViewController enableSoundCheckCheckBox](self, "enableSoundCheckCheckBox"));
  v6 = (void *)-[NSButton state](v5, "state") != (void *)1;
  objc_release(v5);
  objc_release(v3);
  if ( v4 == v6 )
    goto LABEL_9;
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v8 = (unsigned int)-[AMPDeviceSyncPrefs enableDiskMode](v7, "enableDiskMode");
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsShuffleViewController enableDiskUseCheckBox](self, "enableDiskUseCheckBox"));
  v10 = (void *)-[NSButton state](v9, "state") != (void *)1;
  objc_release(v9);
  objc_release(v7);
  if ( v8 == v10 )
    goto LABEL_9;
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v12 = (unsigned int)-[AMPDeviceSyncPrefs volumeLimitEnabled](v11, "volumeLimitEnabled");
  v13 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsShuffleViewController limitVolumeCheckBox](self, "limitVolumeCheckBox"));
  v14 = (void *)-[NSButton state](v13, "state") != (void *)1;
  objc_release(v13);
  objc_release(v11);
  if ( v12 == v14 )
    goto LABEL_9;
  v15 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v16 = (unsigned int)-[AMPDeviceSyncPrefs volumeLimitLocked](v15, "volumeLimitLocked");
  v17 = objc_retainAutoreleasedReturnValue(
          -[DeviceOptionsShuffleViewController preventLimitVolumeChangesCheckBox](
            self,
            "preventLimitVolumeChangesCheckBox"));
  v18 = (void *)-[NSButton state](v17, "state") != (void *)1;
  objc_release(v17);
  objc_release(v15);
  if ( v16 == v18 )
    goto LABEL_9;
  v19 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v20 = -[AMPDeviceSyncPrefs volumeLimit](v19, "volumeLimit");
  v21 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsShuffleViewController limitVolumeSlider](self, "limitVolumeSlider"));
  v22 = -[NSSlider integerValue](v21, "integerValue");
  objc_release(v21);
  objc_release(v19);
  if ( v20 != v22 )
    goto LABEL_9;
  v23 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
  if ( ((unsigned int)-[AMPDeviceInfo supportsVoiceOverKit](v23, "supportsVoiceOverKit") & 1) != 0 )
  {
    v24 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v25 = (unsigned __int8)-[AMPDeviceSyncPrefs generateSpeechClips](v24, "generateSpeechClips");
    v26 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsShuffleViewController enableVoiceOverCheckBox](self, "enableVoiceOverCheckBox"));
    v27 = v25 ^ ((void *)-[NSButton state](v26, "state") == (void *)1);
    objc_release(v26);
    objc_release(v24);
    objc_release(v23);
    if ( (v27 & 1) != 0 )
    {
LABEL_9:
      LOBYTE(v28) = 1;
      return v28;
    }
  }
  else
  {
    objc_release(v23);
  }
  v30 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
  if ( (unsigned int)-[AMPDeviceInfo supportsVoiceOverLanguageMenu](v30, "supportsVoiceOverLanguageMenu") )
  {
    v31 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
    if ( (unsigned int)-[AMPDeviceInfo hasVoiceOverKit](v31, "hasVoiceOverKit") )
    {
      v32 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
      v33 = objc_retainAutoreleasedReturnValue(-[AMPDeviceSyncPrefs voiceOverLanguageCode](v32, "voiceOverLanguageCode"));
      v34 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsShuffleViewController selectedVoiceOverLanguageCode](self, "selectedVoiceOverLanguageCode"));
      v28 = (unsigned int)objc_msgSend(v33, "isEqualToString:", v34) ^ 1;
      objc_release(v34);
      objc_release(v33);
      objc_release(v32);
    }
    else
    {
      LOBYTE(v28) = 0;
    }
    objc_release(v31);
  }
  else
  {
    LOBYTE(v28) = 0;
  }
  objc_release(v30);
  return v28;
}