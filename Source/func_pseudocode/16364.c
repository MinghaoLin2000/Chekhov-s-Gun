-[EAFirmwareUpdater isUrgentUpdate]
bool __cdecl -[EAFirmwareUpdater isUrgentUpdate](EAFirmwareUpdater *self, SEL a2)
{
  if ( self->_firmwareUpdateIsUrgent )
    return 1;
  else
    return -[iAUPServer urgentUpdate](self->_iAUPServer, "urgentUpdate");
}