-[EAFirmwareUpdater _accessoryDidConnect:]
void __cdecl -[EAFirmwareUpdater _accessoryDidConnect:](EAFirmwareUpdater *self, SEL a2, id a3)
{
  void *v5; // x21
  id v6; // x20
  unsigned __int8 v7; // w0
  char v8; // w8
  int isExpectingReconnect; // w22
  dispatch_queue_s *eaNotificationDispatchQueue; // x0
  _QWORD *v11; // x1
  const __CFString *v12; // x21
  _QWORD block[6]; // [xsp+30h] [xbp-100h] BYREF
  _QWORD v14[6]; // [xsp+60h] [xbp-D0h] BYREF
  _QWORD v15[6]; // [xsp+90h] [xbp-A0h] BYREF
  const __CFString *v16; // [xsp+C0h] [xbp-70h] BYREF
  const __CFString *v17; // [xsp+C8h] [xbp-68h] BYREF

  v15[0] = 0LL;
  v15[1] = v15;
  v15[2] = 0x3052000000LL;
  v15[3] = sub_10000D1AC;
  v15[4] = sub_10000D1BC;
  v15[5] = 0LL;
  -[EAFirmwareUpdater log:format:](
    self,
    "log:format:",
    5LL,
    CFSTR("%s %@"),
    "-[EAFirmwareUpdater _accessoryDidConnect:]",
    objc_autorelease(objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSString), "initWithFormat:", CFSTR("notification=%@"), a3)));
  -[EAFirmwareUpdater log:format:](
    self,
    "log:format:",
    5LL,
    CFSTR("%s %@"),
    "-[EAFirmwareUpdater _accessoryDidConnect:]",
    objc_autorelease(
      objc_msgSend(
        objc_alloc((Class)&OBJC_CLASS___NSString),
        "initWithFormat:",
        CFSTR("_isExpectingReconnect=%d _isMultiAssetSession=%d current=[%@:%lu:FWvA%@:FWvP%@] "),
        (unsigned int)self->_isExpectingReconnect,
        self->_isMultiAssetSession,
        -[EAAccessory modelNumber](-[EAFirmwareUpdater accessory](self, "accessory"), "modelNumber"),
        -[EAAccessory connectionID](-[EAFirmwareUpdater accessory](self, "accessory"), "connectionID"),
        -[EAAccessory firmwareRevisionActive](
          -[EAFirmwareUpdater accessory](self, "accessory"),
          "firmwareRevisionActive"),
        -[EAAccessory firmwareRevisionPending](
          -[EAFirmwareUpdater accessory](self, "accessory"),
          "firmwareRevisionPending"))));
  if ( a3 )
  {
    v5 = objc_msgSend(objc_msgSend(a3, "userInfo"), "objectForKey:", EAAccessoryKey);
    if ( v5 )
    {
      v6 = -[EAFirmwareUpdater supportedProtocolForAccessory:](self, "supportedProtocolForAccessory:", v5);
      if ( v6 )
      {
        v7 = (unsigned __int8)objc_msgSend(objc_msgSend(v5, "serialNumber"), "isEqualToString:", self->_serialNumber);
        if ( self->_excludeUniqueAccessoryCheck )
          v8 = 1;
        else
          v8 = v7;
        if ( (v8 & 1) == 0 )
        {
          -[EAFirmwareUpdater log:format:](
            self,
            "log:format:",
            5LL,
            CFSTR("%s %@"),
            "-[EAFirmwareUpdater _accessoryDidConnect:]",
            objc_autorelease(
              objc_msgSend(
                objc_alloc((Class)&OBJC_CLASS___NSString),
                "initWithFormat:",
                CFSTR("%s: notification tracking different accessory, expected serial# %@ got %@"),
                "-[EAFirmwareUpdater _accessoryDidConnect:]",
                self->_serialNumber,
                objc_msgSend(v5, "serialNumber"))));
          goto LABEL_20;
        }
        isExpectingReconnect = self->_isExpectingReconnect;
        -[EAFirmwareUpdater stopReconnectTimer](self, "stopReconnectTimer");
        if ( (unsigned int)objc_msgSend(
                             v6,
                             "isEqualToString:",
                             -[EAFirmwareUpdater bootloaderProtocol](self, "bootloaderProtocol")) )
        {
          if ( isExpectingReconnect == 1 )
          {
            eaNotificationDispatchQueue = (dispatch_queue_s *)self->_eaNotificationDispatchQueue;
            if ( eaNotificationDispatchQueue )
            {
              v14[0] = _NSConcreteStackBlock;
              v14[1] = 3254779904LL;
              v14[2] = sub_10000D1C8;
              v14[3] = &unk_100031620;
              v14[4] = self;
              v14[5] = v5;
              v11 = v14;
LABEL_16:
              dispatch_async(eaNotificationDispatchQueue, v11);
              goto LABEL_20;
            }
LABEL_22:
            v12 = CFSTR("System error");
            goto LABEL_18;
          }
        }
        else
        {
          if ( !(unsigned int)objc_msgSend(
                                v6,
                                "isEqualToString:",
                                -[EAFirmwareUpdater appProtocol](self, "appProtocol")) )
          {
            -[EAFirmwareUpdater log:format:](
              self,
              "log:format:",
              5LL,
              CFSTR("%s() Ignoring unrelated connect notification"),
              "-[EAFirmwareUpdater _accessoryDidConnect:]");
            goto LABEL_20;
          }
          if ( isExpectingReconnect == 2 )
          {
            eaNotificationDispatchQueue = (dispatch_queue_s *)self->_eaNotificationDispatchQueue;
            if ( eaNotificationDispatchQueue )
            {
              block[0] = _NSConcreteStackBlock;
              block[1] = 3254779904LL;
              block[2] = sub_10000D298;
              block[3] = &unk_100031650;
              block[4] = self;
              block[5] = v15;
              v11 = block;
              goto LABEL_16;
            }
            goto LABEL_22;
          }
        }
        v12 = CFSTR("Accessory reconnected in wrong mode");
LABEL_18:
        -[EAFirmwareUpdater log:format:](
          self,
          "log:format:",
          5LL,
          CFSTR("%s() Error - connect notification: supportedProtocol=%@ deviceClass=%@ [%@] "),
          "-[EAFirmwareUpdater _accessoryDidConnect:]",
          v6,
          self->_deviceClass,
          v12);
        v16 = CFSTR("Event");
        v17 = CFSTR("com.apple.fud.updateFailed");
        -[EAFirmwareUpdater updateComplete:error:](
          self,
          "updateComplete:error:",
          +[NSDictionary dictionaryWithObjects:forKeys:count:](
            &OBJC_CLASS___NSDictionary,
            "dictionaryWithObjects:forKeys:count:",
            &v17,
            &v16,
            1LL),
          sub_100009A6C(0LL, 11LL, v12));
      }
    }
  }
LABEL_20:
  _Block_object_dispose(v15, 8);
}