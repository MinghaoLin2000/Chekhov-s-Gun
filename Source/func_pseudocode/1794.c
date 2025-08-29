-[DeviceHeaderViewController setDeviceBatteryInfo:]
void __cdecl -[DeviceHeaderViewController setDeviceBatteryInfo:](DeviceHeaderViewController *self, SEL a2, id a3)
{
  id v4; // x20
  AMPDeviceBatteryInfo *deviceBatteryInfo; // x0
  _DWORD v6[2]; // [xsp+0h] [xbp-40h] BYREF
  __int16 v7; // [xsp+8h] [xbp-38h]
  unsigned int v8; // [xsp+Ah] [xbp-36h]
  __int16 v9; // [xsp+Eh] [xbp-32h]
  void *v10; // [xsp+10h] [xbp-30h]

  v4 = objc_retain(a3);
  if ( v4 && os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEBUG) )
  {
    v6[0] = 67109632;
    v6[1] = (unsigned int)objc_msgSend(v4, "batteryIsCharging");
    v7 = 1024;
    v8 = (unsigned int)objc_msgSend(v4, "batteryIsFullyCharged");
    v9 = 2048;
    v10 = objc_msgSend(v4, "batteryCurrentCapacity");
    _os_log_debug_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEBUG,
      "batteryIsCharging = %{BOOL}d, batteryIsFullyCharged = %{BOOL}d, batteryCurrentCapacity = %ld",
      (uint8_t *)v6,
      0x18u);
  }
  deviceBatteryInfo = self->_deviceBatteryInfo;
  self->_deviceBatteryInfo = (AMPDeviceBatteryInfo *)v4;
  objc_release(deviceBatteryInfo);
  -[DeviceHeaderViewController updateDeviceDetailsLabelLine](self, "updateDeviceDetailsLabelLine");
}