-[QLSatellite _updateWatchdog]
void __cdecl -[QLSatellite _updateWatchdog](QLSatellite *self, SEL a2)
{
  os_log_s *v3; // x20
  _QWORD *v4; // x20
  OS_dispatch_source *watchdogTimer; // x0
  unsigned __int64 inflightRequestsCount; // x8
  OS_dispatch_source *v7; // x0
  dispatch_time_t v8; // x21
  OS_dispatch_queue *queue; // x22
  OS_dispatch_source *v10; // x0
  OS_dispatch_source *v11; // x8
  OS_dispatch_source *v12; // x21
  dispatch_time_t v13; // x0
  _QWORD block[5]; // [xsp+8h] [xbp-88h] BYREF
  id v15; // [xsp+30h] [xbp-60h]
  _QWORD v16[5]; // [xsp+38h] [xbp-58h] BYREF

  v3 = (os_log_s *)qlLogHandles[0];
  if ( !qlLogHandles[0] )
  {
    QLInitLogging(self, a2);
    v3 = (os_log_s *)qlLogHandles[0];
  }
  if ( os_log_type_enabled(v3, OS_LOG_TYPE_DEBUG) )
    sub_100005D74(self, v3);
  v16[0] = _NSConcreteStackBlock;
  v16[1] = 3254779904LL;
  v16[2] = sub_10000361C;
  v16[3] = &unk_1000083F0;
  v16[4] = self;
  v4 = objc_retainBlock(v16);
  watchdogTimer = self->_watchdogTimer;
  inflightRequestsCount = self->_inflightRequestsCount;
  if ( watchdogTimer )
  {
    if ( !inflightRequestsCount )
    {
      dispatch_source_cancel((dispatch_source_t)watchdogTimer);
      v7 = self->_watchdogTimer;
      self->_watchdogTimer = 0LL;
      objc_release(v7);
      v8 = dispatch_time(0LL, 2000000000LL);
      queue = self->_queue;
      block[0] = _NSConcreteStackBlock;
      block[1] = 3254779904LL;
      block[2] = sub_1000036FC;
      block[3] = &unk_100008420;
      block[4] = self;
      v15 = objc_retain(v4);
      dispatch_after(v8, (dispatch_queue_t)queue, block);
      objc_release(v15);
    }
  }
  else if ( inflightRequestsCount )
  {
    v10 = (OS_dispatch_source *)dispatch_source_create(
                                  (dispatch_source_type_t)&_dispatch_source_type_timer,
                                  0LL,
                                  0LL,
                                  (dispatch_queue_t)self->_queue);
    v11 = self->_watchdogTimer;
    self->_watchdogTimer = v10;
    objc_release(v11);
    v12 = self->_watchdogTimer;
    v13 = dispatch_time(0LL, 2000000000LL);
    dispatch_source_set_timer((dispatch_source_t)v12, v13, 0x77359400uLL, 0x1DCD6500uLL);
    ql_dispatch_source_set_event_handler(self->_watchdogTimer, v4);
    dispatch_resume((dispatch_object_t)self->_watchdogTimer);
  }
  objc_release(v4);
}