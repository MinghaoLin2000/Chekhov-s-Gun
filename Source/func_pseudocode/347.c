-[DeviceSettingsRentalsTabContentViewController outlineView:child:ofItem:]
id __cdecl -[DeviceSettingsRentalsTabContentViewController outlineView:child:ofItem:](
        DeviceSettingsRentalsTabContentViewController *self,
        SEL a2,
        id a3,
        signed __int64 a4,
        id a5)
{
  DeviceSettingsTabContentOutlineView *v7; // x21
  DeviceSettingsTabContentOutlineView *v8; // x22
  DeviceSettingsNode *v9; // x0
  DeviceSettingsNode *v10; // x20
  NSMutableArray *v11; // x21
  void *v12; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v7 = (DeviceSettingsTabContentOutlineView *)objc_retain(a3);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsRentalsTabContentViewController trailingOutlineView](self, "trailingOutlineView"));
  objc_release(v7);
  objc_release(v8);
  if ( v8 == v7 )
    v9 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsRentalsTabContentViewController trailingModel](self, "trailingModel"));
  else
    v9 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController model](self, "model"));
  v10 = v9;
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsNode children](v9, "children"));
  v12 = objc_retainAutoreleasedReturnValue(-[NSMutableArray objectAtIndexedSubscript:](v11, "objectAtIndexedSubscript:", a4));
  objc_release(v11);
  objc_release(v10);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v12);
}