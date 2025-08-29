-[EAFirmwareUpdater setAccessory:]
void __cdecl -[EAFirmwareUpdater setAccessory:](EAFirmwareUpdater *self, SEL a2, id a3)
{
  id v5; // x23
  NSString *v6; // x24
  NSUInteger v7; // x25
  void *v8; // x26
  void *v9; // x27
  void *v10; // x28
  EAAccessory *accessory; // x0
  id v12; // x0
  void *v13; // x20
  void *v14; // x0
  void *v15; // x0
  void *v16; // x20
  void *v17; // [xsp+40h] [xbp-60h]
  void *v18; // [xsp+48h] [xbp-58h]
  __int64 vars8; // [xsp+A8h] [xbp+8h]

  if ( self->_accessory == a3 )
    return;
  v18 = objc_msgSend(
          (id)objc_opt_class(self),
          "getEAFirmwareRevisionPending:forProtocol:",
          self->_accessory,
          self->_protocolString);
  v17 = objc_msgSend(
          (id)objc_opt_class(self),
          "getEAFirmwareRevisionActive:forProtocol:",
          self->_accessory,
          self->_protocolString);
  v5 = objc_alloc((Class)&OBJC_CLASS___NSString);
  v6 = -[EAAccessory modelNumber](self->_accessory, "modelNumber");
  v7 = -[EAAccessory connectionID](self->_accessory, "connectionID");
  v8 = objc_msgSend(a3, "modelNumber");
  v9 = objc_msgSend(a3, "connectionID");
  v10 = objc_msgSend((id)objc_opt_class(self), "getEAFirmwareRevisionActive:forProtocol:", a3, self->_protocolString);
  -[EAFirmwareUpdater log:format:](
    self,
    "log:format:",
    5LL,
    CFSTR("%s %@"),
    "-[EAFirmwareUpdater setAccessory:]",
    objc_autorelease(
      objc_msgSend(
        v5,
        "initWithFormat:",
        CFSTR("old=[%@:%lu:FWvA%@:FWvP%@] new=[%@:%lu:FWvA%@:FWvP%@] "),
        v6,
        v7,
        v17,
        v18,
        v8,
        v9,
        v10,
        objc_msgSend((id)objc_opt_class(self), "getEAFirmwareRevisionPending:forProtocol:", a3, self->_protocolString))));
  accessory = self->_accessory;
  if ( accessory )
  {
    -[EAAccessory setDelegate:](accessory, "setDelegate:", 0LL);
    objc_release(self->_accessory);
  }
  self->_accessory = (EAAccessory *)a3;
  if ( !a3 )
    goto LABEL_15;
  v12 = objc_retain(a3);
  -[EAFirmwareUpdater setProtocolString:](
    self,
    "setProtocolString:",
    -[EAFirmwareUpdater supportedProtocolForAccessory:](self, "supportedProtocolForAccessory:", self->_accessory));
  if ( !-[EAFirmwareUpdater protocolString](self, "protocolString") )
    -[EAFirmwareUpdater log:format:](self, "log:format:", 5LL, CFSTR("No supported protocol string"));
  if ( -[EAFirmwareUpdater isMultiAssetSession](self, "isMultiAssetSession") )
  {
LABEL_14:
    -[EAFirmwareUpdater log:format:](
      self,
      "log:format:",
      5LL,
      CFSTR("%s %@"),
      "-[EAFirmwareUpdater setAccessory:]",
      objc_autorelease(
        objc_msgSend(
          objc_alloc((Class)&OBJC_CLASS___NSString),
          "initWithFormat:",
          CFSTR(" - FW Version: %llu.%llu.%llu (%@)"),
          self->_firmwareVersionMajor,
          self->_firmwareVersionMinor,
          self->_firmwareVersionRelease,
          -[EAFirmwareUpdater protocolString](self, "protocolString"))));
    -[EAFirmwareUpdater setCurrentFirmwareVersionOnAcc:](
      self,
      "setCurrentFirmwareVersionOnAcc:",
      +[NSString stringWithFormat:](
        &OBJC_CLASS___NSString,
        "stringWithFormat:",
        CFSTR("%llu.%llu.%llu"),
        self->_firmwareVersionMajor,
        self->_firmwareVersionMinor,
        self->_firmwareVersionRelease));
LABEL_15:
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    -[EAFirmwareUpdater setSession:](self, "setSession:", 0LL);
    return;
  }
  v13 = objc_msgSend(
          (id)objc_opt_class(self),
          "getEAFirmwareRevisionPending:forProtocol:",
          self->_accessory,
          self->_protocolString);
  v14 = objc_msgSend(
          (id)objc_opt_class(self),
          "getEAFirmwareRevisionActive:forProtocol:",
          self->_accessory,
          self->_protocolString);
  if ( v13 )
    v14 = v13;
  if ( v14 )
  {
    v15 = objc_msgSend(v14, "componentsSeparatedByString:", CFSTR("."));
    if ( v15 )
    {
      v16 = v15;
      if ( objc_msgSend(v15, "count") == (void *)3 )
      {
        self->_firmwareVersionMajor = (unsigned __int64)objc_msgSend(
                                                          objc_msgSend(v16, "objectAtIndex:", 0LL),
                                                          "longLongValue");
        self->_firmwareVersionMinor = (unsigned __int64)objc_msgSend(
                                                          objc_msgSend(v16, "objectAtIndex:", 1LL),
                                                          "longLongValue");
        self->_firmwareVersionRelease = (unsigned __int64)objc_msgSend(
                                                            objc_msgSend(v16, "objectAtIndex:", 2LL),
                                                            "longLongValue");
        -[EAFirmwareUpdater log:format:](
          self,
          "log:format:",
          5LL,
          CFSTR("%s %@"),
          "-[EAFirmwareUpdater setAccessory:]",
          objc_autorelease(
            objc_msgSend(
              objc_alloc((Class)&OBJC_CLASS___NSString),
              "initWithFormat:",
              CFSTR(" - FW Version: %llu.%llu.%llu"),
              self->_firmwareVersionMajor,
              self->_firmwareVersionMinor,
              self->_firmwareVersionRelease)));
        goto LABEL_14;
      }
    }
  }
}