-[UARPUpdaterDisplayControllerDelegate updateDevice:]
void __cdecl -[UARPUpdaterDisplayControllerDelegate updateDevice:](
        UARPUpdaterDisplayControllerDelegate *self,
        SEL a2,
        unsigned __int64 a3)
{
  OS_os_log *log; // x19
  unsigned __int64 v6; // x22
  NSNumber *v7; // x19
  void *v8; // x21
  void *v9; // x23
  _BOOL4 v10; // w24
  OS_os_log *v11; // x20
  restoreInfo *v12; // x21
  NSMutableDictionary *v13; // x26
  void *v14; // x23
  OS_os_log *v15; // x20
  OS_os_log *v16; // x19
  __int64 v17; // x24
  dispatch_semaphore_s *v18; // x23
  dispatch_time_t v19; // x0
  bool v20; // w25
  OS_os_log *v21; // x23
  __AMRestorableDevice *v22; // x0
  OS_os_log *v23; // x23
  void *v24; // x23
  dispatch_semaphore_s *v25; // x23
  OS_os_log *v26; // x23
  void *v27; // x25
  id v28; // x23
  void *v29; // x25
  int AppBooleanValue; // w0
  _BOOL8 v31; // x23
  unsigned __int8 v32; // w26
  int i; // w28
  id v34; // x0
  OS_os_log *v35; // x25
  unsigned int v36; // w28
  __int64 v37; // x0
  __int64 v38; // x26
  OS_os_log *v39; // x27
  NSMutableDictionary *v40; // x27
  OS_os_log *v41; // x27
  DisplayMobileAssetUpdater *v43; // x27
  int v44; // w8
  OS_os_log *v45; // x28
  __AMRestorableDevice *v46; // x27
  void *v47; // x26
  OS_os_log *v48; // x26
  OS_os_log *v49; // x26
  NSNumber *v50; // x26
  unsigned int j; // w28
  OS_os_log *v52; // x23
  id v53; // x23
  dispatch_semaphore_s *v54; // x23
  dispatch_time_t v55; // x0
  bool v56; // w27
  OS_os_log *v57; // x23
  OS_dispatch_queue *v58; // x23
  dispatch_semaphore_t v59; // x23
  dispatch_queue_s *v60; // x27
  dispatch_semaphore_s *v61; // x23
  dispatch_time_t v62; // x0
  unsigned int v63; // w0
  OS_os_log *v64; // x23
  OS_os_log *v65; // x23
  OS_os_log *v66; // x23
  dispatch_semaphore_t v67; // x23
  dispatch_semaphore_s *v68; // x23
  dispatch_time_t v69; // x0
  bool v70; // w27
  OS_os_log *v71; // x23
  __AMRestorableDevice *v72; // x0
  OS_os_log *v73; // x23
  void *v74; // x23
  OS_os_log *v75; // x23
  NSMutableDictionary *trmRegistryEntryIDs; // x28
  os_log_s *v77; // x27
  void *v78; // x23
  void *v79; // x0
  void *v80; // x22
  NSMutableSet *v81; // x22
  NSMutableDictionary *v82; // x22
  OS_os_log *v83; // x23
  OS_os_log *v84; // x23
  OS_os_log *v85; // x23
  OS_os_log *v86; // x23
  OS_os_log *v87; // x23
  OS_os_log *v88; // x23
  id v89; // [xsp+8h] [xbp-108h]
  unsigned int v90; // [xsp+3Ch] [xbp-D4h]
  unsigned __int64 v91; // [xsp+40h] [xbp-D0h]
  _QWORD block[4]; // [xsp+50h] [xbp-C0h] BYREF
  dispatch_semaphore_t v93; // [xsp+70h] [xbp-A0h]
  Boolean keyExistsAndHasValidFormat; // [xsp+7Fh] [xbp-91h] BYREF
  uint8_t buf[4]; // [xsp+80h] [xbp-90h] BYREF
  const char *v96; // [xsp+84h] [xbp-8Ch]
  __int16 v97; // [xsp+8Ch] [xbp-84h]
  unsigned __int64 v98; // [xsp+8Eh] [xbp-82h]
  __int16 v99; // [xsp+96h] [xbp-7Ah]
  unsigned __int64 v100; // [xsp+98h] [xbp-78h]

  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_DEFAULT) )
  {
    *(_DWORD *)buf = 136315138;
    v96 = "-[UARPUpdaterDisplayControllerDelegate updateDevice:]";
    _os_log_impl((void *)&_mh_execute_header, log, OS_LOG_TYPE_DEFAULT, "%s", buf, 0xCu);
  }
  v91 = a3;
  v6 = -[UARPUpdaterDisplayControllerDelegate getECID:](self, "getECID:", a3);
  if ( v6 )
  {
    v7 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithUnsignedLongLong:](&OBJC_CLASS___NSNumber, "numberWithUnsignedLongLong:", v6));
    v8 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_restoreProgress, "objectForKeyedSubscript:", v7));
    if ( v8 )
    {
      v9 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_restoreProgress, "objectForKeyedSubscript:", v7));
      v10 = (int)objc_msgSend(v9, "intValue") > 0;
      objc_release(v9);
      objc_release(v8);
      if ( v10 )
      {
        v11 = self->_log;
        if ( os_log_type_enabled(v11, OS_LOG_TYPE_DEFAULT) )
        {
          *(_DWORD *)buf = 136315394;
          v96 = "-[UARPUpdaterDisplayControllerDelegate updateDevice:]";
          v97 = 2048;
          v98 = v6;
          _os_log_impl(
            (void *)&_mh_execute_header,
            v11,
            OS_LOG_TYPE_DEFAULT,
            "%s: Update already tried for device with ecid 0x%llx",
            buf,
            0x16u);
        }
        goto LABEL_99;
      }
    }
    v12 = objc_alloc_init(&OBJC_CLASS___restoreInfo);
    v13 = objc_retain(self->_restoreInfo);
    objc_sync_enter(v13);
    v14 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_restoreInfo, "objectForKeyedSubscript:", v7));
    objc_release(v14);
    if ( v14 )
    {
      v15 = self->_log;
      if ( os_log_type_enabled(v15, OS_LOG_TYPE_DEFAULT) )
      {
        *(_DWORD *)buf = 136315394;
        v96 = "-[UARPUpdaterDisplayControllerDelegate updateDevice:]";
        v97 = 2048;
        v98 = v6;
        _os_log_impl(
          (void *)&_mh_execute_header,
          v15,
          OS_LOG_TYPE_DEFAULT,
          "%s: Update already underway for device with ecid 0x%llx",
          buf,
          0x16u);
      }
      objc_sync_exit(v13);
LABEL_98:
      objc_release(v13);
      objc_release(v12);
LABEL_99:
      objc_release(v7);
      return;
    }
    -[NSMutableDictionary setObject:forKeyedSubscript:](self->_restoreInfo, "setObject:forKeyedSubscript:", v12, v7);
    objc_sync_exit(v13);
    objc_release(v13);
    v89 = objc_alloc_init((Class)&OBJC_CLASS___UARPController);
    objc_msgSend(v89, "setDelegate:", self);
    v17 = AMRestorableDeviceRegisterForNotificationsForDevices(sub_10000E9DC, self, 256LL, 0LL);
    v90 = kAMRestorableInvalidClientID;
    if ( (_DWORD)v17 == kAMRestorableInvalidClientID )
    {
      v84 = self->_log;
      if ( os_log_type_enabled(v84, OS_LOG_TYPE_ERROR) )
        sub_100015408(v84);
    }
    else
    {
      v18 = objc_retainAutoreleasedReturnValue(-[restoreInfo deviceMutex](v12, "deviceMutex"));
      v19 = dispatch_time(0LL, 120000000000LL);
      v20 = dispatch_semaphore_wait(v18, v19) == 0;
      objc_release(v18);
      if ( !v20 )
      {
        v21 = self->_log;
        if ( os_log_type_enabled(v21, OS_LOG_TYPE_ERROR) )
          sub_100015744(v6, v21);
      }
      v22 = -[restoreInfo restoreDevice](v12, "restoreDevice");
      v23 = self->_log;
      if ( v22 )
      {
        if ( os_log_type_enabled(self->_log, OS_LOG_TYPE_DEFAULT) )
        {
          *(_DWORD *)buf = 136315394;
          v96 = "-[UARPUpdaterDisplayControllerDelegate updateDevice:]";
          v97 = 2048;
          v98 = v6;
          _os_log_impl(
            (void *)&_mh_execute_header,
            v23,
            OS_LOG_TYPE_DEFAULT,
            "%s: Found device with ecid 0x%llx",
            buf,
            0x16u);
        }
        -[UARPUpdaterDisplayControllerDelegate updateRestoreProgress:operation:](
          self,
          "updateRestoreProgress:operation:",
          v7,
          100LL);
        v24 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_consentInfo, "objectForKeyedSubscript:", v7));
        objc_release(v24);
        if ( v24 )
        {
          v25 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_consentInfo, "objectForKeyedSubscript:", v7));
          dispatch_semaphore_signal(v25);
          objc_release(v25);
          v26 = self->_log;
          if ( os_log_type_enabled(v26, OS_LOG_TYPE_DEFAULT) )
          {
            *(_DWORD *)buf = 136315394;
            v96 = "-[UARPUpdaterDisplayControllerDelegate updateDevice:]";
            v97 = 2048;
            v98 = v6;
            _os_log_impl(
              (void *)&_mh_execute_header,
              v26,
              OS_LOG_TYPE_DEFAULT,
              "%s: Using preflighted restore options for device with ecid 0x%llx",
              buf,
              0x16u);
          }
          v27 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_preflightInfo, "objectForKeyedSubscript:", v7));
          v28 = objc_retainAutoreleasedReturnValue(objc_msgSend(v27, "preflightedBundle"));
          objc_release(v27);
          if ( v28 )
          {
            v29 = 0LL;
            goto LABEL_60;
          }
          v85 = self->_log;
          if ( os_log_type_enabled(v85, OS_LOG_TYPE_ERROR) )
            sub_1000156D0(v6, v85);
        }
        else
        {
          keyExistsAndHasValidFormat = 0;
          AppBooleanValue = CFPreferencesGetAppBooleanValue(
                              CFSTR("DoNotUpdateRecoveryDFU"),
                              CFSTR("com.apple.DarwinAccessoryUpdate.A2525"),
                              &keyExistsAndHasValidFormat);
          if ( keyExistsAndHasValidFormat && AppBooleanValue )
          {
            v86 = self->_log;
            if ( os_log_type_enabled(v86, OS_LOG_TYPE_DEFAULT) )
            {
              *(_DWORD *)buf = 136315138;
              v96 = "-[UARPUpdaterDisplayControllerDelegate updateDevice:]";
              _os_log_impl(
                (void *)&_mh_execute_header,
                v86,
                OS_LOG_TYPE_DEFAULT,
                "%s: User requested to not update devices in recovery/DFU",
                buf,
                0xCu);
            }
          }
          else
          {
            v31 = -[UARPUpdaterDisplayControllerDelegate getDefaultBool:defaultValue:](
                    self,
                    "getDefaultBool:defaultValue:",
                    CFSTR("InstallInternalVariant"),
                    0LL);
            v32 = 0;
            for ( i = 1; ; ++i )
            {
              v34 = objc_retainAutoreleasedReturnValue(
                      -[UARPUpdaterDisplayControllerDelegate findAssetRemote:forDevice:withECID:needsUpdate:requestConsent:prodFused:](
                        self,
                        "findAssetRemote:forDevice:withECID:needsUpdate:requestConsent:prodFused:",
                        (unsigned int)-[UARPUpdaterDisplayControllerDelegate consentRequested](self, "consentRequested") ^ 1,
                        0LL,
                        v7,
                        0LL,
                        0LL,
                        (unsigned int)AMRestorableDeviceGetFusingInfo(-[restoreInfo restoreDevice](v12, "restoreDevice")) == 2));
              v29 = v34;
              if ( v34 || (unsigned int)(i - 1) > 4 )
                break;
              v32 = -[UARPUpdaterDisplayControllerDelegate waitForInternetConnection:](
                      self,
                      "waitForInternetConnection:",
                      v32 & 1);
              v35 = self->_log;
              if ( os_log_type_enabled(v35, OS_LOG_TYPE_DEFAULT) )
              {
                *(_DWORD *)buf = 136315650;
                v96 = "-[UARPUpdaterDisplayControllerDelegate updateDevice:]";
                v97 = 2048;
                v98 = v6;
                v99 = 1024;
                LODWORD(v100) = i;
                _os_log_impl(
                  (void *)&_mh_execute_header,
                  v35,
                  OS_LOG_TYPE_DEFAULT,
                  "%s: Retrying find asset for device with ecid 0x%llx (Retry %d)",
                  buf,
                  0x1Cu);
              }
            }
            if ( v34 )
            {
              v36 = 0;
              do
              {
                v37 = -[UARPUpdaterDisplayControllerDelegate downloadAsset:internal:withForce:](
                        self,
                        "downloadAsset:internal:withForce:",
                        v29,
                        v31,
                        1LL);
                v38 = v37;
                if ( (_DWORD)v37 == 7 )
                {
                  v39 = self->_log;
                  if ( os_log_type_enabled(v39, OS_LOG_TYPE_ERROR) )
                  {
                    *(_DWORD *)buf = 136315394;
                    v96 = "-[UARPUpdaterDisplayControllerDelegate updateDevice:]";
                    v97 = 2048;
                    v98 = v6;
                    _os_log_error_impl(
                      (void *)&_mh_execute_header,
                      v39,
                      OS_LOG_TYPE_ERROR,
                      "%s: Asset download for device with ecid 0x%llx was aborted",
                      buf,
                      0x16u);
                  }
                  v40 = objc_retain(self->_preflightInfo);
                  objc_sync_enter(v40);
                  objc_sync_exit(v40);
                  objc_release(v40);
                }
                else if ( (_DWORD)v37 != 1 && v36 <= 4 )
                {
                  v41 = self->_log;
                  if ( os_log_type_enabled(v41, OS_LOG_TYPE_DEFAULT) )
                  {
                    *(_DWORD *)buf = 136315650;
                    v96 = "-[UARPUpdaterDisplayControllerDelegate updateDevice:]";
                    v97 = 2048;
                    v98 = v6;
                    v99 = 1024;
                    LODWORD(v100) = v36 + 1;
                    _os_log_impl(
                      (void *)&_mh_execute_header,
                      v41,
                      OS_LOG_TYPE_DEFAULT,
                      "%s: Retrying download asset for device with ecid 0x%llx (Retry %d)",
                      buf,
                      0x1Cu);
                  }
                }
                if ( (_DWORD)v38 == 1 )
                  break;
              }
              while ( v36++ < 5 );
              v43 = objc_retain(self->_mobileAssetCustomerUpdater);
              objc_sync_enter(v43);
              v44 = self->_notBootedAudienceUses - 1;
              self->_notBootedAudienceUses = v44;
              if ( !v44 && !-[UARPUpdaterDisplayControllerDelegate consentRequested](self, "consentRequested") )
              {
                v45 = self->_log;
                if ( os_log_type_enabled(v45, OS_LOG_TYPE_DEFAULT) )
                {
                  *(_DWORD *)buf = 136315138;
                  v96 = "-[UARPUpdaterDisplayControllerDelegate updateDevice:]";
                  _os_log_impl(
                    (void *)&_mh_execute_header,
                    v45,
                    OS_LOG_TYPE_DEFAULT,
                    "%s: Asset audience not in use",
                    buf,
                    0xCu);
                }
                *(_WORD *)&self->_customerAudienceUsed = 0;
              }
              objc_sync_exit(v43);
              objc_release(v43);
              if ( (_DWORD)v38 == 1 )
              {
                v46 = -[restoreInfo restoreDevice](v12, "restoreDevice");
                v47 = objc_retainAutoreleasedReturnValue(objc_msgSend(v29, "getLocalFileUrl"));
                LOBYTE(v46) = -[UARPUpdaterDisplayControllerDelegate isMDFrameworkUpToDate:assetURL:](
                                self,
                                "isMDFrameworkUpToDate:assetURL:",
                                v46,
                                v47);
                objc_release(v47);
                v48 = self->_log;
                if ( ((unsigned __int8)v46 & 1) != 0 )
                {
                  if ( os_log_type_enabled(v48, OS_LOG_TYPE_DEFAULT) )
                  {
                    *(_DWORD *)buf = 136315394;
                    v96 = "-[UARPUpdaterDisplayControllerDelegate updateDevice:]";
                    v97 = 2048;
                    v98 = v6;
                    _os_log_impl(
                      (void *)&_mh_execute_header,
                      v48,
                      OS_LOG_TYPE_DEFAULT,
                      "%s: Creating restore options for device with ecid 0x%llx",
                      buf,
                      0x16u);
                  }
                  v28 = objc_retainAutoreleasedReturnValue(
                          -[UARPUpdaterDisplayControllerDelegate createRestoreOptionsForDevice:internal:asset:erase:](
                            self,
                            "createRestoreOptionsForDevice:internal:asset:erase:",
                            -[restoreInfo restoreDevice](v12, "restoreDevice"),
                            v31,
                            v29,
                            1LL));
                  v49 = self->_log;
                  if ( v28 )
                  {
                    if ( os_log_type_enabled(v49, OS_LOG_TYPE_DEFAULT) )
                    {
                      *(_DWORD *)buf = 136315650;
                      v96 = "-[UARPUpdaterDisplayControllerDelegate updateDevice:]";
                      v97 = 2048;
                      v98 = v91;
                      v99 = 2048;
                      v100 = v6;
                      _os_log_impl(
                        (void *)&_mh_execute_header,
                        v49,
                        OS_LOG_TYPE_DEFAULT,
                        "%s: Enabling TRM authentication for registryEntryID 0x%llx for device with ecid 0x%llx",
                        buf,
                        0x20u);
                    }
                    v50 = objc_retainAutoreleasedReturnValue(
                            +[NSNumber numberWithUnsignedLongLong:](
                              &OBJC_CLASS___NSNumber,
                              "numberWithUnsignedLongLong:",
                              v91));
                    objc_msgSend(v89, "enableTRMSystemAuthenticationForRegistryEntryID:", v50);
                    -[NSMutableDictionary setObject:forKeyedSubscript:](
                      self->_trmRegistryEntryIDs,
                      "setObject:forKeyedSubscript:",
                      v50,
                      v7);
                    objc_release(v50);
LABEL_60:
                    v13 = (NSMutableDictionary *)objc_retain(v28);
                    for ( j = 0; ; ++j )
                    {
                      v52 = self->_log;
                      if ( os_log_type_enabled(v52, OS_LOG_TYPE_DEFAULT) )
                      {
                        *(_DWORD *)buf = 136315394;
                        v96 = "-[UARPUpdaterDisplayControllerDelegate updateDevice:]";
                        v97 = 2048;
                        v98 = v6;
                        _os_log_impl(
                          (void *)&_mh_execute_header,
                          v52,
                          OS_LOG_TYPE_DEFAULT,
                          "%s: Beginning restore for device with ecid 0x%llx",
                          buf,
                          0x16u);
                      }
                      v53 = objc_retainAutoreleasedReturnValue((id)AMRestorableDeviceGetRestoreOperationsQueue(-[restoreInfo restoreDevice](v12, "restoreDevice")));
                      -[restoreInfo setRestoreOpsQueue:](v12, "setRestoreOpsQueue:", v53);
                      objc_release(v53);
                      -[UARPUpdaterDisplayControllerDelegate updateRestoreProgress:operation:](
                        self,
                        "updateRestoreProgress:operation:",
                        v7,
                        101LL);
                      -[UARPUpdaterDisplayControllerDelegate restoreDevice:withOptions:](
                        self,
                        "restoreDevice:withOptions:",
                        -[restoreInfo restoreDevice](v12, "restoreDevice"),
                        v13);
                      v54 = objc_retainAutoreleasedReturnValue(-[restoreInfo restoreMutex](v12, "restoreMutex"));
                      v55 = dispatch_time(0LL, 1200000000000LL);
                      v56 = dispatch_semaphore_wait(v54, v55) == 0;
                      objc_release(v54);
                      if ( !v56 )
                      {
                        v57 = self->_log;
                        if ( os_log_type_enabled(v57, OS_LOG_TYPE_ERROR) )
                        {
                          *(_DWORD *)buf = 136315394;
                          v96 = "-[UARPUpdaterDisplayControllerDelegate updateDevice:]";
                          v97 = 2048;
                          v98 = v6;
                          _os_log_error_impl(
                            (void *)&_mh_execute_header,
                            v57,
                            OS_LOG_TYPE_ERROR,
                            "%s: Timed out during restore of device with ecid 0x%llx",
                            buf,
                            0x16u);
                        }
                      }
                      v58 = objc_retainAutoreleasedReturnValue(-[restoreInfo restoreOpsQueue](v12, "restoreOpsQueue"));
                      objc_release(v58);
                      if ( v58 )
                      {
                        v59 = dispatch_semaphore_create(0LL);
                        v60 = objc_retainAutoreleasedReturnValue(-[restoreInfo restoreOpsQueue](v12, "restoreOpsQueue"));
                        block[0] = _NSConcreteStackBlock;
                        block[1] = 3254779904LL;
                        block[2] = sub_1000105E4;
                        block[3] = &unk_100020610;
                        v93 = v59;
                        v61 = objc_retain(v59);
                        dispatch_async(v60, block);
                        objc_release(v60);
                        v62 = dispatch_time(0LL, 60000000000LL);
                        dispatch_semaphore_wait(v61, v62);
                        objc_release(v93);
                        objc_release(v61);
                      }
                      v63 = -[restoreInfo restoreWasSuccessful](v12, "restoreWasSuccessful");
                      v64 = self->_log;
                      if ( v63 )
                        break;
                      if ( os_log_type_enabled(self->_log, OS_LOG_TYPE_ERROR) )
                      {
                        *(_DWORD *)buf = 136315394;
                        v96 = "-[UARPUpdaterDisplayControllerDelegate updateDevice:]";
                        v97 = 2048;
                        v98 = v6;
                        _os_log_error_impl(
                          (void *)&_mh_execute_header,
                          v64,
                          OS_LOG_TYPE_ERROR,
                          "%s: Restore failed for device with ecid 0x%llx",
                          buf,
                          0x16u);
                      }
                      if ( -[restoreInfo restoreDevice](v12, "restoreDevice")
                        && (unsigned int)AMRestorableDeviceGetState(-[restoreInfo restoreDevice](v12, "restoreDevice")) == 2 )
                      {
                        v65 = self->_log;
                        if ( os_log_type_enabled(v65, OS_LOG_TYPE_DEFAULT) )
                        {
                          *(_DWORD *)buf = 136315394;
                          v96 = "-[UARPUpdaterDisplayControllerDelegate updateDevice:]";
                          v97 = 2048;
                          v98 = v6;
                          _os_log_impl(
                            (void *)&_mh_execute_header,
                            v65,
                            OS_LOG_TYPE_DEFAULT,
                            "%s: Sending reboot to device with ecid 0x%llx",
                            buf,
                            0x16u);
                        }
                        AMRestorableDeviceSendCommand(
                          -[restoreInfo restoreDevice](v12, "restoreDevice"),
                          CFSTR("reboot"));
                      }
                      if ( j > 4 )
                        goto LABEL_89;
                      v66 = self->_log;
                      if ( os_log_type_enabled(v66, OS_LOG_TYPE_DEFAULT) )
                      {
                        *(_DWORD *)buf = 136315650;
                        v96 = "-[UARPUpdaterDisplayControllerDelegate updateDevice:]";
                        v97 = 2048;
                        v98 = v6;
                        v99 = 1024;
                        LODWORD(v100) = j + 1;
                        _os_log_impl(
                          (void *)&_mh_execute_header,
                          v66,
                          OS_LOG_TYPE_DEFAULT,
                          "%s: Retrying update for device with ecid 0x%llx (Retry %d)",
                          buf,
                          0x1Cu);
                      }
                      AMRestorableDeviceUnregisterForNotifications(v17);
                      -[restoreInfo setRestoreDevice:](v12, "setRestoreDevice:", 0LL);
                      v67 = dispatch_semaphore_create(0LL);
                      -[restoreInfo setDeviceMutex:](v12, "setDeviceMutex:", v67);
                      objc_release(v67);
                      sleep(0xAu);
                      v17 = AMRestorableDeviceRegisterForNotificationsForDevices(sub_10000E9DC, self, 256LL, 0LL);
                      if ( (_DWORD)v17 == v90 )
                      {
                        v83 = self->_log;
                        if ( os_log_type_enabled(v83, OS_LOG_TYPE_ERROR) )
                          sub_100015408(v83);
                        v17 = v90;
                        goto LABEL_89;
                      }
                      v68 = objc_retainAutoreleasedReturnValue(-[restoreInfo deviceMutex](v12, "deviceMutex"));
                      v69 = dispatch_time(0LL, 120000000000LL);
                      v70 = dispatch_semaphore_wait(v68, v69) == 0;
                      objc_release(v68);
                      if ( !v70 )
                      {
                        v71 = self->_log;
                        if ( os_log_type_enabled(v71, OS_LOG_TYPE_ERROR) )
                        {
                          *(_DWORD *)buf = 136315394;
                          v96 = "-[UARPUpdaterDisplayControllerDelegate updateDevice:]";
                          v97 = 2048;
                          v98 = v6;
                          _os_log_error_impl(
                            (void *)&_mh_execute_header,
                            v71,
                            OS_LOG_TYPE_ERROR,
                            "%s: Timed out while searching for device with ecid 0x%llx.",
                            buf,
                            0x16u);
                        }
                      }
                      v72 = -[restoreInfo restoreDevice](v12, "restoreDevice");
                      v73 = self->_log;
                      if ( !v72 )
                      {
                        if ( os_log_type_enabled(self->_log, OS_LOG_TYPE_ERROR) )
                          sub_100015480(v6, v73);
                        goto LABEL_89;
                      }
                      if ( os_log_type_enabled(self->_log, OS_LOG_TYPE_DEFAULT) )
                      {
                        *(_DWORD *)buf = 136315394;
                        v96 = "-[UARPUpdaterDisplayControllerDelegate updateDevice:]";
                        v97 = 2048;
                        v98 = v6;
                        _os_log_impl(
                          (void *)&_mh_execute_header,
                          v73,
                          OS_LOG_TYPE_DEFAULT,
                          "%s: Found device with ecid 0x%llx",
                          buf,
                          0x16u);
                      }
                      -[UARPUpdaterDisplayControllerDelegate updateRestoreProgress:operation:](
                        self,
                        "updateRestoreProgress:operation:",
                        v7,
                        100LL);
                    }
                    if ( os_log_type_enabled(self->_log, OS_LOG_TYPE_DEFAULT) )
                    {
                      *(_DWORD *)buf = 136315394;
                      v96 = "-[UARPUpdaterDisplayControllerDelegate updateDevice:]";
                      v97 = 2048;
                      v98 = v6;
                      _os_log_impl(
                        (void *)&_mh_execute_header,
                        v64,
                        OS_LOG_TYPE_DEFAULT,
                        "%s: Restore succeeded for device with ecid 0x%llx",
                        buf,
                        0x16u);
                    }
                    goto LABEL_89;
                  }
                  if ( os_log_type_enabled(v49, OS_LOG_TYPE_ERROR) )
                    sub_100015568(v6, v49);
                }
                else if ( os_log_type_enabled(v48, OS_LOG_TYPE_ERROR) )
                {
                  sub_1000155DC(v6, v48);
                }
              }
              else
              {
                v88 = self->_log;
                if ( os_log_type_enabled(v88, OS_LOG_TYPE_ERROR) )
                  sub_100015650(v6, v38, v88);
              }
LABEL_117:
              v13 = 0LL;
LABEL_89:
              v74 = objc_retainAutoreleasedReturnValue(
                      -[NSMutableDictionary objectForKeyedSubscript:](
                        self->_trmRegistryEntryIDs,
                        "objectForKeyedSubscript:",
                        v7));
              objc_release(v74);
              if ( v74 )
              {
                v75 = self->_log;
                if ( os_log_type_enabled(v75, OS_LOG_TYPE_DEFAULT) )
                {
                  trmRegistryEntryIDs = self->_trmRegistryEntryIDs;
                  v77 = objc_retain(v75);
                  v78 = objc_retainAutoreleasedReturnValue(
                          -[NSMutableDictionary objectForKeyedSubscript:](
                            trmRegistryEntryIDs,
                            "objectForKeyedSubscript:",
                            v7));
                  v79 = objc_msgSend(v78, "unsignedLongLongValue");
                  *(_DWORD *)buf = 136315650;
                  v96 = "-[UARPUpdaterDisplayControllerDelegate updateDevice:]";
                  v97 = 2048;
                  v98 = (unsigned __int64)v79;
                  v99 = 2048;
                  v100 = v6;
                  _os_log_impl(
                    (void *)&_mh_execute_header,
                    v77,
                    OS_LOG_TYPE_DEFAULT,
                    "%s: Disabling TRM authentication for registryEntryID 0x%llx for device with ecid 0x%llx",
                    buf,
                    0x20u);
                  objc_release(v77);
                  objc_release(v78);
                }
                v80 = objc_retainAutoreleasedReturnValue(
                        -[NSMutableDictionary objectForKeyedSubscript:](
                          self->_trmRegistryEntryIDs,
                          "objectForKeyedSubscript:",
                          v7));
                objc_msgSend(v89, "disableTRMSystemAuthenticationForRegistryEntryID:", v80);
                objc_release(v80);
                -[NSMutableDictionary removeObjectForKey:](self->_trmRegistryEntryIDs, "removeObjectForKey:", v7);
              }
              if ( (_DWORD)v17 != v90 )
                AMRestorableDeviceUnregisterForNotifications(v17);
              if ( v13 )
                CFRelease(v13);
              v81 = objc_retain(self->_checkInfo);
              objc_sync_enter(v81);
              -[NSMutableSet removeObject:](self->_checkInfo, "removeObject:", v7);
              objc_sync_exit(v81);
              objc_release(v81);
              v82 = objc_retain(self->_restoreInfo);
              objc_sync_enter(v82);
              -[NSMutableDictionary removeObjectForKey:](self->_restoreInfo, "removeObjectForKey:", v7);
              objc_sync_exit(v82);
              objc_release(v82);
              -[NSMutableDictionary removeObjectForKey:](self->_consentInfo, "removeObjectForKey:", v7);
              -[UARPUpdaterDisplayControllerDelegate removeAssets](self, "removeAssets");
              -[UARPUpdaterDisplayControllerDelegate updateRestoreProgress:operation:](
                self,
                "updateRestoreProgress:operation:",
                v7,
                1000LL);
              objc_release(v89);
              objc_release(v29);
              goto LABEL_98;
            }
            v87 = self->_log;
            if ( os_log_type_enabled(v87, OS_LOG_TYPE_ERROR) )
              sub_1000154F4(v6, v87);
          }
        }
      }
      else if ( os_log_type_enabled(self->_log, OS_LOG_TYPE_ERROR) )
      {
        sub_100015480(v6, v23);
      }
    }
    v29 = 0LL;
    goto LABEL_117;
  }
  v16 = self->_log;
  if ( os_log_type_enabled(v16, OS_LOG_TYPE_ERROR) )
    sub_100015394(a3, v16);
}