-[UARPDFUUpdater setUarpCaptureFileName:]
void __cdecl -[UARPDFUUpdater setUarpCaptureFileName:](UARPDFUUpdater *self, SEL a2, id a3)
{
  NSString *v4; // x0
  NSString *uarpCaptureFileName; // x8
  UARPController *uarpController; // x0
  NSString *v7; // x2
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = (NSString *)objc_msgSend(a3, "copy");
  uarpCaptureFileName = self->_uarpCaptureFileName;
  self->_uarpCaptureFileName = v4;
  objc_release(uarpCaptureFileName);
  if ( self->_uarpCaptureFileName )
  {
    -[UARPController stopPacketCapture](self->_uarpController, "stopPacketCapture");
    v7 = self->_uarpCaptureFileName;
    uarpController = self->_uarpController;
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    -[UARPController startPacketCapture:](uarpController, "startPacketCapture:", v7);
  }
}