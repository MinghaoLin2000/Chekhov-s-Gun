-[UARPDFUUpdater assetOnLocalStorage:assetID:]
void __cdecl -[UARPDFUUpdater assetOnLocalStorage:assetID:](UARPDFUUpdater *self, SEL a2, id a3, id a4)
{
  id v6; // x19
  id v7; // x21
  OS_os_log *log; // x22
  OS_os_log *v9; // x22
  void *v10; // x22
  NSArray *v11; // x23
  void *v12; // [xsp+8h] [xbp-58h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-50h] BYREF
  const char *v14; // [xsp+14h] [xbp-4Ch]
  __int16 v15; // [xsp+1Ch] [xbp-44h]
  id v16; // [xsp+1Eh] [xbp-42h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_INFO) )
  {
    *(_DWORD *)buf = 136315394;
    v14 = "-[UARPDFUUpdater assetOnLocalStorage:assetID:]";
    v15 = 2112;
    v16 = v7;
    _os_log_impl(
      (void *)&_mh_execute_header,
      log,
      OS_LOG_TYPE_INFO,
      "%s: Asset Found On Local Storage assetID = %@",
      buf,
      0x16u);
  }
  if ( (unsigned int)objc_msgSend(v6, "requiresPowerAssertion") )
  {
    v9 = self->_log;
    if ( os_log_type_enabled(v9, OS_LOG_TYPE_INFO) )
    {
      *(_DWORD *)buf = 136315394;
      v14 = "-[UARPDFUUpdater assetOnLocalStorage:assetID:]";
      v15 = 2112;
      v16 = v6;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v9,
        OS_LOG_TYPE_INFO,
        "%s: accessory = %@, requires power assertion",
        buf,
        0x16u);
    }
    -[UARPDFUUpdater holdPowerAssertionForAccessory](self, "holdPowerAssertionForAccessory");
  }
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "uarpAccessory"));
  v12 = v10;
  v11 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", &v12, 1LL));
  objc_release(v10);
  -[UARPController stageFirmwareUpdateOnAccessoryList:withUserIntent:](
    self->_uarpController,
    "stageFirmwareUpdateOnAccessoryList:withUserIntent:",
    v11,
    1LL);
  objc_release(v11);
  objc_release(v7);
  objc_release(v6);
}