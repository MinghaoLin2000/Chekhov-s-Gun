-[QLSatellite handleSetupMessage:]
void __cdecl -[QLSatellite handleSetupMessage:](QLSatellite *self, SEL a2, id a3)
{
  id v4; // x19
  void *v5; // x20
  _BOOL4 v6; // w21
  void *v7; // x20
  const __CFArray *v8; // x24
  void *v9; // x20
  void *v10; // x20
  void *v11; // x28
  void *v12; // x20
  void *v13; // x21
  void *v14; // x20
  const uint8_t *uuid; // x22
  NSUUID *v16; // x0
  NSUUID *v17; // x8
  NSString *v18; // x22
  void *v19; // x0
  NSString *v20; // x26
  NSString *v21; // x20
  __int64 CurrentProcess; // x0
  __int64 v23; // x0
  NSString *v24; // x20
  __int64 v25; // x0
  __int64 v26; // x1
  os_log_s *v27; // x27
  __int64 v28; // x0
  __int64 v29; // x1
  os_log_s *v30; // x19
  os_log_s *v31; // x23
  id v32; // x23
  void *v33; // x0
  void *v34; // x24
  __int64 v35; // x19
  void *i; // x22
  QLSatellite *v37; // x28
  __int64 v38; // x0
  __int64 isKindOfClass; // x0
  __int64 v40; // x1
  os_log_s *v41; // x20
  __int64 v42; // x0
  NSBundle *v43; // x20
  NSString *v44; // x27
  NSString *v45; // x20
  NSString *v46; // [xsp+8h] [xbp-198h]
  NSString *v47; // [xsp+10h] [xbp-190h]
  void *v48; // [xsp+18h] [xbp-188h]
  id v49; // [xsp+20h] [xbp-180h]
  void *v50; // [xsp+30h] [xbp-170h]
  __int128 v51; // [xsp+40h] [xbp-160h] BYREF
  __int128 v52; // [xsp+50h] [xbp-150h]
  __int128 v53; // [xsp+60h] [xbp-140h]
  __int128 v54; // [xsp+70h] [xbp-130h]
  ProcessSerialNumber pPSN; // [xsp+88h] [xbp-118h] BYREF
  uint8_t v56[128]; // [xsp+90h] [xbp-110h] BYREF
  uint8_t buf[4]; // [xsp+110h] [xbp-90h] BYREF
  QLSatellite *v58; // [xsp+114h] [xbp-8Ch]
  __int16 v59; // [xsp+11Ch] [xbp-84h]
  const __CFArray *v60; // [xsp+11Eh] [xbp-82h]
  __int16 v61; // [xsp+126h] [xbp-7Ah]
  void *v62; // [xsp+128h] [xbp-78h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "xpcMessage"));
  v6 = xpc_dictionary_get_bool(v5, "forThumbnailing");
  objc_release(v5);
  if ( v6 )
    QLSetProcessVNodeRapidAging(1LL);
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "xpcMessage"));
  v8 = (const __CFArray *)_QLXPCCopyCFObjectForKey();
  objc_release(v7);
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "xpcMessage"));
  v50 = (void *)_QLXPCCopyCFObjectForKey();
  objc_release(v9);
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "xpcMessage"));
  v11 = (void *)_QLXPCCopyStringForKey(0LL, v10, "SandboxVariant");
  objc_release(v10);
  v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "xpcMessage"));
  v13 = (void *)_QLXPCCopyStringForKey(0LL, v12, "CustomName");
  objc_release(v12);
  v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "xpcMessage"));
  uuid = xpc_dictionary_get_uuid(v14, "UUID");
  objc_release(v14);
  v16 = (NSUUID *)objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSUUID), "initWithUUIDBytes:", uuid);
  v17 = self->_uuid;
  self->_uuid = v16;
  objc_release(v17);
  v18 = objc_retainAutoreleasedReturnValue(-[NSUUID UUIDString](self->_uuid, "UUIDString"));
  if ( v13 )
  {
    v19 = v13;
LABEL_7:
    v20 = v18;
    v18 = objc_retain(v19);
LABEL_8:
    objc_release(v20);
    goto LABEL_9;
  }
  if ( v11 )
  {
    v19 = v11;
    goto LABEL_7;
  }
  if ( v8 && CFArrayGetCount(v8) == 1 )
  {
    v20 = objc_retainAutoreleasedReturnValue((id)CFArrayGetValueAtIndex(v8, 0LL));
    v42 = objc_opt_class(&OBJC_CLASS___NSURL);
    if ( (objc_opt_isKindOfClass(v20, v42) & 1) != 0 )
    {
      v43 = objc_retainAutoreleasedReturnValue(+[NSBundle bundleWithURL:](&OBJC_CLASS___NSBundle, "bundleWithURL:", v20));
      v44 = objc_retainAutoreleasedReturnValue(-[NSBundle bundleIdentifier](v43, "bundleIdentifier"));
      objc_release(v43);
      if ( v44 )
      {
        v45 = objc_retainAutoreleasedReturnValue(
                -[NSString stringByReplacingOccurrencesOfString:withString:](
                  v44,
                  "stringByReplacingOccurrencesOfString:withString:",
                  CFSTR("."),
                  CFSTR("_")));
        objc_release(v18);
        v18 = v45;
      }
      objc_release(v44);
    }
    goto LABEL_8;
  }
LABEL_9:
  -[QLSatellite setProcessSpecifier:](self, "setProcessSpecifier:", v18);
  v21 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithFormat:](
            &OBJC_CLASS___NSString,
            "stringWithFormat:",
            CFSTR("QuickLookSatellite-%@"),
            v18));
  pPSN = 0LL;
  CurrentProcess = GetCurrentProcess(&pPSN);
  v23 = _LSGetCurrentApplicationASN(CurrentProcess);
  _LSSetApplicationInformationItem(4294967294LL, v23, _kLSDisplayNameKey, v21, 0LL);
  v24 = objc_retainAutorelease(v21);
  v25 = setenv("DIRHELPER_USER_DIR_SUFFIX", -[NSString cStringUsingEncoding:](v24, "cStringUsingEncoding:", 1LL), 1);
  v27 = (os_log_s *)qlLogHandles[9];
  if ( !v27 )
  {
    QLInitLogging(v25, v26);
    v27 = (os_log_s *)qlLogHandles[9];
  }
  if ( os_log_type_enabled(v27, OS_LOG_TYPE_DEBUG) )
  {
    *(_DWORD *)buf = 138412802;
    v58 = self;
    v59 = 2112;
    v60 = v8;
    v61 = 2112;
    v62 = v11;
    _os_log_debug_impl(
      (void *)&_mh_execute_header,
      v27,
      OS_LOG_TYPE_DEBUG,
      "Setting-up satellite %@ for generators %@ with variant %@",
      buf,
      0x20u);
  }
  v28 = _QLGlobalQuickLookPreferencesBooleanValueForKey(CFSTR("QLEnableSandboxing"), 1LL);
  if ( (_DWORD)v28 )
  {
    if ( (QLSandboxSetProfile(3LL, v11) & 1) == 0 )
    {
      v30 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100003EFC());
      if ( os_log_type_enabled(v30, OS_LOG_TYPE_ERROR) )
        sub_100005E58(self, v30);
      objc_release(v30);
      _exit(-1);
    }
  }
  else
  {
    v31 = (os_log_s *)qlLogHandles[12];
    if ( !v31 )
    {
      QLInitLogging(v28, v29);
      v31 = (os_log_s *)qlLogHandles[12];
    }
    if ( os_log_type_enabled(v31, OS_LOG_TYPE_INFO) )
    {
      *(_WORD *)buf = 0;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v31,
        OS_LOG_TYPE_INFO,
        "Sandbox disabled with default (QLEnableSandboxing)",
        buf,
        2u);
    }
  }
  if ( v8 )
    CFRelease(v8);
  if ( v50 )
  {
    v46 = v24;
    v47 = v18;
    v48 = v11;
    v49 = v4;
    v53 = 0u;
    v54 = 0u;
    v51 = 0u;
    v52 = 0u;
    v32 = objc_retain(v50);
    v33 = objc_msgSend(v32, "countByEnumeratingWithState:objects:count:", &v51, v56, 16LL);
    if ( v33 )
    {
      v34 = v33;
      v35 = *(_QWORD *)v52;
      do
      {
        for ( i = 0LL; i != v34; i = (char *)i + 1 )
        {
          if ( *(_QWORD *)v52 != v35 )
            objc_enumerationMutation(v32);
          v37 = *(QLSatellite **)(*((_QWORD *)&v51 + 1) + 8LL * (_QWORD)i);
          v38 = objc_opt_class(&OBJC_CLASS___NSString);
          isKindOfClass = objc_opt_isKindOfClass(v37, v38);
          if ( (isKindOfClass & 1) != 0 )
          {
            isKindOfClass = QLSandboxTokenConsume(v37);
            if ( isKindOfClass )
              continue;
          }
          v41 = (os_log_s *)qlLogHandles[12];
          if ( !v41 )
          {
            QLInitLogging(isKindOfClass, v40);
            v41 = (os_log_s *)qlLogHandles[12];
          }
          if ( os_log_type_enabled(v41, OS_LOG_TYPE_ERROR) )
          {
            *(_DWORD *)buf = 138412290;
            v58 = v37;
            _os_log_error_impl(
              (void *)&_mh_execute_header,
              v41,
              OS_LOG_TYPE_ERROR,
              "Error consuming generator sandbox token %@, it will probably fail",
              buf,
              0xCu);
          }
        }
        v34 = objc_msgSend(v32, "countByEnumeratingWithState:objects:count:", &v51, v56, 16LL);
      }
      while ( v34 );
    }
    objc_release(v32);
    CFRelease(v32);
    v11 = v48;
    v4 = v49;
    v24 = v46;
    v18 = v47;
  }
  objc_release(v24);
  objc_release(v18);
  objc_release(v13);
  objc_release(v11);
  objc_release(v4);
}