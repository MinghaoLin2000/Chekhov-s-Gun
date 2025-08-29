-[DeviceSettingsTabContentViewController setEnabled:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[DeviceSettingsTabContentViewController setEnabled:](
        DeviceSettingsTabContentViewController *self,
        SEL a2,
        bool a3)
{
  _BOOL8 v3; // x20
  NSSearchField *v5; // x21
  DeviceSettingsTabContentOutlineView *v6; // x21
  DeviceSettingsTabContentOutlineView *v7; // x21
  DeviceSettingsTabContentOutlineView *v8; // x20
  void *v9; // x21
  DeviceSettingsTabContentOutlineView *v10; // x20
  DeviceSettingsTabContentOutlineView *v11; // x20
  DeviceSettingsTabContentOutlineView *v12; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = a3;
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController searchField](self, "searchField"));
  -[NSSearchField setEnabled:](v5, "setEnabled:", v3);
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController outlineView](self, "outlineView"));
  -[DeviceSettingsTabContentOutlineView setEnabled:](v6, "setEnabled:", v3);
  objc_release(v6);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController allCheckBoxOutlineView](self, "allCheckBoxOutlineView"));
  -[DeviceSettingsTabContentOutlineView setEnabled:](v7, "setEnabled:", v3);
  objc_release(v7);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController outlineView](self, "outlineView"));
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentOutlineView selectedRowIndexes](v8, "selectedRowIndexes"));
  objc_release(v8);
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController outlineView](self, "outlineView"));
  -[DeviceSettingsTabContentOutlineView reloadData](v10, "reloadData");
  objc_release(v10);
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController outlineView](self, "outlineView"));
  -[DeviceSettingsTabContentOutlineView selectRowIndexes:byExtendingSelection:](
    v11,
    "selectRowIndexes:byExtendingSelection:",
    v9,
    0LL);
  objc_release(v11);
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController allCheckBoxOutlineView](self, "allCheckBoxOutlineView"));
  -[DeviceSettingsTabContentOutlineView reloadData](v12, "reloadData");
  objc_release(v12);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v9);
}