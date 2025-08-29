-[DeviceSettingsDetailsTabContentViewController setEnabled:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[DeviceSettingsDetailsTabContentViewController setEnabled:](
        DeviceSettingsDetailsTabContentViewController *self,
        SEL a2,
        bool a3)
{
  _BOOL8 v3; // x19
  DeviceSettingsTabContentOutlineView *v5; // x21
  DeviceSettingsTabContentOutlineView *v6; // x19
  void *v7; // x21
  DeviceSettingsTabContentOutlineView *v8; // x19
  DeviceSettingsTabContentOutlineView *v9; // x19
  objc_super v10; // [xsp+0h] [xbp-30h] BYREF

  v3 = a3;
  v10.receiver = self;
  v10.super_class = (Class)&OBJC_CLASS___DeviceSettingsDetailsTabContentViewController;
  -[DeviceSettingsTabContentViewController setEnabled:](&v10, "setEnabled:");
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsDetailsTabContentViewController trailingOutlineView](self, "trailingOutlineView"));
  -[DeviceSettingsTabContentOutlineView setEnabled:](v5, "setEnabled:", v3);
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsDetailsTabContentViewController trailingOutlineView](self, "trailingOutlineView"));
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentOutlineView selectedRowIndexes](v6, "selectedRowIndexes"));
  objc_release(v6);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsDetailsTabContentViewController trailingOutlineView](self, "trailingOutlineView"));
  -[DeviceSettingsTabContentOutlineView reloadData](v8, "reloadData");
  objc_release(v8);
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsDetailsTabContentViewController trailingOutlineView](self, "trailingOutlineView"));
  -[DeviceSettingsTabContentOutlineView selectRowIndexes:byExtendingSelection:](
    v9,
    "selectRowIndexes:byExtendingSelection:",
    v7,
    0LL);
  objc_release(v9);
  objc_release(v7);
}