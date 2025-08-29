-[UARPUpdaterDisplayControllerDelegate createRestoreOptionsForDevice:internal:asset:erase:]
id __cdecl -[UARPUpdaterDisplayControllerDelegate createRestoreOptionsForDevice:internal:asset:erase:](
        UARPUpdaterDisplayControllerDelegate *self,
        SEL a2,
        __AMRestorableDevice *a3,
        bool a4,
        id a5,
        bool a6)
{
  id v9; // x19
  void *v10; // x20
  void *v11; // x21
  void *v12; // x0
  void *v13; // x22
  void *v14; // x26
  _UNKNOWN **v15; // x27
  void *v16; // x28
  void *v17; // x27
  id v18; // x22
  OS_os_log *v19; // x28
  void *v20; // x28
  NSNumber *v21; // x26
  unsigned int v22; // w25
  const __CFString *v23; // x2
  OS_os_log *log; // x22
  OS_os_log *v25; // x22
  id v26; // x23
  OS_os_log *v27; // x23
  OS_os_log *v28; // x24
  void *v29; // x24
  OS_os_log *v30; // x24
  void *v31; // x24
  __CFString *v32; // x24
  OS_os_log *v33; // x23
  id v35; // [xsp+10h] [xbp-90h]
  void *v36; // [xsp+18h] [xbp-88h]
  id v37; // [xsp+20h] [xbp-80h] BYREF
  id v38; // [xsp+28h] [xbp-78h] BYREF
  uint8_t buf[4]; // [xsp+30h] [xbp-70h] BYREF
  const char *v40; // [xsp+34h] [xbp-6Ch]
  __int64 vars8; // [xsp+A8h] [xbp+8h]

  v9 = objc_retain(a5);
  v10 = (void *)AMRestorableDeviceCopyDefaultRestoreOptions();
  v11 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSMutableDictionary), "initWithDictionary:", v10);
  if ( !v11 )
  {
    log = self->_log;
    if ( os_log_type_enabled(log, OS_LOG_TYPE_ERROR) )
      sub_1000148BC(log);
    goto LABEL_20;
  }
  if ( !v9 )
  {
    v25 = self->_log;
    if ( os_log_type_enabled(v25, OS_LOG_TYPE_ERROR) )
      sub_100014934(v25);
LABEL_20:
    v26 = 0LL;
    goto LABEL_39;
  }
  v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "getLocalUrl"));
  v13 = v12;
  if ( !v12 )
  {
    v27 = self->_log;
    if ( os_log_type_enabled(v27, OS_LOG_TYPE_ERROR) )
      sub_1000149AC(v27);
    v26 = 0LL;
    goto LABEL_38;
  }
  v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "path"));
  objc_msgSend(v11, "setObject:forKey:", v14, CFSTR("RestoreBundlePath"));
  objc_release(v14);
  v15 = &AMDGetBundleVersion_ptr;
  if ( (unsigned int)+[IASAuthenticationManager ssoFrameworkAvailable](
                       &OBJC_CLASS___IASAuthenticationManager,
                       "ssoFrameworkAvailable") )
  {
    v36 = v13;
    v16 = objc_retainAutoreleasedReturnValue(+[IASAuthenticationManager sharedManager](&OBJC_CLASS___IASAuthenticationManager, "sharedManager"));
    v37 = 0LL;
    v38 = 0LL;
    v17 = objc_retainAutoreleasedReturnValue(
            objc_msgSend(
              v16,
              "getSSOServiceTicketAsOnConsoleUserWithUI:serviceID:outUsername:error:",
              0LL,
              kIASAuthInstallServiceID,
              &v38,
              &v37));
    v18 = objc_retain(v38);
    v35 = objc_retain(v37);
    objc_release(v16);
    if ( v17 )
    {
      v19 = self->_log;
      if ( os_log_type_enabled(v19, OS_LOG_TYPE_DEFAULT) )
      {
        *(_DWORD *)buf = 136315138;
        v40 = "-[UARPUpdaterDisplayControllerDelegate createRestoreOptionsForDevice:internal:asset:erase:]";
        _os_log_impl((void *)&_mh_execute_header, v19, OS_LOG_TYPE_DEFAULT, "%s: Found SSO ticket", buf, 0xCu);
      }
      v20 = objc_retainAutoreleasedReturnValue(
              +[IASAuthenticationManager usernameAndTicketBlobWithSSOData:withUsername:](
                &OBJC_CLASS___IASAuthenticationManager,
                "usernameAndTicketBlobWithSSOData:withUsername:",
                v17,
                v18));
      objc_msgSend(v11, "setObject:forKey:", v20, CFSTR("AppleConnectData"));
      v21 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithBool:](&OBJC_CLASS___NSNumber, "numberWithBool:", 1LL));
      objc_msgSend(v11, "setObject:forKey:", v21, CFSTR("AuthInstallEnableSso"));
      objc_release(v21);
      objc_msgSend(v11, "setObject:forKey:", CFSTR("https://gs.apple.com:443"), CFSTR("AuthInstallSigningServerURL"));
      objc_release(v20);
    }
    objc_release(v17);
    objc_release(v35);
    objc_release(v18);
    v15 = &AMDGetBundleVersion_ptr;
    v13 = v36;
  }
  if ( a6 )
  {
    v22 = 1;
    if ( !a4 )
      goto LABEL_12;
  }
  else
  {
    v22 = -[UARPUpdaterDisplayControllerDelegate getDefaultBool:defaultValue:](
            self,
            "getDefaultBool:defaultValue:",
            CFSTR("EraseInstall"),
            0LL);
    if ( !a4 )
    {
LABEL_12:
      if ( -[DisplayMobileAssetUpdater asset:newerThanVersion:](
             self->_mobileAssetCustomerUpdater,
             "asset:newerThanVersion:",
             v9,
             CFSTR("20.0.0.0.0,0")) )
      {
        if ( v22 )
          v23 = CFSTR("Darwin Customer Accessory Install");
        else
          v23 = CFSTR("Darwin Customer Accessory Update");
      }
      else
      {
        v28 = self->_log;
        if ( os_log_type_enabled(v28, OS_LOG_TYPE_DEFAULT) )
        {
          *(_DWORD *)buf = 136315138;
          v40 = "-[UARPUpdaterDisplayControllerDelegate createRestoreOptionsForDevice:internal:asset:erase:]";
          _os_log_impl(
            (void *)&_mh_execute_header,
            v28,
            OS_LOG_TYPE_DEFAULT,
            "%s: Using old customer variant",
            buf,
            0xCu);
        }
        v23 = CFSTR("Darwin Customer Install");
      }
      goto LABEL_29;
    }
  }
  v23 = CFSTR("Darwin Internal Development");
LABEL_29:
  objc_msgSend(v11, "setObject:forKey:", v23, CFSTR("AuthInstallVariant"));
  v29 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15[149], "numberWithBool:", 0LL));
  objc_msgSend(v11, "setObject:forKey:", v29, CFSTR("CreateFilesystemPartitions"));
  objc_release(v29);
  objc_msgSend(v11, "setObject:forKey:", &off_1000217D8, CFSTR("SystemPartitionSize"));
  if ( v22 )
  {
    v30 = self->_log;
    if ( os_log_type_enabled(v30, OS_LOG_TYPE_DEFAULT) )
    {
      *(_DWORD *)buf = 136315138;
      v40 = "-[UARPUpdaterDisplayControllerDelegate createRestoreOptionsForDevice:internal:asset:erase:]";
      _os_log_impl((void *)&_mh_execute_header, v30, OS_LOG_TYPE_DEFAULT, "%s: Erase install requested", buf, 0xCu);
    }
    v31 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15[149], "numberWithBool:", 1LL));
    objc_msgSend(v11, "setObject:forKey:", v31, CFSTR("CreateFilesystemPartitions"));
    objc_release(v31);
  }
  v32 = CFSTR("serial=3 debug=0x14e rd=md0 nand-enable-reformat=1 -restore");
  if ( -[UARPUpdaterDisplayControllerDelegate getDefaultBool:defaultValue:](
         self,
         "getDefaultBool:defaultValue:",
         CFSTR("ForceFirmwareUpdates"),
         0LL) )
  {
    v33 = self->_log;
    if ( os_log_type_enabled(v33, OS_LOG_TYPE_DEFAULT) )
    {
      *(_DWORD *)buf = 136315138;
      v40 = "-[UARPUpdaterDisplayControllerDelegate createRestoreOptionsForDevice:internal:asset:erase:]";
      _os_log_impl((void *)&_mh_execute_header, v33, OS_LOG_TYPE_DEFAULT, "%s: ForceFirmwareUpdates set", buf, 0xCu);
    }
    v32 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithFormat:](
              &OBJC_CLASS___NSString,
              "stringWithFormat:",
              CFSTR("%@ usbcfw-attempt-backflash=1 AppleTCONForceUpdate=1"),
              CFSTR("serial=3 debug=0x14e rd=md0 nand-enable-reformat=1 -restore")));
  }
  objc_msgSend(v11, "setObject:forKey:", v32, CFSTR("RestoreBootArgs"));
  v26 = objc_retain(v11);
  objc_release(v32);
LABEL_38:
  objc_release(v13);
LABEL_39:
  objc_release(v11);
  objc_release(v10);
  objc_release(v9);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v26);
}