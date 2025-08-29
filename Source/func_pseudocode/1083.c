-[DeviceSettingsPhotosViewController viewDidAppear]
void __cdecl -[DeviceSettingsPhotosViewController viewDidAppear](DeviceSettingsPhotosViewController *self, SEL a2)
{
  NSString *v3; // x20
  NSString *v4; // x20
  NSDictionary *v5; // x21
  NSArray *v6; // x22
  objc_super v7; // [xsp+0h] [xbp-50h] BYREF
  __int64 v8; // [xsp+10h] [xbp-40h] BYREF
  NSString *v9; // [xsp+18h] [xbp-38h] BYREF
  NSDictionary *v10; // [xsp+20h] [xbp-30h] BYREF

  v7.receiver = self;
  v7.super_class = (Class)&OBJC_CLASS___DeviceSettingsPhotosViewController;
  -[DeviceSettingsPhotosViewController viewDidAppear](&v7, "viewDidAppear");
  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController deferredPhotoSyncErrorMessage](self, "deferredPhotoSyncErrorMessage"));
  objc_release(v3);
  if ( v3 )
  {
    v8 = AMPDeviceSyncErrorMessageKey;
    v4 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController deferredPhotoSyncErrorMessage](self, "deferredPhotoSyncErrorMessage"));
    v9 = v4;
    v5 = objc_retainAutoreleasedReturnValue(
           +[NSDictionary dictionaryWithObjects:forKeys:count:](
             &OBJC_CLASS___NSDictionary,
             "dictionaryWithObjects:forKeys:count:",
             &v9,
             &v8,
             1LL));
    v10 = v5;
    v6 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", &v10, 1LL));
    -[DeviceViewController presentUIForErrors:](self, "presentUIForErrors:", v6);
    objc_release(v6);
    objc_release(v5);
    objc_release(v4);
    -[DeviceSettingsPhotosViewController setDeferredPhotoSyncErrorMessage:](
      self,
      "setDeferredPhotoSyncErrorMessage:",
      0LL);
  }
}