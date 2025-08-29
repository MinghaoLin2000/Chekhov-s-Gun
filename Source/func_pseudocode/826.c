-[DeviceSettingsViewController dataNodes]
NSMutableDictionary *__cdecl -[DeviceSettingsViewController dataNodes](DeviceSettingsViewController *self, SEL a2)
{
  NSMutableDictionary *dataNodes; // x0
  NSMutableDictionary *v4; // x0
  NSMutableDictionary *v5; // x8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  dataNodes = self->_dataNodes;
  if ( !dataNodes )
  {
    v4 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
    v5 = self->_dataNodes;
    self->_dataNodes = v4;
    objc_release(v5);
    dataNodes = self->_dataNodes;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(dataNodes);
}