-[UARPUpdaterDisplayControllerDelegate isMDFrameworkUpToDate:assetURL:]
bool __cdecl -[UARPUpdaterDisplayControllerDelegate isMDFrameworkUpToDate:assetURL:](
        UARPUpdaterDisplayControllerDelegate *self,
        SEL a2,
        __AMRestorableDevice *a3,
        id a4)
{
  id v6; // x23
  __int64 BoardID; // x19
  __int64 ChipID; // x22
  NSString *v9; // x25
  void *v10; // x21
  void *v11; // x20
  NSDictionary *v12; // x0
  NSDictionary *v13; // x21
  id v14; // x26
  __int64 v15; // x0
  id v16; // x26
  void *v17; // x0
  void *v18; // x27
  __int64 v19; // x21
  void *v20; // x20
  void *v21; // x23
  void *v22; // x19
  __int64 v23; // x0
  void *v24; // x22
  __int64 v25; // x0
  void *v26; // x23
  __int64 v27; // x0
  void *v28; // x25
  __int64 v29; // x0
  unsigned int v30; // w0
  os_log_s *log; // x25
  _xpc_connection_s *mach_service; // x0
  _xpc_connection_s *v33; // x25
  os_log_s *v34; // x25
  int v35; // w25
  xpc_object_t v36; // x25
  xpc_object_t v37; // x25
  void *v38; // x0
  os_log_s *v39; // x19
  char v40; // w19
  OS_os_log *v41; // x19
  os_log_s *v42; // x19
  int64_t v44; // [xsp+20h] [xbp-2A0h]
  int64_t value; // [xsp+28h] [xbp-298h]
  id v46; // [xsp+30h] [xbp-290h]
  id v47; // [xsp+38h] [xbp-288h]
  NSString *v48; // [xsp+40h] [xbp-280h]
  NSString *v49; // [xsp+40h] [xbp-280h]
  xpc_object_t v50; // [xsp+48h] [xbp-278h]
  void *v51; // [xsp+50h] [xbp-270h]
  NSDictionary *v52; // [xsp+58h] [xbp-268h]
  void *v53; // [xsp+60h] [xbp-260h]
  id v54; // [xsp+68h] [xbp-258h]
  dispatch_queue_s *v55; // [xsp+78h] [xbp-248h]
  char v56; // [xsp+84h] [xbp-23Ch]
  char connection; // [xsp+88h] [xbp-238h]
  _xpc_connection_s *connectiona; // [xsp+88h] [xbp-238h]
  id v59; // [xsp+90h] [xbp-230h]
  UARPUpdaterDisplayControllerDelegate *v60; // [xsp+98h] [xbp-228h]
  id v61; // [xsp+A0h] [xbp-220h]
  NSString *v62; // [xsp+A8h] [xbp-218h]
  NSString *v63; // [xsp+B0h] [xbp-210h]
  _QWORD handler[5]; // [xsp+B8h] [xbp-208h] BYREF
  __int128 v65; // [xsp+E0h] [xbp-1E0h] BYREF
  __int128 v66; // [xsp+F0h] [xbp-1D0h]
  __int128 v67; // [xsp+100h] [xbp-1C0h]
  __int128 v68; // [xsp+110h] [xbp-1B0h]
  char v69[4]; // [xsp+120h] [xbp-1A0h] BYREF
  int v70; // [xsp+124h] [xbp-19Ch] BYREF
  stat v71; // [xsp+130h] [xbp-190h] BYREF
  _BYTE v72[128]; // [xsp+1C8h] [xbp-F8h] BYREF

  v6 = objc_retain(a4);
  BoardID = AMRestorableDeviceGetBoardID(a3);
  ChipID = AMRestorableDeviceGetChipID(a3);
  v9 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("0x%x"), BoardID));
  v63 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("0x%x"), ChipID));
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "URLByAppendingPathComponent:", CFSTR("BuildManifest.plist")));
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "filePathURL"));
  objc_release(v10);
  v12 = objc_retainAutoreleasedReturnValue(+[NSDictionary dictionaryWithContentsOfURL:](&OBJC_CLASS___NSDictionary, "dictionaryWithContentsOfURL:", v11));
  v13 = v12;
  if ( v12 )
  {
    v60 = self;
    v14 = objc_retainAutoreleasedReturnValue(-[NSDictionary objectForKeyedSubscript:](v12, "objectForKeyedSubscript:", CFSTR("BuildIdentities")));
    v15 = objc_opt_class(&OBJC_CLASS___NSArray);
    if ( (objc_opt_isKindOfClass(v14, v15) & 1) != 0 )
    {
      v52 = v13;
      v53 = v11;
      v54 = v6;
      v67 = 0u;
      v68 = 0u;
      v65 = 0u;
      v66 = 0u;
      v51 = v14;
      v16 = objc_retain(v14);
      v17 = objc_msgSend(v16, "countByEnumeratingWithState:objects:count:", &v65, v72, 16LL);
      if ( !v17 )
        goto LABEL_33;
      v18 = v17;
      v19 = *(_QWORD *)v66;
      v44 = (int)ChipID;
      value = (int)BoardID;
      v62 = v9;
      while ( 1 )
      {
        v20 = 0LL;
        do
        {
          if ( *(_QWORD *)v66 != v19 )
            objc_enumerationMutation(v16);
          v21 = *(void **)(*((_QWORD *)&v65 + 1) + 8LL * (_QWORD)v20);
          v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v21, "objectForKeyedSubscript:", CFSTR("ApBoardID")));
          v23 = objc_opt_class(&OBJC_CLASS___NSString);
          if ( (objc_opt_isKindOfClass(v22, v23) & 1) == 0 )
            goto LABEL_21;
          v24 = objc_retainAutoreleasedReturnValue(objc_msgSend(v21, "objectForKeyedSubscript:", CFSTR("ApChipID")));
          v25 = objc_opt_class(&OBJC_CLASS___NSString);
          if ( (objc_opt_isKindOfClass(v24, v25) & 1) == 0
            || !-[NSString isEqualToString:](v9, "isEqualToString:", v22)
            || !-[NSString isEqualToString:](v63, "isEqualToString:", v24) )
          {
            objc_release(v24);
LABEL_21:
            objc_release(v22);
            goto LABEL_22;
          }
          v26 = objc_retainAutoreleasedReturnValue(objc_msgSend(v21, "objectForKeyedSubscript:", CFSTR("Info")));
          v27 = objc_opt_class(&OBJC_CLASS___NSDictionary);
          if ( (objc_opt_isKindOfClass(v26, v27) & 1) != 0 )
          {
            v28 = objc_retainAutoreleasedReturnValue(objc_msgSend(v26, "objectForKeyedSubscript:", CFSTR("MobileDeviceMinVersion")));
            v29 = objc_opt_class(&OBJC_CLASS___NSString);
            v61 = v28;
            if ( (objc_opt_isKindOfClass(v28, v29) & 1) != 0 )
            {
              v59 = objc_retainAutoreleasedReturnValue((id)AMDGetBundleVersion());
              v30 = -[UARPUpdaterDisplayControllerDelegate isMDVersionGreaterLeft:thanRight:](
                      v60,
                      "isMDVersionGreaterLeft:thanRight:",
                      v28,
                      v59);
              if ( v30 )
              {
                v56 = v30;
                log = v60->_log;
                if ( os_log_type_enabled(log, OS_LOG_TYPE_ERROR) )
                {
                  v71.st_dev = 136315650;
                  *(_QWORD *)&v71.st_mode = "-[UARPUpdaterDisplayControllerDelegate isMDFrameworkUpToDate:assetURL:]";
                  WORD2(v71.st_ino) = 2112;
                  *(__darwin_ino64_t *)((char *)&v71.st_ino + 6) = (__darwin_ino64_t)v61;
                  HIWORD(v71.st_gid) = 2112;
                  *(_QWORD *)&v71.st_rdev = v59;
                  _os_log_error_impl(
                    (void *)&_mh_execute_header,
                    log,
                    OS_LOG_TYPE_ERROR,
                    "%s: Update needed, MobileDeviceMinVersion:%@, current MobileDevice version:%@",
                    (uint8_t *)&v71,
                    0x20u);
                }
                v55 = dispatch_queue_create("MobileDevice_update_queue", 0LL);
                mach_service = xpc_connection_create_mach_service("com.apple.DeviceSupportUpdater", v55, 0LL);
                handler[0] = _NSConcreteStackBlock;
                handler[1] = 3254779904LL;
                handler[2] = sub_100009248;
                handler[3] = &unk_100020700;
                handler[4] = v60;
                v33 = mach_service;
                xpc_connection_set_event_handler(mach_service, handler);
                memset(&v71, 0, sizeof(v71));
                connectiona = v33;
                if ( stat("/dev/console", &v71) )
                {
                  v34 = v60->_log;
                  if ( os_log_type_enabled(v34, OS_LOG_TYPE_ERROR) )
                    sub_100014124(v69, &v70, v34);
                }
                else
                {
                  xpc_connection_set_target_uid(v33, v71.st_uid);
                  xpc_connection_resume(v33);
                  v47 = objc_retainAutoreleasedReturnValue(
                          -[UARPUpdaterDisplayControllerDelegate localizedStringForKey:](
                            v60,
                            "localizedStringForKey:",
                            CFSTR("SOFTWARE_UPDATE_PROMPT")));
                  v46 = objc_retainAutoreleasedReturnValue(
                          -[UARPUpdaterDisplayControllerDelegate localizedStringForKey:](
                            v60,
                            "localizedStringForKey:",
                            CFSTR("Apple Studio Display")));
                  v48 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", v47, v46));
                  objc_release(v46);
                  objc_release(v47);
                  v36 = xpc_dictionary_create(0LL, 0LL, 0LL);
                  xpc_dictionary_set_int64(v36, "BoardID", value);
                  v50 = v36;
                  xpc_dictionary_set_int64(v36, "ChipID", v44);
                  v49 = objc_retainAutorelease(v48);
                  xpc_dictionary_set_string(v36, "Prompt", -[NSString UTF8String](v49, "UTF8String"));
                  v37 = xpc_dictionary_create(0LL, 0LL, 0LL);
                  xpc_dictionary_set_string(v37, "Command", "TriggerUpdate");
                  xpc_dictionary_set_value(v37, "CommandOptions", v50);
                  xpc_connection_send_message(connectiona, v37);
                  CFRunLoopRun();
                  objc_release(v37);
                  objc_release(v50);
                  objc_release(v49);
                }
                objc_release(connectiona);
                objc_release(v55);
                LOBYTE(v30) = v56;
              }
              connection = v30 ^ 1;
              objc_release(v59);
              v35 = 1;
            }
            else
            {
              v35 = 3;
            }
            objc_release(v61);
          }
          else
          {
            v35 = 3;
          }
          objc_release(v26);
          objc_release(v24);
          objc_release(v22);
          if ( v35 != 3 )
          {
            objc_release(v16);
            v11 = v53;
            v6 = v54;
            v9 = v62;
            v14 = v51;
            v13 = v52;
            v40 = connection;
            goto LABEL_43;
          }
          v9 = v62;
LABEL_22:
          v20 = (char *)v20 + 1;
        }
        while ( v18 != v20 );
        v38 = objc_msgSend(v16, "countByEnumeratingWithState:objects:count:", &v65, v72, 16LL);
        v18 = v38;
        if ( !v38 )
        {
LABEL_33:
          objc_release(v16);
          v39 = v60->_log;
          if ( os_log_type_enabled(v39, OS_LOG_TYPE_ERROR) )
            sub_1000140AC(v39);
          v40 = 0;
          v11 = v53;
          v6 = v54;
          v14 = v51;
          v13 = v52;
          goto LABEL_43;
        }
      }
    }
    v42 = v60->_log;
    if ( os_log_type_enabled(v42, OS_LOG_TYPE_ERROR) )
      sub_10001416C(v42);
    v40 = 0;
LABEL_43:
    objc_release(v14);
  }
  else
  {
    v41 = self->_log;
    if ( os_log_type_enabled(v41, OS_LOG_TYPE_ERROR) )
      sub_100014034(v41);
    v40 = 0;
  }
  objc_release(v13);
  objc_release(v11);
  objc_release(v63);
  objc_release(v9);
  objc_release(v6);
  return v40 & 1;
}