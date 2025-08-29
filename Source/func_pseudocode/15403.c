-[UARPUpdaterDisplayControllerDelegate waitForInternetConnection:]
bool __cdecl -[UARPUpdaterDisplayControllerDelegate waitForInternetConnection:](
        UARPUpdaterDisplayControllerDelegate *self,
        SEL a2,
        bool a3)
{
  _BOOL4 v3; // w22
  nw_path_monitor *v5; // x19
  dispatch_semaphore_s *v6; // x20
  dispatch_queue_s *v7; // x0
  dispatch_time_t v8; // x0
  OS_os_log *log; // x21
  OS_os_log *v10; // x20
  bool v11; // w21
  OS_os_log *v12; // x21
  _QWORD update_handler[5]; // [xsp+8h] [xbp-88h] BYREF
  id v15; // [xsp+30h] [xbp-60h]
  __int64 *v16; // [xsp+38h] [xbp-58h]
  __int64 v17; // [xsp+40h] [xbp-50h] BYREF
  __int64 *v18; // [xsp+48h] [xbp-48h]
  __int64 v19; // [xsp+50h] [xbp-40h]
  char v20; // [xsp+58h] [xbp-38h]

  v3 = a3;
  v17 = 0LL;
  v18 = &v17;
  v19 = 0x2020000000LL;
  v20 = 0;
  v5 = nw_path_monitor_create();
  if ( v5 )
  {
    update_handler[0] = _NSConcreteStackBlock;
    update_handler[1] = 3254779904LL;
    update_handler[2] = sub_10000F28C;
    update_handler[3] = &unk_1000208B0;
    update_handler[4] = self;
    v16 = &v17;
    v6 = objc_retain(dispatch_semaphore_create(0LL));
    v15 = v6;
    nw_path_monitor_set_update_handler(v5, update_handler);
    v7 = objc_retain(&_dispatch_main_q);
    nw_path_monitor_set_queue(v5, &_dispatch_main_q);
    objc_release(&_dispatch_main_q);
    nw_path_monitor_start(v5);
    v8 = dispatch_time(0LL, 60000000000LL);
    if ( dispatch_semaphore_wait(v6, v8) )
    {
      log = self->_log;
      if ( os_log_type_enabled(log, OS_LOG_TYPE_ERROR) )
        sub_10001531C(log);
    }
    else if ( *((_BYTE *)v18 + 24) && v3 )
    {
      v12 = self->_log;
      if ( os_log_type_enabled(v12, OS_LOG_TYPE_ERROR) )
        sub_1000152A4(v12);
      sleep(0x3Cu);
    }
    nw_path_monitor_cancel(v5);
    v11 = *((_BYTE *)v18 + 24) != 0;
    objc_release(v15);
    objc_release(v6);
  }
  else
  {
    v10 = self->_log;
    if ( os_log_type_enabled(v10, OS_LOG_TYPE_ERROR) )
      sub_10001522C(v10);
    sleep(0x3Cu);
    v11 = 0;
  }
  objc_release(v5);
  _Block_object_dispose(&v17, 8);
  return v11;
}