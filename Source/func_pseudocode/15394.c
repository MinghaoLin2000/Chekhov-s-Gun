-[UARPUpdaterDisplayControllerDelegate audienceChange]
void __cdecl -[UARPUpdaterDisplayControllerDelegate audienceChange](UARPUpdaterDisplayControllerDelegate *self, SEL a2)
{
  OS_os_log *log; // x20
  OS_os_log *v4; // x19
  DisplayMobileAssetUpdater *v5; // x20
  NSMutableSet *v6; // x20
  int v7; // [xsp+0h] [xbp-30h] BYREF
  const char *v8; // [xsp+4h] [xbp-2Ch]

  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_DEFAULT) )
  {
    v7 = 136315138;
    v8 = "-[UARPUpdaterDisplayControllerDelegate audienceChange]";
    _os_log_impl((void *)&_mh_execute_header, log, OS_LOG_TYPE_DEFAULT, "%s", (uint8_t *)&v7, 0xCu);
  }
  if ( -[UARPUpdaterDisplayControllerDelegate getDefaultBool:defaultValue:](
         self,
         "getDefaultBool:defaultValue:",
         CFSTR("NoPrefPaneUpdates"),
         0LL) )
  {
    v4 = self->_log;
    if ( os_log_type_enabled(v4, OS_LOG_TYPE_DEFAULT) )
    {
      v7 = 136315138;
      v8 = "-[UARPUpdaterDisplayControllerDelegate audienceChange]";
      _os_log_impl(
        (void *)&_mh_execute_header,
        v4,
        OS_LOG_TYPE_DEFAULT,
        "%s: User requests no pref pane updates",
        (uint8_t *)&v7,
        0xCu);
    }
  }
  else
  {
    if ( self->_consentStage == 1 )
      self->_audienceChange = 1;
    else
      self->_consentStage = 0;
    v5 = objc_retain(self->_mobileAssetCustomerUpdater);
    objc_sync_enter(v5);
    *(_WORD *)&self->_customerAudienceUsed = 0;
    objc_sync_exit(v5);
    objc_release(v5);
    v6 = objc_retain(self->_checkInfo);
    objc_sync_enter(v6);
    -[NSMutableSet removeAllObjects](self->_checkInfo, "removeAllObjects");
    -[DisplayMobileAssetUpdater abortDownloadAsset](self->_mobileAssetInternalUpdater, "abortDownloadAsset");
    -[DisplayMobileAssetUpdater abortDownloadAsset](self->_mobileAssetCustomerUpdater, "abortDownloadAsset");
    -[UARPUpdaterDisplayControllerDelegate removeAssets](self, "removeAssets");
    -[DisplayMobileAssetUpdater syncPurgeCatalog](self->_mobileAssetCustomerUpdater, "syncPurgeCatalog");
    objc_sync_exit(v6);
    objc_release(v6);
    -[UARPUpdaterDisplayControllerDelegate checkForUpdatesAtAllLocations](self, "checkForUpdatesAtAllLocations");
  }
}