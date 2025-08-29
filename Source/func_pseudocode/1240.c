-[DeviceViewController reportError:]
void __cdecl -[DeviceViewController reportError:](DeviceViewController *self, SEL a2, id a3)
{
  id v4; // x19
  void *v5; // x21
  void *v6; // x20
  id v7; // x21
  AMPDevice *v8; // x22
  void *v9; // x24
  void *v10; // x24
  void *v11; // x22
  void *v12; // x25
  void *v13; // x24
  NSBundle *v14; // x25
  NSString *v15; // x27
  void *v16; // x28
  NSBundle *v17; // x25
  NSString *v18; // x26
  void *v19; // x27
  void *v20; // x25
  void *v21; // x23
  NSWorkspace *v22; // x0
  NSWorkspace *v23; // x25
  void *v24; // x26
  _QWORD v25[4]; // [xsp+8h] [xbp-78h] BYREF
  NSWorkspace *v26; // [xsp+28h] [xbp-58h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "userInfo"));
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "objectForKeyedSubscript:", NSLocalizedDescriptionKey));
  objc_release(v5);
  if ( objc_msgSend(v6, "length") )
  {
    v7 = objc_alloc_init((Class)&OBJC_CLASS___NSAlert);
    objc_msgSend(v7, "setAlertStyle:", 0LL);
    v8 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
    v9 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceImage](v8, "deviceImage"));
    objc_msgSend(v7, "setIcon:", v9);
    objc_release(v9);
    objc_release(v8);
    objc_msgSend(v7, "setMessageText:", v6);
    v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "userInfo"));
    v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "objectForKeyedSubscript:", NSLocalizedRecoverySuggestionErrorKey));
    objc_release(v10);
    if ( objc_msgSend(v11, "length") )
      objc_msgSend(v7, "setInformativeText:", v11);
    v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "userInfo"));
    v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "objectForKeyedSubscript:", AMPDeviceErrorMoreInfoURLKey));
    objc_release(v12);
    if ( objc_msgSend(v13, "length") )
    {
      v14 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
      v15 = objc_retainAutoreleasedReturnValue(
              -[NSBundle localizedStringForKey:value:table:](
                v14,
                "localizedStringForKey:value:table:",
                CFSTR("OK"),
                &stru_1000BA220,
                0LL));
      v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "addButtonWithTitle:", v15));
      objc_msgSend(v16, "setTag:", 1000LL);
      objc_release(v16);
      objc_release(v15);
      objc_release(v14);
      v17 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
      v18 = objc_retainAutoreleasedReturnValue(
              -[NSBundle localizedStringForKey:value:table:](
                v17,
                "localizedStringForKey:value:table:",
                CFSTR("More Info"),
                &stru_1000BA220,
                0LL));
      v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "addButtonWithTitle:", v18));
      objc_msgSend(v19, "setTag:", 1001LL);
      objc_release(v19);
      objc_release(v18);
      objc_release(v17);
    }
    v20 = objc_retainAutoreleasedReturnValue(-[DeviceViewController view](self, "view"));
    v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v20, "window"));
    objc_release(v20);
    if ( v21 )
    {
      v25[0] = _NSConcreteStackBlock;
      v25[1] = 3254779904LL;
      v25[2] = sub_100028F3C;
      v25[3] = &unk_1000B8FB0;
      v26 = objc_retain(v13);
      objc_msgSend(v7, "beginSheetModalForWindow:completionHandler:", v21, v25);
      v22 = v26;
    }
    else
    {
      if ( objc_msgSend(v7, "runModal") != (void *)1001 )
      {
LABEL_11:
        objc_release(v21);
        objc_release(v13);
        objc_release(v11);
        objc_release(v7);
        goto LABEL_12;
      }
      v23 = objc_retainAutoreleasedReturnValue(+[NSWorkspace sharedWorkspace](&OBJC_CLASS___NSWorkspace, "sharedWorkspace"));
      v24 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSURL), "initWithString:", v13);
      -[NSWorkspace openURL:](v23, "openURL:", v24);
      objc_release(v24);
      v22 = v23;
    }
    objc_release(v22);
    goto LABEL_11;
  }
LABEL_12:
  objc_release(v6);
  objc_release(v4);
}