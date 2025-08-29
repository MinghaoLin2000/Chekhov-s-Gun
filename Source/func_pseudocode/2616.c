-[DeviceSettingsContactsViewController updateTabView]
void __cdecl -[DeviceSettingsContactsViewController updateTabView](DeviceSettingsContactsViewController *self, SEL a2)
{
  NSTabView *v3; // x20
  NSArray *v4; // x21
  id v5; // x22
  void *v6; // x20
  NSButton *v7; // x19
  _BOOL8 v8; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsContactsViewController tabView](self, "tabView"));
  v4 = objc_retainAutoreleasedReturnValue(-[NSTabView tabViewItems](v3, "tabViewItems"));
  v5 = objc_retainAutoreleasedReturnValue(-[NSArray objectAtIndexedSubscript:](v4, "objectAtIndexedSubscript:", 0LL));
  objc_release(v4);
  objc_release(v3);
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "viewController"));
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsContactsViewController allRadioButton](self, "allRadioButton"));
  v8 = (void *)-[NSButton state](v7, "state") == (void *)1;
  objc_release(v7);
  objc_msgSend(v6, "setDisableAndCheckAllItems:", v8);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}