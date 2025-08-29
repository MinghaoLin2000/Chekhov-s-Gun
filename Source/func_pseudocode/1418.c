-[DeviceSettingsMoviesViewController libraryRentals]
NSArray *__cdecl -[DeviceSettingsMoviesViewController libraryRentals](DeviceSettingsMoviesViewController *self, SEL a2)
{
  NSArray *libraryRentals; // x0
  ITLibrary *v4; // x20
  NSArray *v5; // x0
  NSArray *v6; // x8
  __int64 vars8; // [xsp+28h] [xbp+8h]

  libraryRentals = self->_libraryRentals;
  if ( !libraryRentals )
  {
    v4 = objc_retainAutoreleasedReturnValue(-[DeviceViewController itLibrary](self, "itLibrary"));
    v5 = (NSArray *)objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController rentalsForLibrary:](self, "rentalsForLibrary:", v4));
    v6 = self->_libraryRentals;
    self->_libraryRentals = v5;
    objc_release(v6);
    objc_release(v4);
    libraryRentals = self->_libraryRentals;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(libraryRentals);
}