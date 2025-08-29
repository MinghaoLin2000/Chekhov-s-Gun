-[EAFirmwareUpdater setFirmwareURL:withManifest:signature:certificate:hash:]
void __cdecl -[EAFirmwareUpdater setFirmwareURL:withManifest:signature:certificate:hash:](
        EAFirmwareUpdater *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6,
        id a7)
{
  iAUPServer *v13; // x0
  FirmwareBundle *v14; // x21
  NSArray *v15; // x0
  void *v16; // x20
  FirmwareBundle *v17; // x0
  __int64 vars8; // [xsp+58h] [xbp+8h]

  -[EAFirmwareUpdater log:format:](
    self,
    "log:format:",
    5LL,
    CFSTR("%s %@"),
    "-[EAFirmwareUpdater setFirmwareURL:withManifest:signature:certificate:hash:]",
    objc_autorelease(
      objc_msgSend(
        objc_alloc((Class)&OBJC_CLASS___NSString),
        "initWithFormat:",
        CFSTR("%s: EAFirmwareUpdater using local files for %@\n"),
        "-[EAFirmwareUpdater setFirmwareURL:withManifest:signature:certificate:hash:]",
        self->_protocolString)));
  if ( !self->_iAUPServer )
  {
    v13 = -[iAUPServer initInstanceWithByteEscape:](
            objc_alloc(&OBJC_CLASS___iAUPServer),
            "initInstanceWithByteEscape:",
            self->_byteEscape);
    self->_iAUPServer = v13;
    -[iAUPServer setDelegate:](v13, "setDelegate:", self);
  }
  v14 = -[FirmwareBundle initWithURL:hashData:signatureData:certData:](
          objc_alloc(&OBJC_CLASS___FirmwareBundle),
          "initWithURL:hashData:signatureData:certData:",
          a3,
          a7,
          a5,
          a6);
  -[iAUPServer setFirmwareBundle:](self->_iAUPServer, "setFirmwareBundle:", v14);
  -[FirmwareBundle setBuildManifest:](
    -[iAUPServer firmwareBundle](self->_iAUPServer, "firmwareBundle"),
    "setBuildManifest:",
    objc_retain(a4));
  objc_release(v14);
  v15 = -[NSString componentsSeparatedByString:](self->_protocolString, "componentsSeparatedByString:", CFSTR("."));
  if ( v15 )
    v16 = objc_msgSend(-[NSArray lastObject](v15, "lastObject"), "intValue");
  else
    v16 = 0LL;
  v17 = -[iAUPServer firmwareBundle](self->_iAUPServer, "firmwareBundle");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[FirmwareBundle setProductIDCode:](v17, "setProductIDCode:", v16);
}