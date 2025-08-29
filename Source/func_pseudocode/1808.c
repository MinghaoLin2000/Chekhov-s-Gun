-[DeviceHeaderViewController deviceDetailsStringModeIdentifiers]
id __cdecl -[DeviceHeaderViewController deviceDetailsStringModeIdentifiers](DeviceHeaderViewController *self, SEL a2)
{
  void *v3; // x19
  AMPDeviceInfo *v4; // x21
  void *v5; // x22
  NSBundle *v6; // x21
  NSString *v7; // x22
  AMPDeviceInfo *v8; // x23
  void *v9; // x24
  NSString *v10; // x21
  AMPDeviceInfo *v11; // x21
  void *v12; // x22
  NSBundle *v13; // x21
  NSString *v14; // x22
  AMPDeviceInfo *v15; // x20
  void *v16; // x23
  NSString *v17; // x21
  void *v18; // x20
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
  v5 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo uniqueDeviceIdentifier](v4, "uniqueDeviceIdentifier"));
  objc_release(v5);
  objc_release(v4);
  if ( v5 )
  {
    v6 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
    v7 = objc_retainAutoreleasedReturnValue(
           -[NSBundle localizedStringForKey:value:table:](
             v6,
             "localizedStringForKey:value:table:",
             CFSTR("UDID: %@"),
             &stru_1000BA220,
             0LL));
    objc_release(v6);
    v8 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
    v9 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo uniqueDeviceIdentifier](v8, "uniqueDeviceIdentifier"));
    v10 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", v7, v9));
    objc_release(v9);
    objc_release(v8);
    objc_msgSend(v3, "addObject:", v10);
    objc_release(v10);
    objc_release(v7);
  }
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
  v12 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo embeddedIntegratedCircuitCardIdentity](v11, "embeddedIntegratedCircuitCardIdentity"));
  objc_release(v12);
  objc_release(v11);
  if ( v12 )
  {
    v13 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
    v14 = objc_retainAutoreleasedReturnValue(
            -[NSBundle localizedStringForKey:value:table:](
              v13,
              "localizedStringForKey:value:table:",
              CFSTR("EID: %@"),
              &stru_1000BA220,
              0LL));
    objc_release(v13);
    v15 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
    v16 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo embeddedIntegratedCircuitCardIdentity](v15, "embeddedIntegratedCircuitCardIdentity"));
    v17 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", v14, v16));
    objc_release(v16);
    objc_release(v15);
    objc_msgSend(v3, "addObject:", v17);
    objc_release(v17);
    objc_release(v14);
  }
  v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "componentsJoinedByString:", CFSTR(" · ")));
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v18);
}