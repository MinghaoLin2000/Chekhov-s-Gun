-[DeviceSettingsMusicCloudViewController updateMessage]
void __cdecl -[DeviceSettingsMusicCloudViewController updateMessage](
        DeviceSettingsMusicCloudViewController *self,
        SEL a2)
{
  NSBundle *v3; // x22
  NSString *v4; // x23
  NSString *v5; // x24
  NSString *v6; // x21
  NSTextField *v7; // x25
  NSBundle *v8; // x21
  NSString *v9; // x20
  NSTextField *v10; // x19
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v4 = objc_retainAutoreleasedReturnValue(
         -[NSBundle localizedStringForKey:value:table:](
           v3,
           "localizedStringForKey:value:table:",
           CFSTR("%@ is using Cloud Music Library"),
           &stru_1000BA220,
           0LL));
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceName](self, "deviceName"));
  v6 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", v4, v5));
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsCloudViewController icloudSyncMessage1TextField](self, "icloudSyncMessage1TextField"));
  -[NSTextField setStringValue:](v7, "setStringValue:", v6);
  objc_release(v7);
  objc_release(v6);
  objc_release(v5);
  objc_release(v4);
  objc_release(v3);
  v8 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v9 = objc_retainAutoreleasedReturnValue(
         -[NSBundle localizedStringForKey:value:table:](
           v8,
           "localizedStringForKey:value:table:",
           CFSTR("You can play and download songs on all your devices. To sync music from this Mac, turn off Cloud Music Library."),
           &stru_1000BA220,
           0LL));
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsCloudViewController icloudSyncMessage2TextField](self, "icloudSyncMessage2TextField"));
  -[NSTextField setStringValue:](v10, "setStringValue:", v9);
  objc_release(v10);
  objc_release(v9);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v8);
}