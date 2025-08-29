-[DeviceSettingsNode setFilterType:]
void __cdecl -[DeviceSettingsNode setFilterType:](DeviceSettingsNode *self, SEL a2, unsigned __int64 a3)
{
  self->_filterType = a3;
  -[DeviceSettingsNode reloadFilteredChildren](self, "reloadFilteredChildren");
}