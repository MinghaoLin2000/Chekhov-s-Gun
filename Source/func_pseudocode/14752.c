-[UINSSystemPreferencesServiceViewController viewDidLoad]
void __cdecl -[UINSSystemPreferencesServiceViewController viewDidLoad](
        UINSSystemPreferencesServiceViewController *self,
        SEL a2)
{
  int v3; // w21
  NSBundle *v4; // x0
  NSBundle *v5; // x20
  const __CFString *v6; // x2
  const __CFString *v7; // x3
  NSString *v8; // x21
  NSButton *v9; // x22
  const char *v10; // x1
  __int64 v11; // x0
  const void *v12; // x20
  void *v13; // x0
  void *v14; // x21
  void *v15; // x22
  NSBundle *v16; // x0
  NSBundle *applicationBundle; // x8
  void *v18; // x23
  NSString *v19; // x0
  NSString *applicationName; // x8
  void *v21; // x23
  NSString *v22; // x0
  NSString *applicationBundleID; // x8
  void *v24; // x20
  void *v25; // x21
  objc_super v26; // [xsp+0h] [xbp-80h] BYREF
  _OWORD v27[2]; // [xsp+10h] [xbp-70h] BYREF
  __int128 v28; // [xsp+30h] [xbp-50h] BYREF
  __int128 v29; // [xsp+40h] [xbp-40h]

  v3 = _os_feature_enabled_impl("SystemPrefsApp", "Pantheon");
  v4 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v5 = v4;
  if ( v3 )
  {
    v6 = CFSTR("REVEAL_TITLE");
    v7 = CFSTR("Open System Settings…");
  }
  else
  {
    v6 = CFSTR("REVEAL_TITLE_OLD");
    v7 = CFSTR("Open System Preferences…");
  }
  v8 = objc_retainAutoreleasedReturnValue(
         -[NSBundle localizedStringForKey:value:table:](
           v4,
           "localizedStringForKey:value:table:",
           v6,
           v7,
           CFSTR("UIKitMacHelperSystemPreferences")));
  v9 = objc_retainAutoreleasedReturnValue(
         -[UINSSystemPreferencesServiceViewController launchSystemPreferencesButton](
           self,
           "launchSystemPreferencesButton"));
  -[NSButton setTitle:](v9, "setTitle:", v8);
  objc_release(v9);
  objc_release(v8);
  objc_release(v5);
  v28 = 0u;
  v29 = 0u;
  objc_msgSend_hostAppAuditToken(&v28, self, v10);
  v27[0] = v28;
  v27[1] = v29;
  v11 = _LSCopyLSASNForAuditToken(0xFFFFFFFFLL, v27);
  if ( v11 )
  {
    v12 = (const void *)v11;
    v13 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSRunningApplication), "initWithApplicationSerialNumber:", v11);
    v14 = v13;
    if ( v13 )
    {
      v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "bundleURL"));
      if ( v15 )
      {
        v16 = objc_retainAutoreleasedReturnValue(+[NSBundle bundleWithURL:](&OBJC_CLASS___NSBundle, "bundleWithURL:", v15));
        applicationBundle = self->_applicationBundle;
        self->_applicationBundle = v16;
        objc_release(applicationBundle);
      }
      v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "localizedName"));
      v19 = (NSString *)objc_msgSend(v18, "copy");
      applicationName = self->_applicationName;
      self->_applicationName = v19;
      objc_release(applicationName);
      objc_release(v18);
      v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "bundleIdentifier"));
      v22 = (NSString *)objc_msgSend(v21, "copy");
      applicationBundleID = self->_applicationBundleID;
      self->_applicationBundleID = v22;
      objc_release(applicationBundleID);
      objc_release(v21);
      objc_release(v15);
    }
    CFRelease(v12);
    objc_release(v14);
  }
  -[UINSSystemPreferencesServiceViewController _updateSettingsIfNeeded](self, "_updateSettingsIfNeeded");
  v24 = objc_retainAutoreleasedReturnValue(-[UINSSystemPreferencesServiceViewController view](self, "view"));
  v25 = objc_retainAutoreleasedReturnValue(objc_msgSend(v24, "window"));
  objc_msgSend(v25, "makeFirstResponder:", self->_tableView);
  objc_release(v25);
  objc_release(v24);
  v26.receiver = self;
  v26.super_class = (Class)&OBJC_CLASS___UINSSystemPreferencesServiceViewController;
  -[UINSSystemPreferencesServiceViewController viewDidLoad](&v26, "viewDidLoad");
}