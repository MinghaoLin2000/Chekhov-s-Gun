-[DeviceEULAViewController viewDidLoad]
void __cdecl -[DeviceEULAViewController viewDidLoad](DeviceEULAViewController *self, SEL a2)
{
  NSButton *v3; // x20
  NSButton *v4; // x20
  void *v5; // x20
  NSTextField *v6; // x21
  void *v7; // x21
  NSTextField *v8; // x22
  NSString *v9; // x22
  NSString *v10; // x23
  NSData *v11; // x22
  void *v12; // x23
  void *v13; // x24
  NSAttributedStringKey v14; // x25
  NSColor *v15; // x26
  NSTextView *v16; // x24
  NSTextView *v17; // x19
  NSTextStorage *v18; // x24
  objc_super v19; // [xsp+0h] [xbp-50h] BYREF

  v19.receiver = self;
  v19.super_class = (Class)&OBJC_CLASS___DeviceEULAViewController;
  -[DeviceEULAViewController viewDidLoad](&v19, "viewDidLoad");
  v3 = objc_retainAutoreleasedReturnValue(-[DeviceEULAViewController continueButton](self, "continueButton"));
  -[NSButton setEnabled:](v3, "setEnabled:", 0LL);
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceEULAViewController agreeToCheckBox](self, "agreeToCheckBox"));
  -[NSButton setState:](v4, "setState:", 0LL);
  objc_release(v4);
  v5 = objc_retainAutoreleasedReturnValue(
         objc_msgSend(
           (id)objc_opt_class(self),
           "deviceStringForDeviceType:forStringParameterizedKey:",
           -[DeviceEULAViewController deviceType](self, "deviceType"),
           CFSTR("%@ Software License Agreement")));
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceEULAViewController titleTextField](self, "titleTextField"));
  -[NSTextField setStringValue:](v6, "setStringValue:", v5);
  objc_release(v6);
  v7 = objc_retainAutoreleasedReturnValue(
         objc_msgSend(
           (id)objc_opt_class(self),
           "deviceStringForDeviceType:forStringParameterizedKey:",
           -[DeviceEULAViewController deviceType](self, "deviceType"),
           CFSTR("Review and accept the terms of the %@ Software License Agreement before using your new %@.")));
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceEULAViewController descriptionTextField](self, "descriptionTextField"));
  -[NSTextField setStringValue:](v8, "setStringValue:", v7);
  objc_release(v8);
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceEULAViewController licenseAgreementText](self, "licenseAgreementText"));
  objc_release(v9);
  if ( v9 )
  {
    v10 = objc_retainAutoreleasedReturnValue(-[DeviceEULAViewController licenseAgreementText](self, "licenseAgreementText"));
    v11 = objc_retainAutoreleasedReturnValue(-[NSString dataUsingEncoding:](v10, "dataUsingEncoding:", 4LL));
    objc_release(v10);
    v12 = objc_msgSend(
            objc_alloc((Class)&OBJC_CLASS___NSMutableAttributedString),
            "initWithRTF:documentAttributes:",
            v11,
            0LL);
    v13 = objc_msgSend(v12, "length");
    v14 = NSForegroundColorAttributeName;
    v15 = objc_retainAutoreleasedReturnValue(+[NSColor labelColor](&OBJC_CLASS___NSColor, "labelColor"));
    objc_msgSend(v12, "addAttribute:value:range:", v14, v15, 0LL, v13);
    objc_release(v15);
    v16 = objc_retainAutoreleasedReturnValue(-[DeviceEULAViewController textView](self, "textView"));
    -[NSTextView setRichText:](v16, "setRichText:", 1LL);
    objc_release(v16);
    v17 = objc_retainAutoreleasedReturnValue(-[DeviceEULAViewController textView](self, "textView"));
    v18 = objc_retainAutoreleasedReturnValue(-[NSTextView textStorage](v17, "textStorage"));
    -[NSTextStorage setAttributedString:](v18, "setAttributedString:", v12);
    objc_release(v18);
    objc_release(v17);
    objc_release(v12);
    objc_release(v11);
  }
  objc_release(v7);
  objc_release(v5);
}