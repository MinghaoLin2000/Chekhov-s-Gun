-[DeviceOptionsIOSViewController saveToDeviceSyncPrefs:]
void __cdecl -[DeviceOptionsIOSViewController saveToDeviceSyncPrefs:](
        DeviceOptionsIOSViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x21
  NSButton *v5; // x20
  NSButton *v6; // x19
  objc_super v7; // [xsp+0h] [xbp-30h] BYREF

  v7.receiver = self;
  v7.super_class = (Class)&OBJC_CLASS___DeviceOptionsIOSViewController;
  v4 = objc_retain(a3);
  -[DeviceOptionsViewController saveToDeviceSyncPrefs:](&v7, "saveToDeviceSyncPrefs:", v4);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsIOSViewController showOnWiFiCheckBox](self, "showOnWiFiCheckBox", v7.receiver, v7.super_class));
  objc_msgSend(v4, "setSyncOverWifi:", (void *)-[NSButton state](v5, "state") == (void *)1);
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsIOSViewController preferStandardDefVideosCheckBox](self, "preferStandardDefVideosCheckBox"));
  objc_msgSend(v4, "setPreferSDVideos:", (void *)-[NSButton state](v6, "state") == (void *)1);
  objc_release(v4);
  objc_release(v6);
}