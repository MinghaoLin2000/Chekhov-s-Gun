-[DeviceModeFinderViewController canPresentDevicesClientEventsUI]
bool __cdecl -[DeviceModeFinderViewController canPresentDevicesClientEventsUI](
        DeviceModeFinderViewController *self,
        SEL a2)
{
  DeviceSetupViewController *v3; // x19
  NSView *v4; // x21
  DeviceSetupViewController *v5; // x22
  NSView *v6; // x23
  unsigned __int8 v7; // w20

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController setupViewController](self, "setupViewController"));
  if ( !(unsigned int)-[DeviceSetupViewController isViewLoaded](v3, "isViewLoaded") )
  {
    v7 = 1;
LABEL_6:
    objc_release(v3);
    return v7;
  }
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController contentView](self, "contentView"));
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController setupViewController](self, "setupViewController"));
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController view](v5, "view"));
  objc_release(v6);
  objc_release(v5);
  objc_release(v4);
  objc_release(v3);
  if ( v4 == v6 )
  {
    v3 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController setupViewController](self, "setupViewController"));
    v7 = -[DeviceSetupViewController canPresentDevicesClientEventsUI](v3, "canPresentDevicesClientEventsUI");
    goto LABEL_6;
  }
  return 1;
}