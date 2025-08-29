-[UARPUpdaterDisplayControllerDelegate checkForUpdatesAtAllLocations]
void __cdecl -[UARPUpdaterDisplayControllerDelegate checkForUpdatesAtAllLocations](
        UARPUpdaterDisplayControllerDelegate *self,
        SEL a2)
{
  OS_os_log *log; // x21
  id v4; // x22
  void *v5; // x21
  void *v6; // x22
  void *v7; // x23
  char v8; // w27
  __int64 v9; // x28
  void *i; // x19
  void *v11; // x25
  void *v12; // x24
  void *v13; // x25
  OS_os_log *v14; // x22
  DisplayMobileAssetUpdater *v15; // x22
  OS_os_log *v16; // x23
  SUOSUExternalUpdateProvider *obj; // [xsp+8h] [xbp-148h]
  __int128 v18; // [xsp+10h] [xbp-140h] BYREF
  __int128 v19; // [xsp+20h] [xbp-130h]
  __int128 v20; // [xsp+30h] [xbp-120h]
  __int128 v21; // [xsp+40h] [xbp-110h]
  uint8_t v22[128]; // [xsp+50h] [xbp-100h] BYREF
  uint8_t buf[4]; // [xsp+D0h] [xbp-80h] BYREF
  const char *v24; // [xsp+D4h] [xbp-7Ch]

  obj = objc_retain(self->_updateController);
  objc_sync_enter(obj);
  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_DEFAULT) )
  {
    *(_DWORD *)buf = 136315138;
    v24 = "-[UARPUpdaterDisplayControllerDelegate checkForUpdatesAtAllLocations]";
    _os_log_impl((void *)&_mh_execute_header, log, OS_LOG_TYPE_DEFAULT, "%s", buf, 0xCu);
  }
  v4 = objc_retainAutoreleasedReturnValue(-[UARPUpdaterDisplayControllerDelegate findApplicableDevices](self, "findApplicableDevices"));
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKeyedSubscript:", CFSTR("ContainerIDs")));
  objc_release(v4);
  v20 = 0u;
  v21 = 0u;
  v18 = 0u;
  v19 = 0u;
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "allKeys"));
  v7 = objc_msgSend(v6, "countByEnumeratingWithState:objects:count:", &v18, v22, 16LL);
  if ( !v7 )
  {
    objc_release(v6);
LABEL_13:
    v14 = self->_log;
    if ( os_log_type_enabled(v14, OS_LOG_TYPE_DEFAULT) )
    {
      *(_DWORD *)buf = 136315138;
      v24 = "-[UARPUpdaterDisplayControllerDelegate checkForUpdatesAtAllLocations]";
      _os_log_impl(
        (void *)&_mh_execute_header,
        v14,
        OS_LOG_TYPE_DEFAULT,
        "%s: No updates found, removing update from SU pref pane",
        buf,
        0xCu);
    }
    v15 = objc_retain(self->_mobileAssetCustomerUpdater);
    objc_sync_enter(v15);
    if ( !self->_notBootedAudienceUses )
    {
      v16 = self->_log;
      if ( os_log_type_enabled(v16, OS_LOG_TYPE_DEFAULT) )
      {
        *(_DWORD *)buf = 136315138;
        v24 = "-[UARPUpdaterDisplayControllerDelegate checkForUpdatesAtAllLocations]";
        _os_log_impl((void *)&_mh_execute_header, v16, OS_LOG_TYPE_DEFAULT, "%s: Asset audience not in use", buf, 0xCu);
      }
      *(_WORD *)&self->_customerAudienceUsed = 0;
      self->_stopUpdate = 1;
      -[DisplayMobileAssetUpdater abortDownloadAsset](self->_mobileAssetInternalUpdater, "abortDownloadAsset");
      -[DisplayMobileAssetUpdater abortDownloadAsset](self->_mobileAssetCustomerUpdater, "abortDownloadAsset");
      self->_stopUpdate = 0;
    }
    objc_sync_exit(v15);
    objc_release(v15);
    -[UARPUpdaterDisplayControllerDelegate removeAssets](self, "removeAssets");
    -[UARPUpdaterDisplayControllerDelegate revokeUserConsentRequest](self, "revokeUserConsentRequest");
    goto LABEL_20;
  }
  v8 = 0;
  v9 = *(_QWORD *)v19;
  do
  {
    for ( i = 0LL; i != v7; i = (char *)i + 1 )
    {
      if ( *(_QWORD *)v19 != v9 )
        objc_enumerationMutation(v6);
      v11 = *(void **)(*((_QWORD *)&v18 + 1) + 8LL * (_QWORD)i);
      v12 = objc_msgSend(v11, "unsignedLongLongValue");
      v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "objectForKeyedSubscript:", v11));
      LOBYTE(v12) = -[UARPUpdaterDisplayControllerDelegate checkForUpdateWithECID:usbContainerID:remote:](
                      self,
                      "checkForUpdateWithECID:usbContainerID:remote:",
                      v12,
                      v13,
                      (v8 & 1) == 0);
      objc_release(v13);
      v8 |= (unsigned __int8)v12;
    }
    v7 = objc_msgSend(v6, "countByEnumeratingWithState:objects:count:", &v18, v22, 16LL);
  }
  while ( v7 );
  objc_release(v6);
  if ( (v8 & 1) == 0 )
    goto LABEL_13;
LABEL_20:
  objc_release(v5);
  objc_sync_exit(obj);
  objc_release(obj);
}