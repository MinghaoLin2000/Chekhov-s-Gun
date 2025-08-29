-[DeviceSettingsCheckBoxCell drawTitle:withFrame:inView:]
CGRect __cdecl -[DeviceSettingsCheckBoxCell drawTitle:withFrame:inView:](
        DeviceSettingsCheckBoxCell *self,
        SEL a2,
        id a3,
        CGRect a4,
        id a5)
{
  double height; // d8
  double width; // d9
  double y; // d10
  double x; // d11
  id v11; // x19
  id v12; // x20
  id v13; // x23
  void *v14; // x22
  double v15; // d0
  double v16; // d12
  void *v17; // x0
  double v18; // d0
  double v19; // d0
  double v20; // d8
  double v21; // d1
  double v22; // d9
  double v23; // d2
  double v24; // d10
  double v25; // d3
  double v26; // d11
  double v27; // d0
  double v28; // d1
  double v29; // d2
  double v30; // d3
  objc_super v31; // [xsp+0h] [xbp-70h] BYREF
  CGRect result; // 0:d0.8,8:d1.8,16:d2.8,24:d3.8

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
    objc_msgSend(v14, "size");
    v16 = v15 + 6.0;
    v17 = -[DeviceSettingsCheckBoxCell userInterfaceLayoutDirection](self, "userInterfaceLayoutDirection");
    v18 = -0.0;
    if ( v17 != (void *)1 )
      v18 = v16;
    x = x + v18;
    width = width - v16;
  }
  v31.receiver = self;
  v31.super_class = (Class)&OBJC_CLASS___DeviceSettingsCheckBoxCell;
  -[DeviceSettingsCheckBoxCell drawTitle:withFrame:inView:](
    &v31,
    "drawTitle:withFrame:inView:",
    v11,
    v12,
    x,
    y,
    width,
    height);
  v20 = v19;
  v22 = v21;
  v24 = v23;
  v26 = v25;
  objc_release(v14);
  objc_release(v12);
  objc_release(v11);
  v27 = v20;
  v28 = v22;
  v29 = v24;
  v30 = v26;
  result.size.height = v30;
  result.size.width = v29;
  result.origin.y = v28;
  result.origin.x = v27;
  return result;
}