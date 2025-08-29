-[DeviceHeaderViewController deviceDetailsStringModePhone2]
id __cdecl -[DeviceHeaderViewController deviceDetailsStringModePhone2](DeviceHeaderViewController *self, SEL a2)
{
  void *v3; // x19
  AMPDeviceInfo *v4; // x21
  void *v5; // x22
  AMPDeviceInfo *v6; // x21
  void *v7; // x22
  AMPDeviceInfo *v8; // x21
  void *v9; // x22
  NSBundle *v10; // x21
  NSString *v11; // x22
  AMPDeviceInfo *v12; // x23
  void *v13; // x24
  NSString *v14; // x21
  AMPDeviceInfo *v15; // x21
  void *v16; // x22
  NSBundle *v17; // x21
  NSString *v18; // x22
  AMPDeviceInfo *v19; // x20
  void *v20; // x23
  NSString *v21; // x21
  void *v22; // x20
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
  v5 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo phoneNumber2](v4, "phoneNumber2"));
  objc_release(v5);
  objc_release(v4);
  if ( v5 )
  {
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
    v7 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo phoneNumber2](v6, "phoneNumber2"));
    objc_msgSend(v3, "addObject:", v7);
    objc_release(v7);
    objc_release(v6);
  }
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
  v9 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo internationalMobileEquipmentIdentity2](v8, "internationalMobileEquipmentIdentity2"));
  objc_release(v9);
  objc_release(v8);
  if ( v9 )
  {
    v10 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
    v11 = objc_retainAutoreleasedReturnValue(
            -[NSBundle localizedStringForKey:value:table:](
              v10,
              "localizedStringForKey:value:table:",
              CFSTR("IMEI2: %@"),
              &stru_1000BA220,
              0LL));
    objc_release(v10);
    v12 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
    v13 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo internationalMobileEquipmentIdentity2](v12, "internationalMobileEquipmentIdentity2"));
    v14 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", v11, v13));
    objc_release(v13);
    objc_release(v12);
    objc_msgSend(v3, "addObject:", v14);
    objc_release(v14);
    objc_release(v11);
  }
  v15 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
  v16 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo integratedCircuitCardIdentity2](v15, "integratedCircuitCardIdentity2"));
  objc_release(v16);
  objc_release(v15);
  if ( v16 )
  {
    v17 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
    v18 = objc_retainAutoreleasedReturnValue(
            -[NSBundle localizedStringForKey:value:table:](
              v17,
              "localizedStringForKey:value:table:",
              CFSTR("ICCID2: %@"),
              &stru_1000BA220,
              0LL));
    objc_release(v17);
    v19 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
    v20 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo integratedCircuitCardIdentity2](v19, "integratedCircuitCardIdentity2"));
    v21 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", v18, v20));
    objc_release(v20);
    objc_release(v19);
    objc_msgSend(v3, "addObject:", v21);
    objc_release(v21);
    objc_release(v18);
  }
  v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "componentsJoinedByString:", CFSTR(" · ")));
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v22);
}