-[DeviceManageBackupsViewController toolTipForBackup:]
id __cdecl -[DeviceManageBackupsViewController toolTipForBackup:](
        DeviceManageBackupsViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  __int64 v5; // x22
  void *v6; // x23
  void *v7; // x21
  void *v8; // x25
  NSBundle *v9; // x26
  NSString *v10; // x27
  void *v11; // x25
  NSBundle *v12; // x26
  NSString *v13; // x27
  void *v14; // x25
  NSBundle *v15; // x26
  NSString *v16; // x27
  void *v17; // x25
  NSBundle *v18; // x26
  NSString *v19; // x27
  void *v20; // x25
  NSBundle *v21; // x26
  NSString *v22; // x24
  void *v23; // x24
  id v24; // x25
  NSBundle *v25; // x0
  NSBundle *v26; // x26
  NSString *v27; // x27
  void *v28; // x24
  NSBundle *v29; // x25
  NSString *v30; // x26
  void *v31; // x22
  id v32; // x24
  NSBundle *v33; // x25
  NSString *v34; // x26
  void *v35; // x22
  NSBundle *v36; // x0
  NSBundle *v37; // x24
  const __CFString *v38; // x2
  NSString *v39; // x22
  NSString *v40; // x23
  void *v41; // x22
  NSBundle *v42; // x23
  NSString *v43; // x24
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = AMPDeviceBackupPhoneNumber2Key;
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKeyedSubscript:", AMPDeviceBackupPhoneNumber2Key));
  objc_release(v6);
  v7 = objc_retainAutoreleasedReturnValue(+[NSMutableString string](&OBJC_CLASS___NSMutableString, "string"));
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKeyedSubscript:", AMPDeviceBackupProductNameKey));
  v9 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v10 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v9,
            "localizedStringForKey:value:table:",
            CFSTR("Model Name: %@"),
            &stru_1000BA220,
            0LL));
  -[DeviceManageBackupsViewController appendToToolTipString:backupValue:withPrefixString:](
    self,
    "appendToToolTipString:backupValue:withPrefixString:",
    v7,
    v8,
    v10);
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKeyedSubscript:", AMPDeviceBackupProductTypeKey));
  v12 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v13 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v12,
            "localizedStringForKey:value:table:",
            CFSTR("Model Identifier: %@"),
            &stru_1000BA220,
            0LL));
  -[DeviceManageBackupsViewController appendToToolTipString:backupValue:withPrefixString:](
    self,
    "appendToToolTipString:backupValue:withPrefixString:",
    v7,
    v11,
    v13);
  objc_release(v13);
  objc_release(v12);
  objc_release(v11);
  v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKeyedSubscript:", AMPDeviceBackupProductVersionKey));
  v15 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v16 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v15,
            "localizedStringForKey:value:table:",
            CFSTR("Software Version: %@"),
            &stru_1000BA220,
            0LL));
  -[DeviceManageBackupsViewController appendToToolTipString:backupValue:withPrefixString:](
    self,
    "appendToToolTipString:backupValue:withPrefixString:",
    v7,
    v14,
    v16);
  objc_release(v16);
  objc_release(v15);
  objc_release(v14);
  v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKeyedSubscript:", AMPDeviceBackupBuildVersionKey));
  v18 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v19 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v18,
            "localizedStringForKey:value:table:",
            CFSTR("Software Build: %@"),
            &stru_1000BA220,
            0LL));
  -[DeviceManageBackupsViewController appendToToolTipString:backupValue:withPrefixString:](
    self,
    "appendToToolTipString:backupValue:withPrefixString:",
    v7,
    v17,
    v19);
  objc_release(v19);
  objc_release(v18);
  objc_release(v17);
  v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKeyedSubscript:", AMPDeviceBackupSerialNumberKey));
  v21 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v22 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v21,
            "localizedStringForKey:value:table:",
            CFSTR("Serial Number: %@"),
            &stru_1000BA220,
            0LL));
  -[DeviceManageBackupsViewController appendToToolTipString:backupValue:withPrefixString:](
    self,
    "appendToToolTipString:backupValue:withPrefixString:",
    v7,
    v20,
    v22);
  objc_release(v22);
  objc_release(v21);
  objc_release(v20);
  v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKeyedSubscript:", AMPDeviceBackupPhoneNumberKey));
  v24 = objc_retainAutoreleasedReturnValue(
          -[DeviceManageBackupsViewController formattedPhoneNumberStringWithString:](
            self,
            "formattedPhoneNumberStringWithString:",
            v23));
  v25 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v26 = v25;
  if ( v6 )
  {
    v27 = objc_retainAutoreleasedReturnValue(
            -[NSBundle localizedStringForKey:value:table:](
              v25,
              "localizedStringForKey:value:table:",
              CFSTR("Phone Number 1: %@"),
              &stru_1000BA220,
              0LL));
    -[DeviceManageBackupsViewController appendToToolTipString:backupValue:withPrefixString:](
      self,
      "appendToToolTipString:backupValue:withPrefixString:",
      v7,
      v24,
      v27);
    objc_release(v27);
    objc_release(v26);
    objc_release(v24);
    objc_release(v23);
    v28 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKeyedSubscript:", AMPDeviceBackupIMEIKey));
    v29 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
    v30 = objc_retainAutoreleasedReturnValue(
            -[NSBundle localizedStringForKey:value:table:](
              v29,
              "localizedStringForKey:value:table:",
              CFSTR("IMEI 1: %@"),
              &stru_1000BA220,
              0LL));
    -[DeviceManageBackupsViewController appendToToolTipString:backupValue:withPrefixString:](
      self,
      "appendToToolTipString:backupValue:withPrefixString:",
      v7,
      v28,
      v30);
    objc_release(v30);
    objc_release(v29);
    objc_release(v28);
    v31 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKeyedSubscript:", v5));
    v32 = objc_retainAutoreleasedReturnValue(
            -[DeviceManageBackupsViewController formattedPhoneNumberStringWithString:](
              self,
              "formattedPhoneNumberStringWithString:",
              v31));
    v33 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
    v34 = objc_retainAutoreleasedReturnValue(
            -[NSBundle localizedStringForKey:value:table:](
              v33,
              "localizedStringForKey:value:table:",
              CFSTR("Phone Number 2: %@"),
              &stru_1000BA220,
              0LL));
    -[DeviceManageBackupsViewController appendToToolTipString:backupValue:withPrefixString:](
      self,
      "appendToToolTipString:backupValue:withPrefixString:",
      v7,
      v32,
      v34);
    objc_release(v34);
    objc_release(v33);
    objc_release(v32);
    objc_release(v31);
    v35 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKeyedSubscript:", AMPDeviceBackupIMEI2Key));
    v36 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
    v37 = v36;
    v38 = CFSTR("IMEI 2: %@");
  }
  else
  {
    v39 = objc_retainAutoreleasedReturnValue(
            -[NSBundle localizedStringForKey:value:table:](
              v25,
              "localizedStringForKey:value:table:",
              CFSTR("Phone Number: %@"),
              &stru_1000BA220,
              0LL));
    -[DeviceManageBackupsViewController appendToToolTipString:backupValue:withPrefixString:](
      self,
      "appendToToolTipString:backupValue:withPrefixString:",
      v7,
      v24,
      v39);
    objc_release(v39);
    objc_release(v26);
    objc_release(v24);
    objc_release(v23);
    v35 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKeyedSubscript:", AMPDeviceBackupIMEIKey));
    v36 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
    v37 = v36;
    v38 = CFSTR("IMEI: %@");
  }
  v40 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v36,
            "localizedStringForKey:value:table:",
            v38,
            &stru_1000BA220,
            0LL));
  -[DeviceManageBackupsViewController appendToToolTipString:backupValue:withPrefixString:](
    self,
    "appendToToolTipString:backupValue:withPrefixString:",
    v7,
    v35,
    v40);
  objc_release(v40);
  objc_release(v37);
  objc_release(v35);
  v41 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKeyedSubscript:", AMPDeviceBackupMEIDKey));
  v42 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v43 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v42,
            "localizedStringForKey:value:table:",
            CFSTR("MEID: %@"),
            &stru_1000BA220,
            0LL));
  -[DeviceManageBackupsViewController appendToToolTipString:backupValue:withPrefixString:](
    self,
    "appendToToolTipString:backupValue:withPrefixString:",
    v7,
    v41,
    v43);
  objc_release(v43);
  objc_release(v42);
  objc_release(v41);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}