-[DeviceUIServiceViewController openPanelWithParameters:withReply:]
void __cdecl -[DeviceUIServiceViewController openPanelWithParameters:withReply:](
        DeviceUIServiceViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  id v7; // x20
  DeviceViewController *v8; // x21
  unsigned __int8 v9; // w22
  void *v10; // x21
  NSOpenPanel *v11; // x22
  void *v12; // x24
  void *v13; // x24
  void *v14; // x24
  void *v15; // x24
  void *v16; // x24
  void *v17; // x24
  void *v18; // x24
  void *v19; // x25
  void *v20; // x26
  void *v21; // x27
  void *v22; // x28
  void *v23; // x23
  NSArray *v24; // x0
  NSArray *v25; // x21
  void *v26; // x28
  NSMutableArray *v27; // x24
  NSMutableArray *v28; // x0
  void *v29; // [xsp+8h] [xbp-98h]
  void *v30; // [xsp+10h] [xbp-90h]
  _QWORD v31[4]; // [xsp+18h] [xbp-88h] BYREF
  id v32; // [xsp+38h] [xbp-68h]
  NSArray *v33; // [xsp+40h] [xbp-60h]
  id v34; // [xsp+48h] [xbp-58h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceUIServiceViewController currentController](self, "currentController"));
  v9 = -[DeviceViewController canPresentDevicesClientEventsUI](v8, "canPresentDevicesClientEventsUI");
  objc_release(v8);
  if ( (v9 & 1) != 0 )
  {
    v10 = objc_autoreleasePoolPush();
    v11 = objc_retainAutoreleasedReturnValue(+[NSOpenPanel openPanel](&OBJC_CLASS___NSOpenPanel, "openPanel"));
    v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectForKeyedSubscript:", AMPDeviceOpenPanelCanChooseFilesKey));
    -[NSOpenPanel setCanChooseFiles:](v11, "setCanChooseFiles:", objc_msgSend(v12, "boolValue"));
    objc_release(v12);
    v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectForKeyedSubscript:", AMPDeviceOpenPanelCanChooseDirectoriesKey));
    -[NSOpenPanel setCanChooseDirectories:](v11, "setCanChooseDirectories:", objc_msgSend(v13, "boolValue"));
    objc_release(v13);
    v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectForKeyedSubscript:", AMPDeviceOpenPanelCanCreateDirectoriesKey));
    -[NSOpenPanel setCanCreateDirectories:](v11, "setCanCreateDirectories:", objc_msgSend(v14, "boolValue"));
    objc_release(v14);
    v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectForKeyedSubscript:", AMPDeviceOpenPanelExtensionHiddenKey));
    -[NSOpenPanel setExtensionHidden:](v11, "setExtensionHidden:", objc_msgSend(v15, "boolValue"));
    objc_release(v15);
    v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectForKeyedSubscript:", AMPDeviceOpenPanelAllowsMultipleSelectionKey));
    -[NSOpenPanel setAllowsMultipleSelection:](v11, "setAllowsMultipleSelection:", objc_msgSend(v16, "boolValue"));
    objc_release(v16);
    v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectForKeyedSubscript:", AMPDeviceOpenPanelTreatsFilePackagesAsDirectoriesKey));
    -[NSOpenPanel setTreatsFilePackagesAsDirectories:](
      v11,
      "setTreatsFilePackagesAsDirectories:",
      objc_msgSend(v17, "boolValue"));
    objc_release(v17);
    v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectForKeyedSubscript:", AMPDeviceOpenPanelTitleKey));
    if ( v18 )
      -[NSOpenPanel setTitle:](v11, "setTitle:", v18);
    v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectForKeyedSubscript:", AMPDeviceOpenPanelPromptKey));
    if ( v19 )
      -[NSOpenPanel setPrompt:](v11, "setPrompt:", v19);
    v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectForKeyedSubscript:", AMPDeviceOpenPanelDirectoryURLKey));
    if ( v20 )
      -[NSOpenPanel setDirectoryURL:](v11, "setDirectoryURL:", v20);
    v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectForKeyedSubscript:", AMPDeviceOpenPanelAllowedFileTypesKey));
    if ( v21 )
      -[NSOpenPanel setAllowedFileTypes:](v11, "setAllowedFileTypes:", v21);
    v22 = objc_retainAutoreleasedReturnValue(-[DeviceViewController view](self->_currentController, "view"));
    v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v22, "window"));
    objc_release(v22);
    if ( v23 )
    {
      v31[0] = _NSConcreteStackBlock;
      v31[1] = 3254779904LL;
      v31[2] = sub_10000507C;
      v31[3] = &unk_1000B8B58;
      v33 = (NSArray *)objc_retain(v7);
      v34 = &stru_1000B8B38;
      v32 = objc_retain(v11);
      objc_msgSend(v32, "beginSheetModalForWindow:completionHandler:", v23, v31);
      objc_release(v32);
      objc_release(v34);
      v24 = v33;
    }
    else
    {
      v29 = -[NSOpenPanel runModal](v11, "runModal");
      v30 = v10;
      v25 = objc_retainAutoreleasedReturnValue(-[NSOpenPanel URLs](v11, "URLs"));
      v26 = v18;
      v27 = objc_retainAutoreleasedReturnValue(sub_100004F0C(v25, v25));
      (*((void (__fastcall **)(id, void *, NSMutableArray *))v7 + 2))(v7, v29, v27);
      v28 = v27;
      v18 = v26;
      objc_release(v28);
      v24 = v25;
      v10 = v30;
    }
    objc_release(v24);
    objc_release(v23);
    objc_release(v21);
    objc_release(v20);
    objc_release(v19);
    objc_release(v18);
    objc_release(v11);
    objc_autoreleasePoolPop(v10);
  }
  else
  {
    (*((void (__fastcall **)(id, _QWORD, _QWORD))v7 + 2))(v7, 0LL, 0LL);
  }
  objc_release(v7);
  objc_release(v6);
}