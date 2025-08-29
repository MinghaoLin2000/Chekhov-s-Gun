-[UARPDFUUpdater queryProperties:accessoryID:]
bool __cdecl -[UARPDFUUpdater queryProperties:accessoryID:](UARPDFUUpdater *self, SEL a2, id a3, id a4)
{
  id v6; // x20
  id v7; // x19
  id v8; // x21
  OS_os_log *log; // x23
  id v10; // x23
  void *v11; // x0
  void *v12; // x24
  __int64 v13; // x25
  void *i; // x26
  void *v15; // x27
  UARPController *uarpController; // x19
  void *v17; // x28
  void *v18; // x20
  void *v19; // x28
  OS_os_log *v20; // x19
  os_log_s *v21; // x19
  __int64 v22; // x0
  id v24; // [xsp+0h] [xbp-160h]
  id v25; // [xsp+8h] [xbp-158h]
  __int128 v26; // [xsp+20h] [xbp-140h] BYREF
  __int128 v27; // [xsp+30h] [xbp-130h]
  __int128 v28; // [xsp+40h] [xbp-120h]
  __int128 v29; // [xsp+50h] [xbp-110h]
  uint8_t buf[4]; // [xsp+60h] [xbp-100h] BYREF
  const char *v31; // [xsp+64h] [xbp-FCh]
  __int16 v32; // [xsp+6Ch] [xbp-F4h]
  __int64 v33; // [xsp+6Eh] [xbp-F2h]
  __int16 v34; // [xsp+76h] [xbp-EAh]
  void *v35; // [xsp+78h] [xbp-E8h]
  _BYTE v36[128]; // [xsp+80h] [xbp-E0h] BYREF

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = objc_retainAutoreleasedReturnValue(-[UARPDFUUpdater getDfuAccessoryForUarpAccessoryID:](self, "getDfuAccessoryForUarpAccessoryID:", v7));
  log = self->_log;
  if ( v8 )
  {
    v24 = v7;
    if ( os_log_type_enabled(log, OS_LOG_TYPE_DEBUG) )
      sub_100018068(v6, log);
    v28 = 0u;
    v29 = 0u;
    v26 = 0u;
    v27 = 0u;
    v25 = v6;
    v10 = objc_retain(v6);
    v11 = objc_msgSend(v10, "countByEnumeratingWithState:objects:count:", &v26, v36, 16LL);
    if ( v11 )
    {
      v12 = v11;
      v13 = *(_QWORD *)v27;
      do
      {
        for ( i = 0LL; i != v12; i = (char *)i + 1 )
        {
          if ( *(_QWORD *)v27 != v13 )
            objc_enumerationMutation(v10);
          v15 = *(void **)(*((_QWORD *)&v26 + 1) + 8LL * (_QWORD)i);
          uarpController = self->_uarpController;
          v17 = objc_msgSend(v15, "unsignedIntegerValue", v24);
          v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "uarpAccessory"));
          v19 = -[UARPController queryProperty:forAccessory:](uarpController, "queryProperty:forAccessory:", v17, v18);
          objc_release(v18);
          if ( v19 )
          {
            v20 = self->_log;
            if ( os_log_type_enabled(v20, OS_LOG_TYPE_ERROR) )
            {
              v21 = objc_retain(v20);
              v22 = UARPAccessoryPropertyToString(objc_msgSend(v15, "unsignedIntegerValue"));
              *(_DWORD *)buf = 136315650;
              v31 = "-[UARPDFUUpdater queryProperties:accessoryID:]";
              v32 = 2080;
              v33 = v22;
              v34 = 2048;
              v35 = v19;
              _os_log_error_impl(
                (void *)&_mh_execute_header,
                v21,
                OS_LOG_TYPE_ERROR,
                "%s: Query Property %s failed with error %ld",
                buf,
                0x20u);
              objc_release(v21);
            }
            -[UARPDFUUpdater queryFailedForAccessory:property:error:](
              self,
              "queryFailedForAccessory:property:error:",
              v8,
              objc_msgSend(v15, "unsignedIntegerValue"),
              v19);
          }
        }
        v12 = objc_msgSend(v10, "countByEnumeratingWithState:objects:count:", &v26, v36, 16LL);
      }
      while ( v12 );
    }
    objc_release(v10);
    v7 = v24;
    v6 = v25;
  }
  else if ( os_log_type_enabled(self->_log, OS_LOG_TYPE_ERROR) )
  {
    sub_1000180DC(v7, log);
  }
  objc_release(v8);
  objc_release(v7);
  objc_release(v6);
  return v8 != 0LL;
}