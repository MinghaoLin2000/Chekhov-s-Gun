-[DeviceSettingsInfoCloudViewController updateMessage]
void __cdecl -[DeviceSettingsInfoCloudViewController updateMessage](
        DeviceSettingsInfoCloudViewController *self,
        SEL a2)
{
  AMPDeviceInfo *v3; // x20
  AMPDeviceInfo *v4; // x21
  void *v5; // x22
  NSBundle *v6; // x21
  NSString *v7; // x20
  NSBundle *v8; // x23
  NSString *v9; // x21
  AMPDeviceInfo *v10; // x20
  AMPDeviceInfo *v11; // x21
  void *v12; // x22
  NSBundle *v13; // x0
  NSBundle *v14; // x21
  const __CFString *v15; // x2
  NSString *v16; // x23
  NSString *v17; // x22
  NSTextField *v18; // x24
  NSTextField *v19; // x19
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
  if ( -[AMPDeviceInfo contactsOverTheAirSyncSource](v3, "contactsOverTheAirSyncSource") == (void *)1 )
  {
    v4 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
    v5 = -[AMPDeviceInfo calendarsOverTheAirSyncSource](v4, "calendarsOverTheAirSyncSource");
    objc_release(v4);
    objc_release(v3);
    if ( v5 == (void *)1 )
    {
      v6 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
      v7 = objc_retainAutoreleasedReturnValue(
             -[NSBundle localizedStringForKey:value:table:](
               v6,
               "localizedStringForKey:value:table:",
               CFSTR("%@ is syncing Contacts and Calendars with iCloud"),
               &stru_1000BA220,
               0LL));
      objc_release(v6);
      v8 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
      v9 = objc_retainAutoreleasedReturnValue(
             -[NSBundle localizedStringForKey:value:table:](
               v8,
               "localizedStringForKey:value:table:",
               CFSTR("Your contacts and calendars are up to date across all your devices. To sync them from this Mac, turn off Contacts or Calendars in your iCloud settings."),
               &stru_1000BA220,
               0LL));
      objc_release(v8);
      if ( v9 )
        goto LABEL_13;
      goto LABEL_12;
    }
  }
  else
  {
    objc_release(v3);
  }
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
  if ( -[AMPDeviceInfo contactsOverTheAirSyncSource](v10, "contactsOverTheAirSyncSource") != (void *)2 )
  {
    objc_release(v10);
    goto LABEL_10;
  }
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
  v12 = -[AMPDeviceInfo calendarsOverTheAirSyncSource](v11, "calendarsOverTheAirSyncSource");
  objc_release(v11);
  objc_release(v10);
  if ( v12 != (void *)2 )
  {
LABEL_10:
    v13 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
    v14 = v13;
    v15 = CFSTR("%@ is syncing Contacts and Calendars over the air");
    goto LABEL_11;
  }
  v13 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v14 = v13;
  v15 = CFSTR("%@ is syncing Contacts and Calendars with Microsoft Exchange");
LABEL_11:
  v7 = objc_retainAutoreleasedReturnValue(
         -[NSBundle localizedStringForKey:value:table:](
           v13,
           "localizedStringForKey:value:table:",
           v15,
           &stru_1000BA220,
           0LL));
  objc_release(v14);
LABEL_12:
  v9 = (NSString *)objc_retainAutoreleasedReturnValue(
                     -[DeviceViewController deviceStringForStringParameterizedKey:](
                       self,
                       "deviceStringForStringParameterizedKey:",
                       CFSTR("Over-the-air sync settings can be changed on your %@.")));
LABEL_13:
  v16 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceName](self, "deviceName"));
  v17 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", v7, v16));
  v18 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsCloudViewController icloudSyncMessage1TextField](self, "icloudSyncMessage1TextField"));
  -[NSTextField setStringValue:](v18, "setStringValue:", v17);
  objc_release(v18);
  objc_release(v17);
  objc_release(v16);
  v19 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsCloudViewController icloudSyncMessage2TextField](self, "icloudSyncMessage2TextField"));
  -[NSTextField setStringValue:](v19, "setStringValue:", v9);
  objc_release(v19);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v9);
}