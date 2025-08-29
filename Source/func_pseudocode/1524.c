-[DeviceFooterViewController setHiddenSecondaryButton:]
void __cdecl -[DeviceFooterViewController setHiddenSecondaryButton:](DeviceFooterViewController *self, SEL a2, bool a3)
{
  self->_hiddenSecondaryButton = a3;
  -[DeviceFooterViewController updateButtonsState](self, "updateButtonsState");
}