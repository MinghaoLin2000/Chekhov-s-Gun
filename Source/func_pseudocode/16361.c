-[EAFirmwareUpdater getWhitelistedPersonalizationFields]
unsigned int __cdecl -[EAFirmwareUpdater getWhitelistedPersonalizationFields](EAFirmwareUpdater *self, SEL a2)
{
  id v3; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( !-[NSDictionary objectForKey:](self->_deviceOptions, "objectForKey:", CFSTR("WhitelistedPersonalizationFields")) )
    return -1;
  v3 = -[NSDictionary objectForKey:](self->_deviceOptions, "objectForKey:", CFSTR("WhitelistedPersonalizationFields"));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (unsigned int)objc_msgSend(v3, "unsignedIntValue");
}