-[EAFirmwareUpdater stopReconnectTimer]
void __cdecl -[EAFirmwareUpdater stopReconnectTimer](EAFirmwareUpdater *self, SEL a2)
{
  NSTimer *reconnectTimer; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  objc_sync_enter(self);
  -[EAFirmwareUpdater log:format:](
    self,
    "log:format:",
    5LL,
    CFSTR("%s %@"),
    "-[EAFirmwareUpdater stopReconnectTimer]",
    objc_autorelease(
      objc_msgSend(
        objc_alloc((Class)&OBJC_CLASS___NSString),
        "initWithFormat:",
        CFSTR("_isExpectingReconnect=%d"),
        (unsigned int)self->_isExpectingReconnect)));
  self->_isExpectingReconnect = 0;
  reconnectTimer = self->_reconnectTimer;
  if ( reconnectTimer )
  {
    -[NSTimer invalidate](reconnectTimer, "invalidate");
    objc_release(self->_reconnectTimer);
    self->_reconnectTimer = 0LL;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_sync_exit(self);
}