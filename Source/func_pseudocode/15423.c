-[DisplayMobileAssetUpdater syncPurgeAssetsExceptIDs:]
void __cdecl -[DisplayMobileAssetUpdater syncPurgeAssetsExceptIDs:](DisplayMobileAssetUpdater *self, SEL a2, id a3)
{
  id v4; // x19
  OS_os_log *log; // x21
  NSArray *v6; // x21
  NSDictionary *v7; // x22
  dispatch_semaphore_s *v8; // x23
  dispatch_time_t v9; // x0
  OS_os_log *v10; // x20
  _QWORD v11[4]; // [xsp+0h] [xbp-90h] BYREF
  id v12; // [xsp+20h] [xbp-70h]
  NSString *v13; // [xsp+28h] [xbp-68h] BYREF
  id v14; // [xsp+30h] [xbp-60h] BYREF
  NSString *assetType; // [xsp+38h] [xbp-58h] BYREF
  uint8_t buf[4]; // [xsp+40h] [xbp-50h] BYREF
  const char *v17; // [xsp+44h] [xbp-4Ch]
  __int16 v18; // [xsp+4Ch] [xbp-44h]
  id v19; // [xsp+4Eh] [xbp-42h]

  v4 = objc_retain(a3);
  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_DEFAULT) )
  {
    *(_DWORD *)buf = 136315394;
    v17 = "-[DisplayMobileAssetUpdater syncPurgeAssetsExceptIDs:]";
    v18 = 2112;
    v19 = v4;
    _os_log_impl((void *)&_mh_execute_header, log, OS_LOG_TYPE_DEFAULT, "%s: Purging assets except IDs %@", buf, 0x16u);
  }
  assetType = self->super._assetType;
  v6 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", &assetType, 1LL));
  v13 = self->super._assetType;
  v14 = v4;
  v7 = objc_retainAutoreleasedReturnValue(
         +[NSDictionary dictionaryWithObjects:forKeys:count:](
           &OBJC_CLASS___NSDictionary,
           "dictionaryWithObjects:forKeys:count:",
           &v14,
           &v13,
           1LL));
  v11[0] = _NSConcreteStackBlock;
  v11[1] = 3254779904LL;
  v11[2] = sub_100012E00;
  v11[3] = &unk_1000209A0;
  v8 = objc_retain(dispatch_semaphore_create(0LL));
  v12 = v8;
  MAPurgeAllExceptGivenIds(v6, v7, v11);
  v9 = dispatch_time(0LL, 60000000000LL);
  if ( dispatch_semaphore_wait(v8, v9) )
  {
    v10 = self->_log;
    if ( os_log_type_enabled(v10, OS_LOG_TYPE_ERROR) )
      sub_100015B80(v10);
  }
  objc_release(v12);
  objc_release(v8);
  objc_release(v7);
  objc_release(v6);
  objc_release(v4);
}