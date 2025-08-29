-[EAFirmwareUpdater isRestartRequired]
bool __cdecl -[EAFirmwareUpdater isRestartRequired](EAFirmwareUpdater *self, SEL a2)
{
  iAUPServer *iAUPServer; // x0

  iAUPServer = self->_iAUPServer;
  if ( iAUPServer )
    LOBYTE(iAUPServer) = -[iAUPServer restartRequired](iAUPServer, "restartRequired");
  return (char)iAUPServer;
}