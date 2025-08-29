-[EAFirmwareUpdater startReconnectTimer:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[EAFirmwareUpdater startReconnectTimer:](EAFirmwareUpdater *self, SEL a2, int a3)
{
  __int64 v3; // x20
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = *(_QWORD *)&a3;
  objc_sync_enter(self);
  -[EAFirmwareUpdater log:format:](
    self,
    "log:format:",
    5LL,
    CFSTR("%s %@"),
    "-[EAFirmwareUpdater startReconnectTimer:]",
    objc_autorelease(
      objc_msgSend(
        objc_alloc((Class)&OBJC_CLASS___NSString),
        "initWithFormat:",
        CFSTR("_isExpectingReconnect=%d reconnectType=%d"),
        (unsigned int)self->_isExpectingReconnect,
        v3)));
  if ( self->_reconnectTimer )
    -[EAFirmwareUpdater stopReconnectTimer](self, "stopReconnectTimer");
  self->_isExpectingReconnect = v3;
  self->_reconnectTimer = objc_retain(
                            +[NSTimer timerWithTimeInterval:target:selector:userInfo:repeats:](
                              &OBJC_CLASS___NSTimer,
                              "timerWithTimeInterval:target:selector:userInfo:repeats:",
                              self,
                              "reconnectTimerDidFire:",
                              0LL,
                              0LL,
                              90.0));
  -[NSRunLoop addTimer:forMode:](
    +[NSRunLoop mainRunLoop](&OBJC_CLASS___NSRunLoop, "mainRunLoop"),
    "addTimer:forMode:",
    self->_reconnectTimer,
    NSDefaultRunLoopMode);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_sync_exit(self);
}