-[DeviceSettingsPhotosViewController loadModelForPhotos]
void __cdecl -[DeviceSettingsPhotosViewController loadModelForPhotos](DeviceSettingsPhotosViewController *self, SEL a2)
{
  NSProgressIndicator *v3; // x20
  FileEventObserver *v4; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( !-[DeviceSettingsPhotosViewController photosIsLoading](self, "photosIsLoading") )
  {
    -[DeviceSettingsPhotosViewController setPhotosIsLoading:](self, "setPhotosIsLoading:", 1LL);
    v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController progressIndicator](self, "progressIndicator"));
    -[NSProgressIndicator setHidden:](v3, "setHidden:", 0LL);
    objc_release(v3);
    v4 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController fileEventObserver](self, "fileEventObserver"));
    -[FileEventObserver setPath:](v4, "setPath:", 0LL);
    objc_release(v4);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    -[DeviceSettingsPhotosViewController loadPhotoKit](self, "loadPhotoKit");
  }
}