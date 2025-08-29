-[UARPDFUUpdater assetDownloadFailed:assetID:]
void __cdecl -[UARPDFUUpdater assetDownloadFailed:assetID:](UARPDFUUpdater *self, SEL a2, id a3, id a4)
{
  id v6; // x19
  id v7; // x21
  OS_os_log *log; // x22
  OS_dispatch_queue *delegateQueue; // x22
  _QWORD block[5]; // [xsp+8h] [xbp-88h] BYREF
  id v11; // [xsp+30h] [xbp-60h]
  id v12; // [xsp+38h] [xbp-58h]
  uint8_t buf[4]; // [xsp+40h] [xbp-50h] BYREF
  const char *v14; // [xsp+44h] [xbp-4Ch]
  __int16 v15; // [xsp+4Ch] [xbp-44h]
  id v16; // [xsp+4Eh] [xbp-42h]
  __int16 v17; // [xsp+56h] [xbp-3Ah]
  id v18; // [xsp+58h] [xbp-38h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_INFO) )
  {
    *(_DWORD *)buf = 136315650;
    v14 = "-[UARPDFUUpdater assetDownloadFailed:assetID:]";
    v15 = 2112;
    v16 = v6;
    v17 = 2112;
    v18 = v7;
    _os_log_impl((void *)&_mh_execute_header, log, OS_LOG_TYPE_INFO, "%s: dfuotp = %@, assetID = %@", buf, 0x20u);
  }
  if ( (objc_opt_respondsToSelector(self->_goldRestoreDelegate, "assetAvailablityUpdateForAccessoryID:assetID:") & 1) != 0 )
  {
    delegateQueue = self->_delegateQueue;
    block[0] = _NSConcreteStackBlock;
    block[1] = 3254779904LL;
    block[2] = sub_10000743C;
    block[3] = &unk_100024390;
    block[4] = self;
    v11 = objc_retain(v6);
    v12 = objc_retain(v7);
    dispatch_async((dispatch_queue_t)delegateQueue, block);
    objc_release(v12);
    objc_release(v11);
  }
  -[UARPDFUUpdater removeAccessory:](self, "removeAccessory:", v6);
  objc_release(v7);
  objc_release(v6);
}