-[DeviceOptionsIPodViewController clickEnableSpokeMenusCheckBox:]
void __cdecl -[DeviceOptionsIPodViewController clickEnableSpokeMenusCheckBox:](
        DeviceOptionsIPodViewController *self,
        SEL a2,
        id a3)
{
  NSButton *v4; // x20
  void *v5; // x21
  NSButton *v6; // x20
  NSButton *v7; // x20
  NSButton *v8; // x20
  _BOOL8 v9; // x21
  NSButton *v10; // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsIPodViewController enableSpokenMenusCheckBox](self, "enableSpokenMenusCheckBox", a3));
  v5 = -[NSButton state](v4, "state");
  objc_release(v4);
  if ( v5 == (void *)1 )
  {
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsIPodViewController enableVoiceOverCheckBox](self, "enableVoiceOverCheckBox"));
    -[NSButton setState:](v6, "setState:", 1LL);
    objc_release(v6);
    v7 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsIPodViewController useSystemVoiceCheckBox](self, "useSystemVoiceCheckBox"));
    -[NSButton setEnabled:](v7, "setEnabled:", 1LL);
    objc_release(v7);
  }
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsIPodViewController enableSpokenMenusCheckBox](self, "enableSpokenMenusCheckBox"));
  v9 = -[NSButton state](v8, "state") == 0;
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsIPodViewController enableVoiceOverCheckBox](self, "enableVoiceOverCheckBox"));
  -[NSButton setEnabled:](v10, "setEnabled:", v9);
  objc_release(v10);
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[DeviceViewController postDeviceViewDirtinessChangeNotification](self, "postDeviceViewDirtinessChangeNotification");
}