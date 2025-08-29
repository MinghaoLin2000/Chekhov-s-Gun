-[DeviceSettingsRentalsTabContentViewController moveNode:fromModel:toModel:]
void __cdecl -[DeviceSettingsRentalsTabContentViewController moveNode:fromModel:toModel:](
        DeviceSettingsRentalsTabContentViewController *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v8; // x19
  id v9; // x21
  id v10; // x22
  void *v11; // x24
  void *v12; // x23
  void *v13; // x24
  void *v14; // x23
  DeviceSettingsTabContentOutlineView *v15; // x23
  DeviceSettingsTabContentOutlineView *v16; // x23
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  v10 = objc_retain(a5);
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "children"));
  v12 = objc_msgSend(v11, "indexOfObject:", v8);
  objc_release(v11);
  if ( v12 != (void *)0x7FFFFFFFFFFFFFFFLL )
  {
    v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "children"));
    objc_msgSend(v13, "removeObjectAtIndex:", v12);
    objc_release(v13);
    v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "children"));
    objc_msgSend(v14, "addObject:", v8);
    objc_release(v14);
    v15 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController outlineView](self, "outlineView"));
    -[DeviceSettingsTabContentOutlineView reloadData](v15, "reloadData");
    objc_release(v15);
    v16 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsRentalsTabContentViewController trailingOutlineView](self, "trailingOutlineView"));
    -[DeviceSettingsTabContentOutlineView reloadData](v16, "reloadData");
    objc_release(v16);
  }
  -[DeviceSettingsTabContentViewController postDidChangeNode:](self, "postDidChangeNode:", v8);
  objc_release(v10);
  objc_release(v9);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v8);
}