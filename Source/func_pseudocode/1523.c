-[DeviceFooterViewController setHiddenPrimaryButton:]
void __cdecl -[DeviceFooterViewController setHiddenPrimaryButton:](DeviceFooterViewController *self, SEL a2, bool a3)
{
  self->_hiddenPrimaryButton = a3;
  -[DeviceFooterViewController updateButtonsState](self, "updateButtonsState");
}