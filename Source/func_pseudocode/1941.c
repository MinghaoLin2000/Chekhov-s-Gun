-[DeviceSettingsPodcastsViewController viewWillLayout]
void __cdecl -[DeviceSettingsPodcastsViewController viewWillLayout](DeviceSettingsPodcastsViewController *self, SEL a2)
{
  double v3; // d0
  double v4; // d8
  NSStackView *v5; // x20
  void *v6; // x21
  double v7; // d2
  double v8; // d9
  objc_super v9; // [xsp+0h] [xbp-40h] BYREF

  -[DeviceSettingsPodcastsViewController autoIncludeStackFittingWidth](self, "autoIncludeStackFittingWidth");
  v4 = v3;
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPodcastsViewController autoIncludeStackView](self, "autoIncludeStackView"));
  v6 = objc_retainAutoreleasedReturnValue(-[NSStackView superview](v5, "superview"));
  objc_msgSend(v6, "frame");
  v8 = v7;
  objc_release(v6);
  objc_release(v5);
  -[DeviceSettingsPodcastsViewController setAutoIncludeLayoutOrientation:](
    self,
    "setAutoIncludeLayoutOrientation:",
    v8 + -20.0 < v4,
    v8 + -20.0);
  v9.receiver = self;
  v9.super_class = (Class)&OBJC_CLASS___DeviceSettingsPodcastsViewController;
  -[DeviceSettingsPodcastsViewController viewWillLayout](&v9, "viewWillLayout");
}