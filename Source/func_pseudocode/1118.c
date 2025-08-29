-[DeviceSettingsPhotosViewController originalCheckedItems]
NSMutableDictionary *__cdecl -[DeviceSettingsPhotosViewController originalCheckedItems](
        DeviceSettingsPhotosViewController *self,
        SEL a2)
{
  NSMutableDictionary *originalCheckedItems; // x0
  NSMutableDictionary *v4; // x0
  NSMutableDictionary *v5; // x8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  originalCheckedItems = self->_originalCheckedItems;
  if ( !originalCheckedItems )
  {
    v4 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
    v5 = self->_originalCheckedItems;
    self->_originalCheckedItems = v4;
    objc_release(v5);
    originalCheckedItems = self->_originalCheckedItems;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(originalCheckedItems);
}