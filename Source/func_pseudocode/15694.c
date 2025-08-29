-[UARPDFUUpdater releasePowerAssertionForAccessory]
void __cdecl -[UARPDFUUpdater releasePowerAssertionForAccessory](UARPDFUUpdater *self, SEL a2)
{
  __int64 powerAssertionID; // x0
  OS_os_log *log; // x20
  OS_os_log *v5; // x20
  OS_os_log *v6; // x19
  int v7; // [xsp+0h] [xbp-30h] BYREF
  const char *v8; // [xsp+4h] [xbp-2Ch]

  powerAssertionID = self->_powerAssertionID;
  if ( (_DWORD)powerAssertionID )
  {
    if ( (releasePowerAssertion(powerAssertionID, a2) & 1) == 0 )
    {
      log = self->_log;
      if ( os_log_type_enabled(log, OS_LOG_TYPE_ERROR) )
        sub_100017FE4(log);
    }
    v5 = self->_log;
    if ( os_log_type_enabled(v5, OS_LOG_TYPE_INFO) )
    {
      v7 = 136315138;
      v8 = "-[UARPDFUUpdater releasePowerAssertionForAccessory]";
      _os_log_impl(
        (void *)&_mh_execute_header,
        v5,
        OS_LOG_TYPE_INFO,
        "%s: Power assertion released for USBDFU",
        (uint8_t *)&v7,
        0xCu);
    }
    self->_powerAssertionID = 0;
  }
  else
  {
    v6 = self->_log;
    if ( os_log_type_enabled(v6, OS_LOG_TYPE_ERROR) )
      sub_100017F60(v6);
  }
}