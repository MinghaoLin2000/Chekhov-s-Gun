-[BonjourBrowse_Entity domain]
id __cdecl -[BonjourBrowse_Entity domain](BonjourBrowse_Entity *self, SEL a2)
{
  const char *bonjour_service_domain; // x2
  __int64 vars8; // [xsp+18h] [xbp+8h]

  bonjour_service_domain = nw_endpoint_get_bonjour_service_domain(self->_endpoint);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return +[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", bonjour_service_domain);
}