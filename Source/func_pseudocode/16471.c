-[LegacyAudioController cachedActiveFirmwareAccessories]
id __cdecl -[LegacyAudioController cachedActiveFirmwareAccessories](LegacyAudioController *self, SEL a2)
{
  id v2; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(-[NSUserDefaults objectForKey:](self->_database, "objectForKey:", CFSTR("activeFirmwareAccessories")));
  if ( !v2 )
    v2 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableDictionary);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v2);
}