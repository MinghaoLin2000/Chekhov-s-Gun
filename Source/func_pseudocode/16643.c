-[EAAccessoryUpdater initWithDeviceClass:delegate:info:options:]
EAAccessoryUpdater *__cdecl -[EAAccessoryUpdater initWithDeviceClass:delegate:info:options:](
        EAAccessoryUpdater *self,
        SEL a2,
        id a3,
        id a4,
        id *a5,
        id a6)
{
  EAAccessoryUpdater *v11; // x0
  EAAccessoryUpdater *v12; // x20
  NSMutableSet *v13; // x0
  NSArray *v14; // x0
  NSArray *v15; // x21
  NSString *mobileAssetType; // x24
  NSDictionary *v17; // x0
  NSMutableArray *v18; // x0
  NSMutableArray *v19; // x23
  NSDictionary *deviceOptions; // x0
  unsigned int v21; // w26
  unsigned __int8 v22; // w0
  NSDictionary *v23; // x0
  void *v24; // x25
  NSDictionary *v25; // x0
  unsigned int v26; // w26
  NSDictionary *v27; // x0
  void *v28; // x27
  NSDictionary *initOptions; // x0
  void *v30; // x28
  NSString *v31; // x0
  EAFirmwareUpdater *v32; // x0
  EAFirmwareUpdater *v33; // x22
  NSDictionary *v34; // x19
  EAAccessory *v35; // x0
  id v36; // x24
  id v37; // x0
  void *v38; // x19
  void *v39; // x22
  FudPluginDelegate *delegate; // x0
  const __CFString *v41; // x3
  __int64 v42; // x2
  __int64 v43; // x1
  NSURL *v44; // x0
  NSString *deviceClass; // [xsp+0h] [xbp-120h]
  NSString *v47; // [xsp+8h] [xbp-118h]
  id v48; // [xsp+30h] [xbp-F0h]
  id *v49; // [xsp+38h] [xbp-E8h]
  objc_super v50; // [xsp+40h] [xbp-E0h] BYREF
  _QWORD v51[4]; // [xsp+50h] [xbp-D0h] BYREF
  _QWORD v52[4]; // [xsp+70h] [xbp-B0h] BYREF
  uint8_t buf[4]; // [xsp+90h] [xbp-90h] BYREF
  const char *v54; // [xsp+94h] [xbp-8Ch]
  __int16 v55; // [xsp+9Ch] [xbp-84h]
  NSDictionary *v56; // [xsp+9Eh] [xbp-82h]
  __int16 v57; // [xsp+A6h] [xbp-7Ah]
  EAAccessory *v58; // [xsp+A8h] [xbp-78h]
  NSSortDescriptor *v59; // [xsp+B8h] [xbp-68h] BYREF

  -[FudPluginDelegate log:format:](
    self->delegate,
    "log:format:",
    5LL,
    CFSTR("Entering: %s:%d"),
    "-[EAAccessoryUpdater initWithDeviceClass:delegate:info:options:]",
    122LL);
  v50.receiver = self;
  v50.super_class = (Class)&OBJC_CLASS___EAAccessoryUpdater;
  v11 = -[EAAccessoryUpdater init](&v50, "init");
  v12 = v11;
  if ( !v11 )
  {
    objc_msgSend(MEMORY[8], "log:format:", 7LL, CFSTR("Failed to init super"));
    return v12;
  }
  v11->delegate = (FudPluginDelegate *)a4;
  v11->initOptions = (NSDictionary *)objc_retain(a6);
  v12->deviceClass = (NSString *)objc_retain(a3);
  v12->localFilePath = 0LL;
  v12->seedLocations = 0LL;
  v13 = (NSMutableSet *)objc_alloc_init((Class)&OBJC_CLASS___NSMutableSet);
  v12->seedLocations = v13;
  -[NSMutableSet addObject:](v13, "addObject:", CFSTR("https://mesu.apple.com/assets/AirPods2020AppleSeed/"));
  -[NSMutableSet addObject:](
    v12->seedLocations,
    "addObject:",
    CFSTR("https://basejumper.apple.com/AirPodsDeveloperSeed/"));
  v14 = -[NSString componentsSeparatedByString:](v12->deviceClass, "componentsSeparatedByString:", CFSTR("."));
  if ( !v14 )
  {
    delegate = v12->delegate;
    v41 = CFSTR("Failed to get components from device class");
    goto LABEL_27;
  }
  v15 = v14;
  if ( -[NSArray count](v14, "count") <= 1 )
  {
    delegate = v12->delegate;
    v41 = CFSTR("Invalid device class name for EA plugin type");
    goto LABEL_27;
  }
  v49 = a5;
  v48 = -[NSArray objectAtIndex:](v15, "objectAtIndex:", (char *)-[NSArray count](v15, "count") - 2);
  mobileAssetType = (NSString *)objc_msgSend(
                                  objc_alloc((Class)&OBJC_CLASS___NSString),
                                  "initWithFormat:",
                                  CFSTR("%@.%@.EA"),
                                  CFSTR("com.apple.MobileAsset.MobileAccessoryUpdate"),
                                  v48);
  v17 = (NSDictionary *)copyPlistDeviceEntryFromDeviceClass(a3);
  v12->deviceOptions = v17;
  v18 = -[NSDictionary objectForKey:](v17, "objectForKey:", CFSTR("AlternateAssetTypes"));
  v19 = v18;
  if ( v18 )
  {
    if ( (unsigned __int64)-[NSMutableArray count](v18, "count") >= 2 )
    {
      v59 = +[NSSortDescriptor sortDescriptorWithKey:ascending:selector:](
              &OBJC_CLASS___NSSortDescriptor,
              "sortDescriptorWithKey:ascending:selector:",
              0LL,
              0LL,
              "compare:");
      v19 = (NSMutableArray *)-[NSMutableArray sortedArrayUsingDescriptors:](
                                v19,
                                "sortedArrayUsingDescriptors:",
                                +[NSArray arrayWithObjects:count:](
                                  &OBJC_CLASS___NSArray,
                                  "arrayWithObjects:count:",
                                  &v59,
                                  1LL));
    }
    v19 = +[NSMutableArray arrayWithArray:](&OBJC_CLASS___NSMutableArray, "arrayWithArray:", v19);
    -[NSMutableArray addObject:](v19, "addObject:", mobileAssetType);
    -[FudPluginDelegate log:format:](v12->delegate, "log:format:", 7LL, CFSTR("assetTypes = %@"), v19);
  }
  deviceOptions = v12->deviceOptions;
  if ( !deviceOptions )
  {
    delegate = v12->delegate;
    v41 = CFSTR("Failed to get plist entry for device class");
    goto LABEL_27;
  }
  v21 = (unsigned int)objc_msgSend(
                        -[NSDictionary objectForKey:](deviceOptions, "objectForKey:", CFSTR("NeedsDeviceIdleCheck")),
                        "boolValue");
  v22 = (unsigned __int8)objc_msgSend(objc_msgSend(a6, "objectForKey:", CFSTR("DeviceIdleLaunch")), "boolValue");
  if ( v21 && (v22 & 1) == 0 )
  {
    delegate = v12->delegate;
    v41 = CFSTR("Update requires Device Idle, bailing");
    v42 = 7LL;
    goto LABEL_28;
  }
  v12->silentUpdateNoUI = (unsigned __int8)objc_msgSend(
                                             -[NSDictionary objectForKey:](
                                               v12->deviceOptions,
                                               "objectForKey:",
                                               CFSTR("SilentUpdateNoUI")),
                                             "boolValue");
  v23 = v12->deviceOptions;
  if ( v23 )
  {
    v24 = objc_msgSend(-[NSDictionary objectForKey:](v23, "objectForKey:", CFSTR("skipDFUMode")), "boolValue");
    v25 = v12->deviceOptions;
    if ( v25 )
    {
      v26 = (unsigned int)objc_msgSend(
                            -[NSDictionary objectForKey:](v25, "objectForKey:", CFSTR("disableByteEscaping")),
                            "boolValue");
      v27 = v12->deviceOptions;
      if ( v27 )
      {
        v28 = objc_msgSend(-[NSDictionary objectForKey:](v27, "objectForKey:", CFSTR("skipReconnect")), "boolValue");
        goto LABEL_15;
      }
    }
    else
    {
      v26 = 0;
    }
  }
  else
  {
    v26 = 0;
    v24 = 0LL;
  }
  v28 = 0LL;
LABEL_15:
  initOptions = v12->initOptions;
  if ( initOptions )
    v30 = objc_msgSend(
            -[NSDictionary objectForKey:](initOptions, "objectForKey:", CFSTR("skipMinimumFirmwareVersionCheck")),
            "boolValue");
  else
    v30 = 0LL;
  v12->restartOnlyUI = (unsigned __int8)objc_msgSend(
                                          -[NSDictionary objectForKey:](
                                            v12->deviceOptions,
                                            "objectForKey:",
                                            CFSTR("RestartRequiresUIOnly")),
                                          "boolValue");
  if ( v19 )
  {
    v31 = (NSString *)-[NSMutableArray firstObject](v19, "firstObject");
    v12->mobileAssetType = v31;
    -[NSMutableArray removeObject:](v19, "removeObject:", v31);
    mobileAssetType = v12->mobileAssetType;
  }
  else
  {
    v12->mobileAssetType = mobileAssetType;
  }
  -[FudPluginDelegate log:format:](
    v12->delegate,
    "log:format:",
    5LL,
    CFSTR("Initializing EA Updater plugin for deviceClass:%@ asset-name:%@ skipDFU:%d skipByteEscape:%d skipVersionCheck:%d"),
    a3,
    mobileAssetType,
    (unsigned int)v24,
    v26,
    (unsigned int)v30);
  v32 = -[EAFirmwareUpdater initWithDeviceClass:assetType:skipDFU:byteEscape:skipReconnect:skipVersionCheck:options:serialNum:](
          objc_alloc(&OBJC_CLASS___EAFirmwareUpdater),
          "initWithDeviceClass:assetType:skipDFU:byteEscape:skipReconnect:skipVersionCheck:options:serialNum:",
          a3,
          v12->mobileAssetType,
          v24,
          v26 ^ 1,
          v28,
          v30,
          v12->deviceOptions,
          -[NSDictionary objectForKeyedSubscript:](v12->initOptions, "objectForKeyedSubscript:", CFSTR("SerialNumber")));
  v12->firmwareUpdater = v32;
  if ( !v32 )
  {
    delegate = v12->delegate;
    deviceClass = v12->deviceClass;
    v47 = v12->mobileAssetType;
    v41 = CFSTR("Failed to create EAFirmwareUpdater for deviceClass:%@ assetType:%@");
LABEL_27:
    v42 = 3LL;
LABEL_28:
    -[FudPluginDelegate log:format:](delegate, "log:format:", v42, v41, deviceClass, v47);
    return 0LL;
  }
  v33 = v32;
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
  {
    v34 = v12->deviceOptions;
    v35 = -[EAFirmwareUpdater accessory](v33, "accessory");
    *(_DWORD *)buf = 136315650;
    v54 = "-[EAAccessoryUpdater initWithDeviceClass:delegate:info:options:]";
    v55 = 2112;
    v56 = v34;
    v57 = 2112;
    v58 = v35;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "%s: deviceOptions: %@, firmwareUpdater accessory: %@",
      buf,
      0x20u);
  }
  v36 = -[NSDictionary objectForKeyedSubscript:](v12->initOptions, "objectForKeyedSubscript:", CFSTR("DeviceClass"));
  v37 = -[NSDictionary objectForKey:](v12->deviceOptions, "objectForKey:", CFSTR("NeedsAUDeveloperSettings"));
  if ( v36 )
  {
    v38 = (void *)copyPlistDeviceEntryFromDeviceClass(v36);
    v39 = objc_msgSend(v38, "objectForKey:", CFSTR("NeedsAUDeveloperSettings"));
    objc_release(v38);
    if ( !v39 )
      goto LABEL_32;
    goto LABEL_30;
  }
  if ( v37 )
  {
LABEL_30:
    if ( !-[EAFirmwareUpdater accessory](v12->firmwareUpdater, "accessory")
      || -[EAAccessoryUpdater setSeedParticipationStatusAndContinue](v12, "setSeedParticipationStatusAndContinue") )
    {
      goto LABEL_32;
    }
    return 0LL;
  }
LABEL_32:
  -[EAFirmwareUpdater setAlternateAssetTypes:](v12->firmwareUpdater, "setAlternateAssetTypes:", v19);
  if ( -[NSDictionary objectForKey:](v12->deviceOptions, "objectForKey:", CFSTR("MultipleManifests")) )
    -[EAFirmwareUpdater setManifestIDs:](
      v12->firmwareUpdater,
      "setManifestIDs:",
      -[NSDictionary objectForKey:](v12->deviceOptions, "objectForKey:", CFSTR("MultipleManifests")));
  if ( (unsigned int)objc_msgSend(
                       -[NSDictionary objectForKey:](
                         v12->deviceOptions,
                         "objectForKey:",
                         CFSTR("ExcludeUniqueAccessoryCheck")),
                       "boolValue") )
    -[EAFirmwareUpdater setExcludeUniqueAccessoryCheck:](v12->firmwareUpdater, "setExcludeUniqueAccessoryCheck:", 1LL);
  -[EAFirmwareUpdater setOverrideFile:](
    v12->firmwareUpdater,
    "setOverrideFile:",
    CFSTR("/var/db/accessoryupdater/ea_updater_override.plist"));
  if ( (unsigned int)MGGetBoolAnswer(CFSTR("InternalBuild"), v43) )
  {
    v44 = objc_retain(
            +[NSURL URLWithString:](
              &OBJC_CLASS___NSURL,
              "URLWithString:",
              objc_msgSend(CFSTR("/var/db/accessoryupdater/"), "stringByAppendingPathComponent:", v48)));
    v12->dropboxPath = v44;
    -[FudPluginDelegate log:format:](v12->delegate, "log:format:", 7LL, CFSTR("Default Dropbox Path: %@"), v44);
  }
  if ( -[EAFirmwareUpdater overrideProtocol](v12->firmwareUpdater, "overrideProtocol") )
    -[EAAccessoryUpdater overrideUpdaterOptions](v12, "overrideUpdaterOptions");
  -[EAAccessoryUpdater allowConditionalDownloadOnCellular](v12, "allowConditionalDownloadOnCellular");
  v51[0] = CFSTR("PrepareWeight");
  v51[1] = CFSTR("ApplyWeight");
  v52[0] = &off_100038E58;
  v52[1] = &off_100038E70;
  v51[2] = CFSTR("FinishWeight");
  v51[3] = CFSTR("AccessoryIdentifier");
  v52[2] = &off_100038E58;
  v52[3] = v48;
  *v49 = +[NSDictionary dictionaryWithObjects:forKeys:count:](
           &OBJC_CLASS___NSDictionary,
           "dictionaryWithObjects:forKeys:count:",
           v52,
           v51,
           4LL);
  return v12;
}