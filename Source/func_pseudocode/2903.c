-[DeviceSummaryViewController viewDidLoad]
void __cdecl -[DeviceSummaryViewController viewDidLoad](DeviceSummaryViewController *self, SEL a2)
{
  NSView *v3; // x20
  NSBox *v4; // x20
  DeviceSummaryAreaViewController *v5; // x21
  NSTextField *v6; // x20
  DeviceSummaryAreaViewController *v7; // x22
  NSTextField *v8; // x21
  DeviceSummaryAreaViewController *v9; // x23
  NSTextField *v10; // x22
  NSLayoutConstraint *v11; // x23
  void *v12; // x24
  NSLayoutConstraint *v13; // x23
  void *v14; // x19
  objc_super v15; // [xsp+0h] [xbp-50h] BYREF

  v15.receiver = self;
  v15.super_class = (Class)&OBJC_CLASS___DeviceSummaryViewController;
  -[DeviceSummaryViewController viewDidLoad](&v15, "viewDidLoad");
  if ( -[DeviceViewController isRawDeviceMode](self, "isRawDeviceMode") )
  {
    -[DeviceSummaryViewController loadSoftwareUpdatesViewController](self, "loadSoftwareUpdatesViewController");
    -[DeviceSummaryViewController configureForRawDeviceMode](self, "configureForRawDeviceMode");
  }
  else
  {
    v3 = objc_retainAutoreleasedReturnValue(-[DeviceSummaryViewController moreIdentifiersContainerView](self, "moreIdentifiersContainerView"));
    -[NSView setHidden:](v3, "setHidden:", 1LL);
    objc_release(v3);
    v4 = objc_retainAutoreleasedReturnValue(-[DeviceSummaryViewController moreIdentifiersHorizontalLine](self, "moreIdentifiersHorizontalLine"));
    -[NSBox setHidden:](v4, "setHidden:", 1LL);
    objc_release(v4);
    -[DeviceSummaryViewController loadSoftwareUpdatesViewController](self, "loadSoftwareUpdatesViewController");
    -[DeviceSummaryViewController loadOptionsViewController](self, "loadOptionsViewController");
    -[DeviceSummaryViewController loadBackupSettingsViewController](self, "loadBackupSettingsViewController");
    v5 = objc_retainAutoreleasedReturnValue(-[DeviceSummaryViewController softwareUpdatesViewController](self, "softwareUpdatesViewController"));
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceSummaryAreaViewController areaTitle](v5, "areaTitle"));
    objc_release(v5);
    v7 = objc_retainAutoreleasedReturnValue(-[DeviceSummaryViewController optionsViewController](self, "optionsViewController"));
    v8 = objc_retainAutoreleasedReturnValue(-[DeviceSummaryAreaViewController areaTitle](v7, "areaTitle"));
    objc_release(v7);
    v9 = objc_retainAutoreleasedReturnValue(-[DeviceSummaryViewController backUpSettingsViewController](self, "backUpSettingsViewController"));
    v10 = objc_retainAutoreleasedReturnValue(-[DeviceSummaryAreaViewController areaTitle](v9, "areaTitle"));
    objc_release(v9);
    if ( v6 && v8 )
    {
      v11 = objc_retainAutoreleasedReturnValue(
              +[NSLayoutConstraint constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:](
                &OBJC_CLASS___NSLayoutConstraint,
                "constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:",
                v6,
                6LL,
                0LL,
                v8,
                6LL,
                1.0,
                0.0));
      v12 = objc_retainAutoreleasedReturnValue(-[DeviceSummaryViewController view](self, "view"));
      objc_msgSend(v12, "addConstraint:", v11);
      objc_release(v12);
      objc_release(v11);
    }
    if ( v10 )
    {
      if ( v8 )
      {
        v13 = objc_retainAutoreleasedReturnValue(
                +[NSLayoutConstraint constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:](
                  &OBJC_CLASS___NSLayoutConstraint,
                  "constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:",
                  v8,
                  6LL,
                  0LL,
                  v10,
                  6LL,
                  1.0,
                  0.0));
        v14 = objc_retainAutoreleasedReturnValue(-[DeviceSummaryViewController view](self, "view"));
        objc_msgSend(v14, "addConstraint:", v13);
        objc_release(v14);
        objc_release(v13);
      }
    }
    objc_release(v10);
    objc_release(v8);
    objc_release(v6);
  }
}