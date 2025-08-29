-[DeviceFooterViewController dealloc]
void __cdecl -[DeviceFooterViewController dealloc](DeviceFooterViewController *self, SEL a2)
{
  NSProgress *v3; // x20
  NSProgress *v4; // x20
  objc_super v5; // [xsp+10h] [xbp-20h] BYREF

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController primaryProgress](self, "primaryProgress"));
  -[DeviceFooterViewController removeProgressObservers:](self, "removeProgressObservers:", v3);
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController secondaryProgress](self, "secondaryProgress"));
  -[DeviceFooterViewController removeProgressObservers:](self, "removeProgressObservers:", v4);
  objc_release(v4);
  v5.receiver = self;
  v5.super_class = (Class)&OBJC_CLASS___DeviceFooterViewController;
  -[DeviceFooterViewController dealloc](&v5, "dealloc");
}