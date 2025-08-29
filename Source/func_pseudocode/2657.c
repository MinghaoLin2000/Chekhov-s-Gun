-[DeviceAutofillPlacardViewController testInSheetViewController:withReply:]
void __cdecl -[DeviceAutofillPlacardViewController testInSheetViewController:withReply:](
        DeviceAutofillPlacardViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  id v5; // x19
  void (__fastcall **v6)(id, void *); // x20
  NSApplication *v7; // x22
  NSWindow *v8; // x21
  NSApplication *v9; // x22
  NSArray *v10; // x23
  NSWindow *v11; // x22
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v5 = objc_retain(a3);
  v6 = (void (__fastcall **)(id, void *))objc_retain(a4);
  v7 = objc_retainAutoreleasedReturnValue(+[NSApplication sharedApplication](&OBJC_CLASS___NSApplication, "sharedApplication"));
  v8 = objc_retainAutoreleasedReturnValue(-[NSApplication mainWindow](v7, "mainWindow"));
  objc_release(v7);
  if ( !v8 )
  {
    v9 = objc_retainAutoreleasedReturnValue(+[NSApplication sharedApplication](&OBJC_CLASS___NSApplication, "sharedApplication"));
    v10 = objc_retainAutoreleasedReturnValue(-[NSApplication windows](v9, "windows"));
    v8 = (NSWindow *)objc_retainAutoreleasedReturnValue(-[NSArray objectAtIndexedSubscript:](v10, "objectAtIndexedSubscript:", 0LL));
    objc_release(v10);
    objc_release(v9);
  }
  v11 = objc_retainAutoreleasedReturnValue(+[NSWindow windowWithContentViewController:](&OBJC_CLASS___NSWindow, "windowWithContentViewController:", v5));
  v6[2](v6, objc_msgSend(NSApp, "runModalForWindow:", v11));
  objc_release(v11);
  objc_release(v8);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}