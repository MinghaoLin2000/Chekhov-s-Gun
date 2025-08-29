-[DeviceSettingsTabContentViewController clickSearchField:]
void __cdecl -[DeviceSettingsTabContentViewController clickSearchField:](
        DeviceSettingsTabContentViewController *self,
        SEL a2,
        id a3)
{
  void *v4; // x20
  DeviceSettingsNode *v5; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(a3, "stringValue"));
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController model](self, "model"));
  -[DeviceSettingsNode setSearchTerm:](v5, "setSearchTerm:", v4);
  objc_release(v5);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[DeviceSettingsTabContentViewController reloadFilter](self, "reloadFilter");
}