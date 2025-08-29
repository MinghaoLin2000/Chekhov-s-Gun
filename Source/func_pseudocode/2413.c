-[DeviceSoftwareUpdatesViewController viewWillLayout]
void __cdecl -[DeviceSoftwareUpdatesViewController viewWillLayout](DeviceSoftwareUpdatesViewController *self, SEL a2)
{
  void *v3; // x20
  double v4; // d2
  double v5; // d8
  NSButton *v6; // x20
  double v7; // d0
  double v8; // d9
  NSButton *v9; // x21
  double v10; // d0
  double v11; // d9
  NSStackView *v12; // x22
  double v13; // d0
  double v14; // d9
  NSStackView *v15; // x19
  objc_super v16; // [xsp+0h] [xbp-40h] BYREF

  v16.receiver = self;
  v16.super_class = (Class)&OBJC_CLASS___DeviceSoftwareUpdatesViewController;
  -[DeviceSoftwareUpdatesViewController viewWillLayout](&v16, "viewWillLayout");
  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSoftwareUpdatesViewController view](self, "view"));
  objc_msgSend(v3, "frame");
  v5 = v4;
  objc_release(v3);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceSoftwareUpdatesViewController updateButton](self, "updateButton"));
  -[NSButton fittingSize](v6, "fittingSize");
  v8 = v7;
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceSoftwareUpdatesViewController restoreButton](self, "restoreButton"));
  -[NSButton fittingSize](v9, "fittingSize");
  v11 = v8 + v10;
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceSoftwareUpdatesViewController buttonsStackView](self, "buttonsStackView"));
  -[NSStackView spacing](v12, "spacing");
  v14 = v11 + v13;
  objc_release(v12);
  objc_release(v9);
  objc_release(v6);
  v15 = objc_retainAutoreleasedReturnValue(-[DeviceSoftwareUpdatesViewController buttonsStackView](self, "buttonsStackView"));
  -[NSStackView setOrientation:](v15, "setOrientation:", v14 >= v5 * 0.8 + -10.0);
  objc_release(v15);
}