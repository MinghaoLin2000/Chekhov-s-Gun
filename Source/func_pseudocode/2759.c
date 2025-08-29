-[DeviceSettingsNode sortUsingDescriptors:]
void __cdecl -[DeviceSettingsNode sortUsingDescriptors:](DeviceSettingsNode *self, SEL a2, id a3)
{
  id v4; // x20
  NSMutableArray *v5; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsNode children](self, "children"));
  -[NSMutableArray sortUsingDescriptors:](v5, "sortUsingDescriptors:", v4);
  objc_release(v4);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[DeviceSettingsNode reloadFilteredChildren](self, "reloadFilteredChildren");
}