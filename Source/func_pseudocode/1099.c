-[DeviceSettingsPhotosViewController isModelLoadedForSource:]
bool __cdecl -[DeviceSettingsPhotosViewController isModelLoadedForSource:](
        DeviceSettingsPhotosViewController *self,
        SEL a2,
        int a3)
{
  if ( a3 == 6 )
    return -[DeviceSettingsPhotosViewController photosModelIsLoaded](self, "photosModelIsLoaded");
  else
    return -[DeviceSettingsPhotosViewController folderModelIsLoaded](self, "folderModelIsLoaded");
}