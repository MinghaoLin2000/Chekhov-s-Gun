-[DeviceSettingsPhotosViewController promptForNewSource]
void __cdecl -[DeviceSettingsPhotosViewController promptForNewSource](DeviceSettingsPhotosViewController *self, SEL a2)
{
  NSOpenPanel *v3; // x20
  NSBundle *v4; // x21
  NSString *v5; // x22
  NSURL *v6; // x21
  NSURL *v7; // x0
  NSURL *v8; // x22
  void *v9; // x21
  void *v10; // x22
  NSOpenPanel *v11; // x19
  _QWORD v12[4]; // [xsp+0h] [xbp-50h] BYREF
  id v13; // [xsp+20h] [xbp-30h]
  DeviceSettingsPhotosViewController *v14; // [xsp+28h] [xbp-28h]

  v3 = objc_retainAutoreleasedReturnValue(+[NSOpenPanel openPanel](&OBJC_CLASS___NSOpenPanel, "openPanel"));
  -[NSOpenPanel setAllowsOtherFileTypes:](v3, "setAllowsOtherFileTypes:", 0LL);
  -[NSOpenPanel setExtensionHidden:](v3, "setExtensionHidden:", 0LL);
  -[NSOpenPanel setCanCreateDirectories:](v3, "setCanCreateDirectories:", 1LL);
  -[NSOpenPanel setCanChooseFiles:](v3, "setCanChooseFiles:", 0LL);
  -[NSOpenPanel setCanChooseDirectories:](v3, "setCanChooseDirectories:", 1LL);
  -[NSOpenPanel setAllowsMultipleSelection:](v3, "setAllowsMultipleSelection:", 0LL);
  v4 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v5 = objc_retainAutoreleasedReturnValue(
         -[NSBundle localizedStringForKey:value:table:](
           v4,
           "localizedStringForKey:value:table:",
           CFSTR("Change Photos Folder Location"),
           &stru_1000BA220,
           0LL));
  -[NSOpenPanel setTitle:](v3, "setTitle:", v5);
  objc_release(v5);
  objc_release(v4);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController folderURL](self, "folderURL"));
  if ( v6 )
    v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController folderURL](self, "folderURL"));
  else
    v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController picturesURL](self, "picturesURL"));
  v8 = v7;
  -[NSOpenPanel setDirectoryURL:](v3, "setDirectoryURL:", v7);
  objc_release(v8);
  objc_release(v6);
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController view](self, "view"));
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "window"));
  v12[0] = _NSConcreteStackBlock;
  v12[1] = 3254779904LL;
  v12[2] = sub_100025DCC;
  v12[3] = &unk_1000B8E48;
  v13 = v3;
  v14 = self;
  v11 = objc_retain(v3);
  -[NSOpenPanel beginSheetModalForWindow:completionHandler:](
    v11,
    "beginSheetModalForWindow:completionHandler:",
    v10,
    v12);
  objc_release(v10);
  objc_release(v9);
  objc_release(v13);
  objc_release(v11);
}