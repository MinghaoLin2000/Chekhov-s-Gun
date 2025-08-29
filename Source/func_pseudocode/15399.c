-[UARPUpdaterDisplayControllerDelegate placeDeviceInRecovery:]
void __cdecl -[UARPUpdaterDisplayControllerDelegate placeDeviceInRecovery:](
        UARPUpdaterDisplayControllerDelegate *self,
        SEL a2,
        unsigned __int64 a3)
{
  OS_os_log *log; // x21
  dispatch_semaphore_s *v6; // x21
  _QWORD *v7; // x23
  void *started; // x22
  dispatch_time_t v9; // x0
  OS_os_log *v10; // x20
  _QWORD v11[5]; // [xsp+8h] [xbp-88h] BYREF
  id v12; // [xsp+30h] [xbp-60h]
  unsigned __int64 v13; // [xsp+38h] [xbp-58h]
  uint8_t buf[4]; // [xsp+40h] [xbp-50h] BYREF
  const char *v15; // [xsp+44h] [xbp-4Ch]
  __int16 v16; // [xsp+4Ch] [xbp-44h]
  unsigned __int64 v17; // [xsp+4Eh] [xbp-42h]

  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_DEFAULT) )
  {
    *(_DWORD *)buf = 136315394;
    v15 = "-[UARPUpdaterDisplayControllerDelegate placeDeviceInRecovery:]";
    v16 = 2048;
    v17 = a3;
    _os_log_impl(
      (void *)&_mh_execute_header,
      log,
      OS_LOG_TYPE_DEFAULT,
      "%s: Placing device with ecid 0x%llx in recovery",
      buf,
      0x16u);
  }
  v11[0] = _NSConcreteStackBlock;
  v11[1] = 3254779904LL;
  v11[2] = sub_10000BE10;
  v11[3] = &unk_100020820;
  v11[4] = self;
  v13 = a3;
  v6 = objc_retain(dispatch_semaphore_create(0LL));
  v12 = v6;
  v7 = objc_retainBlock(v11);
  started = (void *)remote_device_start_browsing(11LL, &_dispatch_main_q, v7);
  v9 = dispatch_time(0LL, 120000000000LL);
  if ( dispatch_semaphore_wait(v6, v9) )
  {
    v10 = self->_log;
    if ( os_log_type_enabled(v10, OS_LOG_TYPE_ERROR) )
      sub_100014A24(a3, v10);
  }
  remote_device_browser_cancel(started);
  objc_release(v7);
  objc_release(v12);
  objc_release(v6);
  objc_release(started);
}