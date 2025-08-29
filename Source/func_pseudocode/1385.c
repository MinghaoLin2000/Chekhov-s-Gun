-[DeviceSettingsMoviesViewController loadRentalOutlinesColumnHeaderTitleForTabViewItem:]
void __cdecl -[DeviceSettingsMoviesViewController loadRentalOutlinesColumnHeaderTitleForTabViewItem:](
        DeviceSettingsMoviesViewController *self,
        SEL a2,
        id a3)
{
  void *v4; // x19
  void *v5; // x21
  void *v6; // x20
  NSBundle *v7; // x23
  NSString *v8; // x21
  void *v9; // x23
  void *v10; // x24
  void *v11; // x23
  void *v12; // x25
  AMPDevice *v13; // x22
  void *v14; // x26
  NSString *v15; // x24
  void *v16; // x22
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(a3, "viewController"));
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "outlineView"));
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "outlineTableColumn"));
  objc_release(v5);
  v7 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v8 = objc_retainAutoreleasedReturnValue(
         -[NSBundle localizedStringForKey:value:table:](
           v7,
           "localizedStringForKey:value:table:",
           CFSTR("Rented Movies"),
           &stru_1000BA220,
           0LL));
  objc_release(v7);
  objc_msgSend(v6, "setTitle:", v8);
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "outlineView"));
  objc_msgSend(v9, "setAccessibilityTitle:", v8);
  objc_release(v9);
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "trailingOutlineView"));
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "outlineTableColumn"));
  objc_release(v10);
  v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "title"));
  v13 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v14 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceName](v13, "deviceName"));
  v15 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", v12, v14));
  objc_release(v14);
  objc_release(v13);
  objc_release(v12);
  objc_msgSend(v11, "setTitle:", v15);
  v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "trailingOutlineView"));
  objc_msgSend(v16, "setAccessibilityTitle:", v15);
  objc_release(v16);
  objc_release(v15);
  objc_release(v11);
  objc_release(v8);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}