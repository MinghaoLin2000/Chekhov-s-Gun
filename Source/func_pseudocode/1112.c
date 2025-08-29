-[DeviceSettingsPhotosViewController updateSourceMenuItemWithTag:withImageFromPath:]
void __cdecl -[DeviceSettingsPhotosViewController updateSourceMenuItemWithTag:withImageFromPath:](
        DeviceSettingsPhotosViewController *self,
        SEL a2,
        signed __int64 a3,
        id a4)
{
  id v6; // x22
  NSWorkspace *v7; // x21
  void *v8; // x23
  NSImage *v9; // x22
  NSPopUpButton *v10; // x21
  id v11; // x19
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v6 = objc_retain(a4);
  v7 = objc_retainAutoreleasedReturnValue(+[NSWorkspace sharedWorkspace](&OBJC_CLASS___NSWorkspace, "sharedWorkspace"));
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "path"));
  objc_release(v6);
  v9 = objc_retainAutoreleasedReturnValue(-[NSWorkspace iconForFile:](v7, "iconForFile:", v8));
  objc_release(v8);
  objc_release(v7);
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController photoSourcePopUpButton](self, "photoSourcePopUpButton"));
  v11 = objc_retainAutoreleasedReturnValue(
          -[DeviceSettingsPhotosViewController itemWithTag:forPopUpButton:](
            self,
            "itemWithTag:forPopUpButton:",
            a3,
            v10));
  objc_release(v10);
  -[NSImage setSize:](v9, "setSize:", 16.0, 16.0);
  objc_msgSend(v11, "setImage:", v9);
  objc_release(v11);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v9);
}