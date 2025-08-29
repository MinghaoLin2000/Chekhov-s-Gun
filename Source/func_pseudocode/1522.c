-[DeviceFooterViewController setHiddenCapacityBar:]
void __cdecl -[DeviceFooterViewController setHiddenCapacityBar:](DeviceFooterViewController *self, SEL a2, bool a3)
{
  self->_hiddenCapacityBar = a3;
  -[DeviceFooterViewController updateButtonsState](self, "updateButtonsState");
}