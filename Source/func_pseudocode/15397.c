-[UARPUpdaterDisplayControllerDelegate checkForUpdateWithECID:usbContainerID:remote:]
// local variable allocation has failed, the output may be wrong!
bool __cdecl -[UARPUpdaterDisplayControllerDelegate checkForUpdateWithECID:usbContainerID:remote:](
        UARPUpdaterDisplayControllerDelegate *self,
        SEL a2,
        unsigned __int64 a3,
        id a4,
        bool a5)
{
  _BOOL8 v5; // x25
  id v8; // x19
  NSNumber *v9; // x20
  OS_os_log *log; // x22
  NSMutableSet *v11; // x26
  id v12; // x0
  bool v13; // w22
  OS_os_log *v14; // x21
  bool v15; // w21
  DisplayUSBDrives *v17; // x0
  DisplayUSBDrives *v18; // x22
  id v19; // x0
  void *v20; // x24
  unsigned __int8 v21; // w26
  NSMutableSet *v22; // x25
  dispatch_queue_global_s *v23; // x23
  OS_os_log *v24; // x24
  OS_os_log *v25; // x24
  const char *v26; // x3
  OS_os_log *v27; // x25
  OS_os_log *v28; // x26
  NSMutableSet *v29; // x26
  _QWORD block[5]; // [xsp+8h] [xbp-A8h] BYREF
  NSMutableSet *v31; // [xsp+30h] [xbp-80h]
  unsigned __int8 v32; // [xsp+38h] [xbp-78h]
  char v33; // [xsp+3Fh] [xbp-71h] BYREF
  uint8_t buf[4]; // [xsp+40h] [xbp-70h] BYREF
  const char *v35; // [xsp+44h] [xbp-6Ch]
  __int16 v36; // [xsp+4Ch] [xbp-64h]
  unsigned __int64 v37; // [xsp+4Eh] [xbp-62h]

  v5 = a5;
  v8 = objc_retain(a4);
  v9 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithUnsignedLongLong:](&OBJC_CLASS___NSNumber, "numberWithUnsignedLongLong:", a3));
  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_DEFAULT) )
  {
    *(_DWORD *)buf = 136315394;
    v35 = "-[UARPUpdaterDisplayControllerDelegate checkForUpdateWithECID:usbContainerID:remote:]";
    v36 = 2048;
    v37 = a3;
    _os_log_impl(
      (void *)&_mh_execute_header,
      log,
      OS_LOG_TYPE_DEFAULT,
      "%s: Checking if update is available for device with ecid 0x%llx",
      buf,
      0x16u);
  }
  v11 = objc_retain(self->_checkInfo);
  objc_sync_enter(v11);
  if ( ((unsigned int)-[NSMutableSet containsObject:](self->_checkInfo, "containsObject:", v9) & 1) == 0 )
  {
    v12 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_restoreInfo, "objectForKeyedSubscript:", v9));
    v13 = v12 == 0LL;
    objc_release(v12);
    if ( v13 )
    {
      -[NSMutableSet addObject:](self->_checkInfo, "addObject:", v9);
      objc_sync_exit(v11);
      objc_release(v11);
      v17 = -[DisplayUSBDrives initWithLog:usbContainerID:](
              objc_alloc(&OBJC_CLASS___DisplayUSBDrives),
              "initWithLog:usbContainerID:",
              self->_log,
              v8);
      v18 = v17;
      if ( !v17 )
      {
        v24 = self->_log;
        if ( os_log_type_enabled(v24, OS_LOG_TYPE_ERROR) )
          sub_100014848(a3, v24);
        goto LABEL_23;
      }
      if ( -[DisplayUSBDrives isBootedFromUSBDrive](v17, "isBootedFromUSBDrive") )
      {
        v25 = self->_log;
        if ( os_log_type_enabled(v25, OS_LOG_TYPE_DEFAULT) )
        {
          *(_DWORD *)buf = 136315394;
          v35 = "-[UARPUpdaterDisplayControllerDelegate checkForUpdateWithECID:usbContainerID:remote:]";
          v36 = 2048;
          v37 = a3;
          v26 = "%s: Cannot update device with ecid 0x%llx while booted from USB drive";
LABEL_22:
          _os_log_impl((void *)&_mh_execute_header, v25, OS_LOG_TYPE_DEFAULT, v26, buf, 0x16u);
        }
      }
      else
      {
        v19 = objc_retainAutoreleasedReturnValue(-[UARPUpdaterDisplayControllerDelegate getRemoteDeviceWithECID:](self, "getRemoteDeviceWithECID:", a3));
        v20 = v19;
        if ( v19 )
        {
          v21 = -[UARPUpdaterDisplayControllerDelegate getDefaultBool:defaultValue:](
                  self,
                  "getDefaultBool:defaultValue:",
                  CFSTR("InstallInternalVariant"),
                  objc_msgSend(v19, "internal"));
          v33 = 0;
          v22 = (NSMutableSet *)objc_retainAutoreleasedReturnValue(
                                  -[UARPUpdaterDisplayControllerDelegate findAssetRemote:forDevice:withECID:needsUpdate:requestConsent:prodFused:](
                                    self,
                                    "findAssetRemote:forDevice:withECID:needsUpdate:requestConsent:prodFused:",
                                    v5,
                                    v20,
                                    v9,
                                    &v33,
                                    1LL,
                                    objc_msgSend(v20, "prodFused")));
          if ( v22 )
          {
            if ( v33 )
            {
              v23 = objc_retainAutoreleasedReturnValue(dispatch_get_global_queue(0LL, 0LL));
              block[0] = _NSConcreteStackBlock;
              block[1] = 3254779904LL;
              block[2] = sub_10000B698;
              block[3] = &unk_100020790;
              block[4] = self;
              v22 = objc_retain(v22);
              v31 = v22;
              v32 = v21;
              dispatch_async(v23, block);
              objc_release(v23);
              objc_release(v31);
              v15 = 1;
LABEL_15:
              objc_release(v18);
              objc_release(v20);
              v11 = v22;
              goto LABEL_8;
            }
            v28 = self->_log;
            if ( os_log_type_enabled(v28, OS_LOG_TYPE_DEFAULT) )
            {
              *(_DWORD *)buf = 136315394;
              v35 = "-[UARPUpdaterDisplayControllerDelegate checkForUpdateWithECID:usbContainerID:remote:]";
              v36 = 2048;
              v37 = a3;
              _os_log_impl(
                (void *)&_mh_execute_header,
                v28,
                OS_LOG_TYPE_DEFAULT,
                "%s: Update is not ready for device with ecid 0x%llx",
                buf,
                0x16u);
            }
          }
          else
          {
            v27 = self->_log;
            if ( os_log_type_enabled(v27, OS_LOG_TYPE_DEFAULT) )
            {
              *(_DWORD *)buf = 136315394;
              v35 = "-[UARPUpdaterDisplayControllerDelegate checkForUpdateWithECID:usbContainerID:remote:]";
              v36 = 2048;
              v37 = a3;
              _os_log_impl(
                (void *)&_mh_execute_header,
                v27,
                OS_LOG_TYPE_DEFAULT,
                "%s: Asset not found for device with ecid 0x%llx",
                buf,
                0x16u);
            }
            v22 = 0LL;
          }
LABEL_29:
          v29 = objc_retain(self->_checkInfo);
          objc_sync_enter(v29);
          -[NSMutableSet removeObject:](self->_checkInfo, "removeObject:", v9);
          objc_sync_exit(v29);
          objc_release(v29);
          v15 = 0;
          goto LABEL_15;
        }
        v25 = self->_log;
        if ( os_log_type_enabled(v25, OS_LOG_TYPE_DEFAULT) )
        {
          *(_DWORD *)buf = 136315394;
          v35 = "-[UARPUpdaterDisplayControllerDelegate checkForUpdateWithECID:usbContainerID:remote:]";
          v36 = 2048;
          v37 = a3;
          v26 = "%s: Cannot connect to device with ecid 0x%llx";
          goto LABEL_22;
        }
      }
LABEL_23:
      v22 = 0LL;
      v20 = 0LL;
      goto LABEL_29;
    }
  }
  v14 = self->_log;
  if ( os_log_type_enabled(v14, OS_LOG_TYPE_DEFAULT) )
  {
    *(_DWORD *)buf = 136315394;
    v35 = "-[UARPUpdaterDisplayControllerDelegate checkForUpdateWithECID:usbContainerID:remote:]";
    v36 = 2048;
    v37 = a3;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v14,
      OS_LOG_TYPE_DEFAULT,
      "%s: Device with ecid 0x%llx already has update process ongoing",
      buf,
      0x16u);
  }
  objc_sync_exit(v11);
  v15 = 1;
LABEL_8:
  objc_release(v11);
  objc_release(v9);
  objc_release(v8);
  return v15;
}