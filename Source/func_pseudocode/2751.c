-[DeviceSettingsNode setFilterOnNode:]
void __cdecl -[DeviceSettingsNode setFilterOnNode:](DeviceSettingsNode *self, SEL a2, id a3)
{
  id v4; // x20
  NSString *v5; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retain(a3);
  objc_msgSend(v4, "setFilterType:", -[DeviceSettingsNode filterType](self, "filterType"));
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsNode searchTerm](self, "searchTerm"));
  objc_msgSend(v4, "setSearchTerm:", v5);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}