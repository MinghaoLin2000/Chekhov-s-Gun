-[EAAccessoryUpdater initWithCoder:]
EAAccessoryUpdater *__cdecl -[EAAccessoryUpdater initWithCoder:](EAAccessoryUpdater *self, SEL a2, id a3)
{
  EAAccessoryUpdater *v5; // x19
  NSDictionary *v6; // x0
  void *v7; // x20
  NSDictionary *deviceOptions; // x0
  unsigned int v9; // w21
  NSDictionary *v10; // x0
  void *v11; // x22
  EAFirmwareUpdater *v12; // x0
  objc_super v14; // [xsp+10h] [xbp-50h] BYREF

  -[FudPluginDelegate log:format:](
    self->delegate,
    "log:format:",
    5LL,
    CFSTR("Entering: %s:%d"),
    "-[EAAccessoryUpdater initWithCoder:]",
    1382LL);
  v14.receiver = self;
  v14.super_class = (Class)&OBJC_CLASS___EAAccessoryUpdater;
  v5 = -[EAAccessoryUpdater init](&v14, "init");
  v5->delegate = 0LL;
  v5->deviceClass = (NSString *)objc_retain(objc_msgSend(a3, "decodeObjectForKey:", CFSTR("DeviceClass")));
  v5->mobileAssetType = (NSString *)objc_retain(objc_msgSend(a3, "decodeObjectForKey:", CFSTR("MobileAssetType")));
  v5->initOptions = (NSDictionary *)objc_retain(objc_msgSend(a3, "decodeObjectForKey:", CFSTR("InitOptions")));
  v6 = (NSDictionary *)copyPlistDeviceEntryFromDeviceClass(v5->deviceClass);
  v5->deviceOptions = v6;
  if ( !v6 )
  {
    -[FudPluginDelegate log:format:](
      v5->delegate,
      "log:format:",
      3LL,
      CFSTR("Failed to get plist entry for device class"));
    return 0LL;
  }
  v7 = objc_msgSend(-[NSDictionary objectForKey:](v6, "objectForKey:", CFSTR("skipDFUMode")), "boolValue");
  deviceOptions = v5->deviceOptions;
  if ( deviceOptions )
  {
    v9 = (unsigned int)objc_msgSend(
                         -[NSDictionary objectForKey:](deviceOptions, "objectForKey:", CFSTR("disableByteEscaping")),
                         "boolValue");
    v10 = v5->deviceOptions;
    if ( v10 )
    {
      v11 = objc_msgSend(-[NSDictionary objectForKey:](v10, "objectForKey:", CFSTR("skipReconnect")), "boolValue");
      goto LABEL_5;
    }
  }
  else
  {
    v9 = 0;
  }
  v11 = 0LL;
LABEL_5:
  v12 = -[EAFirmwareUpdater initWithDeviceClass:assetType:skipDFU:byteEscape:skipReconnect:skipVersionCheck:options:serialNum:](
          objc_alloc(&OBJC_CLASS___EAFirmwareUpdater),
          "initWithDeviceClass:assetType:skipDFU:byteEscape:skipReconnect:skipVersionCheck:options:serialNum:",
          v5->deviceClass,
          v5->mobileAssetType,
          v7,
          v9 ^ 1,
          v11,
          0LL,
          v5->deviceOptions,
          -[NSDictionary objectForKey:](v5->initOptions, "objectForKey:", CFSTR("SerialNumber")));
  v5->firmwareUpdater = v12;
  if ( !v12 )
    return 0LL;
  if ( -[EAFirmwareUpdater overrideProtocol](v12, "overrideProtocol") )
    -[EAAccessoryUpdater overrideUpdaterOptions](v5, "overrideUpdaterOptions");
  return v5;
}