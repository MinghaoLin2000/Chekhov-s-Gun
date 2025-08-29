-[DeviceEnterCurrentPasswordViewController viewDidLoad]
void __cdecl -[DeviceEnterCurrentPasswordViewController viewDidLoad](
        DeviceEnterCurrentPasswordViewController *self,
        SEL a2)
{
  NSSecureTextField *v3; // x20
  NSString *v4; // x0
  NSString *v5; // x20
  NSString *v6; // x21
  unsigned __int8 v7; // w22
  NSString *v8; // x20
  NSButton *v9; // x21
  NSString *v10; // x0
  NSString *v11; // x20
  NSString *v12; // x21
  unsigned __int8 v13; // w22
  NSString *v14; // x20
  NSButton *v15; // x21
  NSString *v16; // x0
  NSString *v17; // x20
  NSString *v18; // x21
  unsigned __int8 v19; // w22
  NSString *v20; // x20
  NSTextField *v21; // x21
  NSString *v22; // x20
  NSString *v23; // x20
  NSSecureTextField *v24; // x19
  objc_super v25; // [xsp+0h] [xbp-30h] BYREF

  v25.receiver = self;
  v25.super_class = (Class)&OBJC_CLASS___DeviceEnterCurrentPasswordViewController;
  -[DeviceEnterCurrentPasswordViewController viewDidLoad](&v25, "viewDidLoad");
  v3 = objc_retainAutoreleasedReturnValue(-[DeviceEnterCurrentPasswordViewController passwordEntry](self, "passwordEntry"));
  -[NSSecureTextField setDelegate:](v3, "setDelegate:", self);
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceEnterCurrentPasswordViewController okButtonTitle](self, "okButtonTitle"));
  if ( v4 )
  {
    v5 = v4;
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceEnterCurrentPasswordViewController okButtonTitle](self, "okButtonTitle"));
    v7 = -[NSString isEqualToString:](v6, "isEqualToString:", &stru_1000BA220);
    objc_release(v6);
    objc_release(v5);
    if ( (v7 & 1) == 0 )
    {
      v8 = objc_retainAutoreleasedReturnValue(-[DeviceEnterCurrentPasswordViewController okButtonTitle](self, "okButtonTitle"));
      v9 = objc_retainAutoreleasedReturnValue(-[DeviceEnterCurrentPasswordViewController okButton](self, "okButton"));
      -[NSButton setTitle:](v9, "setTitle:", v8);
      objc_release(v9);
      objc_release(v8);
    }
  }
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceEnterCurrentPasswordViewController cancelButtonTitle](self, "cancelButtonTitle"));
  if ( v10 )
  {
    v11 = v10;
    v12 = objc_retainAutoreleasedReturnValue(-[DeviceEnterCurrentPasswordViewController cancelButtonTitle](self, "cancelButtonTitle"));
    v13 = -[NSString isEqualToString:](v12, "isEqualToString:", &stru_1000BA220);
    objc_release(v12);
    objc_release(v11);
    if ( (v13 & 1) == 0 )
    {
      v14 = objc_retainAutoreleasedReturnValue(-[DeviceEnterCurrentPasswordViewController cancelButtonTitle](self, "cancelButtonTitle"));
      v15 = objc_retainAutoreleasedReturnValue(-[DeviceEnterCurrentPasswordViewController cancelButton](self, "cancelButton"));
      -[NSButton setTitle:](v15, "setTitle:", v14);
      objc_release(v15);
      objc_release(v14);
    }
  }
  v16 = objc_retainAutoreleasedReturnValue(-[DeviceEnterCurrentPasswordViewController passwordPromptTitle](self, "passwordPromptTitle"));
  if ( v16 )
  {
    v17 = v16;
    v18 = objc_retainAutoreleasedReturnValue(-[DeviceEnterCurrentPasswordViewController passwordPromptTitle](self, "passwordPromptTitle"));
    v19 = -[NSString isEqualToString:](v18, "isEqualToString:", &stru_1000BA220);
    objc_release(v18);
    objc_release(v17);
    if ( (v19 & 1) == 0 )
    {
      v20 = objc_retainAutoreleasedReturnValue(-[DeviceEnterCurrentPasswordViewController passwordPromptTitle](self, "passwordPromptTitle"));
      v21 = objc_retainAutoreleasedReturnValue(-[DeviceEnterCurrentPasswordViewController enterPasswordPrompt](self, "enterPasswordPrompt"));
      -[NSTextField setStringValue:](v21, "setStringValue:", v20);
      objc_release(v21);
      objc_release(v20);
    }
  }
  v22 = objc_retainAutoreleasedReturnValue(-[DeviceEnterCurrentPasswordViewController password](self, "password"));
  objc_release(v22);
  if ( v22 )
  {
    v23 = objc_retainAutoreleasedReturnValue(-[DeviceEnterCurrentPasswordViewController password](self, "password"));
    v24 = objc_retainAutoreleasedReturnValue(-[DeviceEnterCurrentPasswordViewController passwordEntry](self, "passwordEntry"));
    -[NSSecureTextField setStringValue:](v24, "setStringValue:", v23);
    objc_release(v24);
    objc_release(v23);
  }
}