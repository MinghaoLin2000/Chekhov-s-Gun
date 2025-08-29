-[DeviceSettingsPhotosViewController setupAsSharingPanel]
void __cdecl -[DeviceSettingsPhotosViewController setupAsSharingPanel](
        DeviceSettingsPhotosViewController *self,
        SEL a2)
{
  NSView *v3; // x20
  NSBundle *v4; // x21
  NSString *v5; // x22
  NSTextField *v6; // x23
  NSTextField *v7; // x21
  NSButton *v8; // x21
  NSBundle *v9; // x21
  NSString *v10; // x20
  NSTextField *v11; // x22
  NSButton *v12; // x20
  NSButton *v13; // x19
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(
         -[DeviceSettingsPhotosViewController photoSourceExplanationContainingView](
           self,
           "photoSourceExplanationContainingView"));
  -[NSView setHidden:](v3, "setHidden:", 1LL);
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v5 = objc_retainAutoreleasedReturnValue(
         -[NSBundle localizedStringForKey:value:table:](
           v4,
           "localizedStringForKey:value:table:",
           CFSTR("Share Photos from:"),
           &stru_1000BA220,
           0LL));
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController syncOntoTextField](self, "syncOntoTextField"));
  -[NSTextField setStringValue:](v6, "setStringValue:", v5);
  objc_release(v6);
  objc_release(v5);
  objc_release(v4);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController syncOntoTextField](self, "syncOntoTextField"));
  -[NSTextField setHidden:](v7, "setHidden:", 0LL);
  objc_release(v7);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController syncOntoCheckBox](self, "syncOntoCheckBox"));
  -[NSButton setHidden:](v8, "setHidden:", 1LL);
  objc_release(v8);
  v9 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v10 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v9,
            "localizedStringForKey:value:table:",
            CFSTR("Share:"),
            &stru_1000BA220,
            0LL));
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController syncAreaTitleTextField](self, "syncAreaTitleTextField"));
  -[NSTextField setStringValue:](v11, "setStringValue:", v10);
  objc_release(v11);
  objc_release(v10);
  objc_release(v9);
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController sharingOKButton](self, "sharingOKButton"));
  -[NSButton setHidden:](v12, "setHidden:", 0LL);
  objc_release(v12);
  v13 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController sharingCancelButton](self, "sharingCancelButton"));
  -[NSButton setHidden:](v13, "setHidden:", 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v13);
}