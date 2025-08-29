-[UARPDFUUpdater firmwareStagingComplete:assetID:withStatus:]
void __cdecl -[UARPDFUUpdater firmwareStagingComplete:assetID:withStatus:](
        UARPDFUUpdater *self,
        SEL a2,
        id a3,
        id a4,
        unsigned __int64 a5)
{
  id v8; // x19
  id v9; // x20
  OS_os_log *log; // x23
  id v11; // x23
  OS_dispatch_queue *delegateQueue; // x24
  OS_os_log *v13; // x21
  _QWORD block[5]; // [xsp+8h] [xbp-A8h] BYREF
  id v15; // [xsp+30h] [xbp-80h]
  unsigned __int64 v16; // [xsp+38h] [xbp-78h]
  uint8_t buf[4]; // [xsp+40h] [xbp-70h] BYREF
  const char *v18; // [xsp+44h] [xbp-6Ch]
  __int16 v19; // [xsp+4Ch] [xbp-64h]
  id v20; // [xsp+4Eh] [xbp-62h]
  __int16 v21; // [xsp+56h] [xbp-5Ah]
  id v22; // [xsp+58h] [xbp-58h]
  __int16 v23; // [xsp+60h] [xbp-50h]
  unsigned __int64 v24; // [xsp+62h] [xbp-4Eh]

  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_INFO) )
  {
    *(_DWORD *)buf = 136315906;
    v18 = "-[UARPDFUUpdater firmwareStagingComplete:assetID:withStatus:]";
    v19 = 2112;
    v20 = v8;
    v21 = 2112;
    v22 = v9;
    v23 = 2048;
    v24 = a5;
    _os_log_impl(
      (void *)&_mh_execute_header,
      log,
      OS_LOG_TYPE_INFO,
      "%s: accessory=%@, assetID=%@, status=%lu",
      buf,
      0x2Au);
  }
  v11 = objc_retainAutoreleasedReturnValue(-[UARPDFUUpdater getDfuAccessoryForUarpAccessory:](self, "getDfuAccessoryForUarpAccessory:", v8));
  if ( v11 )
  {
    if ( (objc_opt_respondsToSelector(self->_goldRestoreDelegate, "firmwareStagingComplete:withStatus:") & 1) != 0 )
    {
      delegateQueue = self->_delegateQueue;
      block[0] = _NSConcreteStackBlock;
      block[1] = 3254779904LL;
      block[2] = sub_100008280;
      block[3] = &unk_100024450;
      block[4] = self;
      v15 = objc_retain(v11);
      v16 = a5;
      dispatch_async((dispatch_queue_t)delegateQueue, block);
      objc_release(v15);
    }
  }
  else
  {
    v13 = self->_log;
    if ( os_log_type_enabled(v13, OS_LOG_TYPE_ERROR) )
      sub_100018864(v8, v13);
  }
  objc_release(v11);
  objc_release(v9);
  objc_release(v8);
}