-[DeviceSettingsTVShowsViewController autoIncludeStackFittingWidth]
double __cdecl -[DeviceSettingsTVShowsViewController autoIncludeStackFittingWidth](
        DeviceSettingsTVShowsViewController *self,
        SEL a2)
{
  NSButton *v3; // x19
  double v4; // d0
  double v5; // d8
  NSPopUpButton *v6; // x21
  double v7; // d0
  double v8; // d8
  NSTextField *v9; // x22
  double v10; // d0
  double v11; // d8
  NSPopUpButton *v12; // x23
  double v13; // d0
  double v14; // d8
  NSStackView *v15; // x20
  double v16; // d0
  double v17; // d8

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTVShowsViewController autoIncludeCheckBox](self, "autoIncludeCheckBox"));
  -[NSButton fittingSize](v3, "fittingSize");
  v5 = v4;
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTVShowsViewController autoIncludePopUpButton](self, "autoIncludePopUpButton"));
  -[NSPopUpButton fittingSize](v6, "fittingSize");
  v8 = v5 + v7;
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTVShowsViewController autoIncludeTrailingTextField](self, "autoIncludeTrailingTextField"));
  -[NSTextField fittingSize](v9, "fittingSize");
  v11 = v8 + v10;
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTVShowsViewController autoIncludeTrailingPopUpButton](self, "autoIncludeTrailingPopUpButton"));
  -[NSPopUpButton fittingSize](v12, "fittingSize");
  v14 = v11 + v13;
  v15 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTVShowsViewController autoIncludeStackView](self, "autoIncludeStackView"));
  -[NSStackView spacing](v15, "spacing");
  v17 = v14 + v16 * 3.0;
  objc_release(v15);
  objc_release(v12);
  objc_release(v9);
  objc_release(v6);
  objc_release(v3);
  return v17;
}