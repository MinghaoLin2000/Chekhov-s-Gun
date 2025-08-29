-[DeviceFileSharingViewController promptToDeleteItems:completionHandler:]
void __cdecl -[DeviceFileSharingViewController promptToDeleteItems:completionHandler:](
        DeviceFileSharingViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  id v7; // x20
  AMPDevice *v8; // x23
  void *v9; // x24
  void *v10; // x24
  NSBundle *v11; // x0
  NSBundle *v12; // x23
  NSString *v13; // x24
  AMPDevice *v14; // x25
  void *v15; // x27
  AMPDevice *v16; // x28
  void *v17; // x21
  NSString *v18; // x26
  NSBundle *v19; // x21
  NSString *v20; // x24
  id v21; // x0
  NSBundle *v22; // x21
  NSString *v23; // x23
  id v24; // x0
  void *v25; // x21
  void *v26; // x22
  id v27; // [xsp+18h] [xbp-58h]
  __int64 vars8; // [xsp+78h] [xbp+8h]

  v6 = objc_retain(a3);
  v27 = objc_retain(a4);
  v7 = objc_alloc_init((Class)&OBJC_CLASS___NSAlert);
  objc_msgSend(v7, "setAlertStyle:", 0LL);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v9 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceImage](v8, "deviceImage"));
  objc_msgSend(v7, "setIcon:", v9);
  objc_release(v9);
  objc_release(v8);
  v10 = objc_msgSend(v6, "count");
  v11 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v12 = v11;
  if ( v10 == (void *)1 )
  {
    v13 = objc_retainAutoreleasedReturnValue(
            -[NSBundle localizedStringForKey:value:table:](
              v11,
              "localizedStringForKey:value:table:",
              CFSTR("Are you sure you want to delete “%1$@” from “%2$@”?"),
              &stru_1000BA220,
              0LL));
    v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectAtIndexedSubscript:", 0LL));
    v15 = objc_retainAutoreleasedReturnValue(-[AMPDevice name](v14, "name"));
    v16 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
    v17 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceName](v16, "deviceName"));
    v18 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", v13, v15, v17));
    objc_msgSend(v7, "setMessageText:", v18);
    objc_release(v18);
    objc_release(v17);
  }
  else
  {
    v13 = objc_retainAutoreleasedReturnValue(
            -[NSBundle localizedStringForKey:value:table:](
              v11,
              "localizedStringForKey:value:table:",
              CFSTR("Are you sure you want to delete the selected items from “%1$@”?"),
              &stru_1000BA220,
              0LL));
    v14 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
    v15 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceName](v14, "deviceName"));
    v16 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", v13, v15));
    objc_msgSend(v7, "setMessageText:", v16);
  }
  objc_release(v16);
  objc_release(v15);
  objc_release(v14);
  objc_release(v13);
  objc_release(v12);
  v19 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v20 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v19,
            "localizedStringForKey:value:table:",
            CFSTR("Delete"),
            &stru_1000BA220,
            0LL));
  v21 = objc_unsafeClaimAutoreleasedReturnValue(objc_msgSend(v7, "addButtonWithTitle:", v20));
  objc_release(v20);
  objc_release(v19);
  v22 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v23 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v22,
            "localizedStringForKey:value:table:",
            CFSTR("Cancel"),
            &stru_1000BA220,
            0LL));
  v24 = objc_unsafeClaimAutoreleasedReturnValue(objc_msgSend(v7, "addButtonWithTitle:", v23));
  objc_release(v23);
  objc_release(v22);
  v25 = objc_retainAutoreleasedReturnValue(-[DeviceFileSharingViewController view](self, "view"));
  v26 = objc_retainAutoreleasedReturnValue(objc_msgSend(v25, "window"));
  objc_msgSend(v7, "beginSheetModalForWindow:completionHandler:", v26, v27);
  objc_release(v27);
  objc_release(v26);
  objc_release(v25);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}