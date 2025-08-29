-[DeviceSettingsNode hasChildren]
bool __cdecl -[DeviceSettingsNode hasChildren](DeviceSettingsNode *self, SEL a2)
{
  NSMutableArray *v2; // x19
  bool v3; // w20

  v2 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsNode children](self, "children"));
  v3 = -[NSMutableArray count](v2, "count") != 0LL;
  objc_release(v2);
  return v3;
}