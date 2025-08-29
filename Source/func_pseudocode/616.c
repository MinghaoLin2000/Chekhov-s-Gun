-[DeviceSettingsBooksViewController shouldTabViewBeEnabled]
bool __cdecl -[DeviceSettingsBooksViewController shouldTabViewBeEnabled](
        DeviceSettingsBooksViewController *self,
        SEL a2)
{
  NSButton *v2; // x19
  bool v3; // w20

  v2 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsBooksViewController allRadioButton](self, "allRadioButton"));
  v3 = (void *)-[NSButton state](v2, "state") != (void *)1;
  objc_release(v2);
  return v3;
}