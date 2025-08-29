-[DeviceViewController presentUIForErrors:]
void __cdecl -[DeviceViewController presentUIForErrors:](DeviceViewController *self, SEL a2, id a3)
{
  NSMutableArray *v4; // x19
  NSMutableArray *v5; // x21
  __int64 v6; // x25
  __int64 v7; // x22
  __int64 v8; // x26
  __int64 v9; // x27
  char *v10; // x28
  void *v11; // x24
  void *v12; // x23
  NSMutableArray *v13; // x22
  void *v14; // x22
  void *v15; // x24
  __int64 v16; // x1
  void *v17; // x22
  NSBundle *v18; // x23
  NSString *v19; // x24
  NSBundle *v20; // x23
  NSString *v21; // x24
  NSBundle *v22; // x23
  NSString *v23; // x24
  NSBundle *v24; // x23
  NSString *v25; // x24
  NSWindow *v26; // x23
  void *v27; // x20
  void *v28; // x24
  __int128 v29; // [xsp+10h] [xbp-120h] BYREF
  __int128 v30; // [xsp+20h] [xbp-110h]
  __int128 v31; // [xsp+30h] [xbp-100h]
  __int128 v32; // [xsp+40h] [xbp-F0h]
  _BYTE v33[128]; // [xsp+50h] [xbp-E0h] BYREF

  v4 = (NSMutableArray *)objc_retain(a3);
  if ( -[NSMutableArray count](v4, "count") )
  {
    v31 = 0u;
    v32 = 0u;
    v29 = 0u;
    v30 = 0u;
    v4 = objc_retain(v4);
    v5 = (NSMutableArray *)-[NSMutableArray countByEnumeratingWithState:objects:count:](
                             v4,
                             "countByEnumeratingWithState:objects:count:",
                             &v29,
                             v33,
                             16LL);
    if ( v5 )
    {
      v6 = *(_QWORD *)v30;
      v7 = AMPDeviceSyncErrorOSStatusKey;
      v8 = -1LL;
LABEL_4:
      v9 = 0LL;
      v10 = (char *)v5 + v8;
      while ( 1 )
      {
        if ( *(_QWORD *)v30 != v6 )
          objc_enumerationMutation(v4);
        v11 = *(void **)(*((_QWORD *)&v29 + 1) + 8 * v9);
        v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "objectForKeyedSubscript:", v7));
        if ( (unsigned int)objc_msgSend(v12, "intValue") == 1105 || (unsigned int)objc_msgSend(v12, "intValue") == 1104 )
          break;
        objc_release(v12);
        if ( v5 == (NSMutableArray *)++v9 )
        {
          v5 = (NSMutableArray *)-[NSMutableArray countByEnumeratingWithState:objects:count:](
                                   v4,
                                   "countByEnumeratingWithState:objects:count:",
                                   &v29,
                                   v33,
                                   16LL);
          v8 = (__int64)v10;
          if ( v5 )
            goto LABEL_4;
          goto LABEL_11;
        }
      }
      v5 = objc_retainAutoreleasedReturnValue(+[NSMutableArray arrayWithArray:](&OBJC_CLASS___NSMutableArray, "arrayWithArray:", v4));
      -[NSMutableArray removeObjectAtIndex:](v5, "removeObjectAtIndex:", v8 + v9 + 1);
      v14 = objc_msgSend(v12, "intValue");
      v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "objectForKeyedSubscript:", AMPDeviceSyncErrorMessageKey));
      -[DeviceViewController postDeviceViewPhotoSyncDeferredErrorNotificationWithOSStatus:andMessage:](
        self,
        "postDeviceViewPhotoSyncDeferredErrorNotificationWithOSStatus:andMessage:",
        v14,
        v15);
      objc_release(v15);
      objc_release(v12);
      objc_release(v4);
      if ( !v5 )
        goto LABEL_15;
      v5 = objc_retain(v5);
      v13 = v5;
    }
    else
    {
LABEL_11:
      v13 = v4;
    }
    objc_release(v4);
    v4 = v13;
LABEL_15:
    if ( -[NSMutableArray count](v4, "count") )
    {
      v17 = (void *)objc_opt_new(&OBJC_CLASS___DeviceErrorReportViewController, v16);
      v18 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
      v19 = objc_retainAutoreleasedReturnValue(
              -[NSBundle localizedStringForKey:value:table:](
                v18,
                "localizedStringForKey:value:table:",
                CFSTR("OK"),
                &stru_1000BA220,
                0LL));
      objc_msgSend(v17, "setOkButtonTitle:", v19);
      objc_release(v19);
      objc_release(v18);
      v20 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
      v21 = objc_retainAutoreleasedReturnValue(
              -[NSBundle localizedStringForKey:value:table:](
                v20,
                "localizedStringForKey:value:table:",
                CFSTR("Cancel"),
                &stru_1000BA220,
                0LL));
      objc_msgSend(v17, "setCancelButtonTitle:", v21);
      objc_release(v21);
      objc_release(v20);
      v22 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
      v23 = objc_retainAutoreleasedReturnValue(
              -[NSBundle localizedStringForKey:value:table:](
                v22,
                "localizedStringForKey:value:table:",
                CFSTR("Errors"),
                &stru_1000BA220,
                0LL));
      objc_msgSend(v17, "setWindowTitle:", v23);
      objc_release(v23);
      objc_release(v22);
      objc_msgSend(v17, "setHideSaveButton:", 0LL);
      objc_msgSend(v17, "setErrors:", v4);
      v24 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
      v25 = objc_retainAutoreleasedReturnValue(
              -[NSBundle localizedStringForKey:value:table:](
                v24,
                "localizedStringForKey:value:table:",
                CFSTR("Errors.txt"),
                &stru_1000BA220,
                0LL));
      objc_msgSend(v17, "setDefaultFileName:", v25);
      objc_release(v25);
      objc_release(v24);
      v26 = objc_retainAutoreleasedReturnValue(
              +[NSWindow windowWithContentViewController:](
                &OBJC_CLASS___NSWindow,
                "windowWithContentViewController:",
                v17));
      v27 = objc_retainAutoreleasedReturnValue(-[DeviceViewController view](self, "view"));
      v28 = objc_retainAutoreleasedReturnValue(objc_msgSend(v27, "window"));
      objc_msgSend(v28, "beginSheet:completionHandler:", v26, &stru_1000B93C8);
      objc_release(v28);
      objc_release(v27);
      objc_release(v26);
      objc_release(v17);
    }
    objc_release(v5);
  }
  objc_release(v4);
}