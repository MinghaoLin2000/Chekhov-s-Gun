-[DeviceBackUpSettingsViewController presentSheetToEnterCurrentPasswordWithReply:]
void __cdecl -[DeviceBackUpSettingsViewController presentSheetToEnterCurrentPasswordWithReply:](
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
  __int64 v10; // x1
  void *v11; // x21
  NSBundle *v12; // x24
  NSString *v13; // x23
  void *v14; // x23
  void *v15; // x22
  NSWindow *v16; // x23
  _QWORD v17[4]; // [xsp+10h] [xbp-80h] BYREF
  id v18; // [xsp+30h] [xbp-60h]
  id v19; // [xsp+38h] [xbp-58h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v6 = objc_retainAutoreleasedReturnValue(
         -[NSBundle localizedStringForKey:value:table:](
           v5,
           "localizedStringForKey:value:table:",
           CFSTR("Enter the current password for your %@ backup."),
           &stru_1000BA220,
           0LL));
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v8 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceClass](v7, "deviceClass"));
  v9 = objc_retainAutoreleasedReturnValue(+[NSString localizedStringWithFormat:](&OBJC_CLASS___NSString, "localizedStringWithFormat:", v6, v8));
  objc_release(v8);
  objc_release(v7);
  objc_release(v6);
  objc_release(v5);
  v11 = (void *)objc_opt_new(&OBJC_CLASS___DeviceEnterCurrentPasswordViewController, v10);
  objc_msgSend(v11, "setPasswordPromptTitle:", v9);
  v12 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v13 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v12,
            "localizedStringForKey:value:table:",
            CFSTR("OK"),
            &stru_1000BA220,
            0LL));
  objc_msgSend(v11, "setOkButtonTitle:", v13);
  objc_release(v13);
  objc_release(v12);
  v14 = objc_retainAutoreleasedReturnValue(-[DeviceBackUpSettingsViewController view](self, "view"));
  v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "window"));
  objc_release(v14);
  if ( v15 )
  {
    v16 = objc_retainAutoreleasedReturnValue(
            +[NSWindow windowWithContentViewController:](
              &OBJC_CLASS___NSWindow,
              "windowWithContentViewController:",
              v11));
    v17[0] = _NSConcreteStackBlock;
    v17[1] = 3254779904LL;
    v17[2] = sub_10005DACC;
    v17[3] = &unk_1000B8AB8;
    v19 = objc_retain(v4);
    v18 = objc_retain(v11);
    objc_msgSend(v15, "beginSheet:completionHandler:", v16, v17);
    objc_release(v18);
    objc_release(v19);
    objc_release(v16);
  }
  else
  {
    (*((void (__fastcall **)(id, __int64, _QWORD))v4 + 2))(v4, -1001LL, 0LL);
  }
  objc_release(v15);
  objc_release(v11);
  objc_release(v9);
  objc_release(v4);
}