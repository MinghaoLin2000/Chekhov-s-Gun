-[DeviceSettingsPhotosViewController photosAppSyncAllAlbums]
bool __cdecl -[DeviceSettingsPhotosViewController photosAppSyncAllAlbums](
        DeviceSettingsPhotosViewController *self,
        SEL a2)
{
  id v2; // x19
  unsigned __int8 v3; // w20

  v2 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController allAlbumsViewController](self, "allAlbumsViewController"));
  v3 = (unsigned __int8)objc_msgSend(v2, "allCheckBoxChecked");
  objc_release(v2);
  return v3;
}