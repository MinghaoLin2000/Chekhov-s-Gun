-[DeviceSettingsPhotosViewController promptForRemoveWithCompletionHandler:]
void __cdecl -[DeviceSettingsPhotosViewController promptForRemoveWithCompletionHandler:](
        DeviceSettingsPhotosViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x20
  id v5; // x19
  AMPDevice *v6; // x22
  void *v7; // x23
  id v8; // x23
  NSString *v9; // x24
  NSString *v10; // x22
  NSBundle *v11; // x23
  NSString *v12; // x24
  id v13; // x0
  NSBundle *v14; // x23
  NSString *v15; // x24
  id v16; // x0
  NSBundle *v17; // x23
  NSString *v18; // x22
  id v19; // x0
  void *v20; // x21
  void *v21; // x22
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_alloc_init((Class)&OBJC_CLASS___NSAlert);
  objc_msgSend(v5, "setAlertStyle:", 0LL);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v7 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceImage](v6, "deviceImage"));
  objc_msgSend(v5, "setIcon:", v7);
  objc_release(v7);
  objc_release(v6);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController removeMesssageTextFormatString](self, "removeMesssageTextFormatString"));
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceName](self, "deviceName"));
  v10 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", v8, v9));
  objc_msgSend(v5, "setMessageText:", v10);
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
  v11 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v12 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v11,
            "localizedStringForKey:value:table:",
            CFSTR("Remove"),
            &stru_1000BA220,
            0LL));
  v13 = objc_unsafeClaimAutoreleasedReturnValue(objc_msgSend(v5, "addButtonWithTitle:", v12));
  objc_release(v12);
  objc_release(v11);
  v14 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v15 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v14,
            "localizedStringForKey:value:table:",
            CFSTR("Keep"),
            &stru_1000BA220,
            0LL));
  v16 = objc_unsafeClaimAutoreleasedReturnValue(objc_msgSend(v5, "addButtonWithTitle:", v15));
  objc_release(v15);
  objc_release(v14);
  v17 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v18 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v17,
            "localizedStringForKey:value:table:",
            CFSTR("Cancel"),
            &stru_1000BA220,
            0LL));
  v19 = objc_unsafeClaimAutoreleasedReturnValue(objc_msgSend(v5, "addButtonWithTitle:", v18));
  objc_release(v18);
  objc_release(v17);
  v20 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController view](self, "view"));
  v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v20, "window"));
  objc_msgSend(v5, "beginSheetModalForWindow:completionHandler:", v21, v4);
  objc_release(v4);
  objc_release(v21);
  objc_release(v20);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}