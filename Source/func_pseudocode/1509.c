-[DeviceFooterViewController viewDidLoad]
void __cdecl -[DeviceFooterViewController viewDidLoad](DeviceFooterViewController *self, SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-20h] BYREF

  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___DeviceFooterViewController;
  -[DeviceFooterViewController viewDidLoad](&v3, "viewDidLoad");
  -[DeviceFooterViewController installCapacityBarViewController](self, "installCapacityBarViewController");
  -[DeviceFooterViewController installProgressBarViewController](self, "installProgressBarViewController");
  -[DeviceFooterViewController installProgressTextField](self, "installProgressTextField");
  -[DeviceFooterViewController updateCapacityTotals](self, "updateCapacityTotals");
  -[DeviceFooterViewController updateButtonsState](self, "updateButtonsState");
}