-[DeviceSoftwareUpdatesViewController clickSoftwareVersionButton:]
void __cdecl -[DeviceSoftwareUpdatesViewController clickSoftwareVersionButton:](
        DeviceSoftwareUpdatesViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  unsigned int v5; // w21
  AMPDeviceSoftwareInfo *v6; // x0
  AMPDeviceSoftwareInfo *v7; // x22
  void *v8; // x0
  void *v9; // x23
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = objc_retain(a3);
  if ( -[DeviceSoftwareUpdatesViewController isOSStringLoaded](self, "isOSStringLoaded") )
  {
    v5 = -[DeviceSoftwareUpdatesViewController isOSStringShowingBuild](self, "isOSStringShowingBuild");
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceSoftwareUpdatesViewController deviceSoftwareInfo](self, "deviceSoftwareInfo"));
    v7 = v6;
    if ( (v5 & 1) != 0 )
      v8 = objc_retainAutoreleasedReturnValue(-[AMPDeviceSoftwareInfo softwareVersion](v6, "softwareVersion"));
    else
      v8 = objc_retainAutoreleasedReturnValue(-[AMPDeviceSoftwareInfo buildVersion](v6, "buildVersion"));
    v9 = v8;
    objc_msgSend(v4, "setTitle:", v8);
    objc_release(v9);
    objc_release(v7);
    -[DeviceSoftwareUpdatesViewController setIsOSStringShowingBuild:](self, "setIsOSStringShowingBuild:", v5 ^ 1);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}