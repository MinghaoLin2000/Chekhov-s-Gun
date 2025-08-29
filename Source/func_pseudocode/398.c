-[DeviceUIServiceViewController showReportWithParameters:withReply:]
void __cdecl -[DeviceUIServiceViewController showReportWithParameters:withReply:](
        DeviceUIServiceViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  id v7; // x20
  DeviceViewController *v8; // x21
  unsigned __int8 v9; // w23
  void *v10; // x24
  void *v11; // x25
  void *v12; // x26
  void *v13; // x20
  void *v14; // x27
  void *v15; // x28
  void *v16; // x21
  void *v17; // x23
  __int64 v18; // x1
  void *v19; // x21
  void *v20; // x2
  void *v21; // x26
  NSWindow *v22; // x23
  DeviceViewController *v23; // x24
  void *v24; // x25
  void *v25; // x22
  id v26; // [xsp+8h] [xbp-A8h]
  id v27; // [xsp+10h] [xbp-A0h]
  id v28; // [xsp+18h] [xbp-98h]
  id v29; // [xsp+20h] [xbp-90h]
  void *context; // [xsp+28h] [xbp-88h]
  void (__fastcall **v31)(_QWORD, _QWORD); // [xsp+30h] [xbp-80h]
  _QWORD v32[4]; // [xsp+38h] [xbp-78h] BYREF
  id v33; // [xsp+58h] [xbp-58h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceUIServiceViewController currentController](self, "currentController"));
  v9 = -[DeviceViewController canPresentDevicesClientEventsUI](v8, "canPresentDevicesClientEventsUI");
  objc_release(v8);
  if ( (v9 & 1) != 0 )
  {
    v31 = (void (__fastcall **)(_QWORD, _QWORD))v7;
    context = objc_autoreleasePoolPush();
    v29 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectForKeyedSubscript:", AMPDeviceReportUUIDKey));
    v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectForKeyedSubscript:", AMPDeviceReportOKButtonTitleKey));
    v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectForKeyedSubscript:", AMPDeviceReportCancelButtonTitleKey));
    v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectForKeyedSubscript:", AMPDeviceReportWindowTitleKey));
    v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectForKeyedSubscript:", AMPDeviceReportRichTextKey));
    v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectForKeyedSubscript:", AMPDeviceReportSafetyInfoKey));
    v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectForKeyedSubscript:", AMPDeviceReportDefaultFileNameKey));
    v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectForKeyedSubscript:", AMPDeviceReportHideSaveButtonKey));
    v17 = objc_msgSend(v16, "boolValue");
    objc_release(v16);
    v19 = (void *)objc_opt_new(&OBJC_CLASS___DeviceReportViewController, v18);
    v28 = v10;
    objc_msgSend(v19, "setOkButtonTitle:", v10);
    v27 = v11;
    objc_msgSend(v19, "setCancelButtonTitle:", v11);
    v26 = v12;
    v20 = v12;
    v21 = v13;
    objc_msgSend(v19, "setWindowTitle:", v20);
    objc_msgSend(v19, "setRichTextData:", v13);
    objc_msgSend(v19, "setSafetyInfo:", v14);
    objc_msgSend(v19, "setDefaultFileName:", v15);
    objc_msgSend(v19, "setHideSaveButton:", v17);
    v22 = objc_retainAutoreleasedReturnValue(
            +[NSWindow windowWithContentViewController:](
              &OBJC_CLASS___NSWindow,
              "windowWithContentViewController:",
              v19));
    v7 = v31;
    v23 = objc_retainAutoreleasedReturnValue(-[DeviceUIServiceViewController currentController](self, "currentController"));
    v24 = objc_retainAutoreleasedReturnValue(-[DeviceViewController view](v23, "view"));
    v25 = objc_retainAutoreleasedReturnValue(objc_msgSend(v24, "window"));
    objc_release(v24);
    objc_release(v23);
    if ( v25 )
    {
      v32[0] = _NSConcreteStackBlock;
      v32[1] = 3254779904LL;
      v32[2] = sub_100004A18;
      v32[3] = &unk_1000B8AE8;
      v33 = objc_retain(v31);
      objc_msgSend(v25, "beginSheet:completionHandler:", v22, v32);
      objc_release(v33);
    }
    else
    {
      v31[2](v31, -1001LL);
    }
    objc_release(v25);
    objc_release(v22);
    objc_release(v19);
    objc_release(v15);
    objc_release(v14);
    objc_release(v21);
    objc_release(v26);
    objc_release(v27);
    objc_release(v28);
    objc_release(v29);
    objc_autoreleasePoolPop(context);
  }
  else
  {
    (*((void (__fastcall **)(id, _QWORD))v7 + 2))(v7, 0LL);
  }
  objc_release(v7);
  objc_release(v6);
}