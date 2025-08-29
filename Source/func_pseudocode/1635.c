-[DeviceFinderTabContainerViewController viewControllerWithIdentifier:]
DeviceFinderTabContainerViewController *__cdecl -[DeviceFinderTabContainerViewController viewControllerWithIdentifier:](
        DeviceFinderTabContainerViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  DeviceFileSharingViewController *v5; // x0
  DeviceFileSharingViewController *v6; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retain(a3);
  if ( (unsigned int)objc_msgSend(v4, "isEqualToString:", CFSTR("General")) )
  {
    v5 = objc_retainAutoreleasedReturnValue(-[DeviceFinderTabContainerViewController deviceSummaryViewController](self, "deviceSummaryViewController"));
  }
  else if ( (unsigned int)objc_msgSend(v4, "isEqualToString:", CFSTR("Files")) )
  {
    v5 = objc_retainAutoreleasedReturnValue(-[DeviceFinderTabContainerViewController fileSharingViewController](self, "fileSharingViewController"));
  }
  else
  {
    v5 = objc_retainAutoreleasedReturnValue(
           +[DeviceSettingsViewController viewControllerWithIdentifier:](
             &OBJC_CLASS___DeviceSettingsViewController,
             "viewControllerWithIdentifier:",
             v4));
  }
  v6 = v5;
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (DeviceFinderTabContainerViewController *)objc_autoreleaseReturnValue(v6);
}