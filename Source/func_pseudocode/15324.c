-[UARPUpdaterServiceDisplay consentReceivedPostLogoutMode:]
void __cdecl -[UARPUpdaterServiceDisplay consentReceivedPostLogoutMode:](
        UARPUpdaterServiceDisplay *self,
        SEL a2,
        id a3)
{
  -[UARPUpdaterDisplayControllerDelegate consentReceivedPostLogoutMode:](
    self->_displayController,
    "consentReceivedPostLogoutMode:",
    a3);
}