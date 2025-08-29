-[DeviceHeaderViewController setButtonsEnabled:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[DeviceHeaderViewController setButtonsEnabled:](DeviceHeaderViewController *self, SEL a2, bool a3)
{
  _BOOL8 v3; // x19
  NSButton *v5; // x21
  NSButton *v6; // x21
  NSButton *v7; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = a3;
  self->_buttonsEnabled = a3;
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController syncButton](self, "syncButton"));
  -[NSButton setEnabled:](v5, "setEnabled:", v3);
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController syncSettingsButton](self, "syncSettingsButton"));
  -[NSButton setEnabled:](v6, "setEnabled:", v3);
  objc_release(v6);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceHeaderViewController manageStorageButton](self, "manageStorageButton"));
  -[NSButton setEnabled:](v7, "setEnabled:", v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v7);
}