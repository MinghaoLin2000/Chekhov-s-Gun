-[DeviceFileSharingViewController promptToReplaceItem:applyToAll:]
signed __int64 __cdecl -[DeviceFileSharingViewController promptToReplaceItem:applyToAll:](
        DeviceFileSharingViewController *self,
        SEL a2,
        id a3,
        bool *a4)
{
  id v6; // x22
  id v7; // x19
  AMPDevice *v8; // x21
  void *v9; // x23
  NSBundle *v10; // x24
  NSString *v11; // x25
  NSString *v12; // x23
  NSBundle *v13; // x22
  NSString *v14; // x23
  id v15; // x0
  NSBundle *v16; // x22
  NSString *v17; // x23
  id v18; // x0
  NSBundle *v19; // x22
  NSString *v20; // x21
  id v21; // x0
  NSBundle *v22; // x22
  NSString *v23; // x23
  NSButton *v24; // x21
  void *v25; // x21
  void *v26; // x22

  v6 = objc_retain(a3);
  v7 = objc_alloc_init((Class)&OBJC_CLASS___NSAlert);
  objc_msgSend(v7, "setAlertStyle:", 0LL);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v9 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceImage](v8, "deviceImage"));
  objc_msgSend(v7, "setIcon:", v9);
  objc_release(v9);
  objc_release(v8);
  v10 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v11 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v10,
            "localizedStringForKey:value:table:",
            CFSTR("An item named “%1$@” already exists in this location. Do you want to replace it with the one you’re moving?"),
            &stru_1000BA220,
            0LL));
  v12 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", v11, v6));
  objc_release(v6);
  objc_msgSend(v7, "setMessageText:", v12);
  objc_release(v12);
  objc_release(v11);
  objc_release(v10);
  v13 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v14 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v13,
            "localizedStringForKey:value:table:",
            CFSTR("Replace"),
            &stru_1000BA220,
            0LL));
  v15 = objc_unsafeClaimAutoreleasedReturnValue(objc_msgSend(v7, "addButtonWithTitle:", v14));
  objc_release(v14);
  objc_release(v13);
  v16 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v17 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v16,
            "localizedStringForKey:value:table:",
            CFSTR("Skip"),
            &stru_1000BA220,
            0LL));
  v18 = objc_unsafeClaimAutoreleasedReturnValue(objc_msgSend(v7, "addButtonWithTitle:", v17));
  objc_release(v17);
  objc_release(v16);
  v19 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v20 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v19,
            "localizedStringForKey:value:table:",
            CFSTR("Stop"),
            &stru_1000BA220,
            0LL));
  v21 = objc_unsafeClaimAutoreleasedReturnValue(objc_msgSend(v7, "addButtonWithTitle:", v20));
  objc_release(v20);
  objc_release(v19);
  if ( a4 )
  {
    v22 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
    v23 = objc_retainAutoreleasedReturnValue(
            -[NSBundle localizedStringForKey:value:table:](
              v22,
              "localizedStringForKey:value:table:",
              CFSTR("Apply to all"),
              &stru_1000BA220,
              0LL));
    v24 = objc_retainAutoreleasedReturnValue(
            +[NSButton checkboxWithTitle:target:action:](
              &OBJC_CLASS___NSButton,
              "checkboxWithTitle:target:action:",
              v23,
              0LL,
              0LL));
    objc_msgSend(v7, "setAccessoryView:", v24);
    objc_release(v24);
    objc_release(v23);
    objc_release(v22);
    v25 = objc_msgSend(v7, "runModal");
    v26 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "accessoryView"));
    *a4 = objc_msgSend(v26, "state") == (void *)1;
    objc_release(v26);
  }
  else
  {
    v25 = objc_msgSend(v7, "runModal");
  }
  objc_release(v7);
  return (signed __int64)v25;
}