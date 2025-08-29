-[DeviceSettingsPodcastsViewController promptForRemoveWithCompletionHandler:]
void __cdecl -[DeviceSettingsPodcastsViewController promptForRemoveWithCompletionHandler:](
        DeviceSettingsPodcastsViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  AMPDeviceSyncPrefs *v5; // x21
  AMPDeviceInfo *v6; // x22
  unsigned __int8 v7; // w23
  id v8; // x21
  AMPDevice *v9; // x22
  void *v10; // x23
  id v11; // x23
  NSString *v12; // x24
  NSString *v13; // x22
  NSBundle *v14; // x23
  NSString *v15; // x24
  id v16; // x0
  NSBundle *v17; // x23
  NSString *v18; // x24
  id v19; // x0
  NSBundle *v20; // x23
  NSString *v21; // x22
  id v22; // x0
  void *v23; // x22
  void *v24; // x23
  _QWORD v25[5]; // [xsp+8h] [xbp-78h] BYREF
  objc_super v26; // [xsp+30h] [xbp-50h] BYREF

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  if ( (unsigned int)-[AMPDeviceSyncPrefs automaticUpdateMode](v5, "automaticUpdateMode") )
  {
    objc_release(v5);
LABEL_5:
    v26.receiver = self;
    v26.super_class = (Class)&OBJC_CLASS___DeviceSettingsPodcastsViewController;
    -[DeviceSettingsViewController promptForRemoveWithCompletionHandler:](
      &v26,
      "promptForRemoveWithCompletionHandler:",
      v4);
    goto LABEL_6;
  }
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
  v7 = (unsigned __int8)-[AMPDeviceInfo supportsManualMode](v6, "supportsManualMode");
  objc_release(v6);
  objc_release(v5);
  if ( (v7 & 1) == 0 )
    goto LABEL_5;
  v8 = objc_alloc_init((Class)&OBJC_CLASS___NSAlert);
  objc_msgSend(v8, "setAlertStyle:", 0LL);
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v10 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceImage](v9, "deviceImage"));
  objc_msgSend(v8, "setIcon:", v10);
  objc_release(v10);
  objc_release(v9);
  v11 = objc_retainAutoreleasedReturnValue(
          -[DeviceViewController deviceStringForStringParameterizedKey:](
            self,
            "deviceStringForStringParameterizedKey:",
            CFSTR("ConfirmDeleteExistingPodcasts %@")));
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceName](self, "deviceName"));
  v13 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", v11, v12));
  objc_msgSend(v8, "setMessageText:", v13);
  objc_release(v13);
  objc_release(v12);
  objc_release(v11);
  v14 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v15 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v14,
            "localizedStringForKey:value:table:",
            CFSTR("Remove Podcasts"),
            &stru_1000BA220,
            0LL));
  v16 = objc_unsafeClaimAutoreleasedReturnValue(objc_msgSend(v8, "addButtonWithTitle:", v15));
  objc_release(v15);
  objc_release(v14);
  v17 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v18 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v17,
            "localizedStringForKey:value:table:",
            CFSTR("Keep Podcasts"),
            &stru_1000BA220,
            0LL));
  v19 = objc_unsafeClaimAutoreleasedReturnValue(objc_msgSend(v8, "addButtonWithTitle:", v18));
  objc_release(v18);
  objc_release(v17);
  v20 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v21 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v20,
            "localizedStringForKey:value:table:",
            CFSTR("Cancel"),
            &stru_1000BA220,
            0LL));
  v22 = objc_unsafeClaimAutoreleasedReturnValue(objc_msgSend(v8, "addButtonWithTitle:", v21));
  objc_release(v21);
  objc_release(v20);
  v23 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPodcastsViewController view](self, "view"));
  v24 = objc_retainAutoreleasedReturnValue(objc_msgSend(v23, "window"));
  v25[0] = _NSConcreteStackBlock;
  v25[1] = 3254779904LL;
  v25[2] = sub_100046B70;
  v25[3] = &unk_1000B8FB0;
  v25[4] = self;
  objc_msgSend(v8, "beginSheetModalForWindow:completionHandler:", v24, v25);
  objc_release(v24);
  objc_release(v23);
  objc_release(v8);
LABEL_6:
  objc_release(v4);
}