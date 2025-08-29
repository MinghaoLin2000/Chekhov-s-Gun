-[DeviceFinderTabContainerViewController deviceSummaryViewController]
DeviceViewController *__cdecl -[DeviceFinderTabContainerViewController deviceSummaryViewController](
        DeviceFinderTabContainerViewController *self,
        SEL a2)
{
  DeviceViewController *deviceSummaryViewController; // x0
  DeviceViewController *v4; // x0
  DeviceViewController *v5; // x8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  deviceSummaryViewController = self->_deviceSummaryViewController;
  if ( !deviceSummaryViewController )
  {
    v4 = (DeviceViewController *)objc_opt_new(&OBJC_CLASS___DeviceSummaryViewController, a2);
    v5 = self->_deviceSummaryViewController;
    self->_deviceSummaryViewController = v4;
    objc_release(v5);
    deviceSummaryViewController = self->_deviceSummaryViewController;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(deviceSummaryViewController);
}