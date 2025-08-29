-[UARPUpdaterDisplayControllerDelegate recheckUpdates]
void __cdecl -[UARPUpdaterDisplayControllerDelegate recheckUpdates](UARPUpdaterDisplayControllerDelegate *self, SEL a2)
{
  OS_os_log *log; // x20
  OS_os_log *v4; // x19
  OS_os_log *v5; // x20
  DisplayMobileAssetUpdater *v6; // x20
  OS_os_log *v7; // x21
  NSMutableSet *v8; // x20
  int v9; // [xsp+0h] [xbp-40h] BYREF
  const char *v10; // [xsp+4h] [xbp-3Ch]

  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_DEFAULT) )
  {
    v9 = 136315138;
    v10 = "-[UARPUpdaterDisplayControllerDelegate recheckUpdates]";
    _os_log_impl((void *)&_mh_execute_header, log, OS_LOG_TYPE_DEFAULT, "%s", (uint8_t *)&v9, 0xCu);
  }
  if ( self->_consentStage )
  {
    v4 = self->_log;
    if ( os_log_type_enabled(v4, OS_LOG_TYPE_DEFAULT) )
    {
      v9 = 136315138;
      v10 = "-[UARPUpdaterDisplayControllerDelegate recheckUpdates]";
      _os_log_impl(
        (void *)&_mh_execute_header,
        v4,
        OS_LOG_TYPE_DEFAULT,
        "%s: User has already given consent for update, aborting scan",
        (uint8_t *)&v9,
        0xCu);
    }
  }
  else if ( -[UARPUpdaterDisplayControllerDelegate getDefaultBool:defaultValue:](
              self,
              "getDefaultBool:defaultValue:",
              CFSTR("NoPrefPaneUpdates"),
              0LL) )
  {
    v5 = self->_log;
    if ( os_log_type_enabled(v5, OS_LOG_TYPE_DEFAULT) )
    {
      v9 = 136315138;
      v10 = "-[UARPUpdaterDisplayControllerDelegate recheckUpdates]";
      _os_log_impl(
        (void *)&_mh_execute_header,
        v5,
        OS_LOG_TYPE_DEFAULT,
        "%s: User requests no pref pane updates",
        (uint8_t *)&v9,
        0xCu);
    }
    -[UARPUpdaterDisplayControllerDelegate revokeUserConsentRequest](self, "revokeUserConsentRequest");
  }
  else
  {
    v6 = objc_retain(self->_mobileAssetCustomerUpdater);
    objc_sync_enter(v6);
    if ( !self->_notBootedAudienceUses )
    {
      v7 = self->_log;
      if ( os_log_type_enabled(v7, OS_LOG_TYPE_DEFAULT) )
      {
        v9 = 136315138;
        v10 = "-[UARPUpdaterDisplayControllerDelegate recheckUpdates]";
        _os_log_impl(
          (void *)&_mh_execute_header,
          v7,
          OS_LOG_TYPE_DEFAULT,
          "%s: Asset audience not in use",
          (uint8_t *)&v9,
          0xCu);
      }
      *(_WORD *)&self->_customerAudienceUsed = 0;
    }
    objc_sync_exit(v6);
    objc_release(v6);
    v8 = objc_retain(self->_checkInfo);
    objc_sync_enter(v8);
    -[NSMutableSet removeAllObjects](self->_checkInfo, "removeAllObjects");
    objc_sync_exit(v8);
    objc_release(v8);
    -[UARPUpdaterDisplayControllerDelegate checkForUpdatesAtAllLocations](self, "checkForUpdatesAtAllLocations");
  }
}