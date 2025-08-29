-[DeviceHeaderViewController currentDeviceDetailMenuItems]
id __cdecl -[DeviceHeaderViewController currentDeviceDetailMenuItems](DeviceHeaderViewController *self, SEL a2)
{
  void *v3; // x19
  NSBundle *v4; // x21
  NSBundle *v5; // x23
  AMPDeviceInfo *v6; // x22
  DeviceHeaderViewController *v7; // x0
  void *v8; // x2
  void *v9; // x3
  void *v10; // x4
  NSBundle *v11; // x21
  NSString *v12; // x23
  id v13; // x24
  NSMenuItem *v14; // x21
  NSBundle *v15; // x21
  NSString *v16; // x23
  AMPDeviceInfo *v17; // x24
  void *v18; // x25
  NSBundle *v19; // x21
  NSString *v20; // x23
  AMPDeviceInfo *v21; // x24
  void *v22; // x25
  AMPDeviceInfo *v23; // x0
  NSBundle *v24; // x21
  NSString *v25; // x23
  id v26; // x24
  NSMenuItem *v27; // x21
  NSBundle *v28; // x21
  NSString *v29; // x23
  AMPDeviceInfo *v30; // x24
  void *v31; // x25
  AMPDeviceInfo *v32; // x24
  NSBundle *v33; // x21
  NSString *v34; // x23
  id v35; // x24
  NSMenuItem *v36; // x21
  AMPDeviceInfo *v37; // x23
  void *v38; // x24
  NSBundle *v39; // x23
  NSString *v40; // x24
  NSBundle *v41; // x23
  NSString *v42; // x24
  AMPDeviceInfo *v43; // x25
  void *v44; // x26
  NSBundle *v45; // x23
  NSString *v46; // x24
  AMPDeviceInfo *v47; // x25
  void *v48; // x26
  void *v49; // x25
  NSBundle *v50; // x21
  NSString *v51; // x23
  id v52; // x24
  NSMenuItem *v53; // x21
  AMPDeviceInfo *v54; // x23
  void *v55; // x24
  id v56; // x21
  NSBundle *v57; // x23
  NSString *v58; // x24
  AMPDeviceInfo *v59; // x24
  void *v60; // x25
  id v61; // x23
  NSBundle *v62; // x21
  NSString *v63; // x24
  AMPDeviceInfo *v64; // x24
  void *v65; // x25
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  switch ( -[DeviceHeaderViewController deviceDetailsStringMode](self, "deviceDetailsStringMode") )
  {
    case 0LL:
      v4 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
      v5 = objc_retainAutoreleasedReturnValue(
             -[NSBundle localizedStringForKey:value:table:](
               v4,
               "localizedStringForKey:value:table:",
               CFSTR("Copy"),
               &stru_1000BA220,
               0LL));
      v6 = (AMPDeviceInfo *)objc_retainAutoreleasedReturnValue(
                              -[DeviceHeaderViewController currentDeviceDetailsString](
                                self,
                                "currentDeviceDetailsString"));
      v7 = self;
      v8 = v3;
      v9 = v5;
      v10 = v6;
      goto LABEL_9;
    case 1LL:
      v11 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
      v12 = objc_retainAutoreleasedReturnValue(
              -[NSBundle localizedStringForKey:value:table:](
                v11,
                "localizedStringForKey:value:table:",
                CFSTR("Copy All"),
                &stru_1000BA220,
                0LL));
      v13 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController currentDeviceDetailsString](self, "currentDeviceDetailsString"));
      -[DeviceHeaderViewController appendToMenuItems:menuItemWithTitle:representedObject:](
        self,
        "appendToMenuItems:menuItemWithTitle:representedObject:",
        v3,
        v12,
        v13);
      objc_release(v13);
      objc_release(v12);
      objc_release(v11);
      v14 = objc_retainAutoreleasedReturnValue(+[NSMenuItem separatorItem](&OBJC_CLASS___NSMenuItem, "separatorItem"));
      objc_msgSend(v3, "addObject:", v14);
      objc_release(v14);
      v15 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
      v16 = objc_retainAutoreleasedReturnValue(
              -[NSBundle localizedStringForKey:value:table:](
                v15,
                "localizedStringForKey:value:table:",
                CFSTR("Copy Serial Number"),
                &stru_1000BA220,
                0LL));
      v17 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
      v18 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo serialNumber](v17, "serialNumber"));
      -[DeviceHeaderViewController appendToMenuItems:menuItemWithTitle:representedObject:](
        self,
        "appendToMenuItems:menuItemWithTitle:representedObject:",
        v3,
        v16,
        v18);
      objc_release(v18);
      objc_release(v17);
      objc_release(v16);
      objc_release(v15);
      v19 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
      v20 = objc_retainAutoreleasedReturnValue(
              -[NSBundle localizedStringForKey:value:table:](
                v19,
                "localizedStringForKey:value:table:",
                CFSTR("Copy Model Number"),
                &stru_1000BA220,
                0LL));
      v21 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
      v22 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo modelNumber](v21, "modelNumber"));
      -[DeviceHeaderViewController appendToMenuItems:menuItemWithTitle:representedObject:](
        self,
        "appendToMenuItems:menuItemWithTitle:representedObject:",
        v3,
        v20,
        v22);
      objc_release(v22);
      objc_release(v21);
      objc_release(v20);
      objc_release(v19);
      v4 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
      v5 = objc_retainAutoreleasedReturnValue(
             -[NSBundle localizedStringForKey:value:table:](
               v4,
               "localizedStringForKey:value:table:",
               CFSTR("Copy Product Type"),
               &stru_1000BA220,
               0LL));
      v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
      v23 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo productType](v6, "productType"));
      goto LABEL_5;
    case 2LL:
      v24 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
      v25 = objc_retainAutoreleasedReturnValue(
              -[NSBundle localizedStringForKey:value:table:](
                v24,
                "localizedStringForKey:value:table:",
                CFSTR("Copy All"),
                &stru_1000BA220,
                0LL));
      v26 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController currentDeviceDetailsString](self, "currentDeviceDetailsString"));
      -[DeviceHeaderViewController appendToMenuItems:menuItemWithTitle:representedObject:](
        self,
        "appendToMenuItems:menuItemWithTitle:representedObject:",
        v3,
        v25,
        v26);
      objc_release(v26);
      objc_release(v25);
      objc_release(v24);
      v27 = objc_retainAutoreleasedReturnValue(+[NSMenuItem separatorItem](&OBJC_CLASS___NSMenuItem, "separatorItem"));
      objc_msgSend(v3, "addObject:", v27);
      objc_release(v27);
      v28 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
      v29 = objc_retainAutoreleasedReturnValue(
              -[NSBundle localizedStringForKey:value:table:](
                v28,
                "localizedStringForKey:value:table:",
                CFSTR("Copy UDID"),
                &stru_1000BA220,
                0LL));
      v30 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
      v31 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo uniqueDeviceIdentifier](v30, "uniqueDeviceIdentifier"));
      -[DeviceHeaderViewController appendToMenuItems:menuItemWithTitle:representedObject:](
        self,
        "appendToMenuItems:menuItemWithTitle:representedObject:",
        v3,
        v29,
        v31);
      objc_release(v31);
      objc_release(v30);
      objc_release(v29);
      objc_release(v28);
      v4 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
      v5 = objc_retainAutoreleasedReturnValue(
             -[NSBundle localizedStringForKey:value:table:](
               v4,
               "localizedStringForKey:value:table:",
               CFSTR("Copy EID"),
               &stru_1000BA220,
               0LL));
      v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
      v23 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo embeddedIntegratedCircuitCardIdentity](v6, "embeddedIntegratedCircuitCardIdentity"));
LABEL_5:
      v32 = v23;
      -[DeviceHeaderViewController appendToMenuItems:menuItemWithTitle:representedObject:](
        self,
        "appendToMenuItems:menuItemWithTitle:representedObject:",
        v3,
        v5,
        v23);
      goto LABEL_7;
    case 3LL:
      v33 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
      v34 = objc_retainAutoreleasedReturnValue(
              -[NSBundle localizedStringForKey:value:table:](
                v33,
                "localizedStringForKey:value:table:",
                CFSTR("Copy All"),
                &stru_1000BA220,
                0LL));
      v35 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController currentDeviceDetailsString](self, "currentDeviceDetailsString"));
      -[DeviceHeaderViewController appendToMenuItems:menuItemWithTitle:representedObject:](
        self,
        "appendToMenuItems:menuItemWithTitle:representedObject:",
        v3,
        v34,
        v35);
      objc_release(v35);
      objc_release(v34);
      objc_release(v33);
      v36 = objc_retainAutoreleasedReturnValue(+[NSMenuItem separatorItem](&OBJC_CLASS___NSMenuItem, "separatorItem"));
      objc_msgSend(v3, "addObject:", v36);
      objc_release(v36);
      v37 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
      v38 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo phoneNumber](v37, "phoneNumber"));
      v4 = (NSBundle *)objc_retainAutoreleasedReturnValue(
                         -[DeviceHeaderViewController representedObjectForString:fakeString:useFakeIfNil:](
                           self,
                           "representedObjectForString:fakeString:useFakeIfNil:",
                           v38,
                           CFSTR("(408) 555-1312"),
                           0LL));
      objc_release(v38);
      objc_release(v37);
      v39 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
      v40 = objc_retainAutoreleasedReturnValue(
              -[NSBundle localizedStringForKey:value:table:](
                v39,
                "localizedStringForKey:value:table:",
                CFSTR("Copy Phone Number"),
                &stru_1000BA220,
                0LL));
      -[DeviceHeaderViewController appendToMenuItems:menuItemWithTitle:representedObject:](
        self,
        "appendToMenuItems:menuItemWithTitle:representedObject:",
        v3,
        v40,
        v4);
      objc_release(v40);
      objc_release(v39);
      v41 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
      v42 = objc_retainAutoreleasedReturnValue(
              -[NSBundle localizedStringForKey:value:table:](
                v41,
                "localizedStringForKey:value:table:",
                CFSTR("Copy IMEI"),
                &stru_1000BA220,
                0LL));
      v43 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
      v44 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo internationalMobileEquipmentIdentity](v43, "internationalMobileEquipmentIdentity"));
      -[DeviceHeaderViewController appendToMenuItems:menuItemWithTitle:representedObject:](
        self,
        "appendToMenuItems:menuItemWithTitle:representedObject:",
        v3,
        v42,
        v44);
      objc_release(v44);
      objc_release(v43);
      objc_release(v42);
      objc_release(v41);
      v45 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
      v46 = objc_retainAutoreleasedReturnValue(
              -[NSBundle localizedStringForKey:value:table:](
                v45,
                "localizedStringForKey:value:table:",
                CFSTR("Copy ICCID"),
                &stru_1000BA220,
                0LL));
      v47 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
      v48 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo integratedCircuitCardIdentity](v47, "integratedCircuitCardIdentity"));
      -[DeviceHeaderViewController appendToMenuItems:menuItemWithTitle:representedObject:](
        self,
        "appendToMenuItems:menuItemWithTitle:representedObject:",
        v3,
        v46,
        v48);
      objc_release(v48);
      objc_release(v47);
      objc_release(v46);
      objc_release(v45);
      v5 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
      v6 = objc_retainAutoreleasedReturnValue(
             -[NSBundle localizedStringForKey:value:table:](
               v5,
               "localizedStringForKey:value:table:",
               CFSTR("Copy MEID"),
               &stru_1000BA220,
               0LL));
      v32 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
      v49 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo mobileEquipmentIdentifier](v32, "mobileEquipmentIdentifier"));
      -[DeviceHeaderViewController appendToMenuItems:menuItemWithTitle:representedObject:](
        self,
        "appendToMenuItems:menuItemWithTitle:representedObject:",
        v3,
        v6,
        v49);
      objc_release(v49);
LABEL_7:
      objc_release(v32);
      goto LABEL_10;
    case 4LL:
      v50 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
      v51 = objc_retainAutoreleasedReturnValue(
              -[NSBundle localizedStringForKey:value:table:](
                v50,
                "localizedStringForKey:value:table:",
                CFSTR("Copy All"),
                &stru_1000BA220,
                0LL));
      v52 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController currentDeviceDetailsString](self, "currentDeviceDetailsString"));
      -[DeviceHeaderViewController appendToMenuItems:menuItemWithTitle:representedObject:](
        self,
        "appendToMenuItems:menuItemWithTitle:representedObject:",
        v3,
        v51,
        v52);
      objc_release(v52);
      objc_release(v51);
      objc_release(v50);
      v53 = objc_retainAutoreleasedReturnValue(+[NSMenuItem separatorItem](&OBJC_CLASS___NSMenuItem, "separatorItem"));
      objc_msgSend(v3, "addObject:", v53);
      objc_release(v53);
      v54 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
      v55 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo phoneNumber2](v54, "phoneNumber2"));
      v56 = objc_retainAutoreleasedReturnValue(
              -[DeviceHeaderViewController representedObjectForString:fakeString:useFakeIfNil:](
                self,
                "representedObjectForString:fakeString:useFakeIfNil:",
                v55,
                CFSTR("(408) 555-1313"),
                0LL));
      objc_release(v55);
      objc_release(v54);
      v57 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
      v58 = objc_retainAutoreleasedReturnValue(
              -[NSBundle localizedStringForKey:value:table:](
                v57,
                "localizedStringForKey:value:table:",
                CFSTR("Copy Phone Number"),
                &stru_1000BA220,
                0LL));
      -[DeviceHeaderViewController appendToMenuItems:menuItemWithTitle:representedObject:](
        self,
        "appendToMenuItems:menuItemWithTitle:representedObject:",
        v3,
        v58,
        v56);
      objc_release(v58);
      objc_release(v57);
      v59 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
      v60 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo internationalMobileEquipmentIdentity2](v59, "internationalMobileEquipmentIdentity2"));
      v61 = objc_retainAutoreleasedReturnValue(
              -[DeviceHeaderViewController representedObjectForString:fakeString:useFakeIfNil:](
                self,
                "representedObjectForString:fakeString:useFakeIfNil:",
                v60,
                CFSTR("123456789012345"),
                0LL));
      objc_release(v56);
      objc_release(v60);
      objc_release(v59);
      v62 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
      v63 = objc_retainAutoreleasedReturnValue(
              -[NSBundle localizedStringForKey:value:table:](
                v62,
                "localizedStringForKey:value:table:",
                CFSTR("Copy IMEI"),
                &stru_1000BA220,
                0LL));
      -[DeviceHeaderViewController appendToMenuItems:menuItemWithTitle:representedObject:](
        self,
        "appendToMenuItems:menuItemWithTitle:representedObject:",
        v3,
        v63,
        v61);
      objc_release(v63);
      objc_release(v62);
      v64 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
      v65 = objc_retainAutoreleasedReturnValue(-[AMPDeviceInfo integratedCircuitCardIdentity2](v64, "integratedCircuitCardIdentity2"));
      v4 = (NSBundle *)objc_retainAutoreleasedReturnValue(
                         -[DeviceHeaderViewController representedObjectForString:fakeString:useFakeIfNil:](
                           self,
                           "representedObjectForString:fakeString:useFakeIfNil:",
                           v65,
                           CFSTR("12345678901234567890"),
                           0LL));
      objc_release(v61);
      objc_release(v65);
      objc_release(v64);
      v5 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
      v6 = objc_retainAutoreleasedReturnValue(
             -[NSBundle localizedStringForKey:value:table:](
               v5,
               "localizedStringForKey:value:table:",
               CFSTR("Copy ICCID"),
               &stru_1000BA220,
               0LL));
      v7 = self;
      v8 = v3;
      v9 = v6;
      v10 = v4;
LABEL_9:
      -[DeviceHeaderViewController appendToMenuItems:menuItemWithTitle:representedObject:](
        v7,
        "appendToMenuItems:menuItemWithTitle:representedObject:",
        v8,
        v9,
        v10);
LABEL_10:
      objc_release(v6);
      objc_release(v5);
      objc_release(v4);
      break;
    default:
      break;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}