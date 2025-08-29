-[EAFirmwareUpdater updateRequiresSuperBinary]
bool __cdecl -[EAFirmwareUpdater updateRequiresSuperBinary](EAFirmwareUpdater *self, SEL a2)
{
  id v2; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  v2 = -[NSDictionary objectForKey:](self->_deviceOptions, "objectForKey:", CFSTR("UpdateRequiresSuperBinary"));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (unsigned __int8)objc_msgSend(v2, "boolValue");
}