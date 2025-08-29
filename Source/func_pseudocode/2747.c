-[DeviceSettingsNode sortArtistName]
NSString *__cdecl -[DeviceSettingsNode sortArtistName](DeviceSettingsNode *self, SEL a2)
{
  NSString *sortArtistName; // x0
  NSString **p_sortArtistName; // x20
  NSString *v5; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  p_sortArtistName = &self->_sortArtistName;
  sortArtistName = self->_sortArtistName;
  if ( !sortArtistName || -[NSString isEqualToString:](sortArtistName, "isEqualToString:", &stru_1000BA220) )
    p_sortArtistName = &self->_artistName;
  v5 = *p_sortArtistName;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(v5);
}