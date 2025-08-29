-[EAFirmwareUpdater _accessoryDidDisconnect:]
void __cdecl -[EAFirmwareUpdater _accessoryDidDisconnect:](EAFirmwareUpdater *self, SEL a2, id a3)
{
  void *v5; // x20
  dispatch_queue_s *eaNotificationDispatchQueue; // x0
  _QWORD block[7]; // [xsp+68h] [xbp-88h] BYREF

  -[EAFirmwareUpdater log:format:](
    self,
    "log:format:",
    5LL,
    CFSTR("%s %@"),
    "-[EAFirmwareUpdater _accessoryDidDisconnect:]",
    objc_autorelease(objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSString), "initWithFormat:", CFSTR("notification=%@"), a3)));
  if ( self->_eaNotificationDispatchQueue )
  {
    objc_sync_enter(self);
    v5 = objc_msgSend(objc_msgSend(a3, "userInfo"), "objectForKey:", EAAccessoryKey);
    -[EAFirmwareUpdater log:format:](
      self,
      "log:format:",
      5LL,
      CFSTR("%s %@"),
      "-[EAFirmwareUpdater _accessoryDidDisconnect:]",
      objc_autorelease(
        objc_msgSend(
          objc_alloc((Class)&OBJC_CLASS___NSString),
          "initWithFormat:",
          CFSTR("_isExpectingReconnect=%d _isMultiAssetSession=%d disconnecting=[%@:%lu:FWvA%@:FWvP%@] current=[%@:%lu:FWvA%@:FWP%@]"),
          (unsigned int)self->_isExpectingReconnect,
          self->_isMultiAssetSession,
          objc_msgSend(v5, "modelNumber"),
          objc_msgSend(v5, "connectionID"),
          objc_msgSend(v5, "firmwareRevisionActive"),
          objc_msgSend(v5, "firmwareRevisionPending"),
          -[EAAccessory modelNumber](-[EAFirmwareUpdater accessory](self, "accessory"), "modelNumber"),
          -[EAAccessory connectionID](-[EAFirmwareUpdater accessory](self, "accessory"), "connectionID"),
          -[EAAccessory firmwareRevisionActive](
            -[EAFirmwareUpdater accessory](self, "accessory"),
            "firmwareRevisionActive"),
          -[EAAccessory firmwareRevisionPending](
            -[EAFirmwareUpdater accessory](self, "accessory"),
            "firmwareRevisionPending"))));
    eaNotificationDispatchQueue = (dispatch_queue_s *)self->_eaNotificationDispatchQueue;
    block[0] = _NSConcreteStackBlock;
    block[1] = 3254779904LL;
    block[2] = sub_10000D5F4;
    block[3] = &unk_100031620;
    block[4] = v5;
    block[5] = self;
    dispatch_async(eaNotificationDispatchQueue, block);
    objc_sync_exit(self);
  }
}