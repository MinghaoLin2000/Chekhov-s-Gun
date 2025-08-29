-[UARPUSBDFUAccessory waitForQueriesCompletion:]
bool __cdecl -[UARPUSBDFUAccessory waitForQueriesCompletion:](UARPUSBDFUAccessory *self, SEL a2, id a3)
{
  id v4; // x20
  id v5; // x20
  void *v6; // x0
  void *v7; // x21
  __int64 v8; // x22
  void *i; // x23
  OS_os_log *log; // x21
  NSMutableSet *pendingProperties; // x8
  OS_os_log *v12; // x21
  bool queriesCompleted; // w19
  __int128 v15; // [xsp+0h] [xbp-110h] BYREF
  __int128 v16; // [xsp+10h] [xbp-100h]
  __int128 v17; // [xsp+20h] [xbp-F0h]
  __int128 v18; // [xsp+30h] [xbp-E0h]
  uint8_t buf[4]; // [xsp+40h] [xbp-D0h] BYREF
  const char *v20; // [xsp+44h] [xbp-CCh]
  __int16 v21; // [xsp+4Ch] [xbp-C4h]
  NSMutableSet *v22; // [xsp+4Eh] [xbp-C2h]
  _BYTE v23[128]; // [xsp+58h] [xbp-B8h] BYREF

  v4 = objc_retain(a3);
  -[NSCondition lock](self->_queriesCompleteLock, "lock");
  v17 = 0u;
  v18 = 0u;
  v15 = 0u;
  v16 = 0u;
  v5 = objc_retain(v4);
  v6 = objc_msgSend(v5, "countByEnumeratingWithState:objects:count:", &v15, v23, 16LL);
  if ( v6 )
  {
    v7 = v6;
    v8 = *(_QWORD *)v16;
    do
    {
      for ( i = 0LL; i != v7; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v16 != v8 )
          objc_enumerationMutation(v5);
        -[NSMutableSet addObject:](
          self->_pendingProperties,
          "addObject:",
          *(_QWORD *)(*((_QWORD *)&v15 + 1) + 8LL * (_QWORD)i),
          (_QWORD)v15);
      }
      v7 = objc_msgSend(v5, "countByEnumeratingWithState:objects:count:", &v15, v23, 16LL);
    }
    while ( v7 );
  }
  objc_release(v5);
  if ( !self->_queriesCompleted )
  {
    log = self->_log;
    if ( os_log_type_enabled(log, OS_LOG_TYPE_INFO) )
    {
      pendingProperties = self->_pendingProperties;
      *(_DWORD *)buf = 136315394;
      v20 = "-[UARPUSBDFUAccessory waitForQueriesCompletion:]";
      v21 = 2112;
      v22 = pendingProperties;
      _os_log_impl(
        (void *)&_mh_execute_header,
        log,
        OS_LOG_TYPE_INFO,
        "%s: Waiting for property queries %@",
        buf,
        0x16u);
    }
    -[NSCondition wait](self->_queriesCompleteLock, "wait", (_QWORD)v15);
    v12 = self->_log;
    if ( os_log_type_enabled(v12, OS_LOG_TYPE_INFO) )
    {
      *(_DWORD *)buf = 136315138;
      v20 = "-[UARPUSBDFUAccessory waitForQueriesCompletion:]";
      _os_log_impl((void *)&_mh_execute_header, v12, OS_LOG_TYPE_INFO, "%s: Pending properties completed", buf, 0xCu);
    }
  }
  -[NSCondition unlock](self->_queriesCompleteLock, "unlock", (_QWORD)v15);
  queriesCompleted = self->_queriesCompleted;
  objc_release(v5);
  return queriesCompleted;
}