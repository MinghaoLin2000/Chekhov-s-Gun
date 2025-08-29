-[UARPUpdaterServiceDisplay ioKitRuleMatched:]
void __cdecl -[UARPUpdaterServiceDisplay ioKitRuleMatched:](UARPUpdaterServiceDisplay *self, SEL a2, id a3)
{
  id v4; // x19
  OS_os_log *log; // x21
  void *v6; // x22
  void *v7; // x0
  void *v8; // x21
  __int64 v9; // x1
  OS_os_log *v10; // x22
  int v11; // [xsp+0h] [xbp-50h] BYREF
  const char *v12; // [xsp+4h] [xbp-4Ch]
  __int16 v13; // [xsp+Ch] [xbp-44h]
  id v14; // [xsp+Eh] [xbp-42h]

  v4 = objc_retain(a3);
  -[UARPUpdaterDisplayControllerDelegate setIsBusy:](self->_displayController, "setIsBusy:", 1LL);
  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_DEFAULT) )
  {
    v11 = 136315394;
    v12 = "-[UARPUpdaterServiceDisplay ioKitRuleMatched:]";
    v13 = 2112;
    v14 = v4;
    _os_log_impl((void *)&_mh_execute_header, log, OS_LOG_TYPE_DEFAULT, "%s: %@", (uint8_t *)&v11, 0x16u);
  }
  v6 = objc_msgSend(v4, "registryEntryID");
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "identifier"));
  v8 = v7;
  if ( v6 )
  {
    objc_msgSend(v7, "rangeOfString:", CFSTR("deviceProbe"));
    if ( v9 )
    {
      -[UARPUpdaterDisplayControllerDelegate checkIfUpdateAvailable:](
        self->_displayController,
        "checkIfUpdateAvailable:",
        v6);
    }
    else if ( (unsigned int)objc_msgSend(v8, "isEqualTo:", CFSTR("dfuProbe"))
           || (unsigned int)objc_msgSend(v8, "isEqualTo:", CFSTR("recoveryProbe")) )
    {
      -[UARPUpdaterDisplayControllerDelegate updateDevice:](self->_displayController, "updateDevice:", v6);
    }
  }
  else
  {
    v10 = self->_log;
    if ( os_log_type_enabled(v10, OS_LOG_TYPE_ERROR) )
      sub_100013B6C(v10);
  }
  -[UARPUpdaterDisplayControllerDelegate setIsBusy:](self->_displayController, "setIsBusy:", 0LL);
  objc_release(v8);
  objc_release(v4);
}