-[iAUPServer setFirmwareBundle:]
void __cdecl -[iAUPServer setFirmwareBundle:](iAUPServer *self, SEL a2, id a3)
{
  FirmwareBundle *firmwareBundle; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  firmwareBundle = self->_firmwareBundle;
  if ( firmwareBundle )
  {
    objc_release(firmwareBundle);
    self->_firmwareBundle = 0LL;
  }
  self->_firmwareBundle = (FirmwareBundle *)objc_retain(a3);
  if ( -[iAUPServer serverState](self, "serverState") != 1 && -[iAUPServer serverState](self, "serverState") != 7 )
  {
    -[iAUPServer resetParser](self, "resetParser");
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    -[iAUPServer setServerState:](self, "setServerState:", 6LL);
  }
}