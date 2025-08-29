-[DeviceBackUpSettingsViewController prepareForLayoutBackupControlStackView]
void __cdecl -[DeviceBackUpSettingsViewController prepareForLayoutBackupControlStackView](
        DeviceBackUpSettingsViewController *self,
        SEL a2)
{
  NSStackView *v3; // x20
  double v4; // d0
  double v5; // d8
  NSTextField *v6; // x21
  double v7; // d0
  double v8; // d8
  NSTextField *v9; // x22
  double v10; // d0
  double v11; // d9
  NSStackView *v12; // x20
  double v13; // d2
  double v14; // d8
  NSStackView *v15; // x20
  double v16; // d0
  double v17; // d9
  NSStackView *v18; // x21
  double v19; // d0
  double v20; // d9
  NSStackView *v21; // x19
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceBackUpSettingsViewController backupInfoStackView](self, "backupInfoStackView"));
  -[NSStackView spacing](v3, "spacing");
  v5 = v4;
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceBackUpSettingsViewController lastBackupTitleTextField](self, "lastBackupTitleTextField"));
  -[NSTextField fittingSize](v6, "fittingSize");
  v8 = v5 + v7;
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceBackUpSettingsViewController dateAndTimeOfLastBackUpLabel](self, "dateAndTimeOfLastBackUpLabel"));
  -[NSTextField fittingSize](v9, "fittingSize");
  v11 = v8 + v10;
  objc_release(v9);
  objc_release(v6);
  objc_release(v3);
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceBackUpSettingsViewController backupControlStackView](self, "backupControlStackView"));
  -[NSStackView frame](v12, "frame");
  v14 = v13;
  objc_release(v12);
  v15 = objc_retainAutoreleasedReturnValue(-[DeviceBackUpSettingsViewController backupButtonsStackView](self, "backupButtonsStackView"));
  -[NSStackView fittingSize](v15, "fittingSize");
  v17 = v11 + v16;
  v18 = objc_retainAutoreleasedReturnValue(-[DeviceBackUpSettingsViewController backupControlStackView](self, "backupControlStackView"));
  -[NSStackView spacing](v18, "spacing");
  v20 = v17 + v19;
  objc_release(v18);
  objc_release(v15);
  v21 = objc_retainAutoreleasedReturnValue(-[DeviceBackUpSettingsViewController backupControlStackView](self, "backupControlStackView"));
  -[NSStackView setOrientation:](v21, "setOrientation:", v20 >= v14);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v21);
}