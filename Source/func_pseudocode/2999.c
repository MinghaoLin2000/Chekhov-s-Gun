-[DeviceChooseBackupViewController viewDidLoad]
void __cdecl -[DeviceChooseBackupViewController viewDidLoad](DeviceChooseBackupViewController *self, SEL a2)
{
  NSSecureTextField *v3; // x20
  id v4; // x20
  NSTextField *v5; // x21
  NSString *v6; // x21
  NSString *v7; // x21
  NSSecureTextField *v8; // x22
  objc_super v9; // [xsp+0h] [xbp-30h] BYREF

  v9.receiver = self;
  v9.super_class = (Class)&OBJC_CLASS___DeviceChooseBackupViewController;
  -[DeviceChooseBackupViewController viewDidLoad](&v9, "viewDidLoad");
  -[DeviceChooseBackupViewController loadPopUpButton](self, "loadPopUpButton");
  v3 = objc_retainAutoreleasedReturnValue(-[DeviceChooseBackupViewController passwordEntryTextField](self, "passwordEntryTextField"));
  -[NSSecureTextField setDelegate:](v3, "setDelegate:", self);
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(
         -[DeviceViewController deviceStringForStringParameterizedKey:](
           self,
           "deviceStringForStringParameterizedKey:",
           CFSTR("Choose Restore Backup %@")));
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceChooseBackupViewController dialogTextField](self, "dialogTextField"));
  -[NSTextField setStringValue:](v5, "setStringValue:", v4);
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceChooseBackupViewController backupPassword](self, "backupPassword"));
  objc_release(v6);
  if ( v6 )
  {
    v7 = objc_retainAutoreleasedReturnValue(-[DeviceChooseBackupViewController backupPassword](self, "backupPassword"));
    v8 = objc_retainAutoreleasedReturnValue(-[DeviceChooseBackupViewController passwordEntryTextField](self, "passwordEntryTextField"));
    -[NSSecureTextField setStringValue:](v8, "setStringValue:", v7);
    objc_release(v8);
    objc_release(v7);
  }
  -[DeviceChooseBackupViewController popUpSelectionChanged:](self, "popUpSelectionChanged:", 0LL);
  objc_release(v4);
}