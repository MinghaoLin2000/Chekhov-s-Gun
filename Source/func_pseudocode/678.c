-[DeviceFileSharingViewController viewDidLoad]
void __cdecl -[DeviceFileSharingViewController viewDidLoad](DeviceFileSharingViewController *self, SEL a2)
{
  AMPDevicesClient *v3; // x20
  objc_super v4; // [xsp+0h] [xbp-20h] BYREF

  v4.receiver = self;
  v4.super_class = (Class)&OBJC_CLASS___DeviceFileSharingViewController;
  -[DeviceFileSharingViewController viewDidLoad](&v4, "viewDidLoad");
  -[DeviceFileSharingViewController setUpOutlineView](self, "setUpOutlineView");
  v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](self, "devicesClient"));
  -[AMPDevicesClient addListener:](v3, "addListener:", self);
  objc_release(v3);
}