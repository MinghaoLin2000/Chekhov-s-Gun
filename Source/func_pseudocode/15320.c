-[UARPUpdaterServiceDisplay bsdNotificationReceived:]
void __cdecl -[UARPUpdaterServiceDisplay bsdNotificationReceived:](UARPUpdaterServiceDisplay *self, SEL a2, id a3)
{
  id v4; // x19
  OS_os_log *log; // x21
  int v6; // [xsp+0h] [xbp-40h] BYREF
  const char *v7; // [xsp+4h] [xbp-3Ch]
  __int16 v8; // [xsp+Ch] [xbp-34h]
  id v9; // [xsp+Eh] [xbp-32h]

  v4 = objc_retain(a3);
  -[UARPUpdaterDisplayControllerDelegate setIsBusy:](self->_displayController, "setIsBusy:", 1LL);
  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_DEFAULT) )
  {
    v6 = 136315394;
    v7 = "-[UARPUpdaterServiceDisplay bsdNotificationReceived:]";
    v8 = 2112;
    v9 = v4;
    _os_log_impl((void *)&_mh_execute_header, log, OS_LOG_TYPE_DEFAULT, "%s: %@", (uint8_t *)&v6, 0x16u);
  }
  if ( (unsigned int)objc_msgSend(v4, "isEqualToString:", CFSTR("com.apple.SoftwareUpdate.ExternalUpdatesChanged")) )
  {
    -[UARPUpdaterDisplayControllerDelegate audienceChange](self->_displayController, "audienceChange");
  }
  else if ( (unsigned int)objc_msgSend(v4, "isEqualToString:", CFSTR("com.apple.SoftwareUpdate.ScanTriggered")) )
  {
    -[UARPUpdaterDisplayControllerDelegate recheckUpdates](self->_displayController, "recheckUpdates");
  }
  else if ( (unsigned int)objc_msgSend(
                            v4,
                            "isEqualToString:",
                            CFSTR("com.apple.SoftwareUpdate.ExternalUpdateCancelled")) )
  {
    -[UARPUpdaterDisplayControllerDelegate stopUpdates](self->_displayController, "stopUpdates");
  }
  -[UARPUpdaterDisplayControllerDelegate setIsBusy:](self->_displayController, "setIsBusy:", 0LL);
  objc_release(v4);
}