-[DeviceHeaderViewController appendToMenuItems:menuItemWithTitle:representedObject:]
void __cdecl -[DeviceHeaderViewController appendToMenuItems:menuItemWithTitle:representedObject:](
        DeviceHeaderViewController *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v7; // x22
  id v8; // x20
  id v9; // x19
  void *v10; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( a5 )
  {
    v7 = objc_retain(a5);
    v8 = objc_retain(a4);
    v9 = objc_retain(a3);
    v10 = objc_msgSend(
            objc_alloc((Class)&OBJC_CLASS___NSMenuItem),
            "initWithTitle:action:keyEquivalent:",
            v8,
            "copyFromDeviceDetailsTextField:",
            &stru_1000BA220);
    objc_release(v8);
    objc_msgSend(v10, "setRepresentedObject:", v7);
    objc_release(v7);
    objc_msgSend(v9, "addObject:", v10);
    objc_release(v9);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_release(v10);
  }
}