-[UARPUpdaterDisplayControllerDelegate consentReceived:]
void __cdecl -[UARPUpdaterDisplayControllerDelegate consentReceived:](
        UARPUpdaterDisplayControllerDelegate *self,
        SEL a2,
        id a3)
{
  OS_os_log *v4; // x19
  void *v5; // x20
  void *v6; // x21
  void *v7; // x19
  id v8; // x21
  unsigned __int8 v9; // w20
  id v10; // x21
  os_log_s *log; // x19
  void *v12; // x19
  _BOOL4 v13; // w20
  void *v14; // x19
  void *v15; // x0
  id v16; // x24
  id v17; // x27
  void *v18; // x22
  void *v19; // x19
  const char *v20; // x25
  id v21; // x20
  DisplayUSBDrives *v22; // x19
  OS_os_log *v23; // x26
  void *v24; // x23
  void *v25; // x28
  DisplayUSBDrives *v26; // x19
  _BOOL8 v27; // x23
  id v28; // x28
  preflightInfo *v29; // x24
  void *v30; // x24
  void *v31; // x24
  void *v32; // x26
  void *v33; // x21
  void *v34; // x24
  void *v35; // x26
  void *v36; // x21
  _BOOL4 v37; // w8
  void *v38; // x23
  void *v39; // x24
  void *v40; // x26
  char v41; // w8
  id v42; // x0
  os_log_s *v43; // x23
  os_log_s *v44; // x23
  int v45; // w8
  int v46; // w8
  id v47; // x19
  id v48; // x20
  __int64 v49; // x19
  int v50; // w8
  UARPUpdaterDisplayControllerDelegate *v51; // x22
  os_log_s *v52; // x20
  void *v53; // x20
  void *v54; // x21
  dispatch_source_s *v55; // x25
  __int64 v56; // x23
  __CFString *v57; // x23
  UARPUpdaterDisplayControllerDelegate *v58; // x9
  _BOOL4 stopUpdate; // w22
  os_log_s *v60; // x0
  os_log_s *v61; // x24
  dispatch_source_s *v62; // x22
  id v63; // x25
  NSDictionary *v64; // x24
  void *v65; // x25
  UARPUpdaterDisplayControllerDelegate *v66; // x9
  __int64 v67; // x0
  __int64 v68; // x20
  int v69; // w8
  os_log_s *v70; // x21
  dispatch_queue_s *v71; // x19
  dispatch_source_s *v72; // x21
  dispatch_time_t v73; // x0
  unsigned int v74; // w19
  void *v75; // x22
  void *v76; // x0
  void *v77; // x22
  void *v78; // x28
  void *v79; // x25
  void *v80; // x23
  void *v81; // x19
  void *v82; // x0
  os_log_s *v83; // x23
  dispatch_semaphore_s *v84; // x23
  dispatch_time_t v85; // x0
  bool v86; // w19
  os_log_s *v87; // x23
  os_log_s *v88; // x23
  void *v89; // x25
  void *v90; // x23
  os_log_s *v91; // x23
  id v92; // x25
  NSUUID *v93; // x23
  NSString *v94; // x26
  NSString *v95; // x21
  NSNumber *v96; // x23
  os_log_s *v97; // x23
  __int64 v98; // x23
  int v99; // w0
  int v100; // w26
  os_log_s *v101; // x26
  void *v102; // x26
  os_log_s *v103; // x26
  void *v104; // x19
  NSNumber *v105; // x26
  void *v106; // x23
  os_log_s *v107; // x23
  os_log_s *v108; // x23
  id v109; // x25
  int v110; // w8
  os_log_s *v111; // x19
  os_log_s *v112; // x19
  os_log_s *v113; // x19
  os_log_s *v114; // x19
  id v115; // [xsp+10h] [xbp-480h]
  unsigned int v116; // [xsp+1Ch] [xbp-474h]
  dispatch_source_s *v117; // [xsp+20h] [xbp-470h]
  id v118; // [xsp+28h] [xbp-468h]
  id v119; // [xsp+68h] [xbp-428h]
  unsigned int v120; // [xsp+74h] [xbp-41Ch]
  __int64 v121; // [xsp+78h] [xbp-418h]
  NSMutableDictionary *v122; // [xsp+90h] [xbp-400h]
  id v123; // [xsp+98h] [xbp-3F8h]
  id v124; // [xsp+A0h] [xbp-3F0h]
  id v125; // [xsp+A8h] [xbp-3E8h]
  id v126; // [xsp+B0h] [xbp-3E0h]
  unsigned int v127; // [xsp+BCh] [xbp-3D4h]
  id obj; // [xsp+C0h] [xbp-3D0h]
  id obja; // [xsp+C0h] [xbp-3D0h]
  id v130; // [xsp+C8h] [xbp-3C8h]
  id v131; // [xsp+E0h] [xbp-3B0h]
  NSString *v132; // [xsp+E0h] [xbp-3B0h]
  id v133; // [xsp+E0h] [xbp-3B0h]
  void *v134; // [xsp+E8h] [xbp-3A8h]
  const char *v135; // [xsp+E8h] [xbp-3A8h]
  __int64 v136; // [xsp+F0h] [xbp-3A0h]
  id v137; // [xsp+F8h] [xbp-398h]
  DisplayUSBDrives *v138; // [xsp+100h] [xbp-390h]
  id v139; // [xsp+108h] [xbp-388h]
  UARPUpdaterDisplayControllerDelegate *v140; // [xsp+110h] [xbp-380h]
  id v141; // [xsp+118h] [xbp-378h] BYREF
  id v142; // [xsp+120h] [xbp-370h] BYREF
  void *v143; // [xsp+128h] [xbp-368h] BYREF
  __int128 v144; // [xsp+130h] [xbp-360h] BYREF
  __int128 v145; // [xsp+140h] [xbp-350h]
  __int128 v146; // [xsp+150h] [xbp-340h]
  __int128 v147; // [xsp+160h] [xbp-330h]
  _QWORD handler[5]; // [xsp+178h] [xbp-318h] BYREF
  id v149; // [xsp+1A0h] [xbp-2F0h]
  id v150; // [xsp+1A8h] [xbp-2E8h]
  _QWORD *v151; // [xsp+1B0h] [xbp-2E0h]
  __int64 v152; // [xsp+1B8h] [xbp-2D8h]
  _QWORD v153[4]; // [xsp+1C0h] [xbp-2D0h] BYREF
  id v154; // [xsp+1E0h] [xbp-2B0h]
  id v155; // [xsp+1E8h] [xbp-2A8h]
  _QWORD *v156; // [xsp+1F0h] [xbp-2A0h]
  _BYTE *v157; // [xsp+1F8h] [xbp-298h]
  __int64 v158; // [xsp+200h] [xbp-290h]
  _QWORD v159[4]; // [xsp+208h] [xbp-288h] BYREF
  id v160; // [xsp+228h] [xbp-268h]
  id v161; // [xsp+230h] [xbp-260h]
  _BYTE *v162; // [xsp+238h] [xbp-258h]
  _QWORD *v163; // [xsp+240h] [xbp-250h]
  __int64 v164; // [xsp+248h] [xbp-248h]
  __int128 v165; // [xsp+250h] [xbp-240h] BYREF
  __int128 v166; // [xsp+260h] [xbp-230h]
  __int128 v167; // [xsp+270h] [xbp-220h]
  __int128 v168; // [xsp+280h] [xbp-210h]
  _QWORD v169[4]; // [xsp+290h] [xbp-200h] BYREF
  _QWORD v170[4]; // [xsp+2B0h] [xbp-1E0h] BYREF
  NSErrorUserInfoKey v171; // [xsp+2D0h] [xbp-1C0h] BYREF
  __CFString *v172; // [xsp+2D8h] [xbp-1B8h] BYREF
  uint8_t v173[128]; // [xsp+2E0h] [xbp-1B0h] BYREF
  uint8_t v174[4]; // [xsp+360h] [xbp-130h] BYREF
  const char *v175; // [xsp+364h] [xbp-12Ch]
  __int16 v176; // [xsp+36Ch] [xbp-124h]
  const char *v177; // [xsp+36Eh] [xbp-122h]
  __int16 v178; // [xsp+376h] [xbp-11Ah]
  id v179; // [xsp+378h] [xbp-118h]
  uint8_t v180[128]; // [xsp+380h] [xbp-110h] BYREF
  _BYTE buf[24]; // [xsp+400h] [xbp-90h] BYREF
  void *v182; // [xsp+418h] [xbp-78h]

  v126 = objc_retain(a3);
  v122 = objc_retain(self->_preflightInfo);
  objc_sync_enter(v122);
  v140 = self;
  v4 = objc_retain(self->_log);
  if ( os_log_type_enabled(v4, OS_LOG_TYPE_DEFAULT) )
  {
    v5 = objc_retain(objc_retainAutoreleasedReturnValue(objc_msgSend(v126, "accessoryName")));
    v6 = objc_retain(objc_retainAutoreleasedReturnValue(objc_msgSend(v126, "assetVersion")));
    *(_DWORD *)buf = 136315650;
    *(_QWORD *)&buf[4] = "-[UARPUpdaterDisplayControllerDelegate consentReceived:]";
    *(_WORD *)&buf[12] = 2112;
    *(_QWORD *)&buf[14] = v5;
    *(_WORD *)&buf[22] = 2112;
    v182 = v6;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v4,
      OS_LOG_TYPE_DEFAULT,
      "%s: Consent received to update accessory %@ with asset version %@",
      buf,
      0x20u);
    objc_release(v6);
    objc_release(v5);
    objc_release(v6);
    objc_release(v5);
  }
  objc_release(v4);
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v126, "accessoryName"));
  v8 = objc_retainAutoreleasedReturnValue(
         -[UARPUpdaterDisplayControllerDelegate localizedStringForKey:](
           v140,
           "localizedStringForKey:",
           CFSTR("Apple Studio Display")));
  v9 = (unsigned __int8)objc_msgSend(v7, "isEqualToString:", v8);
  objc_release(v8);
  objc_release(v7);
  if ( (v9 & 1) == 0 )
    goto LABEL_99;
  v10 = objc_alloc_init((Class)&OBJC_CLASS___UARPController);
  objc_msgSend(v10, "setDelegate:", v140);
  if ( v140->_consentStage == 2 )
  {
    log = v140->_log;
    if ( os_log_type_enabled(log, OS_LOG_TYPE_DEFAULT) )
    {
      *(_DWORD *)buf = 136315138;
      *(_QWORD *)&buf[4] = "-[UARPUpdaterDisplayControllerDelegate consentReceived:]";
      _os_log_impl((void *)&_mh_execute_header, log, OS_LOG_TYPE_DEFAULT, "%s: Waiting for a restart", buf, 0xCu);
    }
    objc_msgSend(v10, "progressForUARPConsent:bytesSent:bytesTotal:", v126, 100LL, 100LL);
    goto LABEL_98;
  }
  v140->_consentStage = 1;
  objc_msgSend(v126, "setInstallerOverallProgress:", 0LL);
  objc_msgSend(v10, "progressForUARPConsent:bytesSent:bytesTotal:", v126, 0LL, 100LL);
  v119 = v10;
  *(_QWORD *)buf = 0LL;
  *(_QWORD *)&buf[8] = buf;
  *(_QWORD *)&buf[16] = 0x2020000000LL;
  v182 = 0LL;
  v170[0] = 0LL;
  v170[1] = v170;
  v170[2] = 0x2020000000LL;
  v170[3] = 0LL;
  v169[0] = 0LL;
  v169[1] = v169;
  v169[2] = 0x2020000000LL;
  v169[3] = 0x4054000000000000LL;
  -[NSMutableDictionary removeAllObjects](v140->_preflightInfo, "removeAllObjects");
  v139 = objc_retainAutoreleasedReturnValue(-[UARPUpdaterDisplayControllerDelegate findApplicableDevices](v140, "findApplicableDevices"));
  v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v139, "objectForKeyedSubscript:", CFSTR("ContainerIDs")));
  v13 = objc_msgSend(v12, "count") == 0LL;
  objc_release(v12);
  v120 = kAMRestorableInvalidClientID;
  if ( v13 )
  {
    v51 = v140;
    v112 = v140->_log;
    if ( os_log_type_enabled(v112, OS_LOG_TYPE_ERROR) )
    {
      sub_100014F4C(v112);
      v132 = 0LL;
      v53 = 0LL;
      v54 = 0LL;
      v55 = 0LL;
      v137 = 0LL;
      v130 = 0LL;
      v28 = 0LL;
      v26 = 0LL;
      v17 = 0LL;
      v127 = 2;
      goto LABEL_78;
    }
    v132 = 0LL;
    v53 = 0LL;
    v54 = 0LL;
    v55 = 0LL;
    v137 = 0LL;
    v130 = 0LL;
    v28 = 0LL;
    v26 = 0LL;
    v17 = 0LL;
    v127 = 2;
    goto LABEL_74;
  }
  v167 = 0u;
  v168 = 0u;
  v165 = 0u;
  v166 = 0u;
  v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v139, "objectForKeyedSubscript:", CFSTR("ContainerIDs")));
  obj = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "allKeys"));
  objc_release(v14);
  v15 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v165, v180, 16LL);
  if ( !v15 )
  {
    objc_release(obj);
    v26 = 0LL;
    v28 = 0LL;
    v137 = 0LL;
    v130 = 0LL;
    v50 = 7;
LABEL_71:
    v127 = v50;
    v51 = v140;
    v52 = v140->_log;
    if ( os_log_type_enabled(v52, OS_LOG_TYPE_ERROR) )
    {
      sub_100014FC4(v52);
      v132 = 0LL;
      v53 = 0LL;
      v54 = 0LL;
      v55 = 0LL;
      v17 = 0LL;
      goto LABEL_78;
    }
    v132 = 0LL;
    v53 = 0LL;
    v54 = 0LL;
    v55 = 0LL;
    v17 = 0LL;
LABEL_74:
    v56 = v120;
    goto LABEL_80;
  }
  v136 = 0LL;
  v137 = 0LL;
  v130 = 0LL;
  v16 = 0LL;
  v138 = 0LL;
  v17 = 0LL;
  v131 = *(id *)v166;
  v127 = 7;
  do
  {
    v134 = v15;
    v18 = 0LL;
    v19 = v17;
    do
    {
      if ( *(id *)v166 != v131 )
        objc_enumerationMutation(obj);
      v17 = objc_retain(*(id *)(*((_QWORD *)&v165 + 1) + 8LL * (_QWORD)v18));
      objc_release(v19);
      v20 = (const char *)objc_msgSend(v17, "unsignedLongLongValue");
      v21 = objc_retainAutoreleasedReturnValue(-[UARPUpdaterDisplayControllerDelegate getRemoteDeviceWithECID:](v140, "getRemoteDeviceWithECID:", v20));
      if ( !v21 )
      {
        v44 = objc_retain(v140->_log);
        if ( os_log_type_enabled(v44, OS_LOG_TYPE_ERROR) )
        {
          *(_DWORD *)v174 = 136315394;
          v175 = "-[UARPUpdaterDisplayControllerDelegate consentReceived:]";
          v176 = 2048;
          v177 = v20;
          _os_log_error_impl(
            (void *)&_mh_execute_header,
            v44,
            OS_LOG_TYPE_ERROR,
            "%s: Failed to find device with ecid 0x%llx",
            v174,
            0x16u);
        }
        goto LABEL_46;
      }
      if ( v140->_audienceChange || v140->_stopUpdate )
      {
        v28 = v16;
        v26 = v138;
        goto LABEL_77;
      }
      v22 = objc_alloc(&OBJC_CLASS___DisplayUSBDrives);
      v23 = v140->_log;
      v24 = objc_retainAutoreleasedReturnValue(objc_msgSend(v139, "objectForKeyedSubscript:", CFSTR("ContainerIDs")));
      v25 = objc_retainAutoreleasedReturnValue(objc_msgSend(v24, "objectForKeyedSubscript:", v17));
      v26 = -[DisplayUSBDrives initWithLog:usbContainerID:](v22, "initWithLog:usbContainerID:", v23, v25);
      objc_release(v138);
      objc_release(v25);
      objc_release(v24);
      if ( !v26 )
      {
        v44 = objc_retain(v140->_log);
        if ( os_log_type_enabled(v44, OS_LOG_TYPE_ERROR) )
        {
          *(_DWORD *)v174 = 136315394;
          v175 = "-[UARPUpdaterDisplayControllerDelegate consentReceived:]";
          v176 = 2048;
          v177 = v20;
          _os_log_error_impl(
            (void *)&_mh_execute_header,
            v44,
            OS_LOG_TYPE_ERROR,
            "%s: Failed to create DisplayUSBDrives for device with ecid 0x%llx",
            v174,
            0x16u);
        }
        v138 = 0LL;
LABEL_46:
        v127 = 2;
        goto LABEL_60;
      }
      if ( -[DisplayUSBDrives isBootedFromUSBDrive](v26, "isBootedFromUSBDrive") )
      {
        v44 = objc_retain(v140->_log);
        if ( os_log_type_enabled(v44, OS_LOG_TYPE_ERROR) )
        {
          *(_DWORD *)v174 = 136315394;
          v175 = "-[UARPUpdaterDisplayControllerDelegate consentReceived:]";
          v176 = 2048;
          v177 = v20;
          _os_log_error_impl(
            (void *)&_mh_execute_header,
            v44,
            OS_LOG_TYPE_ERROR,
            "%s: Device with ecid 0x%llx is booted from USB drive",
            v174,
            0x16u);
        }
        v45 = 4;
      }
      else
      {
        if ( v140->_audienceChange || v140->_stopUpdate )
        {
          v28 = v16;
LABEL_77:
          objc_release(v21);
          objc_release(obj);
          v132 = 0LL;
          v53 = 0LL;
          v54 = 0LL;
          v55 = 0LL;
LABEL_78:
          v56 = v120;
LABEL_79:
          v51 = v140;
LABEL_80:
          -[NSMutableDictionary removeAllObjects](v51->_preflightInfo, "removeAllObjects");
          v140->_consentStage = 0;
          if ( v55 )
            dispatch_source_cancel(v55);
          if ( (_DWORD)v56 != v120 )
            AMRestorableDeviceUnregisterForNotifications(v56);
          if ( v127 == 7 )
            v57 = 0LL;
          else
            v57 = (__CFString *)objc_retainAutoreleasedReturnValue(
                                  -[UARPUpdaterDisplayControllerDelegate getErrorMessage:size:](
                                    v140,
                                    "getErrorMessage:size:"));
          v58 = v140;
          if ( v140->_audienceChange )
          {
            objc_release(v57);
            v58 = v140;
            v140->_audienceChange = 0;
            v57 = CFSTR("User requested audience change");
          }
          stopUpdate = v58->_stopUpdate;
          v60 = objc_retain(v58->_log);
          v61 = v60;
          if ( stopUpdate )
          {
            v62 = v55;
            if ( os_log_type_enabled(v60, OS_LOG_TYPE_DEFAULT) )
            {
              *(_DWORD *)v174 = 136315138;
              v175 = "-[UARPUpdaterDisplayControllerDelegate consentReceived:]";
              _os_log_impl(
                (void *)&_mh_execute_header,
                v61,
                OS_LOG_TYPE_DEFAULT,
                "%s: User cancelled update",
                v174,
                0xCu);
            }
            objc_release(v61);
            v140->_stopUpdate = 0;
          }
          else
          {
            v62 = v55;
            if ( os_log_type_enabled(v60, OS_LOG_TYPE_ERROR) )
              sub_100014ED8(v57, v61);
            objc_release(v61);
            v63 = objc_alloc((Class)&OBJC_CLASS___NSError);
            v171 = NSLocalizedDescriptionKey;
            v172 = v57;
            v64 = objc_retainAutoreleasedReturnValue(
                    +[NSDictionary dictionaryWithObjects:forKeys:count:](
                      &OBJC_CLASS___NSDictionary,
                      "dictionaryWithObjects:forKeys:count:",
                      &v172,
                      &v171,
                      1LL));
            v65 = objc_msgSend(
                    v63,
                    "initWithDomain:code:userInfo:",
                    CFSTR("com.apple.DarwinAccessoryUpdate.A2525"),
                    0LL,
                    v64);
            objc_msgSend(v126, "setInstallerProgressError:", v65);
            objc_release(v65);
            objc_release(v64);
            objc_msgSend(v126, "setInstallerOverallProgress:", &off_1000218D8);
            objc_msgSend(v119, "progressForUARPConsent:bytesSent:bytesTotal:", v126, 100LL, 100LL);
            -[UARPUpdaterDisplayControllerDelegate recheckUpdates](v140, "recheckUpdates");
          }
          objc_release(v57);
          v16 = v28;
          v138 = v26;
          goto LABEL_97;
        }
        v27 = -[UARPUpdaterDisplayControllerDelegate getDefaultBool:defaultValue:](
                v140,
                "getDefaultBool:defaultValue:",
                CFSTR("InstallInternalVariant"),
                objc_msgSend(v21, "internal"));
        LOBYTE(v143) = 0;
        v28 = objc_retainAutoreleasedReturnValue(
                -[UARPUpdaterDisplayControllerDelegate findAssetRemote:forDevice:withECID:needsUpdate:requestConsent:prodFused:](
                  v140,
                  "findAssetRemote:forDevice:withECID:needsUpdate:requestConsent:prodFused:",
                  0LL,
                  v21,
                  v17,
                  &v143,
                  0LL,
                  objc_msgSend(v21, "prodFused")));
        objc_release(v16);
        if ( v28 )
        {
          if ( (_BYTE)v143 )
          {
            if ( v140->_audienceChange || v140->_stopUpdate )
              goto LABEL_77;
            v29 = objc_alloc_init(&OBJC_CLASS___preflightInfo);
            -[NSMutableDictionary setObject:forKeyedSubscript:](
              v140->_preflightInfo,
              "setObject:forKeyedSubscript:",
              v29,
              v17);
            objc_release(v29);
            v30 = objc_retainAutoreleasedReturnValue(
                    -[NSMutableDictionary objectForKeyedSubscript:](
                      v140->_preflightInfo,
                      "objectForKeyedSubscript:",
                      v17));
            objc_msgSend(v30, "setInternalBuild:", v27);
            objc_release(v30);
            v31 = objc_retainAutoreleasedReturnValue(
                    -[NSMutableDictionary objectForKeyedSubscript:](
                      v140->_preflightInfo,
                      "objectForKeyedSubscript:",
                      v17));
            v32 = objc_retainAutoreleasedReturnValue(objc_msgSend(v139, "objectForKeyedSubscript:", CFSTR("ContainerIDs")));
            v33 = objc_retainAutoreleasedReturnValue(objc_msgSend(v32, "objectForKeyedSubscript:", v17));
            objc_msgSend(v31, "setPreflightContainerID:", v33);
            objc_release(v33);
            objc_release(v32);
            objc_release(v31);
            v34 = objc_retainAutoreleasedReturnValue(
                    -[NSMutableDictionary objectForKeyedSubscript:](
                      v140->_preflightInfo,
                      "objectForKeyedSubscript:",
                      v17));
            v35 = objc_retainAutoreleasedReturnValue(objc_msgSend(v139, "objectForKeyedSubscript:", CFSTR("RegistryEntryIDs")));
            v36 = objc_retainAutoreleasedReturnValue(objc_msgSend(v35, "objectForKeyedSubscript:", v17));
            objc_msgSend(v34, "setPreflightRegistryEntryID:", v36);
            objc_release(v36);
            objc_release(v35);
            objc_release(v34);
            if ( v137 )
              v37 = 0;
            else
              v37 = v27;
            if ( v37 )
            {
              v38 = objc_retainAutoreleasedReturnValue(objc_msgSend(v28, "attributes"));
              v39 = objc_retainAutoreleasedReturnValue(objc_msgSend(v38, "objectForKeyedSubscript:", CFSTR("_DownloadSize")));
              v40 = objc_msgSend(v39, "longLongValue");
              v137 = v28;
            }
            else
            {
              if ( v130 )
                v41 = 1;
              else
                v41 = v27;
              if ( (v41 & 1) != 0 )
                goto LABEL_36;
              v38 = objc_retainAutoreleasedReturnValue(objc_msgSend(v28, "attributes"));
              v39 = objc_retainAutoreleasedReturnValue(objc_msgSend(v38, "objectForKeyedSubscript:", CFSTR("_DownloadSize")));
              v40 = objc_msgSend(v39, "longLongValue");
              v130 = v28;
            }
            objc_release(v39);
            objc_release(v38);
            v136 += (__int64)v40;
            v42 = objc_retain(v28);
LABEL_36:
            v43 = objc_retain(v140->_log);
            if ( os_log_type_enabled(v43, OS_LOG_TYPE_DEFAULT) )
            {
              *(_DWORD *)v174 = 136315394;
              v175 = "-[UARPUpdaterDisplayControllerDelegate consentReceived:]";
              v176 = 2048;
              v177 = v20;
              _os_log_impl(
                (void *)&_mh_execute_header,
                v43,
                OS_LOG_TYPE_DEFAULT,
                "%s: Device with ecid 0x%llx will be updated",
                v174,
                0x16u);
            }
            v16 = v28;
            v138 = v26;
            goto LABEL_39;
          }
          v46 = v127;
          if ( v127 == 7 )
            v46 = 5;
          v127 = v46;
          v44 = objc_retain(v140->_log);
          if ( os_log_type_enabled(v44, OS_LOG_TYPE_ERROR) )
          {
            *(_DWORD *)v174 = 136315394;
            v175 = "-[UARPUpdaterDisplayControllerDelegate consentReceived:]";
            v176 = 2048;
            v177 = v20;
            _os_log_error_impl(
              (void *)&_mh_execute_header,
              v44,
              OS_LOG_TYPE_ERROR,
              "%s: Device with ecid 0x%llx does not need update",
              v174,
              0x16u);
          }
          v16 = v28;
          goto LABEL_59;
        }
        v44 = objc_retain(v140->_log);
        if ( os_log_type_enabled(v44, OS_LOG_TYPE_ERROR) )
        {
          *(_DWORD *)v174 = 136315394;
          v175 = "-[UARPUpdaterDisplayControllerDelegate consentReceived:]";
          v176 = 2048;
          v177 = v20;
          _os_log_error_impl(
            (void *)&_mh_execute_header,
            v44,
            OS_LOG_TYPE_ERROR,
            "%s: Could not find asset for device with ecid 0x%llx",
            v174,
            0x16u);
        }
        v16 = 0LL;
        v45 = 1;
      }
      v127 = v45;
LABEL_59:
      v138 = v26;
LABEL_60:
      objc_release(v44);
      v43 = objc_retain(v140->_log);
      if ( os_log_type_enabled(v43, OS_LOG_TYPE_ERROR) )
      {
        v47 = objc_retain(
                objc_retainAutoreleasedReturnValue(
                  -[UARPUpdaterDisplayControllerDelegate getErrorMessage:size:](
                    v140,
                    "getErrorMessage:size:",
                    v127,
                    v136)));
        *(_DWORD *)v174 = 136315650;
        v175 = "-[UARPUpdaterDisplayControllerDelegate consentReceived:]";
        v176 = 2048;
        v177 = v20;
        v178 = 2112;
        v179 = v47;
        _os_log_error_impl(
          (void *)&_mh_execute_header,
          v43,
          OS_LOG_TYPE_ERROR,
          "%s: Device with ecid 0x%llx is not updated because: %@",
          v174,
          0x20u);
        objc_release(v47);
        objc_release(v47);
      }
LABEL_39:
      objc_release(v43);
      objc_release(v21);
      v18 = (char *)v18 + 1;
      v19 = v17;
    }
    while ( v134 != v18 );
    v15 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v165, v180, 16LL);
  }
  while ( v15 );
  objc_release(v17);
  objc_release(obj);
  if ( v136 <= 0 )
  {
    v26 = v138;
    v28 = v16;
    v50 = v127;
    goto LABEL_71;
  }
  objc_msgSend(v126, "setInstallerProgressPhase:", SUOSUUpdateStatusDownloadingPhase);
  if ( v137 )
  {
    v159[0] = _NSConcreteStackBlock;
    v159[1] = 3254779904LL;
    v159[2] = sub_10000E6DC;
    v159[3] = &unk_100020850;
    v162 = buf;
    v163 = v170;
    v160 = objc_retain(v126);
    v164 = v136;
    v161 = objc_retain(v119);
    objc_msgSend(v137, "attachProgressCallBack:", v159);
    objc_release(v161);
    objc_release(v160);
  }
  v48 = v130;
  if ( v130 )
  {
    v153[0] = _NSConcreteStackBlock;
    v153[1] = 3254779904LL;
    v153[2] = sub_10000E84C;
    v153[3] = &unk_100020850;
    v156 = v170;
    v157 = buf;
    v154 = objc_retain(v126);
    v158 = v136;
    v155 = objc_retain(v119);
    objc_msgSend(v130, "attachProgressCallBack:", v153);
    objc_release(v155);
    objc_release(v154);
    v48 = v130;
  }
  if ( v137 )
  {
    v49 = -[UARPUpdaterDisplayControllerDelegate downloadAsset:internal:withForce:](
            v140,
            "downloadAsset:internal:withForce:",
            v137,
            1LL,
            1LL);
    v48 = v130;
  }
  else
  {
    v49 = 6LL;
  }
  v66 = v140;
  if ( v140->_audienceChange )
    goto LABEL_193;
  if ( v140->_stopUpdate )
    goto LABEL_106;
  if ( !v48 )
  {
    v68 = 6LL;
    goto LABEL_108;
  }
  v67 = -[UARPUpdaterDisplayControllerDelegate downloadAsset:internal:withForce:](
          v140,
          "downloadAsset:internal:withForce:",
          v48,
          0LL,
          1LL);
  v66 = v140;
  if ( v140->_audienceChange )
  {
LABEL_193:
    v132 = 0LL;
    v53 = 0LL;
    v54 = 0LL;
    v55 = 0LL;
    v17 = 0LL;
    v127 = 7;
    v56 = v120;
    v28 = v16;
    v26 = v138;
    v51 = v66;
    goto LABEL_80;
  }
  v68 = v67;
  if ( v140->_stopUpdate )
  {
LABEL_106:
    v132 = 0LL;
    v53 = 0LL;
    v54 = 0LL;
    v55 = 0LL;
    v17 = 0LL;
    v69 = 7;
LABEL_199:
    v127 = v69;
    v56 = v120;
    v28 = v16;
    v26 = v138;
    goto LABEL_79;
  }
LABEL_108:
  if ( (_DWORD)v49 != 1 && (_DWORD)v68 != 1 )
  {
    v70 = objc_retain(v140->_log);
    if ( os_log_type_enabled(v70, OS_LOG_TYPE_ERROR) )
      sub_10001512C(v49, v68, v70);
    objc_release(v70);
    v17 = 0LL;
    v127 = 6;
    if ( (_DWORD)v49 == 4
      || (_DWORD)v68 == 4
      || (v127 = 0, v17 = 0LL, (_DWORD)v49 == 5)
      || (_DWORD)v68 == 5
      || (v17 = 0LL, v127 = 1, (_DWORD)v49 == 6)
      || (_DWORD)v68 == 6 )
    {
      v53 = 0LL;
      v54 = 0LL;
      v56 = v120;
      v55 = 0LL;
      v28 = v16;
      v26 = v138;
      v132 = 0LL;
      goto LABEL_79;
    }
  }
  objc_msgSend(v126, "setInstallerProgressPhase:", SUOSUUpdateStatusPreparingPhase);
  objc_msgSend(v126, "setInstallerOverallProgress:", &off_1000218C8);
  objc_msgSend(v119, "progressForUARPConsent:bytesSent:bytesTotal:", v126, v136, v136);
  v71 = dispatch_queue_create("com.apple.DarwinAccessoryUpdate.A2525", 0LL);
  v72 = dispatch_source_create((dispatch_source_type_t)&_dispatch_source_type_timer, 0LL, 0LL, v71);
  handler[0] = _NSConcreteStackBlock;
  handler[1] = 3254779904LL;
  handler[2] = sub_10000E908;
  handler[3] = &unk_100020880;
  handler[4] = v140;
  v151 = v169;
  v118 = objc_retain(v126);
  v149 = v118;
  v115 = objc_retain(v119);
  v150 = v115;
  v152 = v136;
  dispatch_source_set_event_handler(v72, handler);
  v73 = dispatch_time(0LL, 0LL);
  dispatch_source_set_timer(v72, v73, 0x5F5E100uLL, 0x5F5E100uLL);
  v117 = v72;
  dispatch_activate(v72);
  objc_release(v150);
  objc_release(v149);
  objc_release(v71);
  v74 = AMRestorableDeviceRegisterForNotificationsForDevices(sub_10000E9DC, v140, 256LL, 0LL);
  if ( v74 == v120 )
  {
    v55 = v72;
    v113 = v140->_log;
    if ( os_log_type_enabled(v113, OS_LOG_TYPE_ERROR) )
      sub_10001503C(v113);
    v132 = 0LL;
    v53 = 0LL;
    v54 = 0LL;
    v17 = 0LL;
    v69 = 2;
    goto LABEL_199;
  }
  v146 = 0u;
  v147 = 0u;
  v144 = 0u;
  v145 = 0u;
  v75 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary allKeys](v140->_preflightInfo, "allKeys"));
  v76 = objc_msgSend(v75, "countByEnumeratingWithState:objects:count:", &v144, v173, 16LL);
  v116 = v74;
  if ( v76 )
  {
    v125 = v75;
    v132 = 0LL;
    v53 = 0LL;
    v54 = 0LL;
    v17 = 0LL;
    v127 = 7;
    obja = *(id *)v145;
    v121 = kIASAuthInstallServiceID;
    while ( 2 )
    {
      v77 = v76;
      v78 = 0LL;
      v79 = v53;
      v80 = v16;
      v81 = v17;
LABEL_122:
      if ( *(id *)v145 != obja )
        objc_enumerationMutation(v125);
      v17 = objc_retain(*(id *)(*((_QWORD *)&v144 + 1) + 8LL * (_QWORD)v78));
      objc_release(v81);
      v135 = (const char *)objc_msgSend(v17, "unsignedLongLongValue");
      v53 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v140->_preflightInfo, "objectForKeyedSubscript:", v17));
      objc_release(v79);
      if ( (unsigned int)objc_msgSend(v53, "internalBuild") )
        v82 = v137;
      else
        v82 = v130;
      v16 = objc_retain(v82);
      objc_release(v80);
      v83 = objc_retain(v140->_log);
      if ( os_log_type_enabled(v83, OS_LOG_TYPE_DEFAULT) )
      {
        *(_DWORD *)v174 = 136315394;
        v175 = "-[UARPUpdaterDisplayControllerDelegate consentReceived:]";
        v176 = 2048;
        v177 = v135;
        _os_log_impl(
          (void *)&_mh_execute_header,
          v83,
          OS_LOG_TYPE_DEFAULT,
          "%s: Waiting for device with ecid 0x%llx",
          v174,
          0x16u);
      }
      objc_release(v83);
      v84 = objc_retainAutoreleasedReturnValue(objc_msgSend(v53, "preflightDeviceMutex"));
      v85 = dispatch_time(0LL, 120000000000LL);
      v86 = dispatch_semaphore_wait(v84, v85) == 0;
      objc_release(v84);
      if ( !v86 )
      {
        v87 = objc_retain(v140->_log);
        if ( os_log_type_enabled(v87, OS_LOG_TYPE_ERROR) )
        {
          *(_DWORD *)v174 = 136315394;
          v175 = "-[UARPUpdaterDisplayControllerDelegate consentReceived:]";
          v176 = 2048;
          v177 = v135;
          _os_log_error_impl(
            (void *)&_mh_execute_header,
            v87,
            OS_LOG_TYPE_ERROR,
            "%s: Timed out while searching for device with ecid 0x%llx.",
            v174,
            0x16u);
        }
        objc_release(v87);
      }
      if ( v140->_audienceChange || v140->_stopUpdate )
      {
LABEL_188:
        objc_release(v125);
        v55 = v117;
        goto LABEL_189;
      }
      if ( !objc_msgSend(v53, "preflightDevice") )
        goto LABEL_174;
      v88 = objc_retain(v140->_log);
      if ( os_log_type_enabled(v88, OS_LOG_TYPE_DEFAULT) )
      {
        *(_DWORD *)v174 = 136315394;
        v175 = "-[UARPUpdaterDisplayControllerDelegate consentReceived:]";
        v176 = 2048;
        v177 = v135;
        _os_log_impl(
          (void *)&_mh_execute_header,
          v88,
          OS_LOG_TYPE_DEFAULT,
          "%s: Device with ecid 0x%llx found",
          v174,
          0x16u);
      }
      objc_release(v88);
      v89 = objc_msgSend(v53, "preflightDevice");
      v90 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "getLocalFileUrl"));
      LODWORD(v89) = -[UARPUpdaterDisplayControllerDelegate isMDFrameworkUpToDate:assetURL:](
                       v140,
                       "isMDFrameworkUpToDate:assetURL:",
                       v89,
                       v90);
      objc_release(v90);
      if ( (_DWORD)v89 )
      {
        v91 = objc_retain(v140->_log);
        if ( os_log_type_enabled(v91, OS_LOG_TYPE_DEFAULT) )
        {
          *(_DWORD *)v174 = 136315394;
          v175 = "-[UARPUpdaterDisplayControllerDelegate consentReceived:]";
          v176 = 2048;
          v177 = v135;
          _os_log_impl(
            (void *)&_mh_execute_header,
            v91,
            OS_LOG_TYPE_DEFAULT,
            "%s: Creating restore options for device with ecid 0x%llx",
            v174,
            0x16u);
        }
        objc_release(v91);
        v92 = objc_retainAutoreleasedReturnValue(
                -[UARPUpdaterDisplayControllerDelegate createRestoreOptionsForDevice:internal:asset:erase:](
                  v140,
                  "createRestoreOptionsForDevice:internal:asset:erase:",
                  objc_msgSend(v53, "preflightDevice"),
                  objc_msgSend(v53, "internalBuild"),
                  v16,
                  0LL));
        objc_release(v54);
        if ( v92 )
        {
          if ( v140->_audienceChange || v140->_stopUpdate )
          {
            v54 = v92;
            goto LABEL_188;
          }
          v93 = objc_retainAutoreleasedReturnValue(+[NSUUID UUID](&OBJC_CLASS___NSUUID, "UUID"));
          v94 = objc_retainAutoreleasedReturnValue(-[NSUUID UUIDString](v93, "UUIDString"));
          v95 = objc_retainAutoreleasedReturnValue(
                  +[NSString stringWithFormat:](
                    &OBJC_CLASS___NSString,
                    "stringWithFormat:",
                    CFSTR("/tmp/PersonalizedBundle%@"),
                    v94));
          objc_release(v132);
          objc_release(v94);
          objc_release(v93);
          objc_msgSend(v92, "setObject:forKey:", v95, CFSTR("PersonalizedRestoreBundlePath"));
          v96 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithBool:](&OBJC_CLASS___NSNumber, "numberWithBool:", 1LL));
          objc_msgSend(v92, "setObject:forKey:", v96, CFSTR("DisableDeviceRestoreInfo"));
          objc_release(v96);
          v97 = objc_retain(v140->_log);
          if ( os_log_type_enabled(v97, OS_LOG_TYPE_DEFAULT) )
          {
            *(_DWORD *)v174 = 136315394;
            v175 = "-[UARPUpdaterDisplayControllerDelegate consentReceived:]";
            v176 = 2048;
            v177 = v135;
            _os_log_impl(
              (void *)&_mh_execute_header,
              v97,
              OS_LOG_TYPE_DEFAULT,
              "%s: Preflighting options for device with ecid 0x%llx",
              v174,
              0x16u);
          }
          objc_release(v97);
          v98 = AMRestorableDeviceCopyMDRemoteServiceDevice(objc_msgSend(v53, "preflightDevice"));
          v143 = 0LL;
          v99 = AMRemoteServiceDeviceCopyAuthInstallPreflightOptions(v98, v92, &v143);
          v100 = v99;
          if ( !v99 )
            goto LABEL_159;
          if ( v99 != 3194 )
            goto LABEL_158;
          if ( (unsigned int)+[IASAuthenticationManager ssoFrameworkAvailable](
                               &OBJC_CLASS___IASAuthenticationManager,
                               "ssoFrameworkAvailable") )
          {
            v101 = objc_retain(v140->_log);
            if ( os_log_type_enabled(v101, OS_LOG_TYPE_ERROR) )
            {
              *(_DWORD *)v174 = 134217984;
              v175 = v135;
              _os_log_error_impl(
                (void *)&_mh_execute_header,
                v101,
                OS_LOG_TYPE_ERROR,
                "No TATSU authorization for device with ecid 0x%llx, retrying with SSO ticket.",
                v174,
                0xCu);
            }
            objc_release(v101);
            v102 = objc_retainAutoreleasedReturnValue(+[IASAuthenticationManager sharedManager](&OBJC_CLASS___IASAuthenticationManager, "sharedManager"));
            v141 = 0LL;
            v142 = 0LL;
            v133 = objc_retainAutoreleasedReturnValue(
                     objc_msgSend(
                       v102,
                       "getSSOServiceTicketAsOnConsoleUserWithUI:serviceID:outUsername:error:",
                       1LL,
                       v121,
                       &v142,
                       &v141));
            v124 = objc_retain(v142);
            v123 = objc_retain(v141);
            objc_release(v102);
            if ( v133 )
            {
              v103 = objc_retain(v140->_log);
              if ( os_log_type_enabled(v103, OS_LOG_TYPE_DEFAULT) )
              {
                *(_DWORD *)v174 = 136315138;
                v175 = "-[UARPUpdaterDisplayControllerDelegate consentReceived:]";
                _os_log_impl((void *)&_mh_execute_header, v103, OS_LOG_TYPE_DEFAULT, "%s: Found SSO ticket", v174, 0xCu);
              }
              objc_release(v103);
              v104 = objc_retainAutoreleasedReturnValue(
                       +[IASAuthenticationManager usernameAndTicketBlobWithSSOData:withUsername:](
                         &OBJC_CLASS___IASAuthenticationManager,
                         "usernameAndTicketBlobWithSSOData:withUsername:",
                         v133,
                         v124));
              objc_msgSend(v92, "setObject:forKey:", v104, CFSTR("AppleConnectData"));
              v105 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithBool:](&OBJC_CLASS___NSNumber, "numberWithBool:", 1LL));
              objc_msgSend(v92, "setObject:forKey:", v105, CFSTR("AuthInstallEnableSso"));
              objc_release(v105);
              objc_msgSend(
                v92,
                "setObject:forKey:",
                CFSTR("https://gs.apple.com:443"),
                CFSTR("AuthInstallSigningServerURL"));
              v100 = AMRemoteServiceDeviceCopyAuthInstallPreflightOptions(v98, v92, &v143);
              objc_release(v104);
            }
            else
            {
              v100 = 3194;
            }
            objc_release(v133);
            objc_release(v123);
            objc_release(v124);
LABEL_158:
            if ( !v100 )
            {
LABEL_159:
              v106 = v143;
              objc_msgSend(v53, "setPreflightedBundle:", v143);
              objc_release(v106);
              v107 = objc_retain(v140->_log);
              if ( os_log_type_enabled(v107, OS_LOG_TYPE_DEFAULT) )
              {
                *(_DWORD *)v174 = 136315394;
                v175 = "-[UARPUpdaterDisplayControllerDelegate consentReceived:]";
                v176 = 2048;
                v177 = v135;
                _os_log_impl(
                  (void *)&_mh_execute_header,
                  v107,
                  OS_LOG_TYPE_DEFAULT,
                  "%s: Preflighting done for device with ecid 0x%llx",
                  v174,
                  0x16u);
              }
              v132 = v95;
              v54 = v92;
              goto LABEL_170;
            }
          }
          else
          {
            v100 = 3194;
          }
          v108 = objc_retain(v140->_log);
          if ( os_log_type_enabled(v108, OS_LOG_TYPE_ERROR) )
          {
            *(_DWORD *)v174 = 134218240;
            v175 = v135;
            v176 = 1024;
            LODWORD(v177) = v100;
            _os_log_error_impl(
              (void *)&_mh_execute_header,
              v108,
              OS_LOG_TYPE_ERROR,
              "Failed to preflight device with ecid 0x%llx with error %d.",
              v174,
              0x12u);
          }
          objc_release(v108);
          v127 = 1;
          if ( v100 != 43 && v100 != 3004 )
            v127 = 6;
          v132 = v95;
          v54 = v92;
LABEL_168:
          -[NSMutableDictionary removeObjectForKey:](v140->_preflightInfo, "removeObjectForKey:", v17);
          v107 = objc_retain(v140->_log);
          if ( os_log_type_enabled(v107, OS_LOG_TYPE_DEFAULT) )
          {
            v109 = objc_retain(
                     objc_retainAutoreleasedReturnValue(
                       -[UARPUpdaterDisplayControllerDelegate getErrorMessage:size:](
                         v140,
                         "getErrorMessage:size:",
                         v127,
                         v136)));
            *(_DWORD *)v174 = 136315650;
            v175 = "-[UARPUpdaterDisplayControllerDelegate consentReceived:]";
            v176 = 2048;
            v177 = v135;
            v178 = 2112;
            v179 = v109;
            _os_log_impl(
              (void *)&_mh_execute_header,
              v107,
              OS_LOG_TYPE_DEFAULT,
              "%s: Device with ecid 0x%llx failed to update because: %@",
              v174,
              0x20u);
            objc_release(v109);
            objc_release(v109);
          }
LABEL_170:
          objc_release(v107);
          v78 = (char *)v78 + 1;
          v79 = v53;
          v80 = v16;
          v81 = v17;
          if ( v77 == v78 )
          {
            v76 = objc_msgSend(v125, "countByEnumeratingWithState:objects:count:", &v144, v173, 16LL);
            if ( !v76 )
            {
              objc_release(v17);
              v75 = v125;
              goto LABEL_179;
            }
            continue;
          }
          goto LABEL_122;
        }
        v54 = 0LL;
LABEL_174:
        v110 = 2;
      }
      else
      {
        v110 = 3;
      }
      break;
    }
    v127 = v110;
    goto LABEL_168;
  }
  v132 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v127 = 7;
LABEL_179:
  objc_release(v75);
  v56 = v116;
  v55 = v117;
  if ( !-[NSMutableDictionary count](v140->_preflightInfo, "count") )
  {
    v114 = objc_retain(v140->_log);
    if ( os_log_type_enabled(v114, OS_LOG_TYPE_ERROR) )
      sub_1000150B4(v114);
    objc_release(v114);
    v17 = 0LL;
LABEL_189:
    v28 = v16;
    v26 = v138;
    v51 = v140;
    v56 = v116;
    goto LABEL_80;
  }
  v51 = v140;
  if ( v140->_audienceChange || v140->_stopUpdate )
  {
    v17 = 0LL;
    v28 = v16;
    v26 = v138;
    goto LABEL_80;
  }
  v140->_consentStage = 2;
  v111 = v140->_log;
  if ( os_log_type_enabled(v111, OS_LOG_TYPE_DEFAULT) )
  {
    *(_DWORD *)v174 = 136315138;
    v175 = "-[UARPUpdaterDisplayControllerDelegate consentReceived:]";
    _os_log_impl(
      (void *)&_mh_execute_header,
      v111,
      OS_LOG_TYPE_DEFAULT,
      "%s: Preflighting done, waiting to enter post log out",
      v174,
      0xCu);
  }
  v62 = v117;
  if ( v117 )
    dispatch_source_cancel(v117);
  AMRestorableDeviceUnregisterForNotifications(v116);
  objc_msgSend(v118, "setInstallerOverallProgress:", &off_1000218D8);
  objc_msgSend(v115, "progressForUARPConsent:bytesSent:bytesTotal:", v118, v136, v136);
  v17 = 0LL;
LABEL_97:
  objc_release(v132);
  objc_release(v53);
  objc_release(v54);
  objc_release(v62);
  _Block_object_dispose(v169, 8);
  _Block_object_dispose(v170, 8);
  _Block_object_dispose(buf, 8);
  objc_release(v130);
  objc_release(v137);
  objc_release(v16);
  objc_release(v138);
  objc_release(v17);
  objc_release(v139);
  v10 = v119;
LABEL_98:
  objc_release(v10);
LABEL_99:
  objc_sync_exit(v122);
  objc_release(v122);
  objc_release(v126);
}