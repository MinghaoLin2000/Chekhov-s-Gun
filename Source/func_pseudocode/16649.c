-[EAAccessoryUpdater dealloc]
void __cdecl -[EAAccessoryUpdater dealloc](EAAccessoryUpdater *self, SEL a2)
{
  objc_super v3; // [xsp+10h] [xbp-20h] BYREF

  -[FudPluginDelegate log:format:](
    self->delegate,
    "log:format:",
    5LL,
    CFSTR("Entering: %s:%d"),
    "-[EAAccessoryUpdater dealloc]",
    316LL);
  objc_release(self->mobileAssetType);
  objc_release(self->initOptions);
  objc_release(self->deviceClass);
  objc_release(self->firmwareUpdater);
  objc_release(self->localFilePath);
  objc_release(self->seedLocations);
  objc_release(self->dropboxPath);
  objc_release(self->deviceOptions);
  objc_release(self->_accessoryFusingType);
  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___EAAccessoryUpdater;
  -[EAAccessoryUpdater dealloc](&v3, "dealloc");
}