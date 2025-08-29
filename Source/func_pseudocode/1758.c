-[DeviceOptionsIPodViewController clickEnableVoiceOverCheckBox:]
void __cdecl -[DeviceOptionsIPodViewController clickEnableVoiceOverCheckBox:](
        DeviceOptionsIPodViewController *self,
        SEL a2,
        id a3)
{
  NSButton *v4; // x20
  _BOOL8 v5; // x21
  NSButton *v6; // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsIPodViewController enableVoiceOverCheckBox](self, "enableVoiceOverCheckBox", a3));
  v5 = (void *)-[NSButton state](v4, "state") == (void *)1;
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsIPodViewController useSystemVoiceCheckBox](self, "useSystemVoiceCheckBox"));
  -[NSButton setEnabled:](v6, "setEnabled:", v5);
  objc_release(v6);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[DeviceViewController postDeviceViewDirtinessChangeNotification](self, "postDeviceViewDirtinessChangeNotification");
}