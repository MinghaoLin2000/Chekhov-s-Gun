-[DeviceSettingsRentalsTabContentViewController outlineView:viewForTableColumn:item:]
id __cdecl -[DeviceSettingsRentalsTabContentViewController outlineView:viewForTableColumn:item:](
        DeviceSettingsRentalsTabContentViewController *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v8; // x19
  id v9; // x24
  id v10; // x22
  void *v11; // x20
  id v12; // x21
  id v13; // x23
  objc_super v15; // [xsp+0h] [xbp-40h] BYREF
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v8 = objc_retain(a4);
  v9 = objc_retain(a5);
  v10 = objc_retain(a3);
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "identifier"));
  v12 = objc_retain(v9);
  if ( (unsigned int)objc_msgSend(v11, "isEqualToString:", CFSTR("rental")) )
  {
    v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "makeViewWithIdentifier:owner:", CFSTR("RentalCell"), self));
    objc_release(v10);
    if ( v13 )
      objc_msgSend(v13, "setUpWithNode:", v12);
  }
  else
  {
    v15.receiver = self;
    v15.super_class = (Class)&OBJC_CLASS___DeviceSettingsRentalsTabContentViewController;
    v13 = objc_retainAutoreleasedReturnValue(
            -[DeviceSettingsTabContentViewController outlineView:viewForTableColumn:item:](
              &v15,
              "outlineView:viewForTableColumn:item:",
              v10,
              v8,
              v12));
    objc_release(v10);
  }
  objc_release(v12);
  objc_release(v11);
  objc_release(v12);
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v13);
}