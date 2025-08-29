-[DeviceSettingsContactsCloudViewController updateMessage]
void __cdecl -[DeviceSettingsContactsCloudViewController updateMessage](
        DeviceSettingsContactsCloudViewController *self,
        SEL a2)
{
  AMPDeviceInfo *v3; // x20
  void *v4; // x21
  NSBundle *v5; // x21
  NSString *v6; // x20
  NSBundle *v7; // x23
  NSString *v8; // x21
  AMPDeviceInfo *v9; // x20
  void *v10; // x21
  NSBundle *v11; // x0
  NSBundle *v12; // x22
  const __CFString *v13; // x2
  NSString *v14; // x23
  NSString *v15; // x22
  NSTextField *v16; // x24
  NSTextField *v17; // x19
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
  v4 = -[AMPDeviceInfo contactsOverTheAirSyncSource](v3, "contactsOverTheAirSyncSource");
  objc_release(v3);
  if ( v4 == (void *)1 )
  {
    v5 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
    v6 = objc_retainAutoreleasedReturnValue(
           -[NSBundle localizedStringForKey:value:table:](
             v5,
             "localizedStringForKey:value:table:",
             CFSTR("%@ is syncing Contacts with iCloud"),
             &stru_1000BA220,
             0LL));
    objc_release(v5);
    v7 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
    v8 = objc_retainAutoreleasedReturnValue(
           -[NSBundle localizedStringForKey:value:table:](
             v7,
             "localizedStringForKey:value:table:",
             CFSTR("Your contacts are up to date across all your devices. To sync contacts from this Mac, turn off Contacts in your iCloud settings."),
             &stru_1000BA220,
             0LL));
    objc_release(v7);
    if ( v8 )
      goto LABEL_9;
  }
  else
  {
    v9 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
    v10 = -[AMPDeviceInfo contactsOverTheAirSyncSource](v9, "contactsOverTheAirSyncSource");
    objc_release(v9);
    v11 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
    v12 = v11;
    if ( v10 == (void *)2 )
      v13 = CFSTR("%@ is syncing Contacts with Microsoft Exchange");
    else
      v13 = CFSTR("%@ is syncing Contacts over the air");
    v6 = objc_retainAutoreleasedReturnValue(
           -[NSBundle localizedStringForKey:value:table:](
             v11,
             "localizedStringForKey:value:table:",
             v13,
             &stru_1000BA220,
             0LL));
    objc_release(v12);
  }
  v8 = (NSString *)objc_retainAutoreleasedReturnValue(
                     -[DeviceViewController deviceStringForStringParameterizedKey:](
                       self,
                       "deviceStringForStringParameterizedKey:",
                       CFSTR("Over-the-air sync settings can be changed on your %@.")));
LABEL_9:
  v14 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceName](self, "deviceName"));
  v15 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", v6, v14));
  v16 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsCloudViewController icloudSyncMessage1TextField](self, "icloudSyncMessage1TextField"));
  -[NSTextField setStringValue:](v16, "setStringValue:", v15);
  objc_release(v16);
  objc_release(v15);
  objc_release(v14);
  v17 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsCloudViewController icloudSyncMessage2TextField](self, "icloudSyncMessage2TextField"));
  -[NSTextField setStringValue:](v17, "setStringValue:", v8);
  objc_release(v17);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v8);
}