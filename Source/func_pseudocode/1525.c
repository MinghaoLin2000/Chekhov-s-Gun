-[DeviceFooterViewController setEnabledPrimaryButton:]
void __cdecl -[DeviceFooterViewController setEnabledPrimaryButton:](DeviceFooterViewController *self, SEL a2, bool a3)
{
  self->_enabledPrimaryButton = a3;
  -[DeviceFooterViewController updateButtonsState](self, "updateButtonsState");
}