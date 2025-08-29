-[EAFirmwareUpdater reconnectTimerDidFire:]
void __cdecl -[EAFirmwareUpdater reconnectTimerDidFire:](EAFirmwareUpdater *self, SEL a2, id a3)
{
  id v4; // x20
  __int64 isExpectingReconnect; // x26
  NSString *v6; // x21
  NSUInteger v7; // x22
  void *v8; // x23
  int v9; // w8
  __int64 vars8; // [xsp+88h] [xbp+8h]

  v4 = objc_alloc((Class)&OBJC_CLASS___NSString);
  isExpectingReconnect = (unsigned int)self->_isExpectingReconnect;
  v6 = -[EAAccessory modelNumber](-[EAFirmwareUpdater accessory](self, "accessory"), "modelNumber");
  v7 = -[EAAccessory connectionID](-[EAFirmwareUpdater accessory](self, "accessory"), "connectionID");
  v8 = objc_msgSend(
         (id)objc_opt_class(self),
         "getEAFirmwareRevisionActive:forProtocol:",
         -[EAFirmwareUpdater accessory](self, "accessory"),
         self->_protocolString);
  -[EAFirmwareUpdater log:format:](
    self,
    "log:format:",
    5LL,
    CFSTR("%s %@"),
    "-[EAFirmwareUpdater reconnectTimerDidFire:]",
    objc_autorelease(
      objc_msgSend(
        v4,
        "initWithFormat:",
        CFSTR("Timed out waiting for accessory to reconnect _isExpectingReconnect=%d accessory=[%@:%lu:FWvA%@:FWvP%@]"),
        isExpectingReconnect,
        v6,
        v7,
        v8,
        objc_msgSend(
          (id)objc_opt_class(self),
          "getEAFirmwareRevisionPending:forProtocol:",
          -[EAFirmwareUpdater accessory](self, "accessory"),
          self->_protocolString))));
  objc_sync_enter(self);
  if ( -[EAFirmwareUpdater accessory](self, "accessory") )
  {
    -[EAFirmwareUpdater log:format:](
      self,
      "log:format:",
      5LL,
      CFSTR("%s() self.accessory is valid. Ignoring fired timer "),
      "-[EAFirmwareUpdater reconnectTimerDidFire:]");
  }
  else
  {
    if ( self->_isExpectingReconnect == 2 )
      v9 = 3;
    else
      v9 = 0;
    self->_isExpectingReconnect = v9;
    -[EAFirmwareUpdater _accessoryDidDisconnect:](self, "_accessoryDidDisconnect:", 0LL);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_sync_exit(self);
}