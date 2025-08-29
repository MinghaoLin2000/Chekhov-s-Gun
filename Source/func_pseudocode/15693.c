-[UARPDFUUpdater holdPowerAssertionForAccessory]
void __cdecl -[UARPDFUUpdater holdPowerAssertionForAccessory](UARPDFUUpdater *self, SEL a2)
{
  OS_os_log *log; // x19
  NSString *v4; // x20
  OS_os_log *v5; // x21
  OS_os_log *v6; // x21
  uint8_t buf[4]; // [xsp+10h] [xbp-40h] BYREF
  const char *v8; // [xsp+14h] [xbp-3Ch]
  __int16 v9; // [xsp+1Ch] [xbp-34h]
  NSString *v10; // [xsp+1Eh] [xbp-32h]

  if ( self->_powerAssertionID )
  {
    log = self->_log;
    if ( os_log_type_enabled(log, OS_LOG_TYPE_ERROR) )
      sub_100017F1C(log);
  }
  else
  {
    v4 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithFormat:](
             &OBJC_CLASS___NSString,
             "stringWithFormat:",
             CFSTR("com.apple.UARPPowerAssertion-USBDFU")));
    if ( (createPowerAssertion() & 1) == 0 )
    {
      v5 = self->_log;
      if ( os_log_type_enabled(v5, OS_LOG_TYPE_ERROR) )
        sub_100017EA8(v4, v5);
    }
    v6 = self->_log;
    if ( os_log_type_enabled(v6, OS_LOG_TYPE_INFO) )
    {
      *(_DWORD *)buf = 136315394;
      v8 = "-[UARPDFUUpdater holdPowerAssertionForAccessory]";
      v9 = 2112;
      v10 = v4;
      _os_log_impl((void *)&_mh_execute_header, v6, OS_LOG_TYPE_INFO, "%s: Power assertion held for %@", buf, 0x16u);
    }
    self->_powerAssertionID = 0;
    objc_release(v4);
  }
}