-[DeviceHeaderViewController deviceDetailsStringModePhone1]
id __cdecl -[DeviceHeaderViewController deviceDetailsStringModePhone1](DeviceHeaderViewController *self, SEL a2)
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
  AMPDeviceInfo *v19; // x23
  void *v20; // x24
  NSString *v21; // x21
  AMPDeviceInfo *v22; // x21
  void *v23; // x22
  NSBundle *v24; // x21
  NSString *v25; // x22
  AMPDeviceInfo *v26; // x20
  void *v27; // x23
  NSString *v28; // x21
  void *v29; // x20
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
  v5 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo phoneNumber](v4, "phoneNumber"));
  objc_release(v5);
  objc_release(v4);
  if ( v5 )
  {
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
    v7 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo phoneNumber](v6, "phoneNumber"));
    objc_msgSend(v3, "addObject:", v7);
    objc_release(v7);
    objc_release(v6);
  }
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
  v9 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo internationalMobileEquipmentIdentity](v8, "internationalMobileEquipmentIdentity"));
  objc_release(v9);
  objc_release(v8);
  if ( v9 )
  {
    v10 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
    v11 = objc_retainAutoreleasedReturnValue(
            -[NSBundle localizedStringForKey:value:table:](
              v10,
              "localizedStringForKey:value:table:",
              CFSTR("IMEI: %@"),
              &stru_1000BA220,
              0LL));
    objc_release(v10);
    v12 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
    v13 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo internationalMobileEquipmentIdentity](v12, "internationalMobileEquipmentIdentity"));
    v14 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", v11, v13));
    objc_release(v13);
    objc_release(v12);
    objc_msgSend(v3, "addObject:", v14);
    objc_release(v14);
    objc_release(v11);
  }
  v15 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
  v16 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo integratedCircuitCardIdentity](v15, "integratedCircuitCardIdentity"));
  objc_release(v16);
  objc_release(v15);
  if ( v16 )
  {
    v17 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
    v18 = objc_retainAutoreleasedReturnValue(
            -[NSBundle localizedStringForKey:value:table:](
              v17,
              "localizedStringForKey:value:table:",
              CFSTR("ICCID: %@"),
              &stru_1000BA220,
              0LL));
    objc_release(v17);
    v19 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
    v20 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo integratedCircuitCardIdentity](v19, "integratedCircuitCardIdentity"));
    v21 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", v18, v20));
    objc_release(v20);
    objc_release(v19);
    objc_msgSend(v3, "addObject:", v21);
    objc_release(v21);
    objc_release(v18);
  }
  v22 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
  v23 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo mobileEquipmentIdentifier](v22, "mobileEquipmentIdentifier"));
  objc_release(v23);
  objc_release(v22);
  if ( v23 )
  {
    v24 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
    v25 = objc_retainAutoreleasedReturnValue(
            -[NSBundle localizedStringForKey:value:table:](
              v24,
              "localizedStringForKey:value:table:",
              CFSTR("MEID: %@"),
              &stru_1000BA220,
              0LL));
    objc_release(v24);
    v26 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
    v27 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo mobileEquipmentIdentifier](v26, "mobileEquipmentIdentifier"));
    v28 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", v25, v27));
    objc_release(v27);
    objc_release(v26);
    objc_msgSend(v3, "addObject:", v28);
    objc_release(v28);
    objc_release(v25);
  }
  v29 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "componentsJoinedByString:", CFSTR(" · ")));
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v29);
}