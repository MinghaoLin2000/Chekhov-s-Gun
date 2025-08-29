-[DeviceSettingsRentalsTabContentViewController clickTrailingDeleteButton:]
void __cdecl -[DeviceSettingsRentalsTabContentViewController clickTrailingDeleteButton:](
        DeviceSettingsRentalsTabContentViewController *self,
        SEL a2,
        id a3)
{
  void *v4; // x19
  DeviceSettingsNode *v5; // x22
  NSMutableArray *v6; // x23
  void *v7; // x21
  DeviceSettingsNode *v8; // x22
  NSMutableArray *v9; // x23
  DeviceSettingsTabContentOutlineView *v10; // x20
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(a3, "node"));
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsRentalsTabContentViewController trailingModel](self, "trailingModel"));
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsNode children](v5, "children"));
  v7 = -[NSMutableArray indexOfObject:](v6, "indexOfObject:", v4);
  objc_release(v6);
  objc_release(v5);
  if ( v7 != (void *)0x7FFFFFFFFFFFFFFFLL )
  {
    v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsRentalsTabContentViewController trailingModel](self, "trailingModel"));
    v9 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsNode children](v8, "children"));
    -[NSMutableArray removeObjectAtIndex:](v9, "removeObjectAtIndex:", v7);
    objc_release(v9);
    objc_release(v8);
    v10 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsRentalsTabContentViewController trailingOutlineView](self, "trailingOutlineView"));
    -[DeviceSettingsTabContentOutlineView reloadData](v10, "reloadData");
    objc_release(v10);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}