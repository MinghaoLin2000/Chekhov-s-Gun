-[UARPUSBDFUAccessory disableDisconnectCallback]
int __cdecl -[UARPUSBDFUAccessory disableDisconnectCallback](UARPUSBDFUAccessory *self, SEL a2)
{
  boolean_t IsValid; // w21
  OS_os_log *log; // x20
  _BOOL4 v5; // w0
  int v7; // [xsp+0h] [xbp-40h] BYREF
  const char *v8; // [xsp+4h] [xbp-3Ch]
  __int16 v9; // [xsp+Ch] [xbp-34h]
  UARPUSBDFUAccessory *v10; // [xsp+Eh] [xbp-32h]

  IsValid = IOIteratorIsValid(self->_notificationIterator);
  log = self->_log;
  v5 = os_log_type_enabled(log, OS_LOG_TYPE_INFO);
  if ( IsValid )
  {
    if ( v5 )
    {
      v7 = 136315394;
      v8 = "-[UARPUSBDFUAccessory disableDisconnectCallback]";
      v9 = 2112;
      v10 = self;
      _os_log_impl(
        (void *)&_mh_execute_header,
        log,
        OS_LOG_TYPE_INFO,
        "%s: Disabling disconnect callback for %@",
        (uint8_t *)&v7,
        0x16u);
    }
    IOObjectRelease(self->_notificationIterator);
    self->_notificationIterator = 0;
  }
  else if ( v5 )
  {
    v7 = 136315394;
    v8 = "-[UARPUSBDFUAccessory disableDisconnectCallback]";
    v9 = 2112;
    v10 = self;
    _os_log_impl(
      (void *)&_mh_execute_header,
      log,
      OS_LOG_TYPE_INFO,
      "%s: Disconnect callback is already disabled for %@",
      (uint8_t *)&v7,
      0x16u);
  }
  return 0;
}