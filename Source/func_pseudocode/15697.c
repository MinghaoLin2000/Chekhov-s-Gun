-[UARPDFUUpdater setDfuModeAccessoryID:]
bool __cdecl -[UARPDFUUpdater setDfuModeAccessoryID:](UARPDFUUpdater *self, SEL a2, id a3)
{
  id v4; // x19
  OS_os_log *log; // x21
  id v6; // x21
  OS_os_log *v7; // x22
  bool v8; // w22
  int v10; // [xsp+0h] [xbp-40h] BYREF
  const char *v11; // [xsp+4h] [xbp-3Ch]
  __int16 v12; // [xsp+Ch] [xbp-34h]
  id v13; // [xsp+Eh] [xbp-32h]

  v4 = objc_retain(a3);
  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_DEBUG) )
    sub_1000181C8(log);
  v6 = objc_retainAutoreleasedReturnValue(-[UARPDFUUpdater getDfuAccessoryForUarpAccessoryID:](self, "getDfuAccessoryForUarpAccessoryID:", v4));
  if ( (unsigned int)objc_msgSend(v6, "requiresPowerAssertion") )
  {
    v7 = self->_log;
    if ( os_log_type_enabled(v7, OS_LOG_TYPE_INFO) )
    {
      v10 = 136315394;
      v11 = "-[UARPDFUUpdater setDfuModeAccessoryID:]";
      v12 = 2112;
      v13 = v6;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v7,
        OS_LOG_TYPE_INFO,
        "%s: accessory = %@, requires power assertion",
        (uint8_t *)&v10,
        0x16u);
    }
    -[UARPDFUUpdater holdPowerAssertionForAccessory](self, "holdPowerAssertionForAccessory");
  }
  v8 = (unsigned int)objc_msgSend(v6, "setDfuMode") == 0;
  -[UARPDFUUpdater releasePowerAssertionForAccessory](self, "releasePowerAssertionForAccessory");
  objc_release(v6);
  objc_release(v4);
  return v8;
}