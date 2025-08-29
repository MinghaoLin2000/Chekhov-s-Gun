-[preflightInfo dealloc]
void __cdecl -[preflightInfo dealloc](preflightInfo *self, SEL a2)
{
  __AMRestorableDevice *preflightDevice; // x0
  objc_super v4; // [xsp+0h] [xbp-20h] BYREF

  preflightDevice = self->preflightDevice;
  if ( preflightDevice )
    CFRelease(preflightDevice);
  v4.receiver = self;
  v4.super_class = (Class)&OBJC_CLASS___preflightInfo;
  -[preflightInfo dealloc](&v4, "dealloc");
}