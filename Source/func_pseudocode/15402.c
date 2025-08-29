-[UARPUpdaterDisplayControllerDelegate consentReceivedPostLogoutMode:]
void __cdecl -[UARPUpdaterDisplayControllerDelegate consentReceivedPostLogoutMode:](
        UARPUpdaterDisplayControllerDelegate *self,
        SEL a2,
        id a3)
{
  id v4; // x23
  OS_os_log *log; // x19
  os_log_s *v6; // x19
  void *v7; // x21
  void *v8; // x22
  void *v9; // x19
  id v10; // x21
  unsigned int v11; // w22
  id v12; // x19
  void *v13; // x22
  void *v14; // x0
  void *v15; // x23
  __int64 v16; // x21
  void *v17; // x26
  void *v18; // x25
  void *v19; // x27
  void *v20; // x28
  void *v21; // x19
  DisplayUSBDrives *v22; // x0
  DisplayUSBDrives *v23; // x28
  dispatch_semaphore_t v24; // x27
  OS_os_log *v25; // x25
  os_log_s *v26; // x1
  const char *v27; // x3
  OS_os_log *v28; // x25
  void *v29; // x0
  OS_os_log *v30; // x19
  void *v31; // x0
  void *v32; // x23
  __int64 v33; // x24
  void *i; // x22
  void *v35; // x27
  void *v36; // x19
  void *v37; // x26
  void *v38; // x28
  OS_os_log *v39; // x26
  os_log_s *v40; // x26
  void *v41; // x0
  dispatch_semaphore_s *v42; // x26
  dispatch_time_t v43; // x0
  intptr_t v44; // x25
  OS_os_log *v45; // x26
  id v46; // [xsp+8h] [xbp-258h]
  void *obj; // [xsp+30h] [xbp-230h]
  id v48; // [xsp+48h] [xbp-218h]
  __int128 v49; // [xsp+50h] [xbp-210h] BYREF
  __int128 v50; // [xsp+60h] [xbp-200h]
  __int128 v51; // [xsp+70h] [xbp-1F0h]
  __int128 v52; // [xsp+80h] [xbp-1E0h]
  __int128 v53; // [xsp+90h] [xbp-1D0h] BYREF
  __int128 v54; // [xsp+A0h] [xbp-1C0h]
  __int128 v55; // [xsp+B0h] [xbp-1B0h]
  __int128 v56; // [xsp+C0h] [xbp-1A0h]
  _BYTE v57[128]; // [xsp+D0h] [xbp-190h] BYREF
  uint8_t v58[128]; // [xsp+150h] [xbp-110h] BYREF
  uint8_t buf[4]; // [xsp+1D0h] [xbp-90h] BYREF
  const char *v60; // [xsp+1D4h] [xbp-8Ch]
  __int16 v61; // [xsp+1DCh] [xbp-84h]
  void *v62; // [xsp+1DEh] [xbp-82h]
  __int16 v63; // [xsp+1E6h] [xbp-7Ah]
  void *v64; // [xsp+1E8h] [xbp-78h]

  v4 = objc_retain(a3);
  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_DEFAULT) )
  {
    v6 = objc_retain(log);
    v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "accessoryName"));
    v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "assetVersion"));
    *(_DWORD *)buf = 136315650;
    v60 = "-[UARPUpdaterDisplayControllerDelegate consentReceivedPostLogoutMode:]";
    v61 = 2112;
    v62 = v7;
    v63 = 2112;
    v64 = v8;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v6,
      OS_LOG_TYPE_DEFAULT,
      "%s: Consent received in post logout mode to update accessory %@ with asset version %@",
      buf,
      0x20u);
    objc_release(v8);
    objc_release(v7);
    objc_release(v6);
  }
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "accessoryName"));
  v10 = objc_retainAutoreleasedReturnValue(
          -[UARPUpdaterDisplayControllerDelegate localizedStringForKey:](
            self,
            "localizedStringForKey:",
            CFSTR("Apple Studio Display")));
  v11 = (unsigned int)objc_msgSend(v9, "isEqualToString:", v10);
  objc_release(v10);
  objc_release(v9);
  if ( v11 )
  {
    self->_inPostLogout = 1;
    v12 = objc_alloc_init((Class)&OBJC_CLASS___UARPController);
    objc_msgSend(v12, "setDelegate:", self);
    v48 = v12;
    v46 = v4;
    objc_msgSend(v12, "progressForUARPConsentInPostLogout:bytesSent:bytesTotal:", v4, 0LL, 1000LL);
    sleep(0xAu);
    v53 = 0u;
    v54 = 0u;
    v55 = 0u;
    v56 = 0u;
    v13 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary allKeys](self->_preflightInfo, "allKeys"));
    v14 = objc_msgSend(v13, "countByEnumeratingWithState:objects:count:", &v53, v58, 16LL);
    if ( !v14 )
      goto LABEL_20;
    v15 = v14;
    v16 = *(_QWORD *)v54;
    while ( 1 )
    {
      v17 = 0LL;
      do
      {
        if ( *(_QWORD *)v54 != v16 )
          objc_enumerationMutation(v13);
        v18 = *(void **)(*((_QWORD *)&v53 + 1) + 8LL * (_QWORD)v17);
        v19 = objc_msgSend(v18, "unsignedLongLongValue");
        v20 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_preflightInfo, "objectForKeyedSubscript:", v18));
        v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v20, "preflightContainerID"));
        objc_release(v20);
        v22 = -[DisplayUSBDrives initWithLog:usbContainerID:](
                objc_alloc(&OBJC_CLASS___DisplayUSBDrives),
                "initWithLog:usbContainerID:",
                self->_log,
                v21);
        v23 = v22;
        if ( !v22 )
        {
          v25 = self->_log;
          if ( !os_log_type_enabled(v25, OS_LOG_TYPE_ERROR) )
            goto LABEL_15;
          *(_DWORD *)buf = 136315394;
          v60 = "-[UARPUpdaterDisplayControllerDelegate consentReceivedPostLogoutMode:]";
          v61 = 2048;
          v62 = v19;
          v26 = v25;
          v27 = "%s: Failed to create DisplayUSBDrives for device with ecid 0x%llx";
          goto LABEL_18;
        }
        if ( -[DisplayUSBDrives unmountDownstreamUSBDrives](v22, "unmountDownstreamUSBDrives") )
        {
          v24 = dispatch_semaphore_create(0LL);
          -[NSMutableDictionary setObject:forKeyedSubscript:](
            self->_consentInfo,
            "setObject:forKeyedSubscript:",
            v24,
            v18);
          objc_release(v24);
          -[NSMutableDictionary setObject:forKeyedSubscript:](
            self->_restoreProgress,
            "setObject:forKeyedSubscript:",
            &off_1000217D8,
            v18);
          goto LABEL_15;
        }
        v28 = self->_log;
        if ( os_log_type_enabled(v28, OS_LOG_TYPE_ERROR) )
        {
          *(_DWORD *)buf = 136315394;
          v60 = "-[UARPUpdaterDisplayControllerDelegate consentReceivedPostLogoutMode:]";
          v61 = 2048;
          v62 = v19;
          v26 = v28;
          v27 = "%s: Failed to unmount USB drives for device with ecid 0x%llx";
LABEL_18:
          _os_log_error_impl((void *)&_mh_execute_header, v26, OS_LOG_TYPE_ERROR, v27, buf, 0x16u);
        }
LABEL_15:
        objc_release(v23);
        objc_release(v21);
        v17 = (char *)v17 + 1;
      }
      while ( v15 != v17 );
      v29 = objc_msgSend(v13, "countByEnumeratingWithState:objects:count:", &v53, v58, 16LL);
      v15 = v29;
      if ( !v29 )
      {
LABEL_20:
        objc_release(v13);
        if ( !-[NSMutableDictionary count](self->_consentInfo, "count") )
        {
          v30 = self->_log;
          if ( os_log_type_enabled(v30, OS_LOG_TYPE_ERROR) )
            sub_1000151B4(v30);
          objc_msgSend(v48, "progressForUARPConsentInPostLogout:bytesSent:bytesTotal:", v46, 1000LL, 1000LL);
        }
        v51 = 0u;
        v52 = 0u;
        v49 = 0u;
        v50 = 0u;
        obj = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary allKeys](self->_consentInfo, "allKeys"));
        v31 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v49, v57, 16LL);
        if ( v31 )
        {
          v32 = v31;
          v33 = *(_QWORD *)v50;
          do
          {
            for ( i = 0LL; i != v32; i = (char *)i + 1 )
            {
              if ( *(_QWORD *)v50 != v33 )
                objc_enumerationMutation(obj);
              v35 = *(void **)(*((_QWORD *)&v49 + 1) + 8LL * (_QWORD)i);
              v36 = objc_msgSend(v35, "unsignedLongLongValue");
              v37 = objc_retainAutoreleasedReturnValue(
                      -[NSMutableDictionary objectForKeyedSubscript:](
                        self->_preflightInfo,
                        "objectForKeyedSubscript:",
                        v35));
              v38 = objc_retainAutoreleasedReturnValue(objc_msgSend(v37, "preflightRegistryEntryID"));
              objc_release(v37);
              v39 = self->_log;
              if ( os_log_type_enabled(v39, OS_LOG_TYPE_DEFAULT) )
              {
                v40 = objc_retain(v39);
                v41 = objc_msgSend(v38, "unsignedLongLongValue");
                *(_DWORD *)buf = 136315650;
                v60 = "-[UARPUpdaterDisplayControllerDelegate consentReceivedPostLogoutMode:]";
                v61 = 2048;
                v62 = v41;
                v63 = 2048;
                v64 = v36;
                _os_log_impl(
                  (void *)&_mh_execute_header,
                  v40,
                  OS_LOG_TYPE_DEFAULT,
                  "%s: Enabling TRM authentication for registryEntryID 0x%llx for device with ecid 0x%llx",
                  buf,
                  0x20u);
                objc_release(v40);
              }
              objc_msgSend(v48, "enableTRMSystemAuthenticationForRegistryEntryID:", v38);
              -[NSMutableDictionary setObject:forKeyedSubscript:](
                self->_trmRegistryEntryIDs,
                "setObject:forKeyedSubscript:",
                v38,
                v35);
              -[UARPUpdaterDisplayControllerDelegate placeDeviceInRecovery:](self, "placeDeviceInRecovery:", v36);
              v42 = objc_retainAutoreleasedReturnValue(
                      -[NSMutableDictionary objectForKeyedSubscript:](
                        self->_consentInfo,
                        "objectForKeyedSubscript:",
                        v35));
              v43 = dispatch_time(0LL, 120000000000LL);
              v44 = dispatch_semaphore_wait(v42, v43);
              objc_release(v42);
              if ( v44 )
              {
                v45 = self->_log;
                if ( os_log_type_enabled(v45, OS_LOG_TYPE_ERROR) )
                {
                  *(_DWORD *)buf = 136315394;
                  v60 = "-[UARPUpdaterDisplayControllerDelegate consentReceivedPostLogoutMode:]";
                  v61 = 2048;
                  v62 = v36;
                  _os_log_error_impl(
                    (void *)&_mh_execute_header,
                    v45,
                    OS_LOG_TYPE_ERROR,
                    "%s: Timed out while waiting for device with ecid 0x%llx to enter recovery",
                    buf,
                    0x16u);
                }
                -[NSMutableDictionary removeObjectForKey:](self->_consentInfo, "removeObjectForKey:", v35);
                -[UARPUpdaterDisplayControllerDelegate updateRestoreProgress:operation:](
                  self,
                  "updateRestoreProgress:operation:",
                  v35,
                  1000LL);
              }
              objc_release(v38);
            }
            v32 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v49, v57, 16LL);
          }
          while ( v32 );
        }
        objc_release(obj);
        objc_release(v48);
        v4 = v46;
        break;
      }
    }
  }
  objc_release(v4);
}