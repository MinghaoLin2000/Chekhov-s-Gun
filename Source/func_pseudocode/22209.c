-[QLSatellite init]
QLSatellite *__cdecl -[QLSatellite init](QLSatellite *self, SEL a2)
{
  QLSatellite *v2; // x19
  dispatch_queue_t v3; // x0
  OS_dispatch_queue *queue; // x8
  NSBundle *v5; // x20
  NSString *v6; // x21
  unsigned int v7; // w22
  NSProcessInfo *v8; // x20
  int v9; // w21
  __int64 v10; // x1
  int v11; // w0
  NSMapTable *v12; // x0
  NSMapTable *requests; // x8
  int IsDaemon; // w0
  os_log_s *v15; // x20
  uint8_t v17[16]; // [xsp+0h] [xbp-40h] BYREF
  objc_super v18; // [xsp+10h] [xbp-30h] BYREF

  v18.receiver = self;
  v18.super_class = (Class)&OBJC_CLASS___QLSatellite;
  v2 = -[QLSatellite init](&v18, "init");
  v3 = dispatch_queue_create("com.quicklook.satellite", 0LL);
  queue = v2->_queue;
  v2->_queue = (OS_dispatch_queue *)v3;
  objc_release(queue);
  _QLIsOnServerSide = 1;
  _QLNeedsGeneratorUpdateNotifications = 0;
  v5 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v6 = objc_retainAutoreleasedReturnValue(-[NSBundle bundleIdentifier](v5, "bundleIdentifier"));
  v7 = -[NSString isEqualToString:](v6, "isEqualToString:", CFSTR("com.apple.quicklook.QuickLookTestHost"));
  objc_release(v6);
  objc_release(v5);
  if ( !v7 || (_QLGeneratorMaxGlobalWeightIsSet() & 1) == 0 )
  {
    v8 = objc_retainAutoreleasedReturnValue(+[NSProcessInfo processInfo](&OBJC_CLASS___NSProcessInfo, "processInfo"));
    v9 = (unsigned int)-[NSProcessInfo activeProcessorCount](v8, "activeProcessorCount");
    objc_release(v8);
    if ( v9 <= 2 )
      v10 = 2LL;
    else
      v10 = (unsigned int)v9;
    v11 = _QLAppPreferencesIntValueForKey(CFSTR("QLSatelliteMaxThreadCount"), v10);
    _QLGeneratorSetMaxGlobalWeight(v11);
  }
  v12 = (NSMapTable *)objc_msgSend(
                        objc_alloc((Class)&OBJC_CLASS___NSMapTable),
                        "initWithKeyOptions:valueOptions:capacity:",
                        0x10000LL,
                        512LL,
                        0LL);
  requests = v2->_requests;
  v2->_requests = v12;
  objc_release(requests);
  IsDaemon = SetApplicationIsDaemon(1LL);
  v15 = (os_log_s *)qlLogHandles[9];
  if ( IsDaemon )
  {
    if ( !v15 )
    {
      QLInitLogging();
      v15 = (os_log_s *)qlLogHandles[9];
    }
    if ( os_log_type_enabled(v15, OS_LOG_TYPE_INFO) )
    {
      *(_WORD *)v17 = 0;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v15,
        OS_LOG_TYPE_INFO,
        "Can't protect satellite from connecting to window server",
        v17,
        2u);
    }
  }
  else
  {
    if ( !v15 )
    {
      QLInitLogging();
      v15 = (os_log_s *)qlLogHandles[9];
    }
    if ( os_log_type_enabled(v15, OS_LOG_TYPE_DEBUG) )
      sub_100005D30(v15);
  }
  return v2;
}