-[DeviceSettingsPhotosViewController removeMesssageTextFormatString]
id __cdecl -[DeviceSettingsPhotosViewController removeMesssageTextFormatString](
        DeviceSettingsPhotosViewController *self,
        SEL a2)
{
  return -[DeviceViewController deviceStringForStringParameterizedKey:](
           self,
           "deviceStringForStringParameterizedKey:",
           CFSTR("Photos Remove Confirm %@"));
}