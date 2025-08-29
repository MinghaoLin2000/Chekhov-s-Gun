-[DeviceHeaderViewController didChangeDevicesClientConnectionState:]
void __cdecl -[DeviceHeaderViewController didChangeDevicesClientConnectionState:](
        DeviceHeaderViewController *self,
        SEL a2,
        unsigned __int64 a3)
{
  __int64 v3; // x30

  if ( (a3 & 0xFFFFFFFFFFFFFFFELL) == 2 )
  {
    -[DeviceHeaderViewController setDeviceTotalDataAvailable:](self, "setDeviceTotalDataAvailable:", 0LL);
    if ( ((v3 ^ (2 * v3)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    -[DeviceHeaderViewController setDeviceBatteryInfo:](self, "setDeviceBatteryInfo:", 0LL);
  }
}