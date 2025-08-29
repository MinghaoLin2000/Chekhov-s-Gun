-[DeviceOptionsShuffleViewController clickLimitMaxVolumeCheckBox:]
void __cdecl -[DeviceOptionsShuffleViewController clickLimitMaxVolumeCheckBox:](
        DeviceOptionsShuffleViewController *self,
        SEL a2,
        id a3)
{
  NSButton *v4; // x20
  _BOOL8 v5; // x21
  NSSlider *v6; // x22
  NSSlider *v7; // x20
  void *v8; // x21
  NSButton *v9; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  -[DeviceViewController postDeviceViewDirtinessChangeNotification](
    self,
    "postDeviceViewDirtinessChangeNotification",
    a3);
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsShuffleViewController limitVolumeCheckBox](self, "limitVolumeCheckBox"));
  v5 = (void *)-[NSButton state](v4, "state") == (void *)1;
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsShuffleViewController limitVolumeSlider](self, "limitVolumeSlider"));
  -[NSSlider setEnabled:](v6, "setEnabled:", v5);
  objc_release(v6);
  objc_release(v4);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsShuffleViewController limitVolumeSlider](self, "limitVolumeSlider"));
  v8 = -[NSSlider isEnabled](v7, "isEnabled");
  v9 = objc_retainAutoreleasedReturnValue(
         -[DeviceOptionsShuffleViewController preventLimitVolumeChangesCheckBox](
           self,
           "preventLimitVolumeChangesCheckBox"));
  -[NSButton setEnabled:](v9, "setEnabled:", v8);
  objc_release(v9);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v7);
}