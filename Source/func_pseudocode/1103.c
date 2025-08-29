-[DeviceSettingsPhotosViewController loadModelForSource:]
void __cdecl -[DeviceSettingsPhotosViewController loadModelForSource:](
        DeviceSettingsPhotosViewController *self,
        SEL a2,
        int a3)
{
  if ( a3 == 2 )
  {
    -[DeviceSettingsPhotosViewController loadModelForFolders](self, "loadModelForFolders");
  }
  else if ( a3 == 6 )
  {
    -[DeviceSettingsPhotosViewController loadModelForPhotos](self, "loadModelForPhotos");
  }
}