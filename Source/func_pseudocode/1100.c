-[DeviceSettingsPhotosViewController setModelLoaded:forSource:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[DeviceSettingsPhotosViewController setModelLoaded:forSource:](
        DeviceSettingsPhotosViewController *self,
        SEL a2,
        bool a3,
        int a4)
{
  if ( a4 == 6 )
    -[DeviceSettingsPhotosViewController setPhotosModelIsLoaded:](self, "setPhotosModelIsLoaded:", a3);
  else
    -[DeviceSettingsPhotosViewController setFolderModelIsLoaded:](self, "setFolderModelIsLoaded:", a3);
}