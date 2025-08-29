-[DeviceSettingsAdvancedViewController saveToDeviceSyncPrefs:]
void __cdecl -[DeviceSettingsAdvancedViewController saveToDeviceSyncPrefs:](
        DeviceSettingsAdvancedViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x20
  NSButton *v5; // x21
  NSButton *v6; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsAdvancedViewController overwriteContactsCheckBox](self, "overwriteContactsCheckBox"));
  objc_msgSend(v4, "setResetContacts:", (void *)-[NSButton state](v5, "state") == (void *)1);
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsAdvancedViewController overwriteCalendarsCheckBox](self, "overwriteCalendarsCheckBox"));
  objc_msgSend(v4, "setResetCalendars:", (void *)-[NSButton state](v6, "state") == (void *)1);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}