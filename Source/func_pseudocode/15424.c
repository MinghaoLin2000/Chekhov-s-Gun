-[DisplayMobileAssetUpdater syncPurgeCatalog]
void __cdecl -[DisplayMobileAssetUpdater syncPurgeCatalog](DisplayMobileAssetUpdater *self, SEL a2)
{
  NSString *v3; // x19
  OS_os_log *log; // x21
  NSArray *v5; // x21
  dispatch_semaphore_s *v6; // x22
  dispatch_time_t v7; // x0
  OS_os_log *v8; // x20
  _QWORD v9[4]; // [xsp+0h] [xbp-80h] BYREF
  id v10; // [xsp+20h] [xbp-60h]
  NSString *assetType; // [xsp+28h] [xbp-58h] BYREF
  uint8_t buf[4]; // [xsp+30h] [xbp-50h] BYREF
  const char *v13; // [xsp+34h] [xbp-4Ch]

  v3 = objc_retain(self->_osVersion);
  objc_sync_enter(v3);
  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_DEFAULT) )
  {
    *(_DWORD *)buf = 136315138;
    v13 = "-[DisplayMobileAssetUpdater syncPurgeCatalog]";
    _os_log_impl((void *)&_mh_execute_header, log, OS_LOG_TYPE_DEFAULT, "%s: Purging catalog", buf, 0xCu);
  }
  assetType = self->super._assetType;
  v5 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", &assetType, 1LL));
  v9[0] = _NSConcreteStackBlock;
  v9[1] = 3254779904LL;
  v9[2] = sub_100012FFC;
  v9[3] = &unk_1000209A0;
  v6 = objc_retain(dispatch_semaphore_create(0LL));
  v10 = v6;
  MAPurgeCatalogs(v5, v9);
  v7 = dispatch_time(0LL, 60000000000LL);
  if ( dispatch_semaphore_wait(v6, v7) )
  {
    v8 = self->_log;
    if ( os_log_type_enabled(v8, OS_LOG_TYPE_ERROR) )
      sub_100015BF8(v8);
  }
  objc_release(v10);
  objc_release(v6);
  objc_release(v5);
  objc_sync_exit(v3);
  objc_release(v3);
}