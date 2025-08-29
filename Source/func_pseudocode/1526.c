-[DeviceFooterViewController setEnabledSecondaryButton:]
void __cdecl -[DeviceFooterViewController setEnabledSecondaryButton:](
        DeviceFooterViewController *self,
        SEL a2,
        bool a3)
{
  self->_enabledSecondaryButton = a3;
  -[DeviceFooterViewController updateButtonsState](self, "updateButtonsState");
}