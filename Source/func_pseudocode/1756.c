-[DeviceOptionsIPodViewController loadUIFromPrefs]
void __cdecl -[DeviceOptionsIPodViewController loadUIFromPrefs](DeviceOptionsIPodViewController *self, SEL a2)
{
  AMPDeviceSyncPrefs *v3; // x20
  __int64 v4; // x21
  NSButton *v5; // x22
  AMPDeviceInfo *v6; // x20
  __int64 v7; // x21
  NSButton *v8; // x22
  AMPDeviceInfo *v9; // x20
  __int64 v10; // x21
  NSButton *v11; // x22
  AMPDeviceInfo *v12; // x20
  unsigned int v13; // w21
  __int64 v14; // x23
  NSButton *v15; // x24
  AMPDeviceInfo *v16; // x20
  AMPDeviceInfo *v17; // x21
  unsigned int v18; // w22
  AMPDeviceSyncPrefs *v19; // x20
  __int64 v20; // x21
  NSButton *v21; // x22
  NSButton *v22; // x20
  void *v23; // x21
  AMPDeviceSyncPrefs *v24; // x20
  _BOOL8 v25; // x21
  NSButton *v26; // x22
  NSButton *v27; // x20
  _BOOL8 v28; // x21
  NSButton *v29; // x22
  NSButton *v30; // x20
  NSButton *v31; // x20
  NSButton *v32; // x20
  NSButton *v33; // x20
  NSButton *v34; // x20
  AMPDeviceSyncPrefs *v35; // x20
  NSButton *v36; // x20
  NSButton *v37; // x20
  NSButton *v38; // x20
  _BOOL8 v39; // x21
  NSButton *v40; // x22
  __int64 v41; // x21
  NSButton *v42; // x19
  objc_super v43; // [xsp+0h] [xbp-40h] BYREF

  if ( (unsigned int)-[DeviceOptionsIPodViewController isViewLoaded](self, "isViewLoaded") )
  {
    v43.receiver = self;
    v43.super_class = (Class)&OBJC_CLASS___DeviceOptionsIPodViewController;
    -[DeviceOptionsViewController loadUIFromPrefs](&v43, "loadUIFromPrefs");
    v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v4 = (unsigned int)-[AMPDeviceSyncPrefs enableDiskMode](v3, "enableDiskMode");
    v5 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsIPodViewController enableDiskUseCheckBox](self, "enableDiskUseCheckBox"));
    -[NSButton setState:](v5, "setState:", v4);
    objc_release(v5);
    objc_release(v3);
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
    v7 = (unsigned int)-[AMPDeviceInfo supportsVoiceOverKit](v6, "supportsVoiceOverKit") ^ 1;
    v8 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsIPodViewController enableVoiceOverCheckBox](self, "enableVoiceOverCheckBox"));
    -[NSButton setHidden:](v8, "setHidden:", v7);
    objc_release(v8);
    objc_release(v6);
    v9 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
    v10 = (unsigned int)-[AMPDeviceInfo supportsSpeechClips](v9, "supportsSpeechClips") ^ 1;
    v11 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsIPodViewController enableSpokenMenusCheckBox](self, "enableSpokenMenusCheckBox"));
    -[NSButton setHidden:](v11, "setHidden:", v10);
    objc_release(v11);
    objc_release(v9);
    v12 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
    v13 = (unsigned int)-[AMPDeviceInfo supportsVoiceOverKit](v12, "supportsVoiceOverKit");
    if ( v13 )
    {
      v11 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
      v14 = (__int64)-[NSButton supportsVoiceOverLanguageMenu](v11, "supportsVoiceOverLanguageMenu");
    }
    else
    {
      v14 = 1LL;
    }
    v15 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsIPodViewController useSystemVoiceCheckBox](self, "useSystemVoiceCheckBox"));
    -[NSButton setHidden:](v15, "setHidden:", v14);
    objc_release(v15);
    if ( v13 )
      objc_release(v11);
    objc_release(v12);
    v16 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
    if ( ((unsigned int)-[AMPDeviceInfo supportsVoiceOverKit](v16, "supportsVoiceOverKit") & 1) != 0 )
    {
      v17 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
      v18 = (unsigned int)-[AMPDeviceInfo hasVoiceOverKit](v17, "hasVoiceOverKit");
      objc_release(v17);
      objc_release(v16);
      if ( v18 )
      {
        v19 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
        v20 = (unsigned int)-[AMPDeviceSyncPrefs generateSpeechClips](v19, "generateSpeechClips");
        v21 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsIPodViewController enableVoiceOverCheckBox](self, "enableVoiceOverCheckBox"));
        -[NSButton setState:](v21, "setState:", v20);
        objc_release(v21);
        objc_release(v19);
        v22 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsIPodViewController enableVoiceOverCheckBox](self, "enableVoiceOverCheckBox"));
        v23 = -[NSButton state](v22, "state");
        objc_release(v22);
        if ( v23 == (void *)1 )
        {
          v24 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
          v25 = -[AMPDeviceSyncPrefs speechClipsMode](v24, "speechClipsMode") == 0LL;
          v26 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsIPodViewController enableSpokenMenusCheckBox](self, "enableSpokenMenusCheckBox"));
          -[NSButton setState:](v26, "setState:", v25);
          objc_release(v26);
          objc_release(v24);
          v27 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsIPodViewController enableSpokenMenusCheckBox](self, "enableSpokenMenusCheckBox"));
          v28 = -[NSButton state](v27, "state") == 0;
          v29 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsIPodViewController enableVoiceOverCheckBox](self, "enableVoiceOverCheckBox"));
          -[NSButton setEnabled:](v29, "setEnabled:", v28);
          objc_release(v29);
        }
        else
        {
          v36 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsIPodViewController enableSpokenMenusCheckBox](self, "enableSpokenMenusCheckBox"));
          -[NSButton setState:](v36, "setState:", 0LL);
          objc_release(v36);
          v27 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsIPodViewController enableVoiceOverCheckBox](self, "enableVoiceOverCheckBox"));
          -[NSButton setEnabled:](v27, "setEnabled:", 1LL);
        }
        objc_release(v27);
        v37 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsIPodViewController enableSpokenMenusCheckBox](self, "enableSpokenMenusCheckBox"));
        -[NSButton setEnabled:](v37, "setEnabled:", 1LL);
        objc_release(v37);
        v38 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsIPodViewController enableVoiceOverCheckBox](self, "enableVoiceOverCheckBox"));
        v39 = (void *)-[NSButton state](v38, "state") == (void *)1;
        v40 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsIPodViewController useSystemVoiceCheckBox](self, "useSystemVoiceCheckBox"));
        -[NSButton setEnabled:](v40, "setEnabled:", v39);
        objc_release(v40);
        objc_release(v38);
        v35 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
        v41 = (unsigned int)-[AMPDeviceSyncPrefs preferSystemVoiceForSpeechClips](
                              v35,
                              "preferSystemVoiceForSpeechClips");
        v42 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsIPodViewController useSystemVoiceCheckBox](self, "useSystemVoiceCheckBox"));
        -[NSButton setState:](v42, "setState:", v41);
        objc_release(v42);
        goto LABEL_15;
      }
    }
    else
    {
      objc_release(v16);
    }
    v30 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsIPodViewController enableVoiceOverCheckBox](self, "enableVoiceOverCheckBox"));
    -[NSButton setEnabled:](v30, "setEnabled:", 0LL);
    objc_release(v30);
    v31 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsIPodViewController enableVoiceOverCheckBox](self, "enableVoiceOverCheckBox"));
    -[NSButton setState:](v31, "setState:", 0LL);
    objc_release(v31);
    v32 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsIPodViewController enableSpokenMenusCheckBox](self, "enableSpokenMenusCheckBox"));
    -[NSButton setEnabled:](v32, "setEnabled:", 0LL);
    objc_release(v32);
    v33 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsIPodViewController enableSpokenMenusCheckBox](self, "enableSpokenMenusCheckBox"));
    -[NSButton setState:](v33, "setState:", 0LL);
    objc_release(v33);
    v34 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsIPodViewController useSystemVoiceCheckBox](self, "useSystemVoiceCheckBox"));
    -[NSButton setEnabled:](v34, "setEnabled:", 0LL);
    objc_release(v34);
    v35 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsIPodViewController useSystemVoiceCheckBox](self, "useSystemVoiceCheckBox"));
    -[AMPDeviceSyncPrefs setState:](v35, "setState:", 0LL);
LABEL_15:
    objc_release(v35);
  }
}