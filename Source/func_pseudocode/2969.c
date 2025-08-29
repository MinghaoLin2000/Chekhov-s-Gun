-[DeviceOptionsShuffleViewController clickVoiceOverCheckBox:]
void __cdecl -[DeviceOptionsShuffleViewController clickVoiceOverCheckBox:](
        DeviceOptionsShuffleViewController *self,
        SEL a2,
        id a3)
{
  NSButton *v3; // x22
  NSButton *v5; // x19
  unsigned int v6; // w21
  _BOOL8 v7; // x23
  NSPopUpButton *v8; // x20
  __int64 vars8; // [xsp+38h] [xbp+8h]

  -[DeviceViewController postDeviceViewDirtinessChangeNotification](
    self,
    "postDeviceViewDirtinessChangeNotification",
    a3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsShuffleViewController enableVoiceOverCheckBox](self, "enableVoiceOverCheckBox"));
  v6 = (unsigned int)-[NSButton isEnabled](v5, "isEnabled");
  if ( v6 )
  {
    v3 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsShuffleViewController enableVoiceOverCheckBox](self, "enableVoiceOverCheckBox"));
    v7 = (void *)-[NSButton state](v3, "state") == (void *)1;
  }
  else
  {
    v7 = 0LL;
  }
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsShuffleViewController voiceOverLanguagePopUpButton](self, "voiceOverLanguagePopUpButton"));
  -[NSPopUpButton setEnabled:](v8, "setEnabled:", v7);
  objc_release(v8);
  if ( v6 )
    objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}