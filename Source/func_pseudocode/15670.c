-[UARPUpdaterServiceDFU getMatchingServicesList]
id __cdecl -[UARPUpdaterServiceDFU getMatchingServicesList](UARPUpdaterServiceDFU *self, SEL a2)
{
  OS_os_log *log; // x20
  void *v3; // x21
  void *v4; // x0
  __int128 v5; // q0
  void *v6; // x22
  __int64 v7; // x26
  void *i; // x20
  void *v9; // x28
  void *v10; // x25
  __int64 v11; // x0
  char isKindOfClass; // w27
  id v13; // x25
  void *v14; // x27
  unsigned __int8 v15; // w23
  void *v16; // x27
  char *v17; // x25
  id v18; // x23
  void *v19; // x27
  void *v20; // x28
  OS_os_log *v21; // x27
  os_log_s *v22; // x23
  void *v23; // x27
  char *v24; // x0
  const char *v25; // x23
  NSArray *v26; // x19
  __int128 v28; // [xsp+0h] [xbp-190h]
  __int64 v29; // [xsp+20h] [xbp-170h]
  void *v31; // [xsp+38h] [xbp-158h]
  __int128 v32; // [xsp+40h] [xbp-150h] BYREF
  __int128 v33; // [xsp+50h] [xbp-140h]
  __int128 v34; // [xsp+60h] [xbp-130h]
  __int128 v35; // [xsp+70h] [xbp-120h]
  uint8_t buf[4]; // [xsp+80h] [xbp-110h] BYREF
  const char *v37; // [xsp+84h] [xbp-10Ch]
  __int16 v38; // [xsp+8Ch] [xbp-104h]
  __int64 v39; // [xsp+8Eh] [xbp-102h]
  __int16 v40; // [xsp+96h] [xbp-FAh]
  void *v41; // [xsp+98h] [xbp-F8h]
  __int16 v42; // [xsp+A0h] [xbp-F0h]
  void *v43; // [xsp+A2h] [xbp-EEh]
  _BYTE v44[128]; // [xsp+B0h] [xbp-E0h] BYREF
  __int64 vars8; // [xsp+198h] [xbp+8h]

  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_ERROR) )
    sub_10001731C(log);
  v31 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v3 = objc_retainAutoreleasedReturnValue(
         +[UARPSupportedAccessory supportedAccessoriesByTransport:](
           &OBJC_CLASS___UARPSupportedAccessory,
           "supportedAccessoriesByTransport:",
           2LL));
  v32 = 0u;
  v33 = 0u;
  v34 = 0u;
  v35 = 0u;
  v4 = objc_msgSend(v3, "countByEnumeratingWithState:objects:count:", &v32, v44, 16LL);
  if ( v4 )
  {
    v6 = v4;
    v7 = *(_QWORD *)v33;
    v29 = kUARPSupportedAccessoryKeyTransportUSB;
    *(_QWORD *)&v5 = 138412290LL;
    v28 = v5;
    do
    {
      for ( i = 0LL; i != v6; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v33 != v7 )
          objc_enumerationMutation(v3);
        v9 = *(void **)(*((_QWORD *)&v32 + 1) + 8LL * (_QWORD)i);
        v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "hardwareID", v28));
        v11 = objc_opt_class(&OBJC_CLASS___UARPAccessoryHardwareUSB);
        isKindOfClass = objc_opt_isKindOfClass(v10, v11);
        objc_release(v10);
        if ( (isKindOfClass & 1) != 0 )
        {
          v13 = objc_retainAutoreleasedReturnValue(
                  +[UARPUpdaterServiceDFU supportedIdentifiers](
                    &OBJC_CLASS___UARPUpdaterServiceDFU,
                    "supportedIdentifiers"));
          v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "identifier"));
          v15 = (unsigned __int8)objc_msgSend(v13, "containsObject:", v14);
          objc_release(v14);
          objc_release(v13);
          if ( (v15 & 1) != 0 )
          {
            v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "identifier"));
            v17 = (char *)objc_retainAutoreleasedReturnValue(
                            +[UARPDFUUpdater matchingDictionaryForIdentifier:serialNumber:](
                              &OBJC_CLASS___UARPDFUUpdater,
                              "matchingDictionaryForIdentifier:serialNumber:",
                              v16,
                              0LL));
            objc_release(v16);
            v18 = objc_alloc((Class)&OBJC_CLASS___UARPServiceUpdaterAccessoryMatchingRule);
            v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "identifier"));
            v20 = objc_msgSend(
                    v18,
                    "initWithIdentifier:xpcEventStream:matchingDictionary:",
                    v19,
                    CFSTR("com.apple.iokit.matching"),
                    v17);
            objc_release(v19);
            v21 = self->_log;
            if ( os_log_type_enabled(v21, OS_LOG_TYPE_INFO) )
            {
              v22 = objc_retain(v21);
              v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v20, "matchingDictionary"));
              *(_DWORD *)buf = 136315906;
              v37 = "-[UARPUpdaterServiceDFU getMatchingServicesList]";
              v38 = 2112;
              v39 = v29;
              v40 = 2112;
              v41 = v20;
              v42 = 2112;
              v43 = v23;
              _os_log_impl(
                (void *)&_mh_execute_header,
                v22,
                OS_LOG_TYPE_INFO,
                "%s: %@ matching rule is %@ %@",
                buf,
                0x2Au);
              objc_release(v23);
              objc_release(v22);
            }
            objc_msgSend(v31, "addObject:", v20);
            objc_release(v20);
            v24 = v17;
          }
          else
          {
            if ( !os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
              continue;
            v25 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "identifier"));
            *(_DWORD *)buf = v28;
            v37 = v25;
            _os_log_impl(
              (void *)&_mh_execute_header,
              (os_log_t)&_os_log_default,
              OS_LOG_TYPE_INFO,
              "UARPUpdaterServiceDFU does not support %@",
              buf,
              0xCu);
            v24 = (char *)v25;
          }
          objc_release(v24);
        }
      }
      v6 = objc_msgSend(v3, "countByEnumeratingWithState:objects:count:", &v32, v44, 16LL);
    }
    while ( v6 );
  }
  v26 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithArray:](&OBJC_CLASS___NSArray, "arrayWithArray:", v31));
  objc_release(v3);
  objc_release(v31);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v26);
}