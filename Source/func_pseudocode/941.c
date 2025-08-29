-[DeviceSettingsAudiobooksViewController clickAllRadioButton:]
void __cdecl -[DeviceSettingsAudiobooksViewController clickAllRadioButton:](
        DeviceSettingsAudiobooksViewController *self,
        SEL a2,
        id a3)
{
  NSButton *v4; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsAudiobooksViewController updateSelectedRadioButton](self, "updateSelectedRadioButton", a3));
  -[NSButton setState:](v4, "setState:", 0LL);
  objc_release(v4);
  -[DeviceSettingsAudiobooksViewController updateTabView](self, "updateTabView");
  -[DeviceSettingsViewController updatePanelUIState](self, "updatePanelUIState");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[DeviceViewController postDeviceViewDirtinessChangeNotification](self, "postDeviceViewDirtinessChangeNotification");
}