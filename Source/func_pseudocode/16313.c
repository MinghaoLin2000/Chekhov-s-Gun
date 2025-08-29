-[LegacyAudioAccessory updateCompleteForActiveDeviceClass]
void __cdecl -[LegacyAudioAccessory updateCompleteForActiveDeviceClass](LegacyAudioAccessory *self, SEL a2)
{
  OS_os_log *log; // x20
  NSString *activeDeviceClass; // x8
  NSString *serialNumber; // x9
  FudPersonalizer *personalizer; // x0
  LegacyAudioController *v7; // x20
  void *v8; // x0
  void *v9; // x20
  OS_os_log *v10; // x21
  NSString *v11; // x8
  NSString *v12; // x9
  OS_os_log *v13; // x21
  NSString *v14; // x8
  NSString *v15; // x9
  NSString *v16; // x0
  NSString *v17; // x8
  int v18; // [xsp+0h] [xbp-50h] BYREF
  const char *v19; // [xsp+4h] [xbp-4Ch]
  __int16 v20; // [xsp+Ch] [xbp-44h]
  NSString *v21; // [xsp+Eh] [xbp-42h]
  __int16 v22; // [xsp+16h] [xbp-3Ah]
  NSString *v23; // [xsp+18h] [xbp-38h]

  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_DEFAULT) )
  {
    activeDeviceClass = self->_activeDeviceClass;
    serialNumber = self->_serialNumber;
    v18 = 136315650;
    v19 = "-[LegacyAudioAccessory updateCompleteForActiveDeviceClass]";
    v20 = 2112;
    v21 = activeDeviceClass;
    v22 = 2112;
    v23 = serialNumber;
    _os_log_impl(
      (void *)&_mh_execute_header,
      log,
      OS_LOG_TYPE_DEFAULT,
      "%s: Update states complete for %@, serialNumber %@ ",
      (uint8_t *)&v18,
      0x20u);
  }
  personalizer = self->_personalizer;
  if ( personalizer )
    -[FudPersonalizer setDelegate:](personalizer, "setDelegate:", 0LL);
  v7 = objc_retainAutoreleasedReturnValue(+[LegacyAudioController sharedInstance](&OBJC_CLASS___LegacyAudioController, "sharedInstance"));
  -[LegacyAudioController addActiveFirmwareAnalytics:](v7, "addActiveFirmwareAnalytics:", self);
  objc_release(v7);
  v8 = objc_retainAutoreleasedReturnValue(
         -[NSMutableDictionary objectForKeyedSubscript:](
           self->_updateFirmwareAnalyticsEvents,
           "objectForKeyedSubscript:",
           self->_activeDeviceClass));
  v9 = v8;
  if ( v8 && objc_msgSend(v8, "stagingStatus") )
  {
    v10 = self->_log;
    if ( os_log_type_enabled(v10, OS_LOG_TYPE_DEFAULT) )
    {
      v11 = self->_activeDeviceClass;
      v12 = self->_serialNumber;
      v18 = 136315650;
      v19 = "-[LegacyAudioAccessory updateCompleteForActiveDeviceClass]";
      v20 = 2112;
      v21 = v11;
      v22 = 2112;
      v23 = v12;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v10,
        OS_LOG_TYPE_DEFAULT,
        "%s: Posting analytics for %@, serialNumber %@ ",
        (uint8_t *)&v18,
        0x20u);
    }
    objc_msgSend(v9, "send");
  }
  else
  {
    v13 = self->_log;
    if ( os_log_type_enabled(v13, OS_LOG_TYPE_DEFAULT) )
    {
      v14 = self->_activeDeviceClass;
      v15 = self->_serialNumber;
      v18 = 136315650;
      v19 = "-[LegacyAudioAccessory updateCompleteForActiveDeviceClass]";
      v20 = 2112;
      v21 = v14;
      v22 = 2112;
      v23 = v15;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v13,
        OS_LOG_TYPE_DEFAULT,
        "%s: Analytics event invalid, not posting for %@, serialNumber %@ ",
        (uint8_t *)&v18,
        0x20u);
    }
  }
  -[NSMutableDictionary removeObjectForKey:](
    self->_updateFirmwareAnalyticsEvents,
    "removeObjectForKey:",
    self->_activeDeviceClass);
  -[NSMutableArray removeObject:](self->_deviceClasses, "removeObject:", self->_activeDeviceClass);
  -[EAAccessoryUpdater setDelegate:](self->_updater, "setDelegate:", 0LL);
  if ( -[NSMutableArray count](self->_deviceClasses, "count") )
  {
    v16 = objc_retainAutoreleasedReturnValue(-[NSMutableArray firstObject](self->_deviceClasses, "firstObject"));
    v17 = self->_activeDeviceClass;
    self->_activeDeviceClass = v16;
    objc_release(v17);
    if ( !-[LegacyAudioAccessory startFirmwareUpdateStates](self, "startFirmwareUpdateStates") )
      -[LegacyAudioAccessory updateCompleteForActiveDeviceClass](self, "updateCompleteForActiveDeviceClass");
  }
  else
  {
    -[LegacyAudioAccessoryDelegate updateCompleteForAccessory:](self->_delegate, "updateCompleteForAccessory:", self);
  }
  objc_release(v9);
}