-[DeviceFinderTabContainerViewController fileSharingViewController]
DeviceFileSharingViewController *__cdecl -[DeviceFinderTabContainerViewController fileSharingViewController](
        DeviceFinderTabContainerViewController *self,
        SEL a2)
{
  DeviceFileSharingViewController *fileSharingViewController; // x0
  DeviceFileSharingViewController *v4; // x0
  DeviceFileSharingViewController *v5; // x8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  fileSharingViewController = self->_fileSharingViewController;
  if ( !fileSharingViewController )
  {
    v4 = (DeviceFileSharingViewController *)objc_opt_new(&OBJC_CLASS___DeviceFileSharingViewController, a2);
    v5 = self->_fileSharingViewController;
    self->_fileSharingViewController = v4;
    objc_release(v5);
    fileSharingViewController = self->_fileSharingViewController;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(fileSharingViewController);
}