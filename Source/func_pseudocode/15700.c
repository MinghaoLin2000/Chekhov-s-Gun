-[UARPDFUUpdater assetTransferComplete:assetID:status:]
void __cdecl -[UARPDFUUpdater assetTransferComplete:assetID:status:](
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
  OS_os_log *v12; // x21
  int v13; // [xsp+0h] [xbp-50h] BYREF
  const char *v14; // [xsp+4h] [xbp-4Ch]
  __int16 v15; // [xsp+Ch] [xbp-44h]
  id v16; // [xsp+Eh] [xbp-42h]

  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_INFO) )
  {
    v13 = 136315394;
    v14 = "-[UARPDFUUpdater assetTransferComplete:assetID:status:]";
    v15 = 2112;
    v16 = v8;
    _os_log_impl(
      (void *)&_mh_execute_header,
      log,
      OS_LOG_TYPE_INFO,
      "%s: Asset Staging complete = %@",
      (uint8_t *)&v13,
      0x16u);
  }
  v11 = objc_retainAutoreleasedReturnValue(-[UARPDFUUpdater getDfuAccessoryForUarpAccessoryID:](self, "getDfuAccessoryForUarpAccessoryID:", v8));
  if ( v11 )
  {
    -[UARPDFUUpdater accessoryTransferComplete:assetID:status:](
      self,
      "accessoryTransferComplete:assetID:status:",
      v11,
      v9,
      a5);
  }
  else
  {
    v12 = self->_log;
    if ( os_log_type_enabled(v12, OS_LOG_TYPE_ERROR) )
      sub_100018330(v8, v12);
  }
  objc_release(v11);
  objc_release(v9);
  objc_release(v8);
}