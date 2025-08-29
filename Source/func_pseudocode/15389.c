-[UARPUpdaterDisplayControllerDelegate getRemoteDeviceWithECID:]
id __cdecl -[UARPUpdaterDisplayControllerDelegate getRemoteDeviceWithECID:](
        UARPUpdaterDisplayControllerDelegate *self,
        SEL a2,
        unsigned __int64 a3)
{
  dispatch_semaphore_t v5; // x19
  dispatch_semaphore_s *v6; // x19
  _QWORD *v7; // x23
  dispatch_queue_s *v8; // x0
  void *started; // x21
  dispatch_time_t v10; // x0
  OS_os_log *log; // x22
  id v12; // x20
  _QWORD v14[5]; // [xsp+0h] [xbp-A0h] BYREF
  id v15; // [xsp+28h] [xbp-78h]
  __int64 *v16; // [xsp+30h] [xbp-70h]
  unsigned __int64 v17; // [xsp+38h] [xbp-68h]
  __int64 v18; // [xsp+40h] [xbp-60h] BYREF
  __int64 *v19; // [xsp+48h] [xbp-58h]
  __int64 v20; // [xsp+50h] [xbp-50h]
  __int64 (__fastcall *v21)(); // [xsp+58h] [xbp-48h]
  __int64 (__fastcall *v22)(); // [xsp+60h] [xbp-40h]
  id v23; // [xsp+68h] [xbp-38h]
  __int64 vars8; // [xsp+A8h] [xbp+8h]

  v5 = dispatch_semaphore_create(0LL);
  v18 = 0LL;
  v19 = &v18;
  v20 = 0x3032000000LL;
  v21 = sub_100009D2C;
  v22 = sub_100009D3C;
  v23 = objc_alloc_init(&OBJC_CLASS___deviceInfo);
  v14[0] = _NSConcreteStackBlock;
  v14[1] = 3254779904LL;
  v14[2] = sub_100009D44;
  v14[3] = &unk_100020760;
  v16 = &v18;
  v17 = a3;
  v14[4] = self;
  v6 = objc_retain(v5);
  v15 = v6;
  v7 = objc_retainBlock(v14);
  v8 = objc_retain(&_dispatch_main_q);
  started = (void *)remote_device_start_browsing(11LL, &_dispatch_main_q, v7);
  objc_release(&_dispatch_main_q);
  v10 = dispatch_time(0LL, 120000000000LL);
  if ( dispatch_semaphore_wait(v6, v10) )
  {
    log = self->_log;
    if ( os_log_type_enabled(log, OS_LOG_TYPE_ERROR) )
      sub_1000145E8(a3, log);
    remote_device_browser_cancel(started);
    v12 = 0LL;
  }
  else
  {
    remote_device_browser_cancel(started);
    v12 = objc_retain((id)v19[5]);
  }
  objc_release(v7);
  objc_release(v15);
  _Block_object_dispose(&v18, 8);
  objc_release(v23);
  objc_release(v6);
  objc_release(started);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v12);
}