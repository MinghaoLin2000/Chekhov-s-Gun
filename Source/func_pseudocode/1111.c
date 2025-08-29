-[DeviceSettingsPhotosViewController itemWithTag:forPopUpButton:]
id __cdecl -[DeviceSettingsPhotosViewController itemWithTag:forPopUpButton:](
        DeviceSettingsPhotosViewController *self,
        SEL a2,
        signed __int64 a3,
        id a4)
{
  id v5; // x20
  void *v6; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v5 = objc_retain(a4);
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "itemAtIndex:", objc_msgSend(v5, "indexOfItemWithTag:", a3)));
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}