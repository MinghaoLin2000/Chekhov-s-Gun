-[DeviceSettingsAudiobooksViewController loadAudiobooksOutlinesColumnHeaderTitleForTabViewItem:]
void __cdecl -[DeviceSettingsAudiobooksViewController loadAudiobooksOutlinesColumnHeaderTitleForTabViewItem:](
        DeviceSettingsAudiobooksViewController *self,
        SEL a2,
        id a3)
{
  void *v3; // x19
  void *v4; // x21
  void *v5; // x20
  NSBundle *v6; // x21
  NSString *v7; // x23
  void *v8; // x21
  void *v9; // x23
  NSBundle *v10; // x21
  NSString *v11; // x22
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(objc_msgSend(a3, "viewController"));
  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "outlineView"));
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "outlineTableColumn"));
  objc_release(v4);
  v6 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v7 = objc_retainAutoreleasedReturnValue(
         -[NSBundle localizedStringForKey:value:table:](
           v6,
           "localizedStringForKey:value:table:",
           CFSTR("Audiobook"),
           &stru_1000BA220,
           0LL));
  objc_msgSend(v5, "setTitle:", v7);
  objc_release(v7);
  objc_release(v6);
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "trailingOutlineView"));
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "outlineTableColumn"));
  objc_release(v8);
  v10 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v11 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v10,
            "localizedStringForKey:value:table:",
            CFSTR("Part"),
            &stru_1000BA220,
            0LL));
  objc_msgSend(v9, "setTitle:", v11);
  objc_release(v11);
  objc_release(v10);
  objc_release(v9);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v3);
}