-[DeviceBackUpSettingsViewController viewDidLoad]
void __cdecl -[DeviceBackUpSettingsViewController viewDidLoad](DeviceBackUpSettingsViewController *self, SEL a2)
{
  AMPDevicesClient *v3; // x20
  objc_super v4; // [xsp+0h] [xbp-20h] BYREF

  v4.receiver = self;
  v4.super_class = (Class)&OBJC_CLASS___DeviceBackUpSettingsViewController;
  -[DeviceBackUpSettingsViewController viewDidLoad](&v4, "viewDidLoad");
  -[DeviceBackUpSettingsViewController updateLatestBackUpDateAndTime](self, "updateLatestBackUpDateAndTime");
  v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](self, "devicesClient"));
  -[AMPDevicesClient addListener:](v3, "addListener:", self);
  objc_release(v3);
  -[DeviceBackUpSettingsViewController loadUIFromPrefs](self, "loadUIFromPrefs");
}