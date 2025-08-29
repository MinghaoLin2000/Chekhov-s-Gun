-[LegacyAudioAccessory .cxx_destruct]
void __cdecl -[LegacyAudioAccessory .cxx_destruct](LegacyAudioAccessory *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_modelName, 0LL);
  objc_storeStrong((id *)&self->_activeANCVersion, 0LL);
  objc_storeStrong((id *)&self->_activeFirmwareVersion, 0LL);
  objc_storeStrong((id *)&self->_serialNumber, 0LL);
  objc_storeStrong((id *)&self->_updateFirmwareAnalyticsEvents, 0LL);
  objc_storeStrong((id *)&self->_queue, 0LL);
  objc_storeStrong((id *)&self->_personalizer, 0LL);
  objc_storeStrong((id *)&self->_delegate, 0LL);
  objc_storeStrong((id *)&self->_updateOptions, 0LL);
  objc_storeStrong((id *)&self->_activeDeviceClass, 0LL);
  objc_storeStrong((id *)&self->_deviceClasses, 0LL);
  objc_storeStrong((id *)&self->_updater, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_log, 0LL);
}