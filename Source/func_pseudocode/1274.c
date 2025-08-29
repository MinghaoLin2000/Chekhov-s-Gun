-[DeviceWarrantyViewController viewDidLoad]
void __cdecl -[DeviceWarrantyViewController viewDidLoad](DeviceWarrantyViewController *self, SEL a2)
{
  NSButton *v3; // x20
  NSButton *v4; // x20
  id v5; // x20
  NSTextField *v6; // x21
  id v7; // x20
  NSTextField *v8; // x21
  id v9; // x20
  NSButton *v10; // x21
  NSString *v11; // x20
  WKWebView *v12; // x20
  NSString *v13; // x19
  id v14; // x0
  objc_super v15; // [xsp+0h] [xbp-30h] BYREF

  v15.receiver = self;
  v15.super_class = (Class)&OBJC_CLASS___DeviceWarrantyViewController;
  -[DeviceWarrantyViewController viewDidLoad](&v15, "viewDidLoad");
  v3 = objc_retainAutoreleasedReturnValue(-[DeviceWarrantyViewController continueButton](self, "continueButton"));
  -[NSButton setEnabled:](v3, "setEnabled:", 0LL);
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceWarrantyViewController agreeToCheckBox](self, "agreeToCheckBox"));
  -[NSButton setState:](v4, "setState:", 0LL);
  objc_release(v4);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceWarrantyViewController titleText](self, "titleText"));
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceWarrantyViewController titleTextField](self, "titleTextField"));
  -[NSTextField setStringValue:](v6, "setStringValue:", v5);
  objc_release(v6);
  objc_release(v5);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceWarrantyViewController descriptionText](self, "descriptionText"));
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceWarrantyViewController descriptionTextField](self, "descriptionTextField"));
  -[NSTextField setStringValue:](v8, "setStringValue:", v7);
  objc_release(v8);
  objc_release(v7);
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceWarrantyViewController checkBoxTitleText](self, "checkBoxTitleText"));
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceWarrantyViewController agreeToCheckBox](self, "agreeToCheckBox"));
  -[NSButton setTitle:](v10, "setTitle:", v9);
  objc_release(v10);
  objc_release(v9);
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceWarrantyViewController warrantyInfoText](self, "warrantyInfoText"));
  objc_release(v11);
  if ( v11 )
  {
    v12 = objc_retainAutoreleasedReturnValue(-[DeviceWarrantyViewController webKitView](self, "webKitView"));
    v13 = objc_retainAutoreleasedReturnValue(-[DeviceWarrantyViewController warrantyInfoText](self, "warrantyInfoText"));
    v14 = objc_unsafeClaimAutoreleasedReturnValue(-[WKWebView loadHTMLString:baseURL:](v12, "loadHTMLString:baseURL:", v13, 0LL));
    objc_release(v13);
    objc_release(v12);
  }
}