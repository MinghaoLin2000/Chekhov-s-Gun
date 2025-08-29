-[DeviceSettingsMoviesViewController validRentals]
bool __cdecl -[DeviceSettingsMoviesViewController validRentals](DeviceSettingsMoviesViewController *self, SEL a2)
{
  NSArray *v3; // x19
  bool v4; // w20
  NSArray *v5; // x21

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController libraryRentals](self, "libraryRentals"));
  if ( -[NSArray count](v3, "count") )
  {
    v4 = 1;
  }
  else
  {
    v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController deviceLibraryRentals](self, "deviceLibraryRentals"));
    v4 = -[NSArray count](v5, "count") != 0;
    objc_release(v5);
  }
  objc_release(v3);
  return v4;
}