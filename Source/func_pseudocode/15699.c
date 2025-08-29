-[UARPDFUUpdater applyStagedFirmwareForAccessories:]
bool __cdecl -[UARPDFUUpdater applyStagedFirmwareForAccessories:](UARPDFUUpdater *self, SEL a2, id a3)
{
  id v4; // x21
  OS_os_log *log; // x20
  void *v6; // x20
  id v7; // x21
  void *v8; // x0
  __int128 v9; // q0
  void *v10; // x22
  __int64 v11; // x24
  void *i; // x25
  void *v13; // x27
  id v14; // x0
  void *v15; // x26
  void *v16; // x27
  OS_os_log *v17; // x27
  OS_os_log *v18; // x28
  unsigned __int8 v19; // w19
  __int128 v21; // [xsp+0h] [xbp-150h]
  __int128 v22; // [xsp+10h] [xbp-140h] BYREF
  __int128 v23; // [xsp+20h] [xbp-130h]
  __int128 v24; // [xsp+30h] [xbp-120h]
  __int128 v25; // [xsp+40h] [xbp-110h]
  uint8_t buf[4]; // [xsp+50h] [xbp-100h] BYREF
  const char *v27; // [xsp+54h] [xbp-FCh]
  __int16 v28; // [xsp+5Ch] [xbp-F4h]
  void *v29; // [xsp+5Eh] [xbp-F2h]
  _BYTE v30[128]; // [xsp+70h] [xbp-E0h] BYREF

  v4 = objc_retain(a3);
  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_DEBUG) )
    sub_1000182B8(log);
  v6 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v22 = 0u;
  v23 = 0u;
  v24 = 0u;
  v25 = 0u;
  v7 = objc_retain(v4);
  v8 = objc_msgSend(v7, "countByEnumeratingWithState:objects:count:", &v22, v30, 16LL);
  if ( v8 )
  {
    v10 = v8;
    v11 = *(_QWORD *)v23;
    *(_QWORD *)&v9 = 136315394LL;
    v21 = v9;
    do
    {
      for ( i = 0LL; i != v10; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v23 != v11 )
          objc_enumerationMutation(v7);
        v13 = *(void **)(*((_QWORD *)&v22 + 1) + 8LL * (_QWORD)i);
        v14 = objc_retainAutoreleasedReturnValue(
                -[UARPDFUUpdater getDfuAccessoryForUarpAccessoryID:](
                  self,
                  "getDfuAccessoryForUarpAccessoryID:",
                  v13,
                  v21,
                  (_QWORD)v22));
        v15 = v14;
        if ( v14 )
        {
          v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "uarpAccessory"));
          objc_msgSend(v6, "addObject:", v16);
          objc_release(v16);
          if ( (unsigned int)objc_msgSend(v15, "requiresPowerAssertion") )
          {
            v17 = self->_log;
            if ( os_log_type_enabled(v17, OS_LOG_TYPE_INFO) )
            {
              *(_DWORD *)buf = v21;
              v27 = "-[UARPDFUUpdater applyStagedFirmwareForAccessories:]";
              v28 = 2112;
              v29 = v15;
              _os_log_impl(
                (void *)&_mh_execute_header,
                v17,
                OS_LOG_TYPE_INFO,
                "%s: accessory = %@, requires power assertion",
                buf,
                0x16u);
            }
            -[UARPDFUUpdater holdPowerAssertionForAccessory](self, "holdPowerAssertionForAccessory");
          }
        }
        else
        {
          v18 = self->_log;
          if ( os_log_type_enabled(v18, OS_LOG_TYPE_ERROR) )
          {
            *(_DWORD *)buf = v21;
            v27 = "-[UARPDFUUpdater applyStagedFirmwareForAccessories:]";
            v28 = 2112;
            v29 = v13;
            _os_log_error_impl(
              (void *)&_mh_execute_header,
              v18,
              OS_LOG_TYPE_ERROR,
              "%s: Unknown UARPAccessoryID %@",
              buf,
              0x16u);
          }
        }
        objc_release(v15);
      }
      v10 = objc_msgSend(v7, "countByEnumeratingWithState:objects:count:", &v22, v30, 16LL);
    }
    while ( v10 );
  }
  objc_release(v7);
  v19 = (unsigned __int8)-[UARPController applyStagedFirmwareOnAccessoryList:withUserIntent:](
                           self->_uarpController,
                           "applyStagedFirmwareOnAccessoryList:withUserIntent:",
                           v6,
                           1LL);
  objc_release(v6);
  objc_release(v7);
  return v19;
}