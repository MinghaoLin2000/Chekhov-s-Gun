-[DeviceSettingsPhotosViewController setupTabViewItem:]
void __cdecl -[DeviceSettingsPhotosViewController setupTabViewItem:](
        DeviceSettingsPhotosViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x22
  void *v5; // x19
  void *v6; // x20
  NSImage *v7; // x21
  NSBundle *v8; // x0
  NSImage *v9; // x21
  const __CFString *v10; // x2
  NSString *v11; // x22
  objc_super v12; // [xsp+0h] [xbp-30h] BYREF

  v12.receiver = self;
  v12.super_class = (Class)&OBJC_CLASS___DeviceSettingsPhotosViewController;
  v4 = objc_retain(a3);
  -[DeviceSettingsViewController setupTabViewItem:](&v12, "setupTabViewItem:", v4);
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "identifier", v12.receiver, v12.super_class));
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "viewController"));
  objc_release(v4);
  objc_msgSend(v6, "setShouldPresentExtraImage:", 1LL);
  if ( (unsigned int)objc_msgSend(v5, "isEqualToString:", CFSTR("People")) )
  {
    v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController faceImage](self, "faceImage"));
    objc_msgSend(v6, "setPlaylistImage:", v7);
    objc_release(v7);
    v8 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
    v9 = (NSImage *)v8;
    v10 = CFSTR("All people");
LABEL_5:
    v11 = objc_retainAutoreleasedReturnValue(
            -[NSBundle localizedStringForKey:value:table:](
              v8,
              "localizedStringForKey:value:table:",
              v10,
              &stru_1000BA220,
              0LL));
    objc_msgSend(v6, "setAllCheckBoxString:", v11);
    objc_release(v11);
    goto LABEL_6;
  }
  if ( (unsigned int)objc_msgSend(v5, "isEqualToString:", CFSTR("Albums")) )
  {
    v8 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
    v9 = (NSImage *)v8;
    v10 = CFSTR("All albums");
    goto LABEL_5;
  }
  if ( !(unsigned int)objc_msgSend(v5, "isEqualToString:", CFSTR("Folders")) )
    goto LABEL_7;
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController folderImage](self, "folderImage"));
  objc_msgSend(v6, "setPlaylistImage:", v9);
LABEL_6:
  objc_release(v9);
LABEL_7:
  objc_release(v6);
  objc_release(v5);
}