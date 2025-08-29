-[DeviceOptionsIOSViewController isDirty]
bool __cdecl -[DeviceOptionsIOSViewController isDirty](DeviceOptionsIOSViewController *self, SEL a2)
{
  AMPDeviceSyncPrefs *v3; // x20
  unsigned int v4; // w21
  NSButton *v5; // x22
  int v6; // w23
  AMPDeviceSyncPrefs *v7; // x20
  unsigned __int8 v8; // w21
  NSButton *v9; // x19
  bool v10; // w22
  objc_super v12; // [xsp+0h] [xbp-40h] BYREF

  v12.receiver = self;
  v12.super_class = (Class)&OBJC_CLASS___DeviceOptionsIOSViewController;
  if ( -[DeviceOptionsViewController isDirty](&v12, "isDirty") )
    return 1;
  v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v4 = (unsigned int)-[AMPDeviceSyncPrefs syncOverWifi](v3, "syncOverWifi");
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsIOSViewController showOnWiFiCheckBox](self, "showOnWiFiCheckBox"));
  v6 = (void *)-[NSButton state](v5, "state") != (void *)1;
  objc_release(v5);
  objc_release(v3);
  if ( v4 == v6 )
    return 1;
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v8 = (unsigned __int8)-[AMPDeviceSyncPrefs preferSDVideos](v7, "preferSDVideos");
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsIOSViewController preferStandardDefVideosCheckBox](self, "preferStandardDefVideosCheckBox"));
  v10 = (void *)-[NSButton state](v9, "state") == (void *)1;
  objc_release(v9);
  objc_release(v7);
  return v8 ^ v10;
}