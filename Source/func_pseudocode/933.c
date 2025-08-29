-[DeviceSettingsAudiobooksViewController loadOutlinesColumnHeaderTitle]
void __cdecl -[DeviceSettingsAudiobooksViewController loadOutlinesColumnHeaderTitle](
        DeviceSettingsAudiobooksViewController *self,
        SEL a2)
{
  NSTabView *v2; // x20
  NSTabViewItem *v3; // x21
  NSViewController *v4; // x19
  void *v5; // x21
  void *v6; // x20
  NSBundle *v7; // x21
  NSString *v8; // x23
  void *v9; // x21
  void *v10; // x23
  NSBundle *v11; // x21
  NSString *v12; // x22
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsAudiobooksViewController tabView](self, "tabView"));
  v3 = objc_retainAutoreleasedReturnValue(-[NSTabView selectedTabViewItem](v2, "selectedTabViewItem"));
  v4 = objc_retainAutoreleasedReturnValue(-[NSTabViewItem viewController](v3, "viewController"));
  objc_release(v3);
  objc_release(v2);
  v5 = objc_retainAutoreleasedReturnValue(-[NSViewController outlineView](v4, "outlineView"));
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "outlineTableColumn"));
  objc_release(v5);
  v7 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v8 = objc_retainAutoreleasedReturnValue(
         -[NSBundle localizedStringForKey:value:table:](
           v7,
           "localizedStringForKey:value:table:",
           CFSTR("Audiobook"),
           &stru_1000BA220,
           0LL));
  objc_msgSend(v6, "setTitle:", v8);
  objc_release(v8);
  objc_release(v7);
  v9 = objc_retainAutoreleasedReturnValue(-[NSViewController trailingOutlineView](v4, "trailingOutlineView"));
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "outlineTableColumn"));
  objc_release(v9);
  v11 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v12 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v11,
            "localizedStringForKey:value:table:",
            CFSTR("Part"),
            &stru_1000BA220,
            0LL));
  objc_msgSend(v10, "setTitle:", v12);
  objc_release(v12);
  objc_release(v11);
  objc_release(v10);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}