-[DeviceSettingsPodcastsViewController nodesDidChangeNotification:]
void __cdecl -[DeviceSettingsPodcastsViewController nodesDidChangeNotification:](
        DeviceSettingsPodcastsViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x20
  objc_super v5; // [xsp+0h] [xbp-20h] BYREF

  v4 = objc_retain(a3);
  -[DeviceSettingsPodcastsViewController updateTabView](self, "updateTabView");
  -[DeviceSettingsViewController updatePanelUIState](self, "updatePanelUIState");
  v5.receiver = self;
  v5.super_class = (Class)&OBJC_CLASS___DeviceSettingsPodcastsViewController;
  -[DeviceSettingsViewController nodesDidChangeNotification:](&v5, "nodesDidChangeNotification:", v4);
  objc_release(v4);
}