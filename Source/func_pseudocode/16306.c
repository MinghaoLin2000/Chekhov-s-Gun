-[LegacyAudioAccessory encodeWithCoder:]
void __cdecl -[LegacyAudioAccessory encodeWithCoder:](LegacyAudioAccessory *self, SEL a2, id a3)
{
  NSString *serialNumber; // x20
  id v5; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  serialNumber = self->_serialNumber;
  v5 = objc_retain(a3);
  objc_msgSend(v5, "encodeObject:forKey:", serialNumber, CFSTR("serialNumber"));
  objc_msgSend(v5, "encodeObject:forKey:", self->_activeFirmwareVersion, CFSTR("activeFirmwareVersion"));
  objc_msgSend(v5, "encodeObject:forKey:", self->_activeANCVersion, CFSTR("activeANCVersion"));
  objc_msgSend(v5, "encodeObject:forKey:", self->_modelName, CFSTR("modelName"));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}