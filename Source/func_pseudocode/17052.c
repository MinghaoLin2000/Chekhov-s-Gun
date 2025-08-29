-[UARPUpdaterServiceAFU ioKitRuleMatched:]
void __cdecl -[UARPUpdaterServiceAFU ioKitRuleMatched:](UARPUpdaterServiceAFU *self, SEL a2, id a3)
{
  id v4; // x19
  OS_os_log *log; // x21
  UARPUpdaterServiceAFUPreferences *v6; // x22
  NSURL *v7; // x21
  id v8; // x22
  NSNumber *v9; // x23
  NSString *v10; // x24
  void *v11; // x22
  NSMutableArray *v12; // x23
  OS_dispatch_queue *serialQueue; // x23
  OS_os_log *v14; // x20
  _QWORD block[4]; // [xsp+8h] [xbp-98h] BYREF
  id v16; // [xsp+28h] [xbp-78h]
  UARPUpdaterServiceAFU *v17; // [xsp+30h] [xbp-70h]
  id v18; // [xsp+38h] [xbp-68h]
  uint8_t buf[4]; // [xsp+40h] [xbp-60h] BYREF
  const char *v20; // [xsp+44h] [xbp-5Ch]
  __int16 v21; // [xsp+4Ch] [xbp-54h]
  id v22; // [xsp+4Eh] [xbp-52h]

  v4 = objc_retain(a3);
  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_INFO) )
  {
    *(_DWORD *)buf = 136315394;
    v20 = "-[UARPUpdaterServiceAFU ioKitRuleMatched:]";
    v21 = 2112;
    v22 = v4;
    _os_log_impl((void *)&_mh_execute_header, log, OS_LOG_TYPE_INFO, "%s: %@", buf, 0x16u);
  }
  v6 = objc_retainAutoreleasedReturnValue(
         +[UARPUpdaterServiceAFUPreferences sharedInstance](
           &OBJC_CLASS___UARPUpdaterServiceAFUPreferences,
           "sharedInstance"));
  v7 = objc_retainAutoreleasedReturnValue(
         -[UARPUpdaterServiceAFUPreferences overriddenFirmwareAssetDirectoryURL](
           v6,
           "overriddenFirmwareAssetDirectoryURL"));
  objc_release(v6);
  v8 = objc_alloc((Class)&OBJC_CLASS___AppleFirmwareUpdateController);
  v9 = objc_retainAutoreleasedReturnValue(
         +[NSNumber numberWithUnsignedLongLong:](
           &OBJC_CLASS___NSNumber,
           "numberWithUnsignedLongLong:",
           objc_msgSend(v4, "registryEntryID")));
  v10 = objc_retainAutoreleasedReturnValue(-[NSURL path](v7, "path"));
  v11 = objc_msgSend(v8, "initWithRegistryEntryID:fwAssetDirectory:", v9, v10);
  objc_release(v10);
  objc_release(v9);
  if ( v11 )
  {
    v12 = objc_retainAutoreleasedReturnValue(-[UARPUpdaterServiceAFU controllers](self, "controllers"));
    -[NSMutableArray addObject:](v12, "addObject:", v11);
    objc_release(v12);
    serialQueue = self->_serialQueue;
    block[0] = _NSConcreteStackBlock;
    block[1] = 3254779904LL;
    block[2] = sub_100001688;
    block[3] = &unk_100004220;
    v16 = objc_retain(v11);
    v17 = self;
    v18 = objc_retain(v4);
    dispatch_async((dispatch_queue_t)serialQueue, block);
    objc_release(v18);
    objc_release(v16);
  }
  else
  {
    v14 = self->_log;
    if ( os_log_type_enabled(v14, OS_LOG_TYPE_ERROR) )
      sub_10000226C(v4, v14);
  }
  objc_release(v11);
  objc_release(v7);
  objc_release(v4);
}