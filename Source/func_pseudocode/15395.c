-[UARPUpdaterDisplayControllerDelegate checkIfUpdateAvailable:]
void __cdecl -[UARPUpdaterDisplayControllerDelegate checkIfUpdateAvailable:](
        UARPUpdaterDisplayControllerDelegate *self,
        SEL a2,
        unsigned __int64 a3)
{
  void *v5; // x21
  unsigned __int8 v6; // w22
  OS_os_log *log; // x19
  const char *v8; // x3
  unsigned __int64 v9; // x0
  unsigned __int64 v10; // x21
  id v11; // x20
  OS_os_log *v12; // x19
  OS_os_log *v13; // x19
  int v14; // [xsp+0h] [xbp-40h] BYREF
  const char *v15; // [xsp+4h] [xbp-3Ch]

  v5 = objc_retainAutoreleasedReturnValue(+[SUPreferenceManager defaultManager](&OBJC_CLASS___SUPreferenceManager, "defaultManager"));
  v6 = (unsigned __int8)objc_msgSend(v5, "automaticallyCheckForUpdates");
  objc_release(v5);
  if ( (v6 & 1) == 0 )
  {
    log = self->_log;
    if ( !os_log_type_enabled(log, OS_LOG_TYPE_DEFAULT) )
      return;
    v14 = 136315138;
    v15 = "-[UARPUpdaterDisplayControllerDelegate checkIfUpdateAvailable:]";
    v8 = "%s: Automatically check for updates not enabled";
    goto LABEL_10;
  }
  if ( -[UARPUpdaterDisplayControllerDelegate getDefaultBool:defaultValue:](
         self,
         "getDefaultBool:defaultValue:",
         CFSTR("NoPrefPaneUpdates"),
         0LL) )
  {
    log = self->_log;
    if ( !os_log_type_enabled(log, OS_LOG_TYPE_DEFAULT) )
      return;
    v14 = 136315138;
    v15 = "-[UARPUpdaterDisplayControllerDelegate checkIfUpdateAvailable:]";
    v8 = "%s: User requests no pref pane updates";
LABEL_10:
    _os_log_impl((void *)&_mh_execute_header, log, OS_LOG_TYPE_DEFAULT, v8, (uint8_t *)&v14, 0xCu);
    return;
  }
  if ( -[UARPUpdaterDisplayControllerDelegate consentRequested](self, "consentRequested") )
  {
    log = self->_log;
    if ( !os_log_type_enabled(log, OS_LOG_TYPE_DEFAULT) )
      return;
    v14 = 136315138;
    v15 = "-[UARPUpdaterDisplayControllerDelegate checkIfUpdateAvailable:]";
    v8 = "%s: User consent already requested";
    goto LABEL_10;
  }
  v9 = -[UARPUpdaterDisplayControllerDelegate getECID:](self, "getECID:", a3);
  if ( v9 )
  {
    v10 = v9;
    v11 = objc_retainAutoreleasedReturnValue(-[UARPUpdaterDisplayControllerDelegate getUSBContainerID:](self, "getUSBContainerID:", a3));
    if ( v11 )
    {
      -[UARPUpdaterDisplayControllerDelegate checkForUpdateWithECID:usbContainerID:remote:](
        self,
        "checkForUpdateWithECID:usbContainerID:remote:",
        v10,
        v11,
        1LL);
    }
    else
    {
      v13 = self->_log;
      if ( os_log_type_enabled(v13, OS_LOG_TYPE_ERROR) )
        sub_1000147D4(v10, v13);
    }
    objc_release(v11);
  }
  else
  {
    v12 = self->_log;
    if ( os_log_type_enabled(v12, OS_LOG_TYPE_ERROR) )
      sub_100014760(a3, v12);
  }
}