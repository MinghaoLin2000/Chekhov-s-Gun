-[DeviceSettingsPhotosViewController setPhotosAppSyncAllFaces:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[DeviceSettingsPhotosViewController setPhotosAppSyncAllFaces:](
        DeviceSettingsPhotosViewController *self,
        SEL a2,
        bool a3)
{
  _BOOL8 v3; // x19
  id v4; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = a3;
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController allPeopleViewController](self, "allPeopleViewController"));
  objc_msgSend(v4, "setAllCheckBoxChecked:", v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}