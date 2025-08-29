-[EAFirmwareUpdater isSleepWakeRequired]
bool __cdecl -[EAFirmwareUpdater isSleepWakeRequired](EAFirmwareUpdater *self, SEL a2)
{
  iAUPServer *iAUPServer; // x0

  iAUPServer = self->_iAUPServer;
  if ( iAUPServer )
    LOBYTE(iAUPServer) = -[iAUPServer sleepWakeRequired](iAUPServer, "sleepWakeRequired");
  return (char)iAUPServer;
}