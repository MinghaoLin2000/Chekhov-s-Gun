-[DeviceSettingsPhotosViewController allPeopleViewController]
id __cdecl -[DeviceSettingsPhotosViewController allPeopleViewController](
        DeviceSettingsPhotosViewController *self,
        SEL a2)
{
  return -[DeviceSettingsViewController viewControllerForTabViewItemWithIdentifier:](
           self,
           "viewControllerForTabViewItemWithIdentifier:",
           CFSTR("People"));
}