-[DeviceSettingsTabContentViewController reloadFilter]
void __cdecl -[DeviceSettingsTabContentViewController reloadFilter](
        DeviceSettingsTabContentViewController *self,
        SEL a2)
{
  DeviceSettingsNode *v3; // x20
  unsigned __int64 v4; // x21
  unsigned int v5; // w0
  __int64 v6; // x2
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController model](self, "model"));
  v4 = -[DeviceSettingsNode filterType](v3, "filterType");
  objc_release(v3);
  v5 = -[DeviceSettingsTabContentViewController hasSearchTerm](self, "hasSearchTerm");
  if ( v4 )
    v6 = 1LL;
  else
    v6 = v5;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[DeviceSettingsTabContentViewController setIsFiltered:](self, "setIsFiltered:", v6);
}