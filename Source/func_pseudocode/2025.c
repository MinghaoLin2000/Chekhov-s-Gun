-[DeviceEULAViewController clickSaveButton:]
void __cdecl -[DeviceEULAViewController clickSaveButton:](DeviceEULAViewController *self, SEL a2, id a3)
{
  NSSavePanel *v4; // x20
  NSTextField *v5; // x21
  void *v6; // x22
  void *v7; // x23
  void *v8; // x21
  void *v9; // x22
  NSSavePanel *v10; // x19
  _QWORD v11[5]; // [xsp+0h] [xbp-60h] BYREF
  id v12; // [xsp+28h] [xbp-38h]

  v4 = objc_retainAutoreleasedReturnValue(+[NSSavePanel savePanel](&OBJC_CLASS___NSSavePanel, "savePanel", a3));
  -[NSSavePanel setCanCreateDirectories:](v4, "setCanCreateDirectories:", 1LL);
  -[NSSavePanel setAllowsOtherFileTypes:](v4, "setAllowsOtherFileTypes:", 1LL);
  -[NSSavePanel setExtensionHidden:](v4, "setExtensionHidden:", 0LL);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceEULAViewController titleTextField](self, "titleTextField"));
  v6 = objc_retainAutoreleasedReturnValue(-[NSTextField stringValue](v5, "stringValue"));
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "stringByAppendingString:", CFSTR(".rtf")));
  -[NSSavePanel setNameFieldStringValue:](v4, "setNameFieldStringValue:", v7);
  objc_release(v7);
  objc_release(v6);
  objc_release(v5);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceEULAViewController view](self, "view"));
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "window"));
  v11[0] = _NSConcreteStackBlock;
  v11[1] = 3254779904LL;
  v11[2] = sub_100048064;
  v11[3] = &unk_1000B8E48;
  v11[4] = self;
  v12 = v4;
  v10 = objc_retain(v4);
  -[NSSavePanel beginSheetModalForWindow:completionHandler:](
    v10,
    "beginSheetModalForWindow:completionHandler:",
    v9,
    v11);
  objc_release(v9);
  objc_release(v8);
  objc_release(v12);
  objc_release(v10);
}