-[DeviceFooterViewController viewWillDisappear]
// attributes: thunk
void __cdecl -[DeviceFooterViewController viewWillDisappear](DeviceFooterViewController *self, SEL a2)
{
  -[DeviceFooterViewController stopAllProgressDisplays](self, "stopAllProgressDisplays");
}