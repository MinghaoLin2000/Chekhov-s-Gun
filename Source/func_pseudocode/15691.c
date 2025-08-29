-[UARPDFUUpdater matchingService:identifier:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[UARPDFUUpdater matchingService:identifier:](UARPDFUUpdater *self, SEL a2, unsigned int a3, id a4)
{
  __int64 v4; // x21
  id v6; // x19
  OS_os_log *log; // x22
  OS_os_log *v8; // x22
  id v9; // x21
  OS_os_log *v10; // x22
  OS_os_log *v11; // x20
  int v12; // [xsp+0h] [xbp-40h] BYREF
  const char *v13; // [xsp+4h] [xbp-3Ch]
  __int16 v14; // [xsp+Ch] [xbp-34h]
  id v15; // [xsp+Eh] [xbp-32h]

  v4 = *(_QWORD *)&a3;
  v6 = objc_retain(a4);
  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_DEBUG) )
    sub_100017E30(log);
  v8 = self->_log;
  if ( os_log_type_enabled(v8, OS_LOG_TYPE_INFO) )
  {
    v12 = 136315394;
    v13 = "-[UARPDFUUpdater matchingService:identifier:]";
    v14 = 2112;
    v15 = v6;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v8,
      OS_LOG_TYPE_INFO,
      "%s: Instantiating detected accessory %@",
      (uint8_t *)&v12,
      0x16u);
  }
  v9 = objc_retainAutoreleasedReturnValue(
         -[UARPDFUUpdater createAccessoryFromService:identifier:](
           self,
           "createAccessoryFromService:identifier:",
           v4,
           v6));
  if ( -[UARPDFUUpdater connectUARPForUARPAccessory:](self, "connectUARPForUARPAccessory:", v9) )
  {
    -[UARPDFUUpdater addAccessory:enableNotification:](self, "addAccessory:enableNotification:", v9, 1LL);
    v10 = self->_log;
    if ( os_log_type_enabled(v10, OS_LOG_TYPE_INFO) )
    {
      v12 = 136315394;
      v13 = "-[UARPDFUUpdater matchingService:identifier:]";
      v14 = 2112;
      v15 = v6;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v10,
        OS_LOG_TYPE_INFO,
        "%s: Kicking off update for matched identifier %@",
        (uint8_t *)&v12,
        0x16u);
    }
    -[UARPDFUUpdater startUpdateForAccessory:assetID:](self, "startUpdateForAccessory:assetID:", v9, 0LL);
  }
  else
  {
    v11 = self->_log;
    if ( os_log_type_enabled(v11, OS_LOG_TYPE_INFO) )
    {
      v12 = 136315394;
      v13 = "-[UARPDFUUpdater matchingService:identifier:]";
      v14 = 2112;
      v15 = v6;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v11,
        OS_LOG_TYPE_INFO,
        "%s: Unable to initialize UARP for identifier %@",
        (uint8_t *)&v12,
        0x16u);
    }
  }
  objc_release(v9);
  objc_release(v6);
}