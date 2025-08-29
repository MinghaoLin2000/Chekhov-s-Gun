-[UARPUpdaterDisplayControllerDelegate stopUpdates]
void __cdecl -[UARPUpdaterDisplayControllerDelegate stopUpdates](UARPUpdaterDisplayControllerDelegate *self, SEL a2)
{
  OS_os_log *log; // x20
  int v4; // [xsp+0h] [xbp-30h] BYREF
  const char *v5; // [xsp+4h] [xbp-2Ch]

  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_DEFAULT) )
  {
    v4 = 136315138;
    v5 = "-[UARPUpdaterDisplayControllerDelegate stopUpdates]";
    _os_log_impl((void *)&_mh_execute_header, log, OS_LOG_TYPE_DEFAULT, "%s", (uint8_t *)&v4, 0xCu);
  }
  if ( self->_consentStage == 1 )
    self->_stopUpdate = 1;
  -[DisplayMobileAssetUpdater abortDownloadAsset](self->_mobileAssetInternalUpdater, "abortDownloadAsset");
  -[DisplayMobileAssetUpdater abortDownloadAsset](self->_mobileAssetCustomerUpdater, "abortDownloadAsset");
}