-[DeviceSummaryViewController loadBackupSettingsViewController]
void __cdecl -[DeviceSummaryViewController loadBackupSettingsViewController](DeviceSummaryViewController *self, SEL a2)
{
  __int64 v3; // x1
  void *v4; // x20
  DeviceSummaryAreaViewController *v5; // x20
  DeviceSummaryAreaViewController *v6; // x20
  void *v7; // x21
  NSView *v8; // x22
  NSMutableArray *v9; // x20
  DeviceSummaryAreaViewController *v10; // x19
  NSBox *v11; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( -[DeviceSummaryViewController supportsBackup](self, "supportsBackup") )
  {
    v4 = (void *)objc_opt_new(&OBJC_CLASS___DeviceBackUpSettingsViewController, v3);
    -[DeviceSummaryViewController setBackUpSettingsViewController:](self, "setBackUpSettingsViewController:", v4);
    objc_release(v4);
    v5 = objc_retainAutoreleasedReturnValue(-[DeviceSummaryViewController backUpSettingsViewController](self, "backUpSettingsViewController"));
    -[DeviceViewController loadPropertiesForViewController:](self, "loadPropertiesForViewController:", v5);
    objc_release(v5);
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceSummaryViewController backUpSettingsViewController](self, "backUpSettingsViewController"));
    v7 = objc_retainAutoreleasedReturnValue(-[DeviceSummaryAreaViewController view](v6, "view"));
    v8 = objc_retainAutoreleasedReturnValue(-[DeviceSummaryViewController backUpSettingsContainerView](self, "backUpSettingsContainerView"));
    sub_10002ABA4((int)v7, v8);
    objc_release(v8);
    objc_release(v7);
    objc_release(v6);
    v9 = objc_retainAutoreleasedReturnValue(-[DeviceSummaryViewController viewControllers](self, "viewControllers"));
    v10 = objc_retainAutoreleasedReturnValue(-[DeviceSummaryViewController backUpSettingsViewController](self, "backUpSettingsViewController"));
    -[NSMutableArray addObject:](v9, "addObject:", v10);
    objc_release(v10);
  }
  else
  {
    v11 = objc_retainAutoreleasedReturnValue(-[DeviceSummaryViewController backupHorizontalLine](self, "backupHorizontalLine"));
    -[NSBox setHidden:](v11, "setHidden:", 1LL);
    objc_release(v11);
    v9 = objc_retainAutoreleasedReturnValue(-[DeviceSummaryViewController backUpSettingsContainerView](self, "backUpSettingsContainerView"));
    -[NSMutableArray setHidden:](v9, "setHidden:", 1LL);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v9);
}