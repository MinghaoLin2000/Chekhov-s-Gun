-[UARPDFUUpdater stagedFirmwareApplicationComplete:withStatus:]
void __cdecl -[UARPDFUUpdater stagedFirmwareApplicationComplete:withStatus:](
        UARPDFUUpdater *self,
        SEL a2,
        id a3,
        unsigned __int64 a4)
{
  id v6; // x19
  OS_os_log *log; // x22
  OS_os_log *v8; // x22
  id v9; // x22
  OS_dispatch_queue *delegateQueue; // x23
  OS_os_log *v11; // x20
  _QWORD block[5]; // [xsp+8h] [xbp-98h] BYREF
  id v13; // [xsp+30h] [xbp-70h]
  unsigned __int64 v14; // [xsp+38h] [xbp-68h]
  uint8_t buf[4]; // [xsp+40h] [xbp-60h] BYREF
  const char *v16; // [xsp+44h] [xbp-5Ch]
  __int16 v17; // [xsp+4Ch] [xbp-54h]
  id v18; // [xsp+4Eh] [xbp-52h]
  __int16 v19; // [xsp+56h] [xbp-4Ah]
  unsigned __int64 v20; // [xsp+58h] [xbp-48h]

  v6 = objc_retain(a3);
  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_DEBUG) )
    sub_100018D60(log);
  v8 = self->_log;
  if ( os_log_type_enabled(v8, OS_LOG_TYPE_INFO) )
  {
    *(_DWORD *)buf = 136315650;
    v16 = "-[UARPDFUUpdater stagedFirmwareApplicationComplete:withStatus:]";
    v17 = 2112;
    v18 = v6;
    v19 = 2048;
    v20 = a4;
    _os_log_impl((void *)&_mh_execute_header, v8, OS_LOG_TYPE_INFO, "%s: accessory=%@, status=%lu", buf, 0x20u);
  }
  v9 = objc_retainAutoreleasedReturnValue(-[UARPDFUUpdater getDfuAccessoryForUarpAccessory:](self, "getDfuAccessoryForUarpAccessory:", v6));
  if ( v9 )
  {
    if ( (objc_opt_respondsToSelector(self->_goldRestoreDelegate, "stagedFirmwareApplicationComplete:withStatus:") & 1) != 0 )
    {
      delegateQueue = self->_delegateQueue;
      block[0] = _NSConcreteStackBlock;
      block[1] = 3254779904LL;
      block[2] = sub_10000974C;
      block[3] = &unk_100024450;
      block[4] = self;
      v13 = objc_retain(v9);
      v14 = a4;
      dispatch_async((dispatch_queue_t)delegateQueue, block);
      objc_release(v13);
    }
    -[UARPDFUUpdater removeAccessory:](self, "removeAccessory:", v9);
  }
  else
  {
    v11 = self->_log;
    if ( os_log_type_enabled(v11, OS_LOG_TYPE_ERROR) )
      sub_100018CEC(v6, v11);
  }
  objc_release(v9);
  objc_release(v6);
}