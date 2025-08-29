-[DeviceSetupViewController clickContinueButton:]
void __cdecl -[DeviceSetupViewController clickContinueButton:](DeviceSetupViewController *self, SEL a2, id a3)
{
  AMPDeviceSetupInfo *v4; // x20
  unsigned __int8 v5; // w21
  AMPDeviceSetupInfo *v6; // x20
  unsigned __int8 v7; // w21
  AMPDevice *v8; // x20
  NSButton *v9; // x21
  void *v10; // x22
  NSPopUpButton *v11; // x21
  unsigned __int64 v12; // x20
  NSArray *v13; // x21
  NSUInteger v14; // x22
  NSArray *v15; // x21
  id v16; // x20
  void *v17; // x21
  AMPDevicesClient *v18; // x22
  _QWORD v19[5]; // [xsp+8h] [xbp-48h] BYREF
  __int64 vars8; // [xsp+58h] [xbp+8h]

  -[DeviceSetupViewController setAllowDevicesClientEventsUI:](self, "setAllowDevicesClientEventsUI:", 1LL);
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController deviceSetupInfo](self, "deviceSetupInfo"));
  if ( (unsigned int)-[AMPDeviceSetupInfo showLicenseAgreement](v4, "showLicenseAgreement") )
  {
    v5 = -[DeviceSetupViewController didShowLicenseAgreement](self, "didShowLicenseAgreement");
    objc_release(v4);
    if ( (v5 & 1) == 0 )
    {
      -[DeviceSetupViewController setDidShowLicenseAgreement:](self, "setDidShowLicenseAgreement:", 1LL);
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      -[DeviceSetupViewController showLicenseAgreementUI](self, "showLicenseAgreementUI");
      return;
    }
  }
  else
  {
    objc_release(v4);
  }
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController deviceSetupInfo](self, "deviceSetupInfo"));
  if ( (unsigned int)-[AMPDeviceSetupInfo showWarrantyInfo](v6, "showWarrantyInfo") )
  {
    v7 = -[DeviceSetupViewController didShowWarrantyInfo](self, "didShowWarrantyInfo");
    objc_release(v6);
    if ( (v7 & 1) == 0 )
    {
      -[DeviceSetupViewController setDidShowWarrantyInfo:](self, "setDidShowWarrantyInfo:", 1LL);
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      -[DeviceSetupViewController showWarrantyInfoUI](self, "showWarrantyInfoUI");
      return;
    }
  }
  else
  {
    objc_release(v6);
  }
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  if ( (unsigned int)-[AMPDevice isClassicIPodDeviceType](v8, "isClassicIPodDeviceType") )
  {
    objc_release(v8);
LABEL_20:
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    -[DeviceSetupViewController startConfigure](self, "startConfigure");
    return;
  }
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController restoreFromBackupButton](self, "restoreFromBackupButton"));
  v10 = -[NSButton state](v9, "state");
  objc_release(v9);
  objc_release(v8);
  if ( v10 != (void *)1 )
    goto LABEL_20;
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController backupsListPopUpButton](self, "backupsListPopUpButton"));
  v12 = -[NSPopUpButton indexOfSelectedItem](v11, "indexOfSelectedItem");
  objc_release(v11);
  if ( (v12 & 0x8000000000000000LL) == 0 )
  {
    v13 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController backups](self, "backups"));
    v14 = -[NSArray count](v13, "count");
    objc_release(v13);
    if ( v12 < v14 )
    {
      v15 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController backups](self, "backups"));
      v16 = objc_retainAutoreleasedReturnValue(-[NSArray objectAtIndexedSubscript:](v15, "objectAtIndexedSubscript:", v12));
      objc_release(v15);
      v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "objectForKeyedSubscript:", AMPDeviceBackupIsEncryptedKey));
      if ( (unsigned int)objc_msgSend(v17, "boolValue") )
      {
        v18 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](self, "devicesClient"));
        v19[0] = _NSConcreteStackBlock;
        v19[1] = 3254779904LL;
        v19[2] = sub_10006D598;
        v19[3] = &unk_1000BA110;
        v19[4] = self;
        -[AMPDevicesClient fetchPasswordFromKeychainForBackup:withReply:](
          v18,
          "fetchPasswordFromKeychainForBackup:withReply:",
          v16,
          v19);
        objc_release(v18);
      }
      else
      {
        -[DeviceSetupViewController doRestoreFromBackup:setPasswordInKeychain:](
          self,
          "doRestoreFromBackup:setPasswordInKeychain:",
          0LL,
          0LL);
      }
      objc_release(v17);
      objc_release(v16);
    }
  }
}