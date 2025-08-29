-[DeviceSettingsBooksViewController isDirty]
// attributes: thunk
bool __cdecl -[DeviceSettingsBooksViewController isDirty](DeviceSettingsBooksViewController *self, SEL a2)
{
  return -[DeviceSettingsBooksViewController areBooksDirty](self, "areBooksDirty");
}