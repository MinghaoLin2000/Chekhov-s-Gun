-[DeviceSettingsContactsViewController removeMesssageTextFormat]
id __cdecl -[DeviceSettingsContactsViewController removeMesssageTextFormat](
        DeviceSettingsContactsViewController *self,
        SEL a2)
{
  return -[DeviceViewController deviceStringForStringParameterizedKey:](
           self,
           "deviceStringForStringParameterizedKey:",
           CFSTR("ContactsDeleteWarning %@"));
}