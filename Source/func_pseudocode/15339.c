-[restoreInfo dealloc]
void __cdecl -[restoreInfo dealloc](restoreInfo *self, SEL a2)
{
  __AMRestorableDevice *restoreDevice; // x0
  objc_super v4; // [xsp+0h] [xbp-20h] BYREF

  restoreDevice = self->restoreDevice;
  if ( restoreDevice )
    CFRelease(restoreDevice);
  v4.receiver = self;
  v4.super_class = (Class)&OBJC_CLASS___restoreInfo;
  -[restoreInfo dealloc](&v4, "dealloc");
}