-[DeviceViewController .cxx_destruct]
void __cdecl -[DeviceViewController .cxx_destruct](DeviceViewController *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_itDeviceLibrary, 0LL);
  objc_storeStrong((id *)&self->_itLibrary, 0LL);
  objc_storeStrong((id *)&self->_viewMode, 0LL);
  objc_storeStrong((id *)&self->_deviceName, 0LL);
  objc_storeStrong((id *)&self->_deviceSyncPrefs, 0LL);
  objc_storeStrong((id *)&self->_deviceInfo, 0LL);
  objc_storeStrong((id *)&self->_device, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_devicesClient, 0LL);
}