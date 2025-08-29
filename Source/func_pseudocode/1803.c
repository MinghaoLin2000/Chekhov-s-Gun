-[DeviceHeaderViewController fetchDeviceDetails]
void __cdecl -[DeviceHeaderViewController fetchDeviceDetails](DeviceHeaderViewController *self, SEL a2)
{
  AMPDevice *v3; // x20
  AMPDevice *v4; // x21
  AMPDevice *v5; // x22
  void *v6; // x23
  NSTextField *v7; // x20
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  if ( (unsigned int)-[AMPDevice needsUnlock](v3, "needsUnlock") )
  {
LABEL_4:
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_release(v3);
    return;
  }
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  if ( (unsigned int)-[AMPDevice needsPairing](v4, "needsPairing") )
  {
    objc_release(v4);
    goto LABEL_4;
  }
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v6 = -[AMPDevice deviceMode](v5, "deviceMode");
  objc_release(v5);
  objc_release(v4);
  objc_release(v3);
  if ( v6 == (void *)1 )
  {
    v7 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController deviceNameLabel](self, "deviceNameLabel"));
    -[NSTextField setEditable:](v7, "setEditable:", 1LL);
    objc_release(v7);
    -[DeviceHeaderViewController fetchBatteryInfo](self, "fetchBatteryInfo");
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    -[DeviceHeaderViewController fetchCapacityTotals](self, "fetchCapacityTotals");
  }
}