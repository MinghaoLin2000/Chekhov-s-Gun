-[DeviceSettingsMoviesViewController rentalTransferToNodeSet]
id __cdecl -[DeviceSettingsMoviesViewController rentalTransferToNodeSet](
        DeviceSettingsMoviesViewController *self,
        SEL a2)
{
  NSArray *v3; // x20
  NSMutableArray *v4; // x21
  id v5; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController deviceLibraryRentals](self, "deviceLibraryRentals"));
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController deviceRentals](self, "deviceRentals"));
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController updatesStartArray:endArray:](self, "updatesStartArray:endArray:", v3, v4));
  objc_release(v4);
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}