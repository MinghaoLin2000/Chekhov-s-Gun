-[DeviceSettingsMoviesViewController loadRentalsModel]
void __cdecl -[DeviceSettingsMoviesViewController loadRentalsModel](DeviceSettingsMoviesViewController *self, SEL a2)
{
  void *v3; // x20
  NSMutableDictionary *v4; // x21
  void *v5; // x21
  DeviceSettingsNode *v6; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController dataNodes](self, "dataNodes"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v4, "setObject:forKeyedSubscript:", v3, CFSTR("Rentals"));
  objc_release(v4);
  objc_release(v3);
  v5 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v6 = objc_retainAutoreleasedReturnValue(+[DeviceSettingsNode nodeWithChildren:](&OBJC_CLASS___DeviceSettingsNode, "nodeWithChildren:", v5));
  -[DeviceSettingsMoviesViewController setTrailingModel:](self, "setTrailingModel:", v6);
  objc_release(v6);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[DeviceSettingsMoviesViewController revertRentalsModel](self, "revertRentalsModel");
}