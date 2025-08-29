-[DeviceHeaderViewController .cxx_destruct]
void __cdecl -[DeviceHeaderViewController .cxx_destruct](DeviceHeaderViewController *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_capacityTotals, 0LL);
  objc_storeStrong((id *)&self->_deviceTotalDataAvailable, 0LL);
  objc_storeStrong((id *)&self->_deviceTotalDataCapacity, 0LL);
  objc_storeStrong((id *)&self->_deviceBatteryInfo, 0LL);
  objc_destroyWeak((id *)&self->_batteryImageView);
  objc_destroyWeak((id *)&self->_syncProgressIndicator);
  objc_destroyWeak((id *)&self->_manageStorageButton);
  objc_destroyWeak((id *)&self->_syncButton);
  objc_destroyWeak((id *)&self->_syncSettingsButton);
  objc_destroyWeak((id *)&self->_deviceDetailsLabel);
  objc_destroyWeak((id *)&self->_deviceNameLabel);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_destroyWeak((id *)&self->_deviceImageView);
}