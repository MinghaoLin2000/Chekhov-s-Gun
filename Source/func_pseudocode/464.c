-[DeviceSettingsTVShowsViewController loadOutlinesColumnHeaderTitle]
void __cdecl -[DeviceSettingsTVShowsViewController loadOutlinesColumnHeaderTitle](
        DeviceSettingsTVShowsViewController *self,
        SEL a2)
{
  DeviceSettingsDetailsTabContentViewController *v2; // x19
  DeviceSettingsTabContentOutlineView *v3; // x21
  void *v4; // x20
  NSBundle *v5; // x21
  NSString *v6; // x23
  DeviceSettingsTabContentOutlineView *v7; // x21
  void *v8; // x23
  NSBundle *v9; // x21
  NSString *v10; // x22
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(
         -[DeviceSettingsTVShowsViewController selectedTabContentViewController](
           self,
           "selectedTabContentViewController"));
  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController outlineView](v2, "outlineView"));
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentOutlineView outlineTableColumn](v3, "outlineTableColumn"));
  objc_release(v3);
  v5 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v6 = objc_retainAutoreleasedReturnValue(
         -[NSBundle localizedStringForKey:value:table:](
           v5,
           "localizedStringForKey:value:table:",
           CFSTR("Show"),
           &stru_1000BA220,
           0LL));
  objc_msgSend(v4, "setTitle:", v6);
  objc_release(v6);
  objc_release(v5);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsDetailsTabContentViewController trailingOutlineView](v2, "trailingOutlineView"));
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentOutlineView outlineTableColumn](v7, "outlineTableColumn"));
  objc_release(v7);
  v9 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v10 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v9,
            "localizedStringForKey:value:table:",
            CFSTR("Episode"),
            &stru_1000BA220,
            0LL));
  objc_msgSend(v8, "setTitle:", v10);
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v2);
}