-[DeviceSettingsContactsViewController promptForRemoveWithCompletionHandler:]
void __cdecl -[DeviceSettingsContactsViewController promptForRemoveWithCompletionHandler:](
        DeviceSettingsContactsViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x20
  id v5; // x19
  AMPDevice *v6; // x22
  void *v7; // x23
  id v8; // x23
  AMPDevice *v9; // x24
  void *v10; // x25
  NSString *v11; // x22
  NSBundle *v12; // x22
  NSString *v13; // x24
  id v14; // x0
  NSBundle *v15; // x22
  NSString *v16; // x23
  id v17; // x0
  void *v18; // x21
  void *v19; // x22
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_alloc_init((Class)&OBJC_CLASS___NSAlert);
  objc_msgSend(v5, "setAlertStyle:", 0LL);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v7 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceImage](v6, "deviceImage"));
  objc_msgSend(v5, "setIcon:", v7);
  objc_release(v7);
  objc_release(v6);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsContactsViewController removeMesssageTextFormat](self, "removeMesssageTextFormat"));
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v10 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceName](v9, "deviceName"));
  v11 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", v8, v10));
  objc_msgSend(v5, "setMessageText:", v11);
  objc_release(v11);
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
  v12 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v13 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v12,
            "localizedStringForKey:value:table:",
            CFSTR("Remove Contacts"),
            &stru_1000BA220,
            0LL));
  v14 = objc_unsafeClaimAutoreleasedReturnValue(objc_msgSend(v5, "addButtonWithTitle:", v13));
  objc_release(v13);
  objc_release(v12);
  v15 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v16 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v15,
            "localizedStringForKey:value:table:",
            CFSTR("Keep Contacts"),
            &stru_1000BA220,
            0LL));
  v17 = objc_unsafeClaimAutoreleasedReturnValue(objc_msgSend(v5, "addButtonWithTitle:", v16));
  objc_release(v16);
  objc_release(v15);
  v18 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsContactsViewController view](self, "view"));
  v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v18, "window"));
  objc_msgSend(v5, "beginSheetModalForWindow:completionHandler:", v19, v4);
  objc_release(v4);
  objc_release(v19);
  objc_release(v18);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}