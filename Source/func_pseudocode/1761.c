-[DeviceOptionsIPodViewController saveToDeviceSyncPrefs:]
void __cdecl -[DeviceOptionsIPodViewController saveToDeviceSyncPrefs:](
        DeviceOptionsIPodViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  NSButton *v5; // x21
  NSButton *v6; // x21
  NSButton *v7; // x22
  NSButton *v8; // x21
  NSButton *v9; // x20
  objc_super v10; // [xsp+0h] [xbp-30h] BYREF

  v4 = objc_retain(a3);
  v10.receiver = self;
  v10.super_class = (Class)&OBJC_CLASS___DeviceOptionsIPodViewController;
  -[DeviceOptionsViewController saveToDeviceSyncPrefs:](&v10, "saveToDeviceSyncPrefs:", v4);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsIPodViewController enableDiskUseCheckBox](self, "enableDiskUseCheckBox"));
  objc_msgSend(v4, "setEnableDiskMode:", (void *)-[NSButton state](v5, "state") == (void *)1);
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsIPodViewController enableVoiceOverCheckBox](self, "enableVoiceOverCheckBox"));
  if ( (void *)-[NSButton state](v6, "state") == (void *)1 )
  {
    objc_msgSend(v4, "setGenerateSpeechClips:", 1LL);
  }
  else
  {
    v7 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsIPodViewController enableSpokenMenusCheckBox](self, "enableSpokenMenusCheckBox"));
    objc_msgSend(v4, "setGenerateSpeechClips:", (void *)-[NSButton state](v7, "state") == (void *)1);
    objc_release(v7);
  }
  objc_release(v6);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsIPodViewController enableSpokenMenusCheckBox](self, "enableSpokenMenusCheckBox"));
  objc_msgSend(v4, "setSpeechClipsMode:", 2LL * ((void *)-[NSButton state](v8, "state") != (void *)1));
  objc_release(v8);
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsIPodViewController useSystemVoiceCheckBox](self, "useSystemVoiceCheckBox"));
  objc_msgSend(v4, "setPreferSystemVoiceForSpeechClips:", (void *)-[NSButton state](v9, "state") == (void *)1);
  objc_release(v9);
  objc_release(v4);
}