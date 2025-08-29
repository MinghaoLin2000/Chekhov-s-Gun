-[DeviceStorageManagementViewController promptForRemoveWithCompletionHandler:]
void __cdecl -[DeviceStorageManagementViewController promptForRemoveWithCompletionHandler:](
        DeviceStorageManagementViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x20
  id v5; // x19
  NSImage *v6; // x22
  id v7; // x23
  AMPDevice *v8; // x24
  void *v9; // x25
  NSString *v10; // x22
  NSBundle *v11; // x22
  NSString *v12; // x24
  id v13; // x0
  NSBundle *v14; // x22
  NSString *v15; // x23
  id v16; // x0
  void *v17; // x21
  void *v18; // x22
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_alloc_init((Class)&OBJC_CLASS___NSAlert);
  v6 = objc_retainAutoreleasedReturnValue(+[NSImage imageNamed:](&OBJC_CLASS___NSImage, "imageNamed:", NSImageNameCaution));
  objc_msgSend(v5, "setIcon:", v6);
  objc_release(v6);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceStorageManagementViewController removeMesssageTextFormat](self, "removeMesssageTextFormat"));
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v9 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceName](v8, "deviceName"));
  v10 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", v7, v9));
  objc_msgSend(v5, "setMessageText:", v10);
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
  objc_release(v7);
  v11 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v12 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v11,
            "localizedStringForKey:value:table:",
            CFSTR("Delete"),
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
            CFSTR("Cancel"),
            &stru_1000BA220,
            0LL));
  v16 = objc_unsafeClaimAutoreleasedReturnValue(objc_msgSend(v5, "addButtonWithTitle:", v15));
  objc_release(v15);
  objc_release(v14);
  objc_msgSend(v5, "setAlertStyle:", 0LL);
  v17 = objc_retainAutoreleasedReturnValue(-[DeviceStorageManagementViewController view](self, "view"));
  v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v17, "window"));
  objc_msgSend(v5, "beginSheetModalForWindow:completionHandler:", v18, v4);
  objc_release(v4);
  objc_release(v18);
  objc_release(v17);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}