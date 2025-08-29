-[DeviceSettingsCalendarsViewController removeMesssageTextFormat]
id __cdecl -[DeviceSettingsCalendarsViewController removeMesssageTextFormat](
        DeviceSettingsCalendarsViewController *self,
        SEL a2)
{
  return -[DeviceViewController deviceStringForStringParameterizedKey:](
           self,
           "deviceStringForStringParameterizedKey:",
           CFSTR("CalendarsDeleteWarning %@"));
}