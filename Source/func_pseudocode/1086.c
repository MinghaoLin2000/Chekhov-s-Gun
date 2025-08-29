-[DeviceSettingsPhotosViewController allAlbumsViewController]
id __cdecl -[DeviceSettingsPhotosViewController allAlbumsViewController](
        DeviceSettingsPhotosViewController *self,
        SEL a2)
{
  return -[DeviceSettingsViewController viewControllerForTabViewItemWithIdentifier:](
           self,
           "viewControllerForTabViewItemWithIdentifier:",
           CFSTR("Albums"));
}