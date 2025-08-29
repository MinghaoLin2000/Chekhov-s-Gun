-[UARPUpdaterServiceDisplay dasActivityReceived:]
void __cdecl -[UARPUpdaterServiceDisplay dasActivityReceived:](UARPUpdaterServiceDisplay *self, SEL a2, id a3)
{
  id v4; // x19
  OS_os_log *log; // x21
  void *v6; // x21
  unsigned int v7; // w22
  int v8; // [xsp+0h] [xbp-50h] BYREF
  const char *v9; // [xsp+4h] [xbp-4Ch]
  __int16 v10; // [xsp+Ch] [xbp-44h]
  id v11; // [xsp+Eh] [xbp-42h]

  v4 = objc_retain(a3);
  -[UARPUpdaterDisplayControllerDelegate setIsBusy:](self->_displayController, "setIsBusy:", 1LL);
  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_DEFAULT) )
  {
    v8 = 136315394;
    v9 = "-[UARPUpdaterServiceDisplay dasActivityReceived:]";
    v10 = 2112;
    v11 = v4;
    _os_log_impl((void *)&_mh_execute_header, log, OS_LOG_TYPE_DEFAULT, "%s: %@", (uint8_t *)&v8, 0x16u);
  }
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "identifier"));
  v7 = (unsigned int)objc_msgSend(v6, "isEqualToString:", CFSTR("AppleDisplayTimer"));
  objc_release(v6);
  if ( v7 )
    -[UARPUpdaterDisplayControllerDelegate dasUpdateCheck](self->_displayController, "dasUpdateCheck");
  -[UARPUpdaterDisplayControllerDelegate setIsBusy:](self->_displayController, "setIsBusy:", 0LL);
  objc_release(v4);
}