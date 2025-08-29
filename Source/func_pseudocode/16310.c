-[LegacyAudioAccessory startFirmwareUpdateStates]
bool __cdecl -[LegacyAudioAccessory startFirmwareUpdateStates](LegacyAudioAccessory *self, SEL a2)
{
  NSString *v3; // x0
  NSString *serialNumber; // x8
  OS_os_log *log; // x20
  NSString *activeDeviceClass; // x8
  NSString *v7; // x9
  EAAccessoryUpdater *v8; // x0
  NSString *v9; // x2
  NSString **p_activeDeviceClass; // x21
  EAAccessoryUpdater *v11; // x22
  id v12; // x20
  EAAccessoryUpdater *updater; // x0
  EAAccessoryUpdater *v14; // x22
  NSString *v15; // x0
  NSString *modelName; // x8
  UARPUpdateFirmwareAnalyticsEvent *v17; // x21
  OS_os_log *v18; // x19
  id v20; // [xsp+8h] [xbp-58h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-50h] BYREF
  const char *v22; // [xsp+14h] [xbp-4Ch]
  __int16 v23; // [xsp+1Ch] [xbp-44h]
  NSString *v24; // [xsp+1Eh] [xbp-42h]
  __int16 v25; // [xsp+26h] [xbp-3Ah]
  NSString *v26; // [xsp+28h] [xbp-38h]

  v3 = (NSString *)objc_retainAutoreleasedReturnValue(
                     -[NSDictionary objectForKeyedSubscript:](
                       self->_updateOptions,
                       "objectForKeyedSubscript:",
                       CFSTR("SerialNumber")));
  serialNumber = self->_serialNumber;
  self->_serialNumber = v3;
  objc_release(serialNumber);
  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_DEFAULT) )
  {
    activeDeviceClass = self->_activeDeviceClass;
    v7 = self->_serialNumber;
    *(_DWORD *)buf = 136315650;
    v22 = "-[LegacyAudioAccessory startFirmwareUpdateStates]";
    v23 = 2112;
    v24 = activeDeviceClass;
    v25 = 2112;
    v26 = v7;
    _os_log_impl(
      (void *)&_mh_execute_header,
      log,
      OS_LOG_TYPE_DEFAULT,
      "%s: Starting update states for %@, serialNumber %@ ",
      buf,
      0x20u);
  }
  v8 = objc_alloc(&OBJC_CLASS___EAAccessoryUpdater);
  p_activeDeviceClass = &self->_activeDeviceClass;
  v9 = self->_activeDeviceClass;
  v20 = 0LL;
  v11 = -[EAAccessoryUpdater initWithDeviceClass:delegate:info:options:](
          v8,
          "initWithDeviceClass:delegate:info:options:",
          v9,
          self,
          &v20,
          self->_updateOptions);
  v12 = objc_retain(v20);
  updater = self->_updater;
  self->_updater = v11;
  objc_release(updater);
  v14 = self->_updater;
  if ( v14 )
  {
    v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "objectForKeyedSubscript:", CFSTR("AccessoryIdentifier")));
    modelName = self->_modelName;
    self->_modelName = v15;
    objc_release(modelName);
    if ( !-[EAAccessoryUpdater isMultiAssetSession](self->_updater, "isMultiAssetSession") )
    {
      v17 = objc_alloc_init(&OBJC_CLASS___UARPUpdateFirmwareAnalyticsEvent);
      -[UARPUpdateFirmwareAnalyticsEvent setModelName:](v17, "setModelName:", self->_modelName);
      -[NSMutableDictionary setObject:forKeyedSubscript:](
        self->_updateFirmwareAnalyticsEvents,
        "setObject:forKeyedSubscript:",
        v17,
        self->_activeDeviceClass);
      objc_release(v17);
    }
    -[EAAccessoryUpdater bootstrapWithOptions:](self->_updater, "bootstrapWithOptions:", self->_updateOptions);
  }
  else
  {
    v18 = self->_log;
    if ( os_log_type_enabled(v18, OS_LOG_TYPE_ERROR) )
      sub_10001AFBC(p_activeDeviceClass, v18);
  }
  objc_release(v12);
  return v14 != 0LL;
}