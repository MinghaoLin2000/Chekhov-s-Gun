-[DeviceSettingsNode sortName]
NSString *__cdecl -[DeviceSettingsNode sortName](DeviceSettingsNode *self, SEL a2)
{
  NSString *sortName; // x0
  NSString **p_sortName; // x20
  NSString *v5; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  p_sortName = &self->_sortName;
  sortName = self->_sortName;
  if ( !sortName || -[NSString isEqualToString:](sortName, "isEqualToString:", &stru_1000BA220) )
    p_sortName = &self->_name;
  v5 = *p_sortName;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(v5);
}