-[DeviceMoreIdentifiersViewController updateSerialNumberFieldValues]
void __cdecl -[DeviceMoreIdentifiersViewController updateSerialNumberFieldValues](
        DeviceMoreIdentifiersViewController *self,
        SEL a2)
{
  AMPDeviceInfo *v3; // x20
  void *v4; // x21
  NSBundle *v5; // x20
  NSString *v6; // x21
  NSButton *v7; // x22
  AMPDeviceInfo *v8; // x20
  void *v9; // x0
  NSBundle *v10; // x20
  NSString *v11; // x21
  NSButton *v12; // x22
  AMPDeviceInfo *v13; // x20
  void *v14; // x21
  NSBundle *v15; // x20
  NSString *v16; // x21
  NSButton *v17; // x22
  AMPDeviceInfo *v18; // x20
  void *v19; // x21
  NSBundle *v20; // x20
  NSString *v21; // x21
  NSButton *v22; // x22
  AMPDeviceInfo *v23; // x20
  void *v24; // x21
  NSBundle *v25; // x20
  NSString *v26; // x21
  NSButton *v27; // x22
  AMPDeviceInfo *v28; // x20
  void *v29; // x21
  NSBundle *v30; // x20
  NSString *v31; // x21
  NSButton *v32; // x22
  AMPDeviceInfo *v33; // x20
  void *v34; // x21
  NSBundle *v35; // x20
  NSString *v36; // x21
  NSButton *v37; // x22
  AMPDeviceInfo *v38; // x20
  void *v39; // x21
  NSBundle *v40; // x20
  NSString *v41; // x21
  NSButton *v42; // x22
  AMPDeviceInfo *v43; // x20
  void *v44; // x21
  NSBundle *v45; // x20
  NSString *v46; // x21
  NSButton *v47; // x22
  AMPDeviceInfo *v48; // x20
  void *v49; // x21
  NSBundle *v50; // x20
  NSString *v51; // x21
  NSButton *v52; // x22
  AMPDeviceInfo *v53; // x20
  void *v54; // x21
  NSBundle *v55; // x20
  NSString *v56; // x21
  NSButton *v57; // x22
  void *v58; // x21
  NSTextField *v59; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  switch ( -[DeviceMoreIdentifiersViewController serialNumberFieldDisplayType](self, "serialNumberFieldDisplayType") )
  {
    case 0uLL:
      goto LABEL_5;
    case 1uLL:
      v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
      v4 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo uniqueDeviceIdentifier](v3, "uniqueDeviceIdentifier"));
      objc_release(v4);
      objc_release(v3);
      if ( v4 )
      {
        v5 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
        v6 = objc_retainAutoreleasedReturnValue(
               -[NSBundle localizedStringForKey:value:table:](
                 v5,
                 "localizedStringForKey:value:table:",
                 CFSTR("UDID:"),
                 &stru_1000BA220,
                 0LL));
        v7 = objc_retainAutoreleasedReturnValue(-[DeviceMoreIdentifiersViewController serialNumberPrompt](self, "serialNumberPrompt"));
        -[NSButton setTitle:](v7, "setTitle:", v6);
        objc_release(v7);
        objc_release(v6);
        objc_release(v5);
        v8 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
        v9 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo uniqueDeviceIdentifier](v8, "uniqueDeviceIdentifier"));
LABEL_33:
        v58 = v9;
        v59 = objc_retainAutoreleasedReturnValue(-[DeviceMoreIdentifiersViewController serialNumberValueTextField](self, "serialNumberValueTextField"));
        -[NSTextField setStringValue:](v59, "setStringValue:", v58);
        objc_release(v59);
        objc_release(v58);
        if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
          __break(0xC471u);
        objc_release(v8);
        return;
      }
      -[DeviceMoreIdentifiersViewController setSerialNumberFieldDisplayType:](
        self,
        "setSerialNumberFieldDisplayType:",
        2LL);
LABEL_7:
      v13 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
      v14 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo internationalMobileEquipmentIdentity](v13, "internationalMobileEquipmentIdentity"));
      objc_release(v14);
      objc_release(v13);
      if ( v14 )
      {
        v15 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
        v16 = objc_retainAutoreleasedReturnValue(
                -[NSBundle localizedStringForKey:value:table:](
                  v15,
                  "localizedStringForKey:value:table:",
                  CFSTR("IMEI:"),
                  &stru_1000BA220,
                  0LL));
        v17 = objc_retainAutoreleasedReturnValue(-[DeviceMoreIdentifiersViewController serialNumberPrompt](self, "serialNumberPrompt"));
        -[NSButton setTitle:](v17, "setTitle:", v16);
        objc_release(v17);
        objc_release(v16);
        objc_release(v15);
        v8 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
        v9 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo internationalMobileEquipmentIdentity](v8, "internationalMobileEquipmentIdentity"));
        goto LABEL_33;
      }
      -[DeviceMoreIdentifiersViewController setSerialNumberFieldDisplayType:](
        self,
        "setSerialNumberFieldDisplayType:",
        3LL);
LABEL_10:
      v18 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
      v19 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo integratedCircuitCardIdentity](v18, "integratedCircuitCardIdentity"));
      objc_release(v19);
      objc_release(v18);
      if ( v19 )
      {
        v20 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
        v21 = objc_retainAutoreleasedReturnValue(
                -[NSBundle localizedStringForKey:value:table:](
                  v20,
                  "localizedStringForKey:value:table:",
                  CFSTR("ICCID:"),
                  &stru_1000BA220,
                  0LL));
        v22 = objc_retainAutoreleasedReturnValue(-[DeviceMoreIdentifiersViewController serialNumberPrompt](self, "serialNumberPrompt"));
        -[NSButton setTitle:](v22, "setTitle:", v21);
        objc_release(v22);
        objc_release(v21);
        objc_release(v20);
        v8 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
        v9 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo integratedCircuitCardIdentity](v8, "integratedCircuitCardIdentity"));
        goto LABEL_33;
      }
      -[DeviceMoreIdentifiersViewController setSerialNumberFieldDisplayType:](
        self,
        "setSerialNumberFieldDisplayType:",
        4LL);
LABEL_13:
      v23 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
      v24 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo mobileEquipmentIdentifier](v23, "mobileEquipmentIdentifier"));
      objc_release(v24);
      objc_release(v23);
      if ( v24 )
      {
        v25 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
        v26 = objc_retainAutoreleasedReturnValue(
                -[NSBundle localizedStringForKey:value:table:](
                  v25,
                  "localizedStringForKey:value:table:",
                  CFSTR("MEID:"),
                  &stru_1000BA220,
                  0LL));
        v27 = objc_retainAutoreleasedReturnValue(-[DeviceMoreIdentifiersViewController serialNumberPrompt](self, "serialNumberPrompt"));
        -[NSButton setTitle:](v27, "setTitle:", v26);
        objc_release(v27);
        objc_release(v26);
        objc_release(v25);
        v8 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
        v9 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo mobileEquipmentIdentifier](v8, "mobileEquipmentIdentifier"));
        goto LABEL_33;
      }
      -[DeviceMoreIdentifiersViewController setSerialNumberFieldDisplayType:](
        self,
        "setSerialNumberFieldDisplayType:",
        5LL);
LABEL_16:
      v28 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
      v29 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo internationalMobileEquipmentIdentity2](v28, "internationalMobileEquipmentIdentity2"));
      objc_release(v29);
      objc_release(v28);
      if ( v29 )
      {
        v30 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
        v31 = objc_retainAutoreleasedReturnValue(
                -[NSBundle localizedStringForKey:value:table:](
                  v30,
                  "localizedStringForKey:value:table:",
                  CFSTR("IMEI2:"),
                  &stru_1000BA220,
                  0LL));
        v32 = objc_retainAutoreleasedReturnValue(-[DeviceMoreIdentifiersViewController serialNumberPrompt](self, "serialNumberPrompt"));
        -[NSButton setTitle:](v32, "setTitle:", v31);
        objc_release(v32);
        objc_release(v31);
        objc_release(v30);
        v8 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
        v9 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo internationalMobileEquipmentIdentity2](v8, "internationalMobileEquipmentIdentity2"));
        goto LABEL_33;
      }
      -[DeviceMoreIdentifiersViewController setSerialNumberFieldDisplayType:](
        self,
        "setSerialNumberFieldDisplayType:",
        6LL);
LABEL_19:
      v33 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
      v34 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo integratedCircuitCardIdentity2](v33, "integratedCircuitCardIdentity2"));
      objc_release(v34);
      objc_release(v33);
      if ( v34 )
      {
        v35 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
        v36 = objc_retainAutoreleasedReturnValue(
                -[NSBundle localizedStringForKey:value:table:](
                  v35,
                  "localizedStringForKey:value:table:",
                  CFSTR("ICCID2:"),
                  &stru_1000BA220,
                  0LL));
        v37 = objc_retainAutoreleasedReturnValue(-[DeviceMoreIdentifiersViewController serialNumberPrompt](self, "serialNumberPrompt"));
        -[NSButton setTitle:](v37, "setTitle:", v36);
        objc_release(v37);
        objc_release(v36);
        objc_release(v35);
        v8 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
        v9 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo integratedCircuitCardIdentity2](v8, "integratedCircuitCardIdentity2"));
        goto LABEL_33;
      }
      -[DeviceMoreIdentifiersViewController setSerialNumberFieldDisplayType:](
        self,
        "setSerialNumberFieldDisplayType:",
        7LL);
LABEL_22:
      v38 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
      v39 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo embeddedIntegratedCircuitCardIdentity](v38, "embeddedIntegratedCircuitCardIdentity"));
      objc_release(v39);
      objc_release(v38);
      if ( v39 )
      {
        v40 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
        v41 = objc_retainAutoreleasedReturnValue(
                -[NSBundle localizedStringForKey:value:table:](
                  v40,
                  "localizedStringForKey:value:table:",
                  CFSTR("EID:"),
                  &stru_1000BA220,
                  0LL));
        v42 = objc_retainAutoreleasedReturnValue(-[DeviceMoreIdentifiersViewController serialNumberPrompt](self, "serialNumberPrompt"));
        -[NSButton setTitle:](v42, "setTitle:", v41);
        objc_release(v42);
        objc_release(v41);
        objc_release(v40);
        v8 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
        v9 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo embeddedIntegratedCircuitCardIdentity](v8, "embeddedIntegratedCircuitCardIdentity"));
        goto LABEL_33;
      }
      -[DeviceMoreIdentifiersViewController setSerialNumberFieldDisplayType:](
        self,
        "setSerialNumberFieldDisplayType:",
        8LL);
LABEL_25:
      v43 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
      v44 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo uniqueChipIdentifier](v43, "uniqueChipIdentifier"));
      objc_release(v44);
      objc_release(v43);
      if ( v44 )
      {
        v45 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
        v46 = objc_retainAutoreleasedReturnValue(
                -[NSBundle localizedStringForKey:value:table:](
                  v45,
                  "localizedStringForKey:value:table:",
                  CFSTR("ECID:"),
                  &stru_1000BA220,
                  0LL));
        v47 = objc_retainAutoreleasedReturnValue(-[DeviceMoreIdentifiersViewController serialNumberPrompt](self, "serialNumberPrompt"));
        -[NSButton setTitle:](v47, "setTitle:", v46);
        objc_release(v47);
        objc_release(v46);
        objc_release(v45);
        v8 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
        v9 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo uniqueChipIdentifier](v8, "uniqueChipIdentifier"));
        goto LABEL_33;
      }
      -[DeviceMoreIdentifiersViewController setSerialNumberFieldDisplayType:](
        self,
        "setSerialNumberFieldDisplayType:",
        9LL);
LABEL_28:
      v48 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
      v49 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo modelNumber](v48, "modelNumber"));
      objc_release(v49);
      objc_release(v48);
      if ( v49 )
      {
        v50 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
        v51 = objc_retainAutoreleasedReturnValue(
                -[NSBundle localizedStringForKey:value:table:](
                  v50,
                  "localizedStringForKey:value:table:",
                  CFSTR("Model Number:"),
                  &stru_1000BA220,
                  0LL));
        v52 = objc_retainAutoreleasedReturnValue(-[DeviceMoreIdentifiersViewController serialNumberPrompt](self, "serialNumberPrompt"));
        -[NSButton setTitle:](v52, "setTitle:", v51);
        objc_release(v52);
        objc_release(v51);
        objc_release(v50);
        v8 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
        v9 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo modelNumber](v8, "modelNumber"));
        goto LABEL_33;
      }
      -[DeviceMoreIdentifiersViewController setSerialNumberFieldDisplayType:](
        self,
        "setSerialNumberFieldDisplayType:",
        10LL);
LABEL_31:
      v53 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
      v54 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo productType](v53, "productType"));
      objc_release(v54);
      objc_release(v53);
      if ( v54 )
      {
        v55 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
        v56 = objc_retainAutoreleasedReturnValue(
                -[NSBundle localizedStringForKey:value:table:](
                  v55,
                  "localizedStringForKey:value:table:",
                  CFSTR("Product Type:"),
                  &stru_1000BA220,
                  0LL));
        v57 = objc_retainAutoreleasedReturnValue(-[DeviceMoreIdentifiersViewController serialNumberPrompt](self, "serialNumberPrompt"));
        -[NSButton setTitle:](v57, "setTitle:", v56);
        objc_release(v57);
        objc_release(v56);
        objc_release(v55);
        v8 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
        v9 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo productType](v8, "productType"));
        goto LABEL_33;
      }
      return;
    case 2uLL:
      goto LABEL_7;
    case 3uLL:
      goto LABEL_10;
    case 4uLL:
      goto LABEL_13;
    case 5uLL:
      goto LABEL_16;
    case 6uLL:
      goto LABEL_19;
    case 7uLL:
      goto LABEL_22;
    case 8uLL:
      goto LABEL_25;
    case 9uLL:
      goto LABEL_28;
    case 0xAuLL:
      goto LABEL_31;
    default:
      -[DeviceMoreIdentifiersViewController setSerialNumberFieldDisplayType:](
        self,
        "setSerialNumberFieldDisplayType:",
        0LL);
LABEL_5:
      v10 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
      v11 = objc_retainAutoreleasedReturnValue(
              -[NSBundle localizedStringForKey:value:table:](
                v10,
                "localizedStringForKey:value:table:",
                CFSTR("Serial Number:"),
                &stru_1000BA220,
                0LL));
      v12 = objc_retainAutoreleasedReturnValue(-[DeviceMoreIdentifiersViewController serialNumberPrompt](self, "serialNumberPrompt"));
      -[NSButton setTitle:](v12, "setTitle:", v11);
      objc_release(v12);
      objc_release(v11);
      objc_release(v10);
      v8 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
      v9 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo serialNumber](v8, "serialNumber"));
      goto LABEL_33;
  }
}