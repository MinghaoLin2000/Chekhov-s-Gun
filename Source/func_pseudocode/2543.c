-[DeviceSettingsCheckBoxCell drawImage:withFrame:inView:]
void __cdecl -[DeviceSettingsCheckBoxCell drawImage:withFrame:inView:](
        DeviceSettingsCheckBoxCell *self,
        SEL a2,
        id a3,
        CGRect a4,
        id a5)
{
  double height; // d8
  double width; // d9
  double y; // d11
  double x; // d10
  id v11; // x19
  id v12; // x20
  id v13; // x23
  void *v14; // x22
  id v15; // x23
  void *v16; // x24
  double v17; // d0
  double v18; // d0
  double v19; // d3
  double v20; // d3
  objc_super v21; // [xsp+0h] [xbp-60h] BYREF

  height = a4.size.height;
  width = a4.size.width;
  y = a4.origin.y;
  x = a4.origin.x;
  v11 = objc_retain(a3);
  v12 = objc_retain(a5);
  v13 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsCheckBoxCell button](self, "button"));
  v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "extraImage"));
  objc_release(v13);
  if ( v14 )
  {
    v15 = objc_alloc_init((Class)&OBJC_CLASS___NSImageCell);
    objc_msgSend(v15, "setImage:", v14);
    v16 = -[DeviceSettingsCheckBoxCell userInterfaceLayoutDirection](self, "userInterfaceLayoutDirection");
    objc_msgSend(v11, "size");
    v18 = v17 + 2.0;
    if ( v16 == (void *)1 )
      v18 = -v18;
    objc_msgSend(v12, "backingAlignedRect:options:", 983040LL, x + v18, y, width, height);
    objc_msgSend(v15, "drawWithFrame:inView:", v12);
    objc_release(v15);
  }
  objc_msgSend(v12, "frame");
  if ( v19 > height )
  {
    objc_msgSend(v12, "frame");
    y = (v20 - height) * 0.5;
  }
  v21.receiver = self;
  v21.super_class = (Class)&OBJC_CLASS___DeviceSettingsCheckBoxCell;
  -[DeviceSettingsCheckBoxCell drawImage:withFrame:inView:](
    &v21,
    "drawImage:withFrame:inView:",
    v11,
    v12,
    x,
    y,
    width,
    height);
  objc_release(v14);
  objc_release(v12);
  objc_release(v11);
}