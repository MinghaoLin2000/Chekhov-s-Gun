-[EAAccessoryUpdater setSeedParticipationStatusAndContinue]
bool __cdecl -[EAAccessoryUpdater setSeedParticipationStatusAndContinue](EAAccessoryUpdater *self, SEL a2)
{
  NSArray *v3; // x23
  NSString *v4; // x20
  NSString *v5; // x0
  bool v6; // zf
  NSString *v7; // x21
  void *v8; // x0
  void *v9; // x27
  __int64 v10; // x20
  unsigned __int64 v11; // x24
  void *i; // x21
  void *v13; // x28
  unsigned int v14; // w22
  int v15; // w8
  int v16; // w28
  int v17; // w27
  id v18; // x23
  void *v19; // x0
  void *v20; // x24
  void *v22; // x24
  __int64 v23; // x1
  int v24; // w0
  id v25; // x22
  __int64 v26; // x1
  int v27; // w0
  bool v28; // zf
  unsigned __int64 v29; // x0
  const __CFString *v30; // x23
  NSString *v31; // [xsp+10h] [xbp-130h]
  NSString *v32; // [xsp+18h] [xbp-128h]
  __int128 v33; // [xsp+20h] [xbp-120h] BYREF
  __int128 v34; // [xsp+30h] [xbp-110h]
  __int128 v35; // [xsp+40h] [xbp-100h]
  __int128 v36; // [xsp+50h] [xbp-F0h]
  _BYTE v37[128]; // [xsp+60h] [xbp-E0h] BYREF

  v3 = -[EAAccessory protocolStrings](
         -[EAFirmwareUpdater accessory](self->firmwareUpdater, "accessory"),
         "protocolStrings");
  v4 = -[EAAccessory name](-[EAFirmwareUpdater accessory](self->firmwareUpdater, "accessory"), "name");
  v5 = -[EAAccessory serialNumber](-[EAFirmwareUpdater accessory](self->firmwareUpdater, "accessory"), "serialNumber");
  if ( v4 )
    v6 = v5 == 0LL;
  else
    v6 = 1;
  if ( v6 )
    return 1;
  v7 = v5;
  v32 = v4;
  v35 = 0u;
  v36 = 0u;
  v33 = 0u;
  v34 = 0u;
  v8 = -[NSArray countByEnumeratingWithState:objects:count:](
         v3,
         "countByEnumeratingWithState:objects:count:",
         &v33,
         v37,
         16LL);
  if ( !v8 )
  {
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v11 = 1LL;
    goto LABEL_19;
  }
  v9 = v8;
  v10 = *(_QWORD *)v34;
  v11 = 1LL;
  v31 = v7;
  while ( 2 )
  {
    for ( i = 0LL; i != v9; i = (char *)i + 1 )
    {
      if ( *(_QWORD *)v34 != v10 )
        objc_enumerationMutation(v3);
      v13 = *(void **)(*((_QWORD *)&v33 + 1) + 8LL * (_QWORD)i);
      v14 = (unsigned int)objc_msgSend(v13, "containsString:", CFSTR("dev"));
      if ( (v14 & 1) != 0 )
      {
        v11 = 0LL;
LABEL_18:
        v15 = v14 ^ 1;
        v16 = 1;
        v7 = v31;
        goto LABEL_19;
      }
      if ( ((unsigned int)objc_msgSend(v13, "containsString:", CFSTR("insec")) & 1) != 0 )
      {
        v11 = 2LL;
        goto LABEL_18;
      }
    }
    v9 = -[NSArray countByEnumeratingWithState:objects:count:](
           v3,
           "countByEnumeratingWithState:objects:count:",
           &v33,
           v37,
           16LL);
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v7 = v31;
    if ( v9 )
      continue;
    break;
  }
LABEL_19:
  v17 = v15;
  self->_accessoryFusingType = +[NSString stringWithUTF8String:](
                                 &OBJC_CLASS___NSString,
                                 "stringWithUTF8String:",
                                 AUDeveloperSettingsAccessoryFusingTypeToString(v11));
  v18 = +[AUDeveloperSettingsDatabase sharedDatabase](&OBJC_CLASS___AUDeveloperSettingsDatabase, "sharedDatabase");
  v19 = objc_msgSend(objc_msgSend(objc_msgSend(v18, "accessoriesDictionary"), "objectForKey:", v7), "mutableCopy");
  if ( v19 )
  {
    v20 = v19;
    if ( (unsigned int)objc_msgSend(objc_msgSend(v19, "objectForKeyedSubscript:", CFSTR("isOTADisabled")), "boolValue") )
    {
      -[FudPluginDelegate log:format:](
        self->delegate,
        "log:format:",
        5LL,
        CFSTR("Entry found in AUDeveloperSettingsDatabase Accessory:%@ with OTA Update disabled, not attempting update"),
        v32);
      return 0;
    }
    v25 = -[EAAccessoryUpdater getAssetLocation:](self, "getAssetLocation:", v20);
    -[FudPluginDelegate log:format:](
      self->delegate,
      "log:format:",
      5LL,
      CFSTR("Entry found in AUDeveloperSettingsDatabase Accessory:%@ assetLocation:%@"),
      v32,
      v25);
    if ( !-[NSString isEqualToString:](
            v32,
            "isEqualToString:",
            objc_msgSend(v20, "objectForKeyedSubscript:", CFSTR("name"))) )
    {
      -[FudPluginDelegate log:format:](
        self->delegate,
        "log:format:",
        6LL,
        CFSTR("Updating name of accessory in AUDeveloperSettingsDatabase to %@"),
        v32);
      objc_msgSend(v20, "setObject:forKeyedSubscript:", -[NSString copy](v32, "copy"), CFSTR("name"));
    }
    if ( !v25 )
    {
      v27 = MGGetBoolAnswer(CFSTR("InternalBuild"), v26);
      v28 = (v16 & v27) == 0;
      if ( (v16 & v27) != 0 )
        v29 = 0LL;
      else
        v29 = 2LL;
      if ( v28 )
        v30 = CFSTR("No asset location found for %@, defaulting to Customer (Mesu) for customer build or prod fused accessory");
      else
        v30 = CFSTR("No asset location found for %@, defaulting to Livability for internal builds and non-prod accessory");
      objc_msgSend(
        v20,
        "setObject:forKeyedSubscript:",
        +[NSString stringWithUTF8String:](
          &OBJC_CLASS___NSString,
          "stringWithUTF8String:",
          AUDeveloperSettingsURLTypeToString(v29)),
        CFSTR("assetLocation"));
      -[FudPluginDelegate log:format:](self->delegate, "log:format:", 6LL, v30, v32);
    }
    objc_msgSend(v20, "setObject:forKeyedSubscript:", &__kCFBooleanTrue, CFSTR("SupportsDeveloperSettings"));
    -[EAAccessoryUpdater updateAccessoryInfoInDatabaseIfNeeded:](self, "updateAccessoryInfoInDatabaseIfNeeded:", v20);
    objc_release(v20);
  }
  else
  {
    v22 = +[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary");
    objc_msgSend(v22, "setObject:forKeyedSubscript:", -[NSString copy](v32, "copy"), CFSTR("name"));
    objc_msgSend(v22, "setObject:forKeyedSubscript:", self->_accessoryFusingType, CFSTR("fusing"));
    objc_msgSend(
      v22,
      "setObject:forKeyedSubscript:",
      -[NSString copy](
        -[EAAccessory firmwareRevision](
          -[EAFirmwareUpdater accessory](self->firmwareUpdater, "accessory"),
          "firmwareRevision"),
        "copy"),
      CFSTR("activeVersion"));
    objc_msgSend(
      v22,
      "setObject:forKeyedSubscript:",
      -[NSString copy](
        -[EAAccessory modelNumber](-[EAFirmwareUpdater accessory](self->firmwareUpdater, "accessory"), "modelNumber"),
        "copy"),
      CFSTR("modelNumber"));
    objc_msgSend(
      v22,
      "setObject:forKeyedSubscript:",
      +[NSString stringWithUTF8String:](
        &OBJC_CLASS___NSString,
        "stringWithUTF8String:",
        AUDeveloperSettingsURLTypeToString(2uLL)),
      CFSTR("assetLocation"));
    objc_msgSend(v22, "setObject:forKeyedSubscript:", &__kCFBooleanTrue, CFSTR("SupportsDeveloperSettings"));
    v24 = MGGetBoolAnswer(CFSTR("InternalBuild"), v23);
    if ( (v14 | v17) == 1 && v24 )
      objc_msgSend(
        v22,
        "setObject:forKeyedSubscript:",
        +[NSString stringWithUTF8String:](
          &OBJC_CLASS___NSString,
          "stringWithUTF8String:",
          AUDeveloperSettingsURLTypeToString(0LL)),
        CFSTR("assetLocation"));
    v25 = -[EAAccessoryUpdater getAssetLocation:](self, "getAssetLocation:", v22);
    objc_msgSend(
      v18,
      "addAccessoryWithSerialNumber:info:",
      v7,
      +[NSDictionary dictionaryWithDictionary:](&OBJC_CLASS___NSDictionary, "dictionaryWithDictionary:", v22));
    -[FudPluginDelegate log:format:](
      self->delegate,
      "log:format:",
      5LL,
      CFSTR("Added Entry for %@ in AUDeveloperSettingsDatabase %@"),
      v32,
      v18);
  }
  -[EAFirmwareUpdater setAssetLocationOverride:](
    self->firmwareUpdater,
    "setAssetLocationOverride:",
    +[NSURL URLWithString:](&OBJC_CLASS___NSURL, "URLWithString:", v25));
  return 1;
}