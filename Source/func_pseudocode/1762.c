-[DeviceOptionsIPodViewController isDirty]
bool __cdecl -[DeviceOptionsIPodViewController isDirty](DeviceOptionsIPodViewController *self, SEL a2)
{
  AMPDeviceSyncPrefs *v3; // x20
  unsigned int v4; // w21
  NSButton *v5; // x22
  int v6; // w23
  NSButton *v7; // x20
  AMPDeviceSyncPrefs *v8; // x21
  unsigned __int8 v9; // w22
  NSButton *v10; // x23
  char v11; // w22
  NSButton *v12; // x20
  _BOOL4 v13; // w22
  AMPDeviceSyncPrefs *v14; // x20
  void *v15; // x21
  AMPDeviceSyncPrefs *v16; // x20
  unsigned __int8 v17; // w21
  NSButton *v18; // x19
  bool v19; // w22
  objc_super v21; // [xsp+0h] [xbp-40h] BYREF

  v21.receiver = self;
  v21.super_class = (Class)&OBJC_CLASS___DeviceOptionsIPodViewController;
  if ( -[DeviceOptionsViewController isDirty](&v21, "isDirty") )
    return 1;
  v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v4 = (unsigned int)-[AMPDeviceSyncPrefs enableDiskMode](v3, "enableDiskMode");
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsIPodViewController enableDiskUseCheckBox](self, "enableDiskUseCheckBox"));
  v6 = (void *)-[NSButton state](v5, "state") != (void *)1;
  objc_release(v5);
  objc_release(v3);
  if ( v4 == v6 )
    return 1;
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsIPodViewController enableVoiceOverCheckBox](self, "enableVoiceOverCheckBox"));
  if ( (unsigned int)-[NSButton isHidden](v7, "isHidden") )
  {
    objc_release(v7);
  }
  else
  {
    v8 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v9 = (unsigned __int8)-[AMPDeviceSyncPrefs generateSpeechClips](v8, "generateSpeechClips");
    v10 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsIPodViewController enableVoiceOverCheckBox](self, "enableVoiceOverCheckBox"));
    v11 = v9 ^ ((void *)-[NSButton state](v10, "state") == (void *)1);
    objc_release(v10);
    objc_release(v8);
    objc_release(v7);
    if ( (v11 & 1) != 0 )
      return 1;
  }
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsIPodViewController enableSpokenMenusCheckBox](self, "enableSpokenMenusCheckBox"));
  v13 = (void *)-[NSButton state](v12, "state") != (void *)1;
  objc_release(v12);
  v14 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v15 = -[AMPDeviceSyncPrefs speechClipsMode](v14, "speechClipsMode");
  objc_release(v14);
  if ( v15 == (void *)(2LL * v13) )
  {
    v16 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v17 = (unsigned __int8)-[AMPDeviceSyncPrefs preferSystemVoiceForSpeechClips](v16, "preferSystemVoiceForSpeechClips");
    v18 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsIPodViewController useSystemVoiceCheckBox](self, "useSystemVoiceCheckBox"));
    v19 = (void *)-[NSButton state](v18, "state") == (void *)1;
    objc_release(v18);
    objc_release(v16);
    return v17 ^ v19;
  }
  return 1;
}