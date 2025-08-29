-[DeviceSettingsCheckBox hitTest:]
id __cdecl -[DeviceSettingsCheckBox hitTest:](DeviceSettingsCheckBox *self, SEL a2, CGPoint a3)
{
  double y; // d8
  double x; // d9
  void *v6; // x20
  double v7; // d0
  CGFloat v8; // d10
  double v9; // d1
  CGFloat v10; // d11
  double v11; // d2
  CGFloat v12; // d12
  double v13; // d3
  CGFloat v14; // d13
  DeviceSettingsCheckBox **v15; // x0
  id v16; // x0
  DeviceSettingsCheckBox *v18; // [xsp+0h] [xbp-60h] BYREF
  DeviceSettingsCheckBox *v19; // [xsp+10h] [xbp-50h] BYREF
  __int64 vars8; // [xsp+68h] [xbp+8h]
  NSPoint v21; // 0:d0.8,8:d1.8
  NSRect v22; // 0:d2.8,8:d3.8,16:d4.8,24:d5.8

  y = a3.y;
  x = a3.x;
  if ( !-[DeviceSettingsCheckBox hitTestOnlyOnImage](self, "hitTestOnlyOnImage") )
  {
    v18 = self;
    v15 = &v18;
    goto LABEL_5;
  }
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsCheckBox cell](self, "cell"));
  -[DeviceSettingsCheckBox frame](self, "frame");
  objc_msgSend(v6, "imageRectForBounds:");
  v8 = v7;
  v10 = v9;
  v12 = v11;
  v14 = v13;
  objc_release(v6);
  v21.x = x;
  v21.y = y;
  v22.origin.x = v8;
  v22.origin.y = v10;
  v22.size.width = v12;
  v22.size.height = v14;
  if ( NSPointInRect(v21, v22) )
  {
    v19 = self;
    v15 = &v19;
LABEL_5:
    v15[1] = (DeviceSettingsCheckBox *)&OBJC_CLASS___DeviceSettingsCheckBox;
    v16 = objc_retainAutoreleasedReturnValue(objc_msgSendSuper2((objc_super *)v15, "hitTest:", x, y, v18));
    goto LABEL_7;
  }
  v16 = 0LL;
LABEL_7:
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v16);
}