-[DeviceBackUpSettingsViewController viewWillLayout]
void __cdecl -[DeviceBackUpSettingsViewController viewWillLayout](DeviceBackUpSettingsViewController *self, SEL a2)
{
  NSStackView *v3; // x20
  double v4; // d2
  double v5; // d8
  NSButton *v6; // x20
  double v7; // d0
  double v8; // d9
  double v9; // d0
  double v10; // d9
  NSStackView *v11; // x21
  double v12; // d0
  double v13; // d9
  NSStackView *v14; // x22
  NSLayoutConstraint *v15; // x21
  NSLayoutConstraint *v16; // x21
  objc_super v17; // [xsp+0h] [xbp-40h] BYREF

  -[DeviceBackUpSettingsViewController prepareForLayoutBackupControlStackView](
    self,
    "prepareForLayoutBackupControlStackView");
  v3 = objc_retainAutoreleasedReturnValue(-[DeviceBackUpSettingsViewController backupControlStackView](self, "backupControlStackView"));
  -[NSStackView frame](v3, "frame");
  v5 = v4;
  objc_release(v3);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceBackUpSettingsViewController encryptBackupCheckBox](self, "encryptBackupCheckBox"));
  -[NSButton fittingSize](v6, "fittingSize");
  v8 = v7;
  -[DeviceBackUpSettingsViewController maxFittingButtonWidth](self, "maxFittingButtonWidth");
  v10 = v8 + v9;
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceBackUpSettingsViewController backupControlStackView](self, "backupControlStackView"));
  -[NSStackView spacing](v11, "spacing");
  v13 = v10 + v12;
  objc_release(v11);
  objc_release(v6);
  v14 = objc_retainAutoreleasedReturnValue(-[DeviceBackUpSettingsViewController encryptChangePasswordStackView](self, "encryptChangePasswordStackView"));
  -[NSStackView setOrientation:](v14, "setOrientation:", v13 >= v5);
  objc_release(v14);
  v15 = objc_retainAutoreleasedReturnValue(-[DeviceBackUpSettingsViewController encryptBaselineConstraint](self, "encryptBaselineConstraint"));
  -[NSLayoutConstraint setActive:](v15, "setActive:", v13 < v5);
  objc_release(v15);
  v16 = objc_retainAutoreleasedReturnValue(
          -[DeviceBackUpSettingsViewController changePasswordTrailingConstraint](
            self,
            "changePasswordTrailingConstraint"));
  -[NSLayoutConstraint setActive:](v16, "setActive:", v13 < v5);
  objc_release(v16);
  v17.receiver = self;
  v17.super_class = (Class)&OBJC_CLASS___DeviceBackUpSettingsViewController;
  -[DeviceBackUpSettingsViewController viewWillLayout](&v17, "viewWillLayout");
}