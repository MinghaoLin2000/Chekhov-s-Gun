-[DeviceSettingsDetailsTabContentViewController outlineViewForCheckBox:]
id __cdecl -[DeviceSettingsDetailsTabContentViewController outlineViewForCheckBox:](
        DeviceSettingsDetailsTabContentViewController *self,
        SEL a2,
        id a3)
{
  void *v3; // x19
  __int64 v4; // x0
  __int64 v5; // x20
  void *v6; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(objc_msgSend(a3, "superview"));
  v4 = objc_opt_class(&OBJC_CLASS___DeviceSettingsTabContentOutlineView);
  if ( v3 )
  {
    v5 = v4;
    do
    {
      if ( (objc_opt_isKindOfClass(v3, v5) & 1) != 0 )
        break;
      v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "superview"));
      objc_release(v3);
      v3 = v6;
    }
    while ( v6 );
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}