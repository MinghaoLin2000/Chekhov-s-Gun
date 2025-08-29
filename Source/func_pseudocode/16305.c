-[LegacyAudioAccessory copyWithZone:]
id __cdecl -[LegacyAudioAccessory copyWithZone:](LegacyAudioAccessory *self, SEL a2, _NSZone *a3)
{
  LegacyAudioAccessory *v4; // x20

  v4 = -[LegacyAudioAccessory initWithDelegate:](
         objc_alloc(&OBJC_CLASS___LegacyAudioAccessory),
         "initWithDelegate:",
         self->_delegate);
  objc_storeStrong((id *)&v4->_serialNumber, self->_serialNumber);
  objc_storeStrong((id *)&v4->_activeFirmwareVersion, self->_activeFirmwareVersion);
  objc_storeStrong((id *)&v4->_activeANCVersion, self->_activeANCVersion);
  objc_storeStrong((id *)&v4->_modelName, self->_modelName);
  return v4;
}