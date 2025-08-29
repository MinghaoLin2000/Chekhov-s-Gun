-[DeviceSettingsTabContentViewController outlineView:child:ofItem:]
id __cdecl -[DeviceSettingsTabContentViewController outlineView:child:ofItem:](
        DeviceSettingsTabContentViewController *self,
        SEL a2,
        id a3,
        signed __int64 a4,
        id a5)
{
  DeviceSettingsTabContentOutlineView *v8; // x19
  id v9; // x20
  DeviceSettingsTabContentOutlineView *v10; // x23
  id v11; // x22
  NSString *v12; // x21
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v8 = (DeviceSettingsTabContentOutlineView *)objc_retain(a3);
  v9 = objc_retain(a5);
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController allCheckBoxOutlineView](self, "allCheckBoxOutlineView"));
  objc_release(v10);
  if ( v10 == v8 )
  {
    v12 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController allCheckBoxString](self, "allCheckBoxString"));
  }
  else
  {
    v11 = objc_retainAutoreleasedReturnValue(
            -[DeviceSettingsTabContentViewController childrenForItem:outlineView:](
              self,
              "childrenForItem:outlineView:",
              v9,
              v8));
    v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "objectAtIndexedSubscript:", a4));
    objc_release(v11);
  }
  objc_release(v9);
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v12);
}