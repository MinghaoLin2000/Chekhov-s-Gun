-[EAFirmwareUpdater setFirmwareBundle:]
void __cdecl -[EAFirmwareUpdater setFirmwareBundle:](EAFirmwareUpdater *self, SEL a2, id a3)
{
  iAUPServer *iAUPServer; // x0
  iAUPServer *v6; // x0
  __int64 vars8; // [xsp+38h] [xbp+8h]

  -[EAFirmwareUpdater log:format:](
    self,
    "log:format:",
    5LL,
    CFSTR("%s %@"),
    "-[EAFirmwareUpdater setFirmwareBundle:]",
    objc_autorelease(
      objc_msgSend(
        objc_alloc((Class)&OBJC_CLASS___NSString),
        "initWithFormat:",
        CFSTR("%s: EAFirmwareUpdater using local firmware bundles for %@\n"),
        "-[EAFirmwareUpdater setFirmwareBundle:]",
        self->_protocolString)));
  iAUPServer = self->_iAUPServer;
  if ( !iAUPServer )
  {
    v6 = -[iAUPServer initInstanceWithByteEscape:](
           objc_alloc(&OBJC_CLASS___iAUPServer),
           "initInstanceWithByteEscape:",
           self->_byteEscape);
    self->_iAUPServer = v6;
    -[iAUPServer setDelegate:](v6, "setDelegate:", self);
    iAUPServer = self->_iAUPServer;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[iAUPServer setFirmwareBundle:](iAUPServer, "setFirmwareBundle:", a3);
}