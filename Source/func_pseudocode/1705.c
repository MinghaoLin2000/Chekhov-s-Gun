-[DeviceSettingsTabContentViewController hasSearchTerm]
bool __cdecl -[DeviceSettingsTabContentViewController hasSearchTerm](
        DeviceSettingsTabContentViewController *self,
        SEL a2)
{
  DeviceSettingsNode *v3; // x20
  NSString *v4; // x21
  DeviceSettingsNode *v5; // x20
  NSString *v6; // x21
  unsigned int v7; // w19

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController model](self, "model"));
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsNode searchTerm](v3, "searchTerm"));
  objc_release(v4);
  objc_release(v3);
  if ( v4 )
  {
    v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController model](self, "model"));
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsNode searchTerm](v5, "searchTerm"));
    v7 = !-[NSString isEqualToString:](v6, "isEqualToString:", &stru_1000BA220);
    objc_release(v6);
    objc_release(v5);
  }
  else
  {
    LOBYTE(v7) = 0;
  }
  return v7;
}