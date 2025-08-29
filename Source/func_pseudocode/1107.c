-[DeviceSettingsPhotosViewController loadModel]
void __cdecl -[DeviceSettingsPhotosViewController loadModel](DeviceSettingsPhotosViewController *self, SEL a2)
{
  NSFileManager *v3; // x20
  NSURL *v4; // x21
  NSURL *v5; // x20
  NSFileManager *v6; // x20
  NSURL *v7; // x21
  NSWorkspace *v8; // x21
  NSString *v9; // x22
  NSURL *v10; // x20
  AMPPhotoSyncPrefs *v11; // x20
  AMPPhotoSyncPrefs *v12; // x20
  void *v13; // x21
  AMPPhotoSyncPrefs *v14; // x20
  objc_super v15; // [xsp+0h] [xbp-30h] BYREF

  v15.receiver = self;
  v15.super_class = (Class)&OBJC_CLASS___DeviceSettingsPhotosViewController;
  -[DeviceSettingsViewController loadModel](&v15, "loadModel");
  -[DeviceSettingsPhotosViewController loadImageResources](self, "loadImageResources");
  v3 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  v4 = objc_retainAutoreleasedReturnValue(
         -[NSFileManager URLForDirectory:inDomain:appropriateForURL:create:error:](
           v3,
           "URLForDirectory:inDomain:appropriateForURL:create:error:",
           19LL,
           0x10000LL,
           0LL,
           0LL,
           0LL));
  -[DeviceSettingsPhotosViewController setPicturesURL:](self, "setPicturesURL:", v4);
  objc_release(v4);
  objc_release(v3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController picturesURL](self, "picturesURL"));
  objc_release(v5);
  if ( !v5 )
  {
    v6 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
    v7 = objc_retainAutoreleasedReturnValue(
           -[NSFileManager URLForDirectory:inDomain:appropriateForURL:create:error:](
             v6,
             "URLForDirectory:inDomain:appropriateForURL:create:error:",
             12LL,
             0x10000LL,
             0LL,
             0LL,
             0LL));
    -[DeviceSettingsPhotosViewController setPicturesURL:](self, "setPicturesURL:", v7);
    objc_release(v7);
    objc_release(v6);
  }
  v8 = objc_retainAutoreleasedReturnValue(+[NSWorkspace sharedWorkspace](&OBJC_CLASS___NSWorkspace, "sharedWorkspace"));
  v9 = objc_retainAutoreleasedReturnValue(
         -[NSWorkspace absolutePathForAppBundleWithIdentifier:](
           v8,
           "absolutePathForAppBundleWithIdentifier:",
           CFSTR("com.apple.Photos")));
  v10 = objc_retainAutoreleasedReturnValue(+[NSURL URLWithString:](&OBJC_CLASS___NSURL, "URLWithString:", v9));
  -[DeviceSettingsPhotosViewController setPhotosAppURL:](self, "setPhotosAppURL:", v10);
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController photoSyncPrefs](self, "photoSyncPrefs"));
  -[DeviceSettingsPhotosViewController reconcilePhotoSyncPrefsAgainstLocalMachine:](
    self,
    "reconcilePhotoSyncPrefsAgainstLocalMachine:",
    v11);
  objc_release(v11);
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController photoSyncPrefs](self, "photoSyncPrefs"));
  v13 = -[AMPPhotoSyncPrefs copy](v12, "copy");
  -[DeviceSettingsPhotosViewController setOriginalPhotoSyncPrefs:](self, "setOriginalPhotoSyncPrefs:", v13);
  objc_release(v13);
  objc_release(v12);
  v14 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController photoSyncPrefs](self, "photoSyncPrefs"));
  -[DeviceSettingsPhotosViewController setCurrentPhotoSyncSource:](
    self,
    "setCurrentPhotoSyncSource:",
    -[AMPPhotoSyncPrefs photoSyncSource](v14, "photoSyncSource"));
  objc_release(v14);
  -[DeviceSettingsPhotosViewController loadModelForSource:](
    self,
    "loadModelForSource:",
    -[DeviceSettingsPhotosViewController currentPhotoSyncSource](self, "currentPhotoSyncSource"));
}