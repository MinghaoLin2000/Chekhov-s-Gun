-[DeviceUIServiceViewController promptForPasswordWithParameters:inParentWindow:withReply:]
void __cdecl -[DeviceUIServiceViewController promptForPasswordWithParameters:inParentWindow:withReply:](
        DeviceUIServiceViewController *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v8; // x19
  id v9; // x20
  id v10; // x21
  DeviceViewController *v11; // x22
  unsigned __int8 v12; // w23
  void *v13; // x22
  __int64 v14; // x1
  void *v15; // x23
  id v16; // x24
  DeviceViewController *v17; // x25
  void *v18; // x26
  NSWindow *v19; // x25
  _QWORD v20[4]; // [xsp+10h] [xbp-70h] BYREF
  id v21; // [xsp+30h] [xbp-50h]
  id v22; // [xsp+38h] [xbp-48h]

  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  v10 = objc_retain(a5);
  if ( !v9 )
  {
    v11 = objc_retainAutoreleasedReturnValue(-[DeviceUIServiceViewController currentController](self, "currentController"));
    v12 = -[DeviceViewController canPresentDevicesClientEventsUI](v11, "canPresentDevicesClientEventsUI");
    objc_release(v11);
    if ( (v12 & 1) == 0 )
    {
      (*((void (__fastcall **)(id, _QWORD, _QWORD, _QWORD, _QWORD))v10 + 2))(v10, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_8;
    }
  }
  v13 = objc_autoreleasePoolPush();
  v15 = (void *)objc_opt_new(&OBJC_CLASS___DeviceBackupEnterPasswordViewController, v14);
  objc_msgSend(v15, "setParameters:", v8);
  if ( v9 )
  {
    v16 = objc_retain(v9);
  }
  else
  {
    v17 = objc_retainAutoreleasedReturnValue(-[DeviceUIServiceViewController currentController](self, "currentController"));
    v18 = objc_retainAutoreleasedReturnValue(-[DeviceViewController view](v17, "view"));
    v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v18, "window"));
    objc_release(v18);
    objc_release(v17);
    if ( !v16 )
    {
      (*((void (__fastcall **)(id, __int64, _QWORD, _QWORD, _QWORD))v10 + 2))(v10, -1001LL, 0LL, 0LL, 0LL);
      goto LABEL_7;
    }
  }
  v19 = objc_retainAutoreleasedReturnValue(+[NSWindow windowWithContentViewController:](&OBJC_CLASS___NSWindow, "windowWithContentViewController:", v15));
  v20[0] = _NSConcreteStackBlock;
  v20[1] = 3254779904LL;
  v20[2] = sub_10000451C;
  v20[3] = &unk_1000B8AB8;
  v22 = objc_retain(v10);
  v21 = objc_retain(v15);
  objc_msgSend(v16, "beginSheet:completionHandler:", v19, v20);
  objc_release(v21);
  objc_release(v22);
  objc_release(v19);
  objc_release(v16);
LABEL_7:
  objc_release(v15);
  objc_autoreleasePoolPop(v13);
LABEL_8:
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
}