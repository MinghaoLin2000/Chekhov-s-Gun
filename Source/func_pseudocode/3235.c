-[DeviceMediaPickerViewController setItLibrary:]
void __cdecl -[DeviceMediaPickerViewController setItLibrary:](DeviceMediaPickerViewController *self, SEL a2, id a3)
{
  objc_super v4; // [xsp+0h] [xbp-20h] BYREF

  v4.receiver = self;
  v4.super_class = (Class)&OBJC_CLASS___DeviceMediaPickerViewController;
  -[DeviceViewController setItLibrary:](&v4, "setItLibrary:", a3);
  -[DeviceMediaPickerViewController setMediaPickerNodes:](self, "setMediaPickerNodes:", 0LL);
}