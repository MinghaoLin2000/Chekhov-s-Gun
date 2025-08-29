-[UARPUpdaterDisplayControllerDelegate dasUpdateCheck]
void __cdecl -[UARPUpdaterDisplayControllerDelegate dasUpdateCheck](UARPUpdaterDisplayControllerDelegate *self, SEL a2)
{
  void *v3; // x20
  unsigned int v4; // w21
  OS_os_log *log; // x19
  const char *v6; // x3
  int v7; // [xsp+0h] [xbp-40h] BYREF
  const char *v8; // [xsp+4h] [xbp-3Ch]
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(+[SUPreferenceManager defaultManager](&OBJC_CLASS___SUPreferenceManager, "defaultManager"));
  v4 = (unsigned int)objc_msgSend(v3, "automaticallyCheckForUpdates");
  objc_release(v3);
  if ( v4 )
  {
    log = self->_log;
    if ( !os_log_type_enabled(log, OS_LOG_TYPE_DEFAULT) )
      return;
    v7 = 136315138;
    v8 = "-[UARPUpdaterDisplayControllerDelegate dasUpdateCheck]";
    v6 = "%s: Automatically check for updates not enabled";
LABEL_10:
    _os_log_impl((void *)&_mh_execute_header, log, OS_LOG_TYPE_DEFAULT, v6, (uint8_t *)&v7, 0xCu);
    return;
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
    v7 = 136315138;
    v8 = "-[UARPUpdaterDisplayControllerDelegate dasUpdateCheck]";
    v6 = "%s: User requests no pref pane updates";
    goto LABEL_10;
  }
  if ( -[UARPUpdaterDisplayControllerDelegate consentRequested](self, "consentRequested") )
  {
    log = self->_log;
    if ( !os_log_type_enabled(log, OS_LOG_TYPE_DEFAULT) )
      return;
    v7 = 136315138;
    v8 = "-[UARPUpdaterDisplayControllerDelegate dasUpdateCheck]";
    v6 = "%s: User consent already requested";
    goto LABEL_10;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[UARPUpdaterDisplayControllerDelegate checkForUpdatesAtAllLocations](self, "checkForUpdatesAtAllLocations");
}