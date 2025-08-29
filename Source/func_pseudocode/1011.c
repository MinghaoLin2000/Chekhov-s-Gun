-[DeviceManageBackupsViewController promptForDeleteOfBackups:withCompletionHandler:]
void __cdecl -[DeviceManageBackupsViewController promptForDeleteOfBackups:withCompletionHandler:](
        DeviceManageBackupsViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  id v7; // x20
  id v8; // x21
  NSImage *v9; // x23
  NSBundle *v10; // x23
  NSString *v11; // x25
  void *v12; // x26
  NSBundle *v13; // x23
  NSString *v14; // x24
  void *v15; // x25
  void *v16; // x24
  NSBundle *v17; // x0
  NSBundle *v18; // x23
  NSString *v19; // x24
  NSString *v20; // x25
  void *v21; // x23
  NSString *v22; // x26
  void *v23; // x22
  void *v24; // x23
  __int64 vars8; // [xsp+68h] [xbp+8h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = objc_alloc_init((Class)&OBJC_CLASS___NSAlert);
  objc_msgSend(v8, "setAlertStyle:", 0LL);
  v9 = objc_retainAutoreleasedReturnValue(+[NSImage imageNamed:](&OBJC_CLASS___NSImage, "imageNamed:", NSImageNameCaution));
  objc_msgSend(v8, "setIcon:", v9);
  objc_release(v9);
  v10 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v11 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v10,
            "localizedStringForKey:value:table:",
            CFSTR("Delete"),
            &stru_1000BA220,
            0LL));
  v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "addButtonWithTitle:", v11));
  objc_msgSend(v12, "setTag:", 1LL);
  objc_release(v12);
  objc_release(v11);
  objc_release(v10);
  v13 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v14 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v13,
            "localizedStringForKey:value:table:",
            CFSTR("Cancel"),
            &stru_1000BA220,
            0LL));
  v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "addButtonWithTitle:", v14));
  objc_msgSend(v15, "setTag:", 0LL);
  objc_release(v15);
  objc_release(v14);
  objc_release(v13);
  if ( objc_msgSend(v6, "count") )
  {
    v16 = objc_msgSend(v6, "count");
    v17 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
    v18 = v17;
    if ( (unsigned __int64)v16 < 2 )
    {
      v20 = objc_retainAutoreleasedReturnValue(
              -[NSBundle localizedStringForKey:value:table:](
                v17,
                "localizedStringForKey:value:table:",
                CFSTR("Are you sure you want to delete the backup “%@”?"),
                &stru_1000BA220,
                0LL));
      objc_release(v18);
      v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectAtIndexedSubscript:", 0LL));
      v21 = objc_retainAutoreleasedReturnValue(-[NSString objectForKeyedSubscript:](v19, "objectForKeyedSubscript:", AMPDeviceBackupDisplayNameKey));
      v22 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", v20, v21));
      objc_msgSend(v8, "setMessageText:", v22);
      objc_release(v22);
      objc_release(v21);
      v18 = (NSBundle *)v20;
    }
    else
    {
      v19 = objc_retainAutoreleasedReturnValue(
              -[NSBundle localizedStringForKey:value:table:](
                v17,
                "localizedStringForKey:value:table:",
                CFSTR("Are you sure you want to delete these backups?"),
                &stru_1000BA220,
                0LL));
      objc_msgSend(v8, "setMessageText:", v19);
    }
    objc_release(v19);
    objc_release(v18);
    v23 = objc_retainAutoreleasedReturnValue(-[DeviceManageBackupsViewController view](self, "view"));
    v24 = objc_retainAutoreleasedReturnValue(objc_msgSend(v23, "window"));
    objc_msgSend(v8, "beginSheetModalForWindow:completionHandler:", v24, v7);
    objc_release(v24);
    objc_release(v23);
  }
  objc_release(v8);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}