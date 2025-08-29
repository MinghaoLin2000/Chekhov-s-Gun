-[BrowseService initWithProxy:session:]
BrowseService *__cdecl -[BrowseService initWithProxy:session:](BrowseService *self, SEL a2, id a3, id a4)
{
  id v7; // x19
  id v8; // x20
  BrowseService *v9; // x0
  BrowseService *v10; // x21
  dispatch_queue_attr_s *v11; // x22
  dispatch_queue_t v12; // x0
  OS_dispatch_queue *queue; // x8
  dispatch_source_t v14; // x0
  OS_dispatch_source *syncTimer; // x8
  NSString *v16; // x22
  dispatch_source_s *v17; // x24
  os_log_s *v18; // x24
  _QWORD handler[4]; // [xsp+10h] [xbp-A0h] BYREF
  id v21; // [xsp+30h] [xbp-80h] BYREF
  id location; // [xsp+38h] [xbp-78h] BYREF
  objc_super v23; // [xsp+40h] [xbp-70h] BYREF
  uint8_t buf[4]; // [xsp+50h] [xbp-60h] BYREF
  NSString *v25; // [xsp+54h] [xbp-5Ch]

  v7 = objc_retain(a3);
  v8 = objc_retain(a4);
  v23.receiver = self;
  v23.super_class = (Class)&OBJC_CLASS___BrowseService;
  v9 = -[BrowseService init](&v23, "init");
  v10 = v9;
  if ( v9 )
  {
    objc_storeStrong((id *)&v9->_proxy, a3);
    objc_storeStrong((id *)&v10->_session, a4);
    v11 = objc_retainAutoreleasedReturnValue(dispatch_queue_attr_make_with_autorelease_frequency(0LL, DISPATCH_AUTORELEASE_FREQUENCY_WORK_ITEM));
    v12 = dispatch_queue_create("com.apple.printing.BrowseService", v11);
    queue = v10->_queue;
    v10->_queue = (OS_dispatch_queue *)v12;
    objc_release(queue);
    objc_release(v11);
    v14 = dispatch_source_create(
            (dispatch_source_type_t)&_dispatch_source_type_timer,
            0LL,
            0LL,
            (dispatch_queue_t)v10->_queue);
    syncTimer = v10->_syncTimer;
    v10->_syncTimer = (OS_dispatch_source *)v14;
    objc_release(syncTimer);
    objc_initWeak(&location, v10);
    v16 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithFormat:](
              &OBJC_CLASS___NSString,
              "stringWithFormat:",
              CFSTR("%@: sync timer %p"),
              v10,
              v10->_syncTimer));
    v17 = (dispatch_source_s *)v10->_syncTimer;
    handler[0] = _NSConcreteStackBlock;
    handler[1] = 3254779904LL;
    handler[2] = sub_100061FB4;
    handler[3] = &unk_10009E0B8;
    objc_copyWeak(&v21, &location);
    dispatch_source_set_event_handler(v17, handler);
    dispatch_source_set_cancel_handler((dispatch_source_t)v10->_syncTimer, &stru_10009FB58);
    dispatch_source_set_timer((dispatch_source_t)v10->_syncTimer, 0LL, 0xFFFFFFFFFFFFFFFFLL, 0LL);
    v10->_syncTimerSuspendedCount = 0LL;
    v18 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryDiscovery[0]));
    if ( os_log_type_enabled(v18, OS_LOG_TYPE_DEFAULT) )
    {
      *(_DWORD *)buf = 138412290;
      v25 = v16;
      _os_log_impl((void *)&_mh_execute_header, v18, OS_LOG_TYPE_DEFAULT, "Setup with %@", buf, 0xCu);
    }
    objc_release(v18);
    objc_destroyWeak(&v21);
    objc_release(v16);
    objc_destroyWeak(&location);
  }
  objc_release(v8);
  objc_release(v7);
  return v10;
}