-[UINSSystemPreferencesServiceViewController _updateUISelectingSetting:]
void __cdecl -[UINSSystemPreferencesServiceViewController _updateUISelectingSetting:](
        UINSSystemPreferencesServiceViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  char v5; // w21
  NSBundle *v6; // x0
  NSBundle *v7; // x22
  const __CFString *v8; // x2
  const __CFString *v9; // x3
  NSString *v10; // x21
  NSString *v11; // x22
  NSTextField *v12; // x23
  NSUInteger v13; // x0
  __int64 v14; // x8
  void *v15; // x22
  NSTableView *tableView; // x20
  NSIndexSet *v17; // x22
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = _os_feature_enabled_impl("SystemPrefsApp", "Pantheon");
  v6 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v7 = v6;
  if ( (v5 & 1) != 0 )
  {
    v8 = CFSTR("DESCRIPTION_FORMAT");
    v9 = CFSTR("%@ has requested access to your data. You can update your preferences in System Settings.");
  }
  else
  {
    v8 = CFSTR("DESCRIPTION_FORMAT_OLD");
    v9 = CFSTR("%@ has requested access to your data. You can update your preferences in System Preferences.");
  }
  v10 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v6,
            "localizedStringForKey:value:table:",
            v8,
            v9,
            CFSTR("UIKitMacHelperSystemPreferences")));
  objc_release(v7);
  v11 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", v10, self->_applicationName));
  v12 = objc_retainAutoreleasedReturnValue(-[UINSSystemPreferencesServiceViewController descriptionLabel](self, "descriptionLabel"));
  -[NSTextField setStringValue:](v12, "setStringValue:", v11);
  objc_release(v12);
  objc_release(v11);
  -[NSTableView reloadData](self->_tableView, "reloadData");
  if ( v4 )
  {
    v13 = -[NSArray indexOfObject:](self->_settings, "indexOfObject:", v4);
    if ( v13 == 0x7FFFFFFFFFFFFFFFLL )
      v14 = -1LL;
    else
      v14 = v13;
  }
  else
  {
    v14 = -1LL;
  }
  v15 = (void *)(v14 & ~(v14 >> 63));
  if ( v15 != (void *)-[NSTableView selectedRow](self->_tableView, "selectedRow") )
  {
    tableView = self->_tableView;
    v17 = objc_retainAutoreleasedReturnValue(+[NSIndexSet indexSetWithIndex:](&OBJC_CLASS___NSIndexSet, "indexSetWithIndex:", v15));
    -[NSTableView selectRowIndexes:byExtendingSelection:](tableView, "selectRowIndexes:byExtendingSelection:", v17, 0LL);
    objc_release(v17);
  }
  objc_release(v10);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}