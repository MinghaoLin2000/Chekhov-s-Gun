-[DeviceSettingsTabContentViewController childrenForItem:outlineView:]
id __cdecl -[DeviceSettingsTabContentViewController childrenForItem:outlineView:](
        DeviceSettingsTabContentViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  id v7; // x20
  id v8; // x0
  void *v9; // x22
  void *v10; // x0
  void *v11; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  if ( v6 )
    v8 = objc_retain(v6);
  else
    v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController modelForOutlineView:](self, "modelForOutlineView:", v7));
  v9 = v8;
  if ( -[DeviceSettingsTabContentViewController isFiltered](self, "isFiltered") )
    v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "filteredChildren"));
  else
    v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "children"));
  v11 = v10;
  objc_release(v9);
  objc_release(v7);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v11);
}