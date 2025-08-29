-[DeviceHeaderViewController deviceDetailsStringModeDescription]
id __cdecl -[DeviceHeaderViewController deviceDetailsStringModeDescription](DeviceHeaderViewController *self, SEL a2)
{
  AMPDevice *v3; // x19
  AMPDevice *v4; // x20
  void *v5; // x22
  AMPDevice *v6; // x23
  __CFString *v7; // x19
  __CFString *v8; // x22
  NSNumber *v9; // x20
  __int64 v10; // x22
  NSNumber *v11; // x22
  NSString *v12; // x20
  NSNumber *v13; // x22
  NSNumber *v14; // x21
  NSString *v15; // x22
  NSBundle *v16; // x23
  NSString *v17; // x24
  NSString *v18; // x21
  NSBundle *v19; // x23
  NSString *v20; // x24
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  objc_release(v3);
  if ( v3 )
  {
    v4 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
    v5 = objc_retainAutoreleasedReturnValue(-[AMPDevice marketingName](v4, "marketingName"));
    if ( v5 )
    {
      v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
      v7 = objc_retainAutoreleasedReturnValue(-[AMPDevice marketingName](v6, "marketingName"));
      objc_release(v6);
    }
    else
    {
      v7 = &stru_1000BA220;
    }
    objc_release(v5);
    objc_release(v4);
    v9 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController deviceTotalDataCapacity](self, "deviceTotalDataCapacity"));
    v10 = -[NSNumber longLongValue](v9, "longLongValue");
    objc_release(v9);
    if ( v10 )
    {
      v11 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController deviceTotalDataCapacity](self, "deviceTotalDataCapacity"));
      v12 = objc_retainAutoreleasedReturnValue(
              +[NSByteCountFormatter stringFromByteCount:countStyle:](
                &OBJC_CLASS___NSByteCountFormatter,
                "stringFromByteCount:countStyle:",
                -[NSNumber longLongValue](v11, "longLongValue"),
                0LL));
      objc_release(v11);
      v13 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController deviceTotalDataAvailable](self, "deviceTotalDataAvailable"));
      objc_release(v13);
      if ( v13 )
      {
        v14 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController deviceTotalDataAvailable](self, "deviceTotalDataAvailable"));
        v15 = objc_retainAutoreleasedReturnValue(
                +[NSByteCountFormatter stringFromByteCount:countStyle:](
                  &OBJC_CLASS___NSByteCountFormatter,
                  "stringFromByteCount:countStyle:",
                  -[NSNumber longLongValue](v14, "longLongValue"),
                  0LL));
        objc_release(v14);
        v16 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
        v17 = objc_retainAutoreleasedReturnValue(
                -[NSBundle localizedStringForKey:value:table:](
                  v16,
                  "localizedStringForKey:value:table:",
                  CFSTR("%1$@ (%2$@ Available)"),
                  &stru_1000BA220,
                  0LL));
        v18 = objc_retainAutoreleasedReturnValue(
                +[NSString localizedStringWithFormat:](
                  &OBJC_CLASS___NSString,
                  "localizedStringWithFormat:",
                  v17,
                  v12,
                  v15));
        objc_release(v17);
        objc_release(v16);
        objc_release(v15);
      }
      else
      {
        v18 = objc_retain(v12);
      }
      if ( -[__CFString length](v7, "length") )
      {
        v19 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
        v20 = objc_retainAutoreleasedReturnValue(
                -[NSBundle localizedStringForKey:value:table:](
                  v19,
                  "localizedStringForKey:value:table:",
                  CFSTR("%1$@ · %2$@"),
                  &stru_1000BA220,
                  0LL));
        v8 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", v20, v7, v18));
        objc_release(v20);
        objc_release(v19);
      }
      else
      {
        v8 = objc_retain(v18);
      }
      objc_release(v18);
      objc_release(v12);
    }
    else
    {
      v8 = objc_retain(v7);
    }
    objc_release(v7);
  }
  else
  {
    v8 = &stru_1000BA220;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v8);
}