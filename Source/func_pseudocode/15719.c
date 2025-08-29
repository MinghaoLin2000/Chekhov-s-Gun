-[UARPDFUUpdater firmwareStagingProgress:assetID:bytesSent:bytesTotal:]
void __cdecl -[UARPDFUUpdater firmwareStagingProgress:assetID:bytesSent:bytesTotal:](
        UARPDFUUpdater *self,
        SEL a2,
        id a3,
        id a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  id v10; // x19
  id v11; // x20
  id v12; // x21
  OS_os_log *log; // x25
  OS_dispatch_queue *delegateQueue; // x25
  _QWORD v15[5]; // [xsp+0h] [xbp-C0h] BYREF
  id v16; // [xsp+28h] [xbp-98h]
  unsigned __int64 v17; // [xsp+30h] [xbp-90h]
  unsigned __int64 v18; // [xsp+38h] [xbp-88h]
  uint8_t buf[4]; // [xsp+40h] [xbp-80h] BYREF
  const char *v20; // [xsp+44h] [xbp-7Ch]
  __int16 v21; // [xsp+4Ch] [xbp-74h]
  id v22; // [xsp+4Eh] [xbp-72h]
  __int16 v23; // [xsp+56h] [xbp-6Ah]
  id v24; // [xsp+58h] [xbp-68h]
  __int16 v25; // [xsp+60h] [xbp-60h]
  double v26; // [xsp+62h] [xbp-5Eh]

  v10 = objc_retain(a3);
  v11 = objc_retain(a4);
  v12 = objc_retainAutoreleasedReturnValue(-[UARPDFUUpdater getDfuAccessoryForUarpAccessory:](self, "getDfuAccessoryForUarpAccessory:", v10));
  log = self->_log;
  if ( v12 )
  {
    if ( os_log_type_enabled(self->_log, OS_LOG_TYPE_DEBUG) )
    {
      *(_DWORD *)buf = 136315906;
      v20 = "-[UARPDFUUpdater firmwareStagingProgress:assetID:bytesSent:bytesTotal:]";
      v21 = 2112;
      v22 = v10;
      v23 = 2112;
      v24 = v11;
      v25 = 2048;
      v26 = (float)((float)((float)a5 / (float)a6) * 100.0);
      _os_log_debug_impl(
        (void *)&_mh_execute_header,
        log,
        OS_LOG_TYPE_DEBUG,
        "%s: accessory=%@, assetID=%@, progress=%f",
        buf,
        0x2Au);
    }
    if ( (objc_opt_respondsToSelector(self->_goldRestoreDelegate, "firmwareStagingProgress:bytesSent:bytesTotal:") & 1) != 0 )
    {
      delegateQueue = self->_delegateQueue;
      v15[0] = _NSConcreteStackBlock;
      v15[1] = 3254779904LL;
      v15[2] = sub_100008034;
      v15[3] = &unk_100024420;
      v15[4] = self;
      v16 = objc_retain(v12);
      v17 = a5;
      v18 = a6;
      dispatch_async((dispatch_queue_t)delegateQueue, v15);
      objc_release(v16);
    }
  }
  else if ( os_log_type_enabled(self->_log, OS_LOG_TYPE_ERROR) )
  {
    sub_1000187F0(v10, log);
  }
  objc_release(v12);
  objc_release(v11);
  objc_release(v10);
}