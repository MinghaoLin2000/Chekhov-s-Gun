-[UARPUpdaterServiceDisplay consentReceived:]
void __cdecl -[UARPUpdaterServiceDisplay consentReceived:](UARPUpdaterServiceDisplay *self, SEL a2, id a3)
{
  -[UARPUpdaterDisplayControllerDelegate consentReceived:](self->_displayController, "consentReceived:", a3);
}