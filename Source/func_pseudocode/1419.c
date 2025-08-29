-[DeviceSettingsMoviesViewController deviceLibraryRentals]
NSArray *__cdecl -[DeviceSettingsMoviesViewController deviceLibraryRentals](
        DeviceSettingsMoviesViewController *self,
        SEL a2)
{
  NSArray *deviceLibraryRentals; // x0
  ITLibrary *v4; // x20
  NSArray *v5; // x0
  NSArray *v6; // x8
  __int64 vars8; // [xsp+28h] [xbp+8h]

  deviceLibraryRentals = self->_deviceLibraryRentals;
  if ( !deviceLibraryRentals )
  {
    v4 = objc_retainAutoreleasedReturnValue(-[DeviceViewController itDeviceLibrary](self, "itDeviceLibrary"));
    v5 = (NSArray *)objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController rentalsForLibrary:](self, "rentalsForLibrary:", v4));
    v6 = self->_deviceLibraryRentals;
    self->_deviceLibraryRentals = v5;
    objc_release(v6);
    objc_release(v4);
    deviceLibraryRentals = self->_deviceLibraryRentals;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(deviceLibraryRentals);
}