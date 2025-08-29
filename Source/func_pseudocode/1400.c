-[DeviceSettingsMoviesViewController updateTabView]
void __cdecl -[DeviceSettingsMoviesViewController updateTabView](DeviceSettingsMoviesViewController *self, SEL a2)
{
  NSTabView *v3; // x20
  NSArray *v4; // x19
  id v5; // x20
  void *v6; // x21
  NSPopUpButton *v7; // x23
  void *v8; // x24
  unsigned __int64 v9; // x23
  signed __int64 v10; // x24
  NSButton *v11; // x25
  NSControlStateValue v12; // x26
  void *v13; // x0
  __int64 v14; // x2
  NSMutableDictionary *v15; // x25
  void *v16; // x26
  id v17; // x22
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController tabView](self, "tabView"));
  v4 = objc_retainAutoreleasedReturnValue(-[NSTabView tabViewItems](v3, "tabViewItems"));
  objc_release(v3);
  v5 = objc_retainAutoreleasedReturnValue(-[NSArray objectAtIndexedSubscript:](v4, "objectAtIndexedSubscript:", 0LL));
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "viewController"));
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController autoIncludePopUpButton](self, "autoIncludePopUpButton"));
  v8 = -[NSPopUpButton selectedTag](v7, "selectedTag");
  objc_release(v7);
  v9 = -[DeviceSettingsMoviesViewController movieUpdateModeFromTag:](self, "movieUpdateModeFromTag:", v8);
  v10 = -[DeviceSettingsMoviesViewController movieUpdateCountFromTag:](self, "movieUpdateCountFromTag:", v8);
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController autoIncludeCheckBox](self, "autoIncludeCheckBox"));
  v12 = -[NSButton state](v11, "state");
  objc_release(v11);
  if ( !v12 )
  {
    v13 = v6;
    v14 = 0LL;
    goto LABEL_6;
  }
  if ( v9 == 1 && !v10 )
  {
    v13 = v6;
    v14 = 1LL;
LABEL_6:
    objc_msgSend(v13, "setDisableAndCheckAllItems:", v14);
    objc_msgSend(v6, "setDisableAndCheckSelectedItems:", 0LL);
    goto LABEL_8;
  }
  v15 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController dataNodes](self, "dataNodes"));
  v16 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v15, "objectForKeyedSubscript:", CFSTR("Movies")));
  objc_release(v15);
  v17 = objc_retainAutoreleasedReturnValue(
          -[DeviceSettingsMoviesViewController selectDisableAndCheckItemsForNodes:updateMode:updateCount:](
            self,
            "selectDisableAndCheckItemsForNodes:updateMode:updateCount:",
            v16,
            v9,
            v10));
  objc_msgSend(v6, "setDisableAndCheckAllItems:", 0LL);
  objc_msgSend(v6, "setDisableAndCheckSelectedItems:", v17);
  objc_release(v17);
  objc_release(v16);
LABEL_8:
  objc_release(v6);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}