-[UARPUpdaterDisplayControllerDelegate removeAssets]
void __cdecl -[UARPUpdaterDisplayControllerDelegate removeAssets](UARPUpdaterDisplayControllerDelegate *self, SEL a2)
{
  OS_os_log *log; // x20
  OS_os_log *v4; // x19
  DisplayMobileAssetUpdater *v5; // x20
  OS_os_log *v6; // x21
  id v7; // x21
  NSMutableDictionary *v8; // x22
  void *v9; // x23
  void *v10; // x24
  __int64 v11; // x27
  void *i; // x28
  void *v13; // x25
  void *v14; // x26
  void *v15; // x25
  void *v16; // x26
  __int128 v17; // [xsp+0h] [xbp-140h] BYREF
  __int128 v18; // [xsp+10h] [xbp-130h]
  __int128 v19; // [xsp+20h] [xbp-120h]
  __int128 v20; // [xsp+30h] [xbp-110h]
  uint8_t v21[128]; // [xsp+40h] [xbp-100h] BYREF
  uint8_t buf[4]; // [xsp+C0h] [xbp-80h] BYREF
  const char *v23; // [xsp+C4h] [xbp-7Ch]

  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_DEFAULT) )
  {
    *(_DWORD *)buf = 136315138;
    v23 = "-[UARPUpdaterDisplayControllerDelegate removeAssets]";
    _os_log_impl((void *)&_mh_execute_header, log, OS_LOG_TYPE_DEFAULT, "%s", buf, 0xCu);
  }
  if ( !-[NSMutableSet count](self->_checkInfo, "count")
    && (self->_consentStage != 2 || !-[NSMutableDictionary count](self->_consentInfo, "count")) )
  {
    if ( -[UARPUpdaterDisplayControllerDelegate getDefaultBool:defaultValue:](
           self,
           "getDefaultBool:defaultValue:",
           CFSTR("DoNotDeleteAsset"),
           0LL) )
    {
      v4 = self->_log;
      if ( os_log_type_enabled(v4, OS_LOG_TYPE_DEFAULT) )
      {
        *(_DWORD *)buf = 136315138;
        v23 = "-[UARPUpdaterDisplayControllerDelegate removeAssets]";
        _os_log_impl(
          (void *)&_mh_execute_header,
          v4,
          OS_LOG_TYPE_DEFAULT,
          "%s: User requested assets not be deleted",
          buf,
          0xCu);
      }
    }
    else
    {
      v5 = objc_retain(self->_mobileAssetInternalUpdater);
      objc_sync_enter(v5);
      if ( !-[NSMutableSet count](self->_checkInfo, "count")
        && (self->_consentStage != 2 || !-[NSMutableDictionary count](self->_consentInfo, "count")) )
      {
        v6 = self->_log;
        if ( os_log_type_enabled(v6, OS_LOG_TYPE_DEFAULT) )
        {
          *(_DWORD *)buf = 136315138;
          v23 = "-[UARPUpdaterDisplayControllerDelegate removeAssets]";
          _os_log_impl((void *)&_mh_execute_header, v6, OS_LOG_TYPE_DEFAULT, "%s: Deleting assets", buf, 0xCu);
        }
        v7 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableArray);
        v8 = objc_retain(self->_restoreInfo);
        objc_sync_enter(v8);
        v17 = 0u;
        v18 = 0u;
        v19 = 0u;
        v20 = 0u;
        v9 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary allValues](self->_restoreInfo, "allValues", 0LL));
        v10 = objc_msgSend(v9, "countByEnumeratingWithState:objects:count:", &v17, v21, 16LL);
        if ( v10 )
        {
          v11 = *(_QWORD *)v18;
          do
          {
            for ( i = 0LL; i != v10; i = (char *)i + 1 )
            {
              if ( *(_QWORD *)v18 != v11 )
                objc_enumerationMutation(v9);
              v13 = *(void **)(*((_QWORD *)&v17 + 1) + 8LL * (_QWORD)i);
              v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "asset"));
              objc_release(v14);
              if ( v14 )
              {
                v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "asset"));
                v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "assetId"));
                objc_msgSend(v7, "addObject:", v16);
                objc_release(v16);
                objc_release(v15);
              }
            }
            v10 = objc_msgSend(v9, "countByEnumeratingWithState:objects:count:", &v17, v21, 16LL);
          }
          while ( v10 );
        }
        objc_release(v9);
        objc_sync_exit(v8);
        objc_release(v8);
        -[DisplayMobileAssetUpdater syncPurgeAssetsExceptIDs:](
          self->_mobileAssetCustomerUpdater,
          "syncPurgeAssetsExceptIDs:",
          v7);
        -[MobileAssetUpdater setAsset:](self->_mobileAssetCustomerUpdater, "setAsset:", 0LL);
        -[MobileAssetUpdater setAsset:](self->_mobileAssetInternalUpdater, "setAsset:", 0LL);
        objc_release(v7);
      }
      objc_sync_exit(v5);
      objc_release(v5);
    }
  }
}