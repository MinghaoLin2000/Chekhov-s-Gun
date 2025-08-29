-[DeviceOptionsIOSViewController loadUIFromPrefs]
void __cdecl -[DeviceOptionsIOSViewController loadUIFromPrefs](DeviceOptionsIOSViewController *self, SEL a2)
{
  id v3; // x20
  NSButton *v4; // x21
  id v5; // x21
  NSButton *v6; // x22
  AMPDeviceSyncPrefs *v7; // x22
  __int64 v8; // x23
  NSButton *v9; // x24
  AMPDeviceInfo *v10; // x22
  __int64 v11; // x23
  NSButton *v12; // x24
  AMPDeviceSyncPrefs *v13; // x22
  __int64 v14; // x23
  NSButton *v15; // x19
  objc_super v16; // [xsp+0h] [xbp-40h] BYREF

  if ( (unsigned int)-[DeviceOptionsIOSViewController isViewLoaded](self, "isViewLoaded") )
  {
    v16.receiver = self;
    v16.super_class = (Class)&OBJC_CLASS___DeviceOptionsIOSViewController;
    -[DeviceOptionsViewController loadUIFromPrefs](&v16, "loadUIFromPrefs");
    v3 = objc_retainAutoreleasedReturnValue(
           -[DeviceViewController deviceStringForStringParameterizedKey:](
             self,
             "deviceStringForStringParameterizedKey:",
             CFSTR("ShowOnWifi %@")));
    v4 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsIOSViewController showOnWiFiCheckBox](self, "showOnWiFiCheckBox"));
    -[NSButton setTitle:](v4, "setTitle:", v3);
    objc_release(v4);
    v5 = objc_retainAutoreleasedReturnValue(
           -[DeviceViewController deviceStringForStringParameterizedKey:](
             self,
             "deviceStringForStringParameterizedKey:",
             CFSTR("AutomaticallySync %@")));
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsViewController automaticallySyncCheckBox](self, "automaticallySyncCheckBox"));
    -[NSButton setTitle:](v6, "setTitle:", v5);
    objc_release(v6);
    v7 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v8 = (unsigned int)-[AMPDeviceSyncPrefs syncOverWifi](v7, "syncOverWifi");
    v9 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsIOSViewController showOnWiFiCheckBox](self, "showOnWiFiCheckBox"));
    -[NSButton setState:](v9, "setState:", v8);
    objc_release(v9);
    objc_release(v7);
    v10 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
    v11 = (unsigned int)-[AMPDeviceInfo supportsWifiSyncing](v10, "supportsWifiSyncing") ^ 1;
    v12 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsIOSViewController showOnWiFiCheckBox](self, "showOnWiFiCheckBox"));
    -[NSButton setHidden:](v12, "setHidden:", v11);
    objc_release(v12);
    objc_release(v10);
    v13 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v14 = (unsigned int)-[AMPDeviceSyncPrefs preferSDVideos](v13, "preferSDVideos");
    v15 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsIOSViewController preferStandardDefVideosCheckBox](self, "preferStandardDefVideosCheckBox"));
    -[NSButton setState:](v15, "setState:", v14);
    objc_release(v15);
    objc_release(v13);
    objc_release(v5);
    objc_release(v3);
  }
}