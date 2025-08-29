-[EAFirmwareUpdater initWithDeviceClass:assetType:skipDFU:byteEscape:skipReconnect:skipVersionCheck:options:serialNum:]
EAFirmwareUpdater *__cdecl -[EAFirmwareUpdater initWithDeviceClass:assetType:skipDFU:byteEscape:skipReconnect:skipVersionCheck:options:serialNum:](
        EAFirmwareUpdater *self,
        SEL a2,
        id a3,
        id a4,
        bool a5,
        bool a6,
        bool a7,
        bool a8,
        id a9,
        id a10)
{
  EAFirmwareUpdater *v15; // x19
  void *v16; // x23
  void *v17; // x24
  void *v18; // x0
  void *v19; // x25
  void *v20; // x28
  void *v21; // x0
  void *v22; // x28
  EAFirmwareUpdater *v23; // x0
  int v24; // w8
  NSDictionary *deviceOptions; // x0
  objc_super v27; // [xsp+40h] [xbp-60h] BYREF

  v27.receiver = self;
  v27.super_class = (Class)&OBJC_CLASS___EAFirmwareUpdater;
  v15 = -[EAFirmwareUpdater initWithAssetType:](&v27, "initWithAssetType:", a4);
  if ( !v15 )
    goto LABEL_14;
  if ( ((unsigned int)objc_msgSend(a3, "hasPrefix:", CFSTR("com.apple.MobileAccessoryUpdater.EA")) & 1) == 0
    && ((unsigned int)objc_msgSend(a3, "hasPrefix:", CFSTR("com.apple.UARP.EA")) & 1) == 0 )
  {
    NSLog(
      &CFSTR("%s: Invalid deviceClass base = %@\n").isa,
      "-[EAFirmwareUpdater initWithDeviceClass:assetType:skipDFU:byteEscape:skipReconnect:skipVersionCheck:options:serialNum:]",
      a3);
    goto LABEL_14;
  }
  v16 = objc_msgSend(a3, "rangeOfString:", CFSTR("dfu"));
  v17 = objc_msgSend(a3, "rangeOfString:", CFSTR("app"));
  v18 = objc_msgSend(a3, "rangeOfString:", CFSTR("app.multiasset"));
  v19 = v18;
  if ( v16 == (void *)0x7FFFFFFFFFFFFFFFLL && v17 == (void *)0x7FFFFFFFFFFFFFFFLL && v18 == (void *)0x7FFFFFFFFFFFFFFFLL )
  {
    NSLog(
      &CFSTR("%s: Invalid deviceClass extension = %@\n").isa,
      "-[EAFirmwareUpdater initWithDeviceClass:assetType:skipDFU:byteEscape:skipReconnect:skipVersionCheck:options:serialNum:]",
      a3);
    goto LABEL_14;
  }
  v20 = objc_msgSend(a3, "componentsSeparatedByString:", CFSTR("."));
  if ( objc_msgSend(v20, "count") != (void *)7 && objc_msgSend(v20, "count") != (void *)8 )
  {
    NSLog(
      &CFSTR("%s: Invalid deviceClass components = %@\n").isa,
      "-[EAFirmwareUpdater initWithDeviceClass:assetType:skipDFU:byteEscape:skipReconnect:skipVersionCheck:options:serialNum:]",
      a3);
    goto LABEL_14;
  }
  v21 = objc_msgSend(v20, "lastObject");
  if ( !v21 )
  {
    NSLog(
      &CFSTR("%s: Invalid deviceClass eaID string = %@\n").isa,
      "-[EAFirmwareUpdater initWithDeviceClass:assetType:skipDFU:byteEscape:skipReconnect:skipVersionCheck:options:serialNum:]",
      a3);
    goto LABEL_14;
  }
  v22 = v21;
  v15->_overrideProtocol = 0;
  v15->_firmwareUpdateIsUrgent = 0;
  v15->_firmwareUpdateComplete = 0;
  v15->_isExpectingReconnect = 0;
  v15->_forceSilentUpdate = 0;
  v15->_skipDFUMode = a5;
  v15->_skipVersionCheck = a8;
  v15->_closeEASession = 0;
  v15->_excludeUniqueAccessoryCheck = 0;
  v15->_reconnectTimer = 0LL;
  v15->_progressHandler = 0LL;
  v15->_applyCompletion = 0LL;
  v15->_personalizationRequestHandler = 0LL;
  v15->_updateHandler = 0LL;
  v15->_currentFirmwareVersionOnAcc = 0LL;
  v15->_firmwareVersionAvailable = 0LL;
  v15->_outputData = 0LL;
  pthread_mutex_init(&v15->_flushOutputLock, 0LL);
  v15->_currentSessionTimeTaken = (NSNumber *)&off_100038E40;
  v15->_cumulativeBytesDownloaded = (NSNumber *)&off_100038E40;
  v15->_totalBytesForCompleteUpdate = (NSNumber *)&off_100038E40;
  v15->_cumulativeProgressPercent = (NSNumber *)&off_100038E40;
  v15->_cumulativeTimeTaken = (NSNumber *)&off_100038E40;
  v15->_cumulativeCloakTime = (NSNumber *)&off_100038E40;
  v15->_resumeCount = (NSNumber *)&off_100038E40;
  -[EAFirmwareUpdater setBootloaderProtocol:](
    v15,
    "setBootloaderProtocol:",
    objc_msgSend((id)objc_opt_class(v15), "bootloaderProtocolStringWithEAID:", v22));
  -[EAFirmwareUpdater setAppProtocol:](
    v15,
    "setAppProtocol:",
    objc_msgSend((id)objc_opt_class(v15), "appProtocolStringWithEAID:", v22));
  -[EAFirmwareUpdater setMultiAssetAppProtocol:](
    v15,
    "setMultiAssetAppProtocol:",
    objc_msgSend((id)objc_opt_class(v15), "multiAssetAppProtocolStringWithEAID:", v22));
  v15->_manifestIDs = 0LL;
  v15->_manifestList = 0LL;
  v15->_manifestIndex = 0;
  v15->_serialNumber = (NSString *)objc_msgSend(a10, "copy");
  if ( v19 == (void *)0x7FFFFFFFFFFFFFFFLL )
  {
    if ( v16 == (void *)0x7FFFFFFFFFFFFFFFLL )
    {
      if ( v17 == (void *)0x7FFFFFFFFFFFFFFFLL )
      {
        -[EAFirmwareUpdater log:format:](
          v15,
          "log:format:",
          5LL,
          CFSTR("%s: huh? Unknown session type in device class %@"),
          "-[EAFirmwareUpdater initWithDeviceClass:assetType:skipDFU:byteEscape:skipReconnect:skipVersionCheck:options:serialNum:]",
          a3);
LABEL_14:
        v23 = objc_autorelease(v15);
        return 0LL;
      }
      -[EAFirmwareUpdater setProtocolString:](v15, "setProtocolString:", v15->_appProtocol);
      v15->_isMultiAssetSession = 0;
      v15->_byteEscape = a6;
      v24 = 468;
      a6 = a7;
    }
    else
    {
      -[EAFirmwareUpdater setProtocolString:](v15, "setProtocolString:", v15->_bootloaderProtocol);
      v15->_isMultiAssetSession = 0;
      v24 = 467;
    }
  }
  else
  {
    -[EAFirmwareUpdater setProtocolString:](v15, "setProtocolString:", v15->_multiAssetAppProtocol);
    a6 = 0;
    v15->_isMultiAssetSession = 1;
    v15->_skipDFUMode = 1;
    v24 = 467;
  }
  v15->MobileAssetUpdater_opaque[v24] = a6;
  v15->_deviceClass = (NSString *)a3;
  v15->_deviceOptions = (NSDictionary *)a9;
  dispatch_sync(&_dispatch_main_q, &stru_100031570);
  -[EAAccessoryManager registerForLocalNotifications](
    +[EAAccessoryManager sharedAccessoryManager](&OBJC_CLASS___EAAccessoryManager, "sharedAccessoryManager"),
    "registerForLocalNotifications");
  -[EAAccessoryManager setShouldAllowInternalProtocols:](
    +[EAAccessoryManager sharedAccessoryManager](&OBJC_CLASS___EAAccessoryManager, "sharedAccessoryManager"),
    "setShouldAllowInternalProtocols:",
    1LL);
  +[EAAccessoryManager registerCapabilities:](&OBJC_CLASS___EAAccessoryManager, "registerCapabilities:", 64LL);
  if ( !-[EAFirmwareUpdater findAccessory](v15, "findAccessory") )
  {
    NSLog(
      &CFSTR("%s: No EAAccessory found matching protocol = %@\n").isa,
      "-[EAFirmwareUpdater initWithDeviceClass:assetType:skipDFU:byteEscape:skipReconnect:skipVersionCheck:options:serialNum:]",
      v15->_protocolString);
    goto LABEL_14;
  }
  v15->_overrideProtocol = -[NSString hasSuffix:](
                             -[EAFirmwareUpdater protocolString](v15, "protocolString"),
                             "hasSuffix:",
                             CFSTR("-override"));
  if ( !v15->_serialNumber )
    v15->_serialNumber = (NSString *)-[NSString copy](
                                       -[EAAccessory serialNumber](
                                         -[EAFirmwareUpdater accessory](v15, "accessory"),
                                         "serialNumber"),
                                       "copy");
  v15->_modelNumber = (NSString *)-[NSString copy](
                                    -[EAAccessory modelNumber](
                                      -[EAFirmwareUpdater accessory](v15, "accessory"),
                                      "modelNumber"),
                                    "copy");
  v15->_name = (NSString *)-[NSString copy](
                             -[EAAccessory name](-[EAFirmwareUpdater accessory](v15, "accessory"), "name"),
                             "copy");
  deviceOptions = v15->_deviceOptions;
  if ( deviceOptions )
    LOBYTE(deviceOptions) = (unsigned __int8)objc_msgSend(
                                               -[NSDictionary objectForKey:](
                                                 deviceOptions,
                                                 "objectForKey:",
                                                 CFSTR("closeEASession")),
                                               "boolValue");
  v15->_closeEASession = (char)deviceOptions;
  NSLog(
    &CFSTR("%s: _accessory = %@\n").isa,
    "-[EAFirmwareUpdater initWithDeviceClass:assetType:skipDFU:byteEscape:skipReconnect:skipVersionCheck:options:serialNum:]",
    v15->_accessory);
  -[EAFirmwareUpdater log:format:](
    v15,
    "log:format:",
    5LL,
    CFSTR("%s %@"),
    "-[EAFirmwareUpdater initWithDeviceClass:assetType:skipDFU:byteEscape:skipReconnect:skipVersionCheck:options:serialNum:]",
    objc_autorelease(
      objc_msgSend(
        objc_alloc((Class)&OBJC_CLASS___NSString),
        "initWithFormat:",
        CFSTR("deviceClass=%@ protocolString=%@ isMultiAssetSession=%d byteEscape=%d skipDFU=%d"),
        v15->_deviceClass,
        -[EAFirmwareUpdater protocolString](v15, "protocolString"),
        v15->_isMultiAssetSession,
        v15->_byteEscape,
        v15->_skipDFUMode)));
  -[EAFirmwareUpdater log:format:](
    v15,
    "log:format:",
    5LL,
    CFSTR("%s %@"),
    "-[EAFirmwareUpdater initWithDeviceClass:assetType:skipDFU:byteEscape:skipReconnect:skipVersionCheck:options:serialNum:]",
    objc_autorelease(
      objc_msgSend(
        objc_alloc((Class)&OBJC_CLASS___NSString),
        "initWithFormat:",
        CFSTR("appProtocol=%@ bootloaderProtocol=%@ multiAssetAppProtocol=%@"),
        -[EAFirmwareUpdater appProtocol](v15, "appProtocol"),
        -[EAFirmwareUpdater bootloaderProtocol](v15, "bootloaderProtocol"),
        -[EAFirmwareUpdater multiAssetAppProtocol](v15, "multiAssetAppProtocol"))));
  return v15;
}