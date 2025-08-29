-[DeviceBackupEnterPasswordViewController viewDidLoad]
void __cdecl -[DeviceBackupEnterPasswordViewController viewDidLoad](
        DeviceBackupEnterPasswordViewController *self,
        SEL a2)
{
  NSDictionary *v3; // x0
  NSDictionary *v4; // x19
  id v5; // x0
  void *v6; // x20
  id v7; // x22
  id v8; // x22
  __CFString *v9; // x26
  __CFString *v10; // x22
  id v11; // x24
  void *v12; // x23
  id v13; // x25
  unsigned int v14; // w24
  id v15; // x25
  id v16; // x25
  NSSecureTextField *v17; // x25
  NSSecureTextField *v18; // x25
  NSTextField *v19; // x25
  NSTextField *v20; // x25
  const __CFString *v21; // x25
  NSSecureTextField *v22; // x27
  const __CFString *v23; // x25
  NSSecureTextField *v24; // x27
  NSSecureTextField *v25; // x27
  const __CFString *v26; // x25
  NSTextField *v27; // x27
  NSTextField *v28; // x25
  NSTextField *v29; // x25
  NSStackView *v30; // x24
  NSTextField *v31; // x24
  NSTextField *v32; // x24
  NSTextField *v33; // x24
  __int64 v34; // x24
  NSTextField *v35; // x25
  NSSecureTextField *v36; // x25
  NSTextField *v37; // x24
  NSButton *v38; // x23
  NSButton *v39; // x24
  NSButton *v40; // x23
  NSButton *v41; // x23
  NSButton *v42; // x23
  __int64 v43; // [xsp+0h] [xbp-A0h]
  __int64 v44; // [xsp+0h] [xbp-A0h]
  id v45; // [xsp+8h] [xbp-98h]
  id v46; // [xsp+10h] [xbp-90h]
  id v47; // [xsp+18h] [xbp-88h]
  id v48; // [xsp+20h] [xbp-80h]
  id v49; // [xsp+28h] [xbp-78h]
  id v50; // [xsp+30h] [xbp-70h]
  unsigned int v51; // [xsp+3Ch] [xbp-64h]
  objc_super v52; // [xsp+40h] [xbp-60h] BYREF

  v52.receiver = self;
  v52.super_class = (Class)&OBJC_CLASS___DeviceBackupEnterPasswordViewController;
  -[DeviceBackupEnterPasswordViewController viewDidLoad](&v52, "viewDidLoad");
  v3 = objc_retainAutoreleasedReturnValue(-[DeviceBackupEnterPasswordViewController parameters](self, "parameters"));
  v4 = v3;
  if ( v3 )
  {
    v5 = objc_retainAutoreleasedReturnValue(
           -[NSDictionary objectForKeyedSubscript:](
             v3,
             "objectForKeyedSubscript:",
             AMPDevicePromptForPasswordExplanationKey));
    v6 = v5;
    if ( !v5 || !objc_msgSend(v5, "length") )
    {
      v7 = objc_retainAutoreleasedReturnValue(
             -[NSDictionary objectForKeyedSubscript:](
               v4,
               "objectForKeyedSubscript:",
               AMPDevicePromptForPasswordMessageKey));
      objc_release(v6);
      v6 = v7;
    }
    v48 = objc_retainAutoreleasedReturnValue(
            -[NSDictionary objectForKeyedSubscript:](
              v4,
              "objectForKeyedSubscript:",
              AMPDevicePromptForPasswordOKButtonTitleKey));
    v47 = objc_retainAutoreleasedReturnValue(
            -[NSDictionary objectForKeyedSubscript:](
              v4,
              "objectForKeyedSubscript:",
              AMPDevicePromptForPasswordCancelButtonTitleKey));
    v46 = objc_retainAutoreleasedReturnValue(
            -[NSDictionary objectForKeyedSubscript:](
              v4,
              "objectForKeyedSubscript:",
              AMPDevicePromptForPasswordCheckboxTitleKey));
    v8 = objc_retainAutoreleasedReturnValue(
           -[NSDictionary objectForKeyedSubscript:](
             v4,
             "objectForKeyedSubscript:",
             AMPDevicePromptForPasswordCheckboxValueKey));
    v51 = (unsigned int)objc_msgSend(v8, "boolValue");
    objc_release(v8);
    v45 = objc_retainAutoreleasedReturnValue(
            -[NSDictionary objectForKeyedSubscript:](
              v4,
              "objectForKeyedSubscript:",
              AMPDevicePromptForPasswordUserNameLabelKey));
    v50 = objc_retainAutoreleasedReturnValue(
            -[NSDictionary objectForKeyedSubscript:](
              v4,
              "objectForKeyedSubscript:",
              AMPDevicePromptForPasswordPasswordLabelKey));
    v49 = objc_retainAutoreleasedReturnValue(
            -[NSDictionary objectForKeyedSubscript:](
              v4,
              "objectForKeyedSubscript:",
              AMPDevicePromptForPasswordVerifyLabelKey));
    v9 = (__CFString *)objc_retainAutoreleasedReturnValue(
                         -[NSDictionary objectForKeyedSubscript:](
                           v4,
                           "objectForKeyedSubscript:",
                           AMPDevicePromptForPasswordDefaultUserNameKey));
    v10 = (__CFString *)objc_retainAutoreleasedReturnValue(
                          -[NSDictionary objectForKeyedSubscript:](
                            v4,
                            "objectForKeyedSubscript:",
                            AMPDevicePromptForPasswordDefaultPasswordKey));
    v11 = objc_retainAutoreleasedReturnValue(
            -[NSDictionary objectForKeyedSubscript:](
              v4,
              "objectForKeyedSubscript:",
              AMPDevicePromptForPasswordHideUserNameKey));
    v12 = objc_msgSend(v11, "boolValue");
    objc_release(v11);
    v13 = objc_retainAutoreleasedReturnValue(
            -[NSDictionary objectForKeyedSubscript:](
              v4,
              "objectForKeyedSubscript:",
              AMPDevicePromptForPasswordLockUserNameKey));
    v14 = (unsigned int)objc_msgSend(v13, "boolValue");
    objc_release(v13);
    v15 = objc_retainAutoreleasedReturnValue(
            -[NSDictionary objectForKeyedSubscript:](
              v4,
              "objectForKeyedSubscript:",
              AMPDevicePromptForPasswordVerifyPasswordKey));
    LODWORD(v43) = (unsigned int)objc_msgSend(v15, "boolValue");
    objc_release(v15);
    v16 = objc_retainAutoreleasedReturnValue(
            -[NSDictionary objectForKeyedSubscript:](
              v4,
              "objectForKeyedSubscript:",
              AMPDevicePromptForPasswordHideCheckboxKey));
    HIDWORD(v43) = (unsigned int)objc_msgSend(v16, "boolValue");
    objc_release(v16);
    v17 = objc_retainAutoreleasedReturnValue(-[DeviceBackupEnterPasswordViewController passwordEntry](self, "passwordEntry"));
    -[NSSecureTextField setDelegate:](v17, "setDelegate:", self);
    objc_release(v17);
    v18 = objc_retainAutoreleasedReturnValue(-[DeviceBackupEnterPasswordViewController passwordEntrySecondary](self, "passwordEntrySecondary"));
    -[NSSecureTextField setDelegate:](v18, "setDelegate:", self);
    objc_release(v18);
    v19 = objc_retainAutoreleasedReturnValue(-[DeviceBackupEnterPasswordViewController userNameEntry](self, "userNameEntry"));
    -[NSTextField setDelegate:](v19, "setDelegate:", self);
    objc_release(v19);
    v20 = objc_retainAutoreleasedReturnValue(-[DeviceBackupEnterPasswordViewController enterPasswordPrompt](self, "enterPasswordPrompt"));
    -[NSTextField setStringValue:](v20, "setStringValue:", v6);
    objc_release(v20);
    if ( v10 )
    {
      if ( -[__CFString length](v10, "length") )
        v21 = v10;
      else
        v21 = &stru_1000BA220;
      v22 = objc_retainAutoreleasedReturnValue(-[DeviceBackupEnterPasswordViewController passwordEntry](self, "passwordEntry", v43));
      -[NSSecureTextField setStringValue:](v22, "setStringValue:", v21);
      objc_release(v22);
      if ( -[__CFString length](v10, "length") )
        v23 = v10;
      else
        v23 = &stru_1000BA220;
    }
    else
    {
      v24 = objc_retainAutoreleasedReturnValue(-[DeviceBackupEnterPasswordViewController passwordEntry](self, "passwordEntry"));
      v23 = &stru_1000BA220;
      -[NSSecureTextField setStringValue:](v24, "setStringValue:", &stru_1000BA220);
      objc_release(v24);
    }
    v25 = objc_retainAutoreleasedReturnValue(-[DeviceBackupEnterPasswordViewController passwordEntrySecondary](self, "passwordEntrySecondary", v43));
    -[NSSecureTextField setStringValue:](v25, "setStringValue:", v23);
    objc_release(v25);
    v26 = &stru_1000BA220;
    if ( v9 && -[__CFString length](v9, "length") )
      v26 = v9;
    v27 = objc_retainAutoreleasedReturnValue(-[DeviceBackupEnterPasswordViewController userNameEntry](self, "userNameEntry"));
    -[NSTextField setStringValue:](v27, "setStringValue:", v26);
    objc_release(v27);
    v28 = objc_retainAutoreleasedReturnValue(-[DeviceBackupEnterPasswordViewController userNameEntry](self, "userNameEntry"));
    -[NSTextField setHidden:](v28, "setHidden:", v12);
    objc_release(v28);
    v29 = objc_retainAutoreleasedReturnValue(-[DeviceBackupEnterPasswordViewController userNameEntry](self, "userNameEntry"));
    -[NSTextField setEnabled:](v29, "setEnabled:", v14 ^ 1);
    objc_release(v29);
    v30 = objc_retainAutoreleasedReturnValue(-[DeviceBackupEnterPasswordViewController userNameStackView](self, "userNameStackView"));
    -[NSStackView setHidden:](v30, "setHidden:", v12);
    objc_release(v30);
    if ( v45 && objc_msgSend(v45, "length") )
    {
      v31 = objc_retainAutoreleasedReturnValue(-[DeviceBackupEnterPasswordViewController userNameLabel](self, "userNameLabel"));
      -[NSTextField setStringValue:](v31, "setStringValue:", v45);
      objc_release(v31);
    }
    if ( v50 && objc_msgSend(v50, "length") )
    {
      v32 = objc_retainAutoreleasedReturnValue(-[DeviceBackupEnterPasswordViewController passwordPrompt](self, "passwordPrompt"));
      -[NSTextField setStringValue:](v32, "setStringValue:", v50);
      objc_release(v32);
    }
    if ( v49 && objc_msgSend(v49, "length") )
    {
      v33 = objc_retainAutoreleasedReturnValue(-[DeviceBackupEnterPasswordViewController passwordPromptSecondary](self, "passwordPromptSecondary"));
      -[NSTextField setStringValue:](v33, "setStringValue:", v49);
      objc_release(v33);
    }
    v34 = (unsigned int)v44 ^ 1;
    v35 = objc_retainAutoreleasedReturnValue(-[DeviceBackupEnterPasswordViewController passwordPromptSecondary](self, "passwordPromptSecondary"));
    -[NSTextField setHidden:](v35, "setHidden:", v34);
    objc_release(v35);
    v36 = objc_retainAutoreleasedReturnValue(-[DeviceBackupEnterPasswordViewController passwordEntrySecondary](self, "passwordEntrySecondary"));
    -[NSSecureTextField setHidden:](v36, "setHidden:", v34);
    objc_release(v36);
    v37 = objc_retainAutoreleasedReturnValue(-[DeviceBackupEnterPasswordViewController userNameLabel](self, "userNameLabel"));
    -[NSTextField setHidden:](v37, "setHidden:", v12);
    objc_release(v37);
    v38 = objc_retainAutoreleasedReturnValue(-[DeviceBackupEnterPasswordViewController rememberPasswordCheckbox](self, "rememberPasswordCheckbox"));
    -[NSButton setHidden:](v38, "setHidden:", HIDWORD(v44));
    objc_release(v38);
    v39 = objc_retainAutoreleasedReturnValue(-[DeviceBackupEnterPasswordViewController rememberPasswordCheckbox](self, "rememberPasswordCheckbox"));
    -[NSButton setState:](v39, "setState:", v51);
    objc_release(v39);
    if ( v46 && objc_msgSend(v46, "length") )
    {
      v40 = objc_retainAutoreleasedReturnValue(-[DeviceBackupEnterPasswordViewController rememberPasswordCheckbox](self, "rememberPasswordCheckbox"));
      -[NSButton setTitle:](v40, "setTitle:", v46);
      objc_release(v40);
    }
    if ( v48 && objc_msgSend(v48, "length") )
    {
      v41 = objc_retainAutoreleasedReturnValue(-[DeviceBackupEnterPasswordViewController okayButton](self, "okayButton"));
      -[NSButton setTitle:](v41, "setTitle:", v48);
      objc_release(v41);
    }
    if ( v47 && objc_msgSend(v47, "length") )
    {
      v42 = objc_retainAutoreleasedReturnValue(-[DeviceBackupEnterPasswordViewController cancelButton](self, "cancelButton"));
      -[NSButton setTitle:](v42, "setTitle:", v47);
      objc_release(v42);
    }
    -[DeviceBackupEnterPasswordViewController setPassword:](self, "setPassword:", 0LL);
    -[DeviceBackupEnterPasswordViewController setUserName:](self, "setUserName:", 0LL);
    -[DeviceBackupEnterPasswordViewController setCheckBoxValue:](self, "setCheckBoxValue:", v51);
    -[DeviceBackupEnterPasswordViewController verifyPasswordEntry](self, "verifyPasswordEntry");
    objc_release(v10);
    objc_release(v9);
    objc_release(v49);
    objc_release(v50);
    objc_release(v45);
    objc_release(v46);
    objc_release(v47);
    objc_release(v48);
    objc_release(v6);
  }
  else
  {
    NSLog(&CFSTR("Parameters not provided for DeviceBackupEnterPasswordViewController").isa);
  }
  objc_release(v4);
}