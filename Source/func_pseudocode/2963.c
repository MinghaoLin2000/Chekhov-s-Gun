-[DeviceOptionsShuffleViewController loadUIFromPrefs]
void __cdecl -[DeviceOptionsShuffleViewController loadUIFromPrefs](DeviceOptionsShuffleViewController *self, SEL a2)
{
  NSSlider *v3; // x20
  NSSlider *v4; // x20
  AMPDeviceSyncPrefs *v5; // x20
  __int64 v6; // x21
  NSButton *v7; // x22
  AMPDeviceSyncPrefs *v8; // x20
  __int64 v9; // x21
  NSButton *v10; // x22
  AMPDeviceSyncPrefs *v11; // x20
  __int64 v12; // x21
  NSButton *v13; // x22
  AMPDeviceSyncPrefs *v14; // x20
  void *v15; // x21
  NSSlider *v16; // x22
  NSButton *v17; // x20
  _BOOL8 v18; // x21
  NSSlider *v19; // x22
  AMPDeviceSyncPrefs *v20; // x20
  __int64 v21; // x21
  NSButton *v22; // x22
  NSSlider *v23; // x20
  void *v24; // x21
  NSButton *v25; // x22
  AMPDeviceInfo *v26; // x20
  AMPDeviceSyncPrefs *v27; // x20
  unsigned int v28; // w21
  __int64 v29; // x23
  NSButton *v30; // x20
  NSButton *v31; // x24
  AMPDeviceInfo *v32; // x20
  void *v33; // x21
  NSButton *v34; // x22
  _BOOL8 v35; // x21
  NSPopUpButton *v36; // x22
  AMPDeviceInfo *v37; // x20
  AMPDeviceInfo *v38; // x21
  unsigned int v39; // w22
  NSPopUpButton *v40; // x20
  AMPDeviceSyncPrefs *v41; // x21
  void *v42; // x22
  char *v43; // x20
  char *i; // x21
  AMPDeviceSyncPrefs *v45; // x23
  void *v46; // x24
  void *v47; // x22
  AMPDeviceSyncPrefs *v48; // x24
  void *v49; // x25
  void *v50; // x23
  NSPopUpButton *v51; // x24
  AMPDeviceSyncPrefs *v52; // x24
  void *v53; // x25
  unsigned int v54; // w26
  NSPopUpButton *v55; // x24
  NSTextField *v56; // x20
  NSPopUpButton *v57; // x20
  NSTextField *v58; // x19
  objc_super v59; // [xsp+0h] [xbp-50h] BYREF

  if ( !(unsigned int)-[DeviceOptionsShuffleViewController isViewLoaded](self, "isViewLoaded") )
    return;
  v59.receiver = self;
  v59.super_class = (Class)&OBJC_CLASS___DeviceOptionsShuffleViewController;
  -[DeviceOptionsViewController loadUIFromPrefs](&v59, "loadUIFromPrefs");
  v3 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsShuffleViewController limitVolumeSlider](self, "limitVolumeSlider"));
  -[NSSlider setMinValue:](v3, "setMinValue:", 0.0);
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsShuffleViewController limitVolumeSlider](self, "limitVolumeSlider"));
  -[NSSlider setMaxValue:](v4, "setMaxValue:", 40.0);
  objc_release(v4);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v6 = (unsigned int)-[AMPDeviceSyncPrefs useSoundCheck](v5, "useSoundCheck");
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsShuffleViewController enableSoundCheckCheckBox](self, "enableSoundCheckCheckBox"));
  -[NSButton setState:](v7, "setState:", v6);
  objc_release(v7);
  objc_release(v5);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v9 = (unsigned int)-[AMPDeviceSyncPrefs enableDiskMode](v8, "enableDiskMode");
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsShuffleViewController enableDiskUseCheckBox](self, "enableDiskUseCheckBox"));
  -[NSButton setState:](v10, "setState:", v9);
  objc_release(v10);
  objc_release(v8);
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v12 = (unsigned int)-[AMPDeviceSyncPrefs volumeLimitEnabled](v11, "volumeLimitEnabled");
  v13 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsShuffleViewController limitVolumeCheckBox](self, "limitVolumeCheckBox"));
  -[NSButton setState:](v13, "setState:", v12);
  objc_release(v13);
  objc_release(v11);
  v14 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v15 = -[AMPDeviceSyncPrefs volumeLimit](v14, "volumeLimit");
  v16 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsShuffleViewController limitVolumeSlider](self, "limitVolumeSlider"));
  -[NSSlider setIntegerValue:](v16, "setIntegerValue:", v15);
  objc_release(v16);
  objc_release(v14);
  v17 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsShuffleViewController limitVolumeCheckBox](self, "limitVolumeCheckBox"));
  v18 = (void *)-[NSButton state](v17, "state") == (void *)1;
  v19 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsShuffleViewController limitVolumeSlider](self, "limitVolumeSlider"));
  -[NSSlider setEnabled:](v19, "setEnabled:", v18);
  objc_release(v19);
  objc_release(v17);
  v20 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v21 = (unsigned int)-[AMPDeviceSyncPrefs volumeLimitLocked](v20, "volumeLimitLocked");
  v22 = objc_retainAutoreleasedReturnValue(
          -[DeviceOptionsShuffleViewController preventLimitVolumeChangesCheckBox](
            self,
            "preventLimitVolumeChangesCheckBox"));
  -[NSButton setState:](v22, "setState:", v21);
  objc_release(v22);
  objc_release(v20);
  v23 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsShuffleViewController limitVolumeSlider](self, "limitVolumeSlider"));
  v24 = -[NSSlider isEnabled](v23, "isEnabled");
  v25 = objc_retainAutoreleasedReturnValue(
          -[DeviceOptionsShuffleViewController preventLimitVolumeChangesCheckBox](
            self,
            "preventLimitVolumeChangesCheckBox"));
  -[NSButton setEnabled:](v25, "setEnabled:", v24);
  objc_release(v25);
  objc_release(v23);
  v26 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
  LODWORD(v24) = (unsigned int)-[AMPDeviceInfo supportsVoiceOverKit](v26, "supportsVoiceOverKit");
  objc_release(v26);
  if ( (_DWORD)v24 )
  {
    v27 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v28 = (unsigned int)-[AMPDeviceSyncPrefs generateSpeechClips](v27, "generateSpeechClips");
    if ( v28 )
    {
      v25 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
      v29 = (unsigned int)-[NSButton hasVoiceOverKit](v25, "hasVoiceOverKit");
    }
    else
    {
      v29 = 0LL;
    }
    v31 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsShuffleViewController enableVoiceOverCheckBox](self, "enableVoiceOverCheckBox"));
    -[NSButton setState:](v31, "setState:", v29);
    objc_release(v31);
    if ( v28 )
      objc_release(v25);
    objc_release(v27);
    v32 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
    v33 = -[AMPDeviceInfo hasVoiceOverKit](v32, "hasVoiceOverKit");
    v34 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsShuffleViewController enableVoiceOverCheckBox](self, "enableVoiceOverCheckBox"));
    -[NSButton setEnabled:](v34, "setEnabled:", v33);
    objc_release(v34);
    objc_release(v32);
    v30 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsShuffleViewController enableVoiceOverCheckBox](self, "enableVoiceOverCheckBox"));
    v35 = (void *)-[NSButton state](v30, "state") == (void *)1;
    v36 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsShuffleViewController voiceOverLanguagePopUpButton](self, "voiceOverLanguagePopUpButton"));
    -[NSPopUpButton setEnabled:](v36, "setEnabled:", v35);
    objc_release(v36);
  }
  else
  {
    v30 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsShuffleViewController enableVoiceOverCheckBox](self, "enableVoiceOverCheckBox"));
    -[NSButton setHidden:](v30, "setHidden:", 1LL);
  }
  objc_release(v30);
  v37 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
  if ( ((unsigned int)-[AMPDeviceInfo supportsVoiceOverLanguageMenu](v37, "supportsVoiceOverLanguageMenu") & 1) == 0 )
  {
    objc_release(v37);
    goto LABEL_19;
  }
  v38 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
  v39 = (unsigned int)-[AMPDeviceInfo hasVoiceOverKit](v38, "hasVoiceOverKit");
  objc_release(v38);
  objc_release(v37);
  if ( !v39 )
  {
LABEL_19:
    v56 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsShuffleViewController voiceOverLanguageLabelText](self, "voiceOverLanguageLabelText"));
    -[NSTextField setHidden:](v56, "setHidden:", 1LL);
    objc_release(v56);
    v57 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsShuffleViewController voiceOverLanguagePopUpButton](self, "voiceOverLanguagePopUpButton"));
    -[NSPopUpButton setHidden:](v57, "setHidden:", 1LL);
    objc_release(v57);
    v58 = objc_retainAutoreleasedReturnValue(
            -[DeviceOptionsShuffleViewController voiceOverLanguageExplanationText](
              self,
              "voiceOverLanguageExplanationText"));
    -[NSTextField setHidden:](v58, "setHidden:", 1LL);
    objc_release(v58);
    return;
  }
  v40 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsShuffleViewController voiceOverLanguagePopUpButton](self, "voiceOverLanguagePopUpButton"));
  -[NSPopUpButton removeAllItems](v40, "removeAllItems");
  objc_release(v40);
  v41 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v42 = objc_retainAutoreleasedReturnValue(-[AMPDeviceSyncPrefs voiceOverSupportedLanguageNames](v41, "voiceOverSupportedLanguageNames"));
  v43 = (char *)objc_msgSend(v42, "count");
  objc_release(v42);
  objc_release(v41);
  if ( v43 )
  {
    for ( i = 0LL; i != v43; ++i )
    {
      v45 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
      v46 = objc_retainAutoreleasedReturnValue(-[AMPDeviceSyncPrefs voiceOverSupportedLanguageNames](v45, "voiceOverSupportedLanguageNames"));
      v47 = objc_retainAutoreleasedReturnValue(objc_msgSend(v46, "objectAtIndexedSubscript:", i));
      objc_release(v46);
      objc_release(v45);
      v48 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
      v49 = objc_retainAutoreleasedReturnValue(-[AMPDeviceSyncPrefs voiceOverSupportedLanguageCodes](v48, "voiceOverSupportedLanguageCodes"));
      v50 = objc_retainAutoreleasedReturnValue(objc_msgSend(v49, "objectAtIndexedSubscript:", i));
      objc_release(v49);
      objc_release(v48);
      v51 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsShuffleViewController voiceOverLanguagePopUpButton](self, "voiceOverLanguagePopUpButton"));
      -[NSPopUpButton addItemWithTitle:](v51, "addItemWithTitle:", v47);
      objc_release(v51);
      v52 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
      v53 = objc_retainAutoreleasedReturnValue(-[AMPDeviceSyncPrefs voiceOverLanguageCode](v52, "voiceOverLanguageCode"));
      v54 = (unsigned int)objc_msgSend(v50, "isEqualToString:", v53);
      objc_release(v53);
      objc_release(v52);
      if ( v54 )
      {
        v55 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsShuffleViewController voiceOverLanguagePopUpButton](self, "voiceOverLanguagePopUpButton"));
        -[NSPopUpButton selectItemAtIndex:](v55, "selectItemAtIndex:", i);
        objc_release(v55);
      }
      objc_release(v50);
      objc_release(v47);
    }
  }
}