-[DeviceOptionsShuffleViewController saveToDeviceSyncPrefs:]
void __cdecl -[DeviceOptionsShuffleViewController saveToDeviceSyncPrefs:](
        DeviceOptionsShuffleViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  NSButton *v5; // x21
  NSButton *v6; // x21
  NSButton *v7; // x21
  NSButton *v8; // x21
  NSSlider *v9; // x21
  AMPDeviceInfo *v10; // x21
  unsigned int v11; // w22
  NSButton *v12; // x21
  AMPDeviceInfo *v13; // x21
  AMPDeviceInfo *v14; // x22
  unsigned int v15; // w23
  objc_super v16; // [xsp+0h] [xbp-40h] BYREF

  v4 = objc_retain(a3);
  v16.receiver = self;
  v16.super_class = (Class)&OBJC_CLASS___DeviceOptionsShuffleViewController;
  -[DeviceOptionsViewController saveToDeviceSyncPrefs:](&v16, "saveToDeviceSyncPrefs:", v4);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsShuffleViewController enableSoundCheckCheckBox](self, "enableSoundCheckCheckBox"));
  objc_msgSend(v4, "setUseSoundCheck:", (void *)-[NSButton state](v5, "state") == (void *)1);
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsShuffleViewController enableDiskUseCheckBox](self, "enableDiskUseCheckBox"));
  objc_msgSend(v4, "setEnableDiskMode:", (void *)-[NSButton state](v6, "state") == (void *)1);
  objc_release(v6);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsShuffleViewController limitVolumeCheckBox](self, "limitVolumeCheckBox"));
  objc_msgSend(v4, "setVolumeLimitEnabled:", (void *)-[NSButton state](v7, "state") == (void *)1);
  objc_release(v7);
  v8 = objc_retainAutoreleasedReturnValue(
         -[DeviceOptionsShuffleViewController preventLimitVolumeChangesCheckBox](
           self,
           "preventLimitVolumeChangesCheckBox"));
  objc_msgSend(v4, "setVolumeLimitLocked:", (void *)-[NSButton state](v8, "state") == (void *)1);
  objc_release(v8);
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsShuffleViewController limitVolumeSlider](self, "limitVolumeSlider"));
  objc_msgSend(v4, "setVolumeLimit:", -[NSSlider integerValue](v9, "integerValue"));
  objc_release(v9);
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
  v11 = (unsigned int)-[AMPDeviceInfo supportsVoiceOverKit](v10, "supportsVoiceOverKit");
  objc_release(v10);
  if ( v11 )
  {
    v12 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsShuffleViewController enableVoiceOverCheckBox](self, "enableVoiceOverCheckBox"));
    objc_msgSend(v4, "setGenerateSpeechClips:", (void *)-[NSButton state](v12, "state") == (void *)1);
    objc_release(v12);
  }
  v13 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
  if ( !(unsigned int)-[AMPDeviceInfo supportsVoiceOverLanguageMenu](v13, "supportsVoiceOverLanguageMenu") )
    goto LABEL_6;
  v14 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
  v15 = (unsigned int)-[AMPDeviceInfo hasVoiceOverKit](v14, "hasVoiceOverKit");
  objc_release(v14);
  objc_release(v13);
  if ( v15 )
  {
    v13 = (AMPDeviceInfo *)objc_retainAutoreleasedReturnValue(
                             -[DeviceOptionsShuffleViewController selectedVoiceOverLanguageCode](
                               self,
                               "selectedVoiceOverLanguageCode"));
    objc_msgSend(v4, "setVoiceOverLanguageCode:", v13);
LABEL_6:
    objc_release(v13);
  }
  objc_release(v4);
}