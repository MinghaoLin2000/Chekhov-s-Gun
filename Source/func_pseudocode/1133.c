-[DeviceSettingsPhotosViewController optimizeStorageExplanationFormatString]
id __cdecl -[DeviceSettingsPhotosViewController optimizeStorageExplanationFormatString](
        DeviceSettingsPhotosViewController *self,
        SEL a2)
{
  return -[DeviceViewController deviceStringForStringParameterizedKey:](
           self,
           "deviceStringForStringParameterizedKey:",
           CFSTR("Optimize Storage Explanation %@"));
}