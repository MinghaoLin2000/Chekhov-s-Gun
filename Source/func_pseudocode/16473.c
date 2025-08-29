-[LegacyAudioController sendActiveFirmwareAnalyticsEvent]
void __cdecl -[LegacyAudioController sendActiveFirmwareAnalyticsEvent](LegacyAudioController *self, SEL a2)
{
  id v2; // x0
  void *v3; // x22
  void *v4; // x0
  void *v5; // x24
  __int64 v6; // x28
  _UNKNOWN **v7; // x27
  void *v8; // x26
  __int64 v9; // x19
  void *v10; // x20
  __int64 v11; // x0
  void *v12; // x19
  id v13; // x20
  void *v14; // x21
  UARPActiveFirmwareAnalyticsEvent *v15; // x21
  void *v16; // x23
  void *v17; // x23
  NSString *v18; // x23
  NSString *v19; // x27
  NSString *v20; // x0
  void *v21; // x21
  UARPActiveFirmwareAnalyticsEvent *v22; // x21
  void *v23; // x23
  void *v24; // x23
  NSString *v25; // x23
  NSString *v26; // x27
  NSString *v27; // x0
  id v28; // [xsp+0h] [xbp-190h]
  id v30; // [xsp+38h] [xbp-158h] BYREF
  __int128 v31; // [xsp+40h] [xbp-150h] BYREF
  __int128 v32; // [xsp+50h] [xbp-140h]
  __int128 v33; // [xsp+60h] [xbp-130h]
  __int128 v34; // [xsp+70h] [xbp-120h]
  uint8_t buf[4]; // [xsp+80h] [xbp-110h] BYREF
  const char *v36; // [xsp+84h] [xbp-10Ch]
  __int16 v37; // [xsp+8Ch] [xbp-104h]
  NSString *v38; // [xsp+8Eh] [xbp-102h]
  __int16 v39; // [xsp+96h] [xbp-FAh]
  NSString *v40; // [xsp+98h] [xbp-F8h]
  uint8_t v41[16]; // [xsp+A0h] [xbp-F0h] BYREF
  _BYTE v42[128]; // [xsp+B0h] [xbp-E0h] BYREF

  v2 = objc_retainAutoreleasedReturnValue(-[NSUserDefaults objectForKey:](self->_database, "objectForKey:"));
  v31 = 0u;
  v32 = 0u;
  v33 = 0u;
  v34 = 0u;
  v28 = v2;
  v3 = objc_retainAutoreleasedReturnValue(objc_msgSend(v2, "allValues"));
  v4 = objc_msgSend(v3, "countByEnumeratingWithState:objects:count:", &v31, v42, 16LL);
  if ( v4 )
  {
    v5 = v4;
    v6 = *(_QWORD *)v32;
    v7 = &AMAuthInstallApCreatePersonalizedResponse_ptr;
    do
    {
      v8 = 0LL;
      do
      {
        if ( *(_QWORD *)v32 != v6 )
          objc_enumerationMutation(v3);
        v9 = *(_QWORD *)(*((_QWORD *)&v31 + 1) + 8LL * (_QWORD)v8);
        v10 = v7[159];
        v11 = objc_opt_class(&OBJC_CLASS___LegacyAudioAccessory);
        v30 = 0LL;
        v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "unarchivedObjectOfClass:fromData:error:", v11, v9, &v30));
        v13 = objc_retain(v30);
        if ( v12 )
        {
          v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "activeFirmwareVersion"));
          objc_release(v14);
          if ( v14 )
          {
            v15 = objc_alloc_init(&OBJC_CLASS___UARPActiveFirmwareAnalyticsEvent);
            v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "modelName"));
            -[UARPActiveFirmwareAnalyticsEvent setModelName:](v15, "setModelName:", v16);
            objc_release(v16);
            v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "activeFirmwareVersion"));
            -[UARPActiveFirmwareAnalyticsEvent setActiveFirmwareVersion:](v15, "setActiveFirmwareVersion:", v17);
            objc_release(v17);
            if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
            {
              v18 = objc_retainAutoreleasedReturnValue(-[UARPActiveFirmwareAnalyticsEvent modelName](v15, "modelName"));
              v19 = objc_retainAutoreleasedReturnValue(-[UARPActiveFirmwareAnalyticsEvent activeFirmwareVersion](v15, "activeFirmwareVersion"));
              *(_DWORD *)buf = 136315650;
              v36 = "-[LegacyAudioController sendActiveFirmwareAnalyticsEvent]";
              v37 = 2112;
              v38 = v18;
              v39 = 2112;
              v40 = v19;
              _os_log_impl(
                (void *)&_mh_execute_header,
                (os_log_t)&_os_log_default,
                OS_LOG_TYPE_DEFAULT,
                "%s: sending active Firmware Event for %@, %@",
                buf,
                0x20u);
              v20 = v19;
              v7 = &AMAuthInstallApCreatePersonalizedResponse_ptr;
              objc_release(v20);
              objc_release(v18);
            }
            -[UARPActiveFirmwareAnalyticsEvent send](v15, "send");
            objc_release(v15);
          }
          v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "activeANCVersion"));
          objc_release(v21);
          if ( v21 )
          {
            v22 = objc_alloc_init(&OBJC_CLASS___UARPActiveFirmwareAnalyticsEvent);
            v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "modelName"));
            -[UARPActiveFirmwareAnalyticsEvent setModelName:](v22, "setModelName:", v23);
            objc_release(v23);
            v24 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "activeANCVersion"));
            -[UARPActiveFirmwareAnalyticsEvent setActiveFirmwareVersion:](v22, "setActiveFirmwareVersion:", v24);
            objc_release(v24);
            if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
            {
              v25 = objc_retainAutoreleasedReturnValue(-[UARPActiveFirmwareAnalyticsEvent modelName](v22, "modelName"));
              v26 = objc_retainAutoreleasedReturnValue(-[UARPActiveFirmwareAnalyticsEvent activeFirmwareVersion](v22, "activeFirmwareVersion"));
              *(_DWORD *)buf = 136315650;
              v36 = "-[LegacyAudioController sendActiveFirmwareAnalyticsEvent]";
              v37 = 2112;
              v38 = v25;
              v39 = 2112;
              v40 = v26;
              _os_log_impl(
                (void *)&_mh_execute_header,
                (os_log_t)&_os_log_default,
                OS_LOG_TYPE_DEFAULT,
                "%s: sending active ANC Firmware Event for %@, %@",
                buf,
                0x20u);
              v27 = v26;
              v7 = &AMAuthInstallApCreatePersonalizedResponse_ptr;
              objc_release(v27);
              objc_release(v25);
            }
            -[UARPActiveFirmwareAnalyticsEvent send](v22, "send");
            objc_release(v22);
          }
        }
        else if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
        {
          sub_10001B2B0(v41);
        }
        objc_release(v12);
        objc_release(v13);
        v8 = (char *)v8 + 1;
      }
      while ( v5 != v8 );
      v5 = objc_msgSend(v3, "countByEnumeratingWithState:objects:count:", &v31, v42, 16LL);
    }
    while ( v5 );
  }
  objc_release(v3);
  -[NSUserDefaults removeObjectForKey:](self->_database, "removeObjectForKey:", CFSTR("activeFirmwareAccessories"));
  objc_release(v28);
}