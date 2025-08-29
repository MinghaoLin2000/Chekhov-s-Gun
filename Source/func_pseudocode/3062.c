-[DeviceSetupViewController presentBackupPasswordSheet:withDefaultPassword:completionHandler:]
void __cdecl -[DeviceSetupViewController presentBackupPasswordSheet:withDefaultPassword:completionHandler:](
        DeviceSetupViewController *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v8; // x19
  id v9; // x20
  id v10; // x21
  __int64 v11; // x1
  void *v12; // x22
  NSBundle *v13; // x24
  NSString *v14; // x26
  NSBundle *v15; // x24
  NSString *v16; // x25
  NSWindow *v17; // x24
  void *v18; // x23
  void *v19; // x25
  _QWORD v20[4]; // [xsp+10h] [xbp-80h] BYREF
  id v21; // [xsp+30h] [xbp-60h]
  id v22; // [xsp+38h] [xbp-58h]

  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  v10 = objc_retain(a5);
  v12 = (void *)objc_opt_new(&OBJC_CLASS___DeviceEnterCurrentPasswordViewController, v11);
  objc_msgSend(v12, "setPassword:", v9);
  v13 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v14 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v13,
            "localizedStringForKey:value:table:",
            CFSTR("Enter the password to unlock your backup."),
            &stru_1000BA220,
            0LL));
  objc_msgSend(v12, "setPasswordPromptTitle:", v14);
  objc_release(v14);
  objc_release(v13);
  v15 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v16 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v15,
            "localizedStringForKey:value:table:",
            CFSTR("Restore"),
            &stru_1000BA220,
            0LL));
  objc_msgSend(v12, "setOkButtonTitle:", v16);
  objc_release(v16);
  objc_release(v15);
  v17 = objc_retainAutoreleasedReturnValue(+[NSWindow windowWithContentViewController:](&OBJC_CLASS___NSWindow, "windowWithContentViewController:", v12));
  v18 = objc_retainAutoreleasedReturnValue(-[DeviceSetupViewController view](self, "view"));
  v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v18, "window"));
  v20[0] = _NSConcreteStackBlock;
  v20[1] = 3254779904LL;
  v20[2] = sub_100070220;
  v20[3] = &unk_1000B8AB8;
  v22 = objc_retain(v10);
  v21 = objc_retain(v12);
  objc_msgSend(v19, "beginSheet:completionHandler:", v17, v20);
  objc_release(v19);
  objc_release(v18);
  objc_release(v21);
  objc_release(v22);
  objc_release(v17);
  objc_release(v12);
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
}