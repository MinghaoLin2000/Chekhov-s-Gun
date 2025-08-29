-[DeviceModeMediaViewController removeMesssageTextFormat]
id __cdecl -[DeviceModeMediaViewController removeMesssageTextFormat](DeviceModeMediaViewController *self, SEL a2)
{
  return -[DeviceViewController deviceStringForStringParameterizedKey:](
           self,
           "deviceStringForStringParameterizedKey:",
           CFSTR("ConfirmDeleteFilesOnDevice %@"));
}