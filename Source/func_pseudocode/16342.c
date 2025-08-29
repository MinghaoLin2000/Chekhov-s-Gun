-[EAFirmwareUpdater setFirmwareLocalURL:]
void __cdecl -[EAFirmwareUpdater setFirmwareLocalURL:](EAFirmwareUpdater *self, SEL a2, id a3)
{
  iAUPServer *v5; // x0
  FirmwareBundle *v6; // x20
  NSArray *v7; // x0
  void *v8; // x20
  FirmwareBundle *v9; // x0
  __int64 vars8; // [xsp+38h] [xbp+8h]

  -[EAFirmwareUpdater log:format:](
    self,
    "log:format:",
    5LL,
    CFSTR("%s %@"),
    "-[EAFirmwareUpdater setFirmwareLocalURL:]",
    objc_autorelease(
      objc_msgSend(
        objc_alloc((Class)&OBJC_CLASS___NSString),
        "initWithFormat:",
        CFSTR("%s: EAFirmwareUpdater setFirmwareImage\n"),
        "-[EAFirmwareUpdater setFirmwareLocalURL:]")));
  if ( !self->_iAUPServer )
  {
    v5 = -[iAUPServer initInstanceWithByteEscape:](
           objc_alloc(&OBJC_CLASS___iAUPServer),
           "initInstanceWithByteEscape:",
           self->_byteEscape);
    self->_iAUPServer = v5;
    -[iAUPServer setDelegate:](v5, "setDelegate:", self);
  }
  v6 = -[FirmwareBundle initWithURL:hashData:signatureData:certData:](
         objc_alloc(&OBJC_CLASS___FirmwareBundle),
         "initWithURL:hashData:signatureData:certData:",
         a3,
         0LL,
         0LL,
         0LL);
  -[iAUPServer setFirmwareBundle:](self->_iAUPServer, "setFirmwareBundle:", v6);
  objc_release(v6);
  v7 = -[NSString componentsSeparatedByString:](self->_protocolString, "componentsSeparatedByString:", CFSTR("."));
  if ( v7 )
    v8 = objc_msgSend(-[NSArray lastObject](v7, "lastObject"), "intValue");
  else
    v8 = 0LL;
  v9 = -[iAUPServer firmwareBundle](self->_iAUPServer, "firmwareBundle");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[FirmwareBundle setProductIDCode:](v9, "setProductIDCode:", v8);
}