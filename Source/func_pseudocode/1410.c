-[DeviceSettingsMoviesViewController revertRentalsModel]
void __cdecl -[DeviceSettingsMoviesViewController revertRentalsModel](DeviceSettingsMoviesViewController *self, SEL a2)
{
  NSMutableDictionary *v3; // x20
  void *v4; // x22
  NSMutableDictionary *v5; // x20
  void *v6; // x21
  NSArray *v7; // x22
  DeviceSettingsNode *v8; // x20
  NSMutableArray *v9; // x21
  DeviceSettingsNode *v10; // x20
  NSMutableArray *v11; // x21
  NSArray *v12; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController dataNodes](self, "dataNodes"));
  v4 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v3, "objectForKeyedSubscript:", CFSTR("Rentals")));
  objc_msgSend(v4, "removeAllObjects");
  objc_release(v4);
  objc_release(v3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController dataNodes](self, "dataNodes"));
  v6 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v5, "objectForKeyedSubscript:", CFSTR("Rentals")));
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController libraryRentals](self, "libraryRentals"));
  objc_msgSend(v6, "addObjectsFromArray:", v7);
  objc_release(v7);
  objc_release(v6);
  objc_release(v5);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController trailingModel](self, "trailingModel"));
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsNode children](v8, "children"));
  -[NSMutableArray removeAllObjects](v9, "removeAllObjects");
  objc_release(v9);
  objc_release(v8);
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController trailingModel](self, "trailingModel"));
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsNode children](v10, "children"));
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController deviceLibraryRentals](self, "deviceLibraryRentals"));
  -[NSMutableArray addObjectsFromArray:](v11, "addObjectsFromArray:", v12);
  objc_release(v12);
  objc_release(v11);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v10);
}