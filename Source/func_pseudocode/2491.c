-[DeviceBackUpSettingsViewController presentSheetToEnterNewPasswordWithReply:]
void __cdecl -[DeviceBackUpSettingsViewController presentSheetToEnterNewPasswordWithReply:](
        DeviceBackUpSettingsViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  NSBundle *v5; // x21
  NSString *v6; // x24
  AMPDevice *v7; // x25
  void *v8; // x26
  NSString *v9; // x20
  void *v10; // x21
  __int64 v11; // x24
  __int64 v12; // x1
  void *v13; // x22
  void *v14; // x24
  void *v15; // x23
  NSWindow *v16; // x24
  _QWORD v17[4]; // [xsp+10h] [xbp-70h] BYREF
  id v18; // [xsp+30h] [xbp-50h]
  id v19; // [xsp+38h] [xbp-48h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v6 = objc_retainAutoreleasedReturnValue(
         -[NSBundle localizedStringForKey:value:table:](
           v5,
           "localizedStringForKey:value:table:",
           CFSTR("Enter a password to protect your %@ backup."),
           &stru_1000BA220,
           0LL));
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v8 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceClass](v7, "deviceClass"));
  v9 = objc_retainAutoreleasedReturnValue(+[NSString localizedStringWithFormat:](&OBJC_CLASS___NSString, "localizedStringWithFormat:", v6, v8));
  objc_release(v8);
  objc_release(v7);
  objc_release(v6);
  objc_release(v5);
  v10 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  objc_msgSend(v10, "setObject:forKeyedSubscript:", v9, AMPDevicePromptForPasswordExplanationKey);
  objc_msgSend(v10, "setObject:forKeyedSubscript:", &stru_1000BA220, AMPDevicePromptForPasswordDefaultPasswordKey);
  v11 = AMPDevicePromptForPasswordVerifyPasswordKey;
  objc_msgSend(v10, "setObject:forKeyedSubscript:", &stru_1000BA220, AMPDevicePromptForPasswordVerifyPasswordKey);
  objc_msgSend(v10, "setObject:forKeyedSubscript:", &__kCFBooleanTrue, AMPDevicePromptForPasswordCheckboxValueKey);
  objc_msgSend(v10, "setObject:forKeyedSubscript:", &__kCFBooleanTrue, AMPDevicePromptForPasswordHideUserNameKey);
  objc_msgSend(v10, "setObject:forKeyedSubscript:", &__kCFBooleanTrue, AMPDevicePromptForPasswordLockUserNameKey);
  objc_msgSend(v10, "setObject:forKeyedSubscript:", &__kCFBooleanTrue, v11);
  v13 = (void *)objc_opt_new(&OBJC_CLASS___DeviceBackupEnterPasswordViewController, v12);
  objc_msgSend(v13, "setParameters:", v10);
  v14 = objc_retainAutoreleasedReturnValue(-[DeviceBackUpSettingsViewController view](self, "view"));
  v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "window"));
  objc_release(v14);
  if ( v15 )
  {
    v16 = objc_retainAutoreleasedReturnValue(
            +[NSWindow windowWithContentViewController:](
              &OBJC_CLASS___NSWindow,
              "windowWithContentViewController:",
              v13));
    v17[0] = _NSConcreteStackBlock;
    v17[1] = 3254779904LL;
    v17[2] = sub_10005D790;
    v17[3] = &unk_1000B8AB8;
    v19 = objc_retain(v4);
    v18 = objc_retain(v13);
    objc_msgSend(v15, "beginSheet:completionHandler:", v16, v17);
    objc_release(v18);
    objc_release(v19);
    objc_release(v16);
  }
  else
  {
    (*((void (__fastcall **)(id, __int64, _QWORD, _QWORD))v4 + 2))(v4, -1001LL, 0LL, 0LL);
  }
  objc_release(v15);
  objc_release(v13);
  objc_release(v10);
  objc_release(v9);
  objc_release(v4);
}