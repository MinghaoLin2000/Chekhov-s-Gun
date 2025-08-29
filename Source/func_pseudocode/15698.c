-[UARPDFUUpdater startUpdateForAccessories:assetID:]
void __cdecl -[UARPDFUUpdater startUpdateForAccessories:assetID:](UARPDFUUpdater *self, SEL a2, id a3, id a4)
{
  id v6; // x21
  id v7; // x20
  OS_os_log *log; // x22
  OS_os_log *v9; // x22
  id v10; // x21
  void *v11; // x0
  __int128 v12; // q0
  void *v13; // x22
  __int64 v14; // x28
  void *i; // x23
  __int64 v16; // x26
  id v17; // x25
  OS_os_log *v18; // x27
  __int128 v19; // [xsp+0h] [xbp-150h]
  __int128 v20; // [xsp+10h] [xbp-140h] BYREF
  __int128 v21; // [xsp+20h] [xbp-130h]
  __int128 v22; // [xsp+30h] [xbp-120h]
  __int128 v23; // [xsp+40h] [xbp-110h]
  uint8_t buf[4]; // [xsp+50h] [xbp-100h] BYREF
  const char *v25; // [xsp+54h] [xbp-FCh]
  __int16 v26; // [xsp+5Ch] [xbp-F4h]
  __int64 v27; // [xsp+5Eh] [xbp-F2h]
  _BYTE v28[128]; // [xsp+70h] [xbp-E0h] BYREF

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_DEBUG) )
    sub_100018240(log);
  v9 = self->_log;
  if ( os_log_type_enabled(v9, OS_LOG_TYPE_INFO) )
  {
    *(_DWORD *)buf = 136315138;
    v25 = "Starting update";
    _os_log_impl((void *)&_mh_execute_header, v9, OS_LOG_TYPE_INFO, "%s", buf, 0xCu);
  }
  v22 = 0u;
  v23 = 0u;
  v20 = 0u;
  v21 = 0u;
  v10 = objc_retain(v6);
  v11 = objc_msgSend(v10, "countByEnumeratingWithState:objects:count:", &v20, v28, 16LL);
  if ( v11 )
  {
    v13 = v11;
    v14 = *(_QWORD *)v21;
    *(_QWORD *)&v12 = 136315394LL;
    v19 = v12;
    do
    {
      for ( i = 0LL; i != v13; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v21 != v14 )
          objc_enumerationMutation(v10);
        v16 = *(_QWORD *)(*((_QWORD *)&v20 + 1) + 8LL * (_QWORD)i);
        v17 = objc_retainAutoreleasedReturnValue(
                -[UARPDFUUpdater getDfuAccessoryForUarpAccessoryID:](
                  self,
                  "getDfuAccessoryForUarpAccessoryID:",
                  v16,
                  v19,
                  (_QWORD)v20));
        if ( v17 )
        {
          -[UARPDFUUpdater startUpdateForAccessory:assetID:](self, "startUpdateForAccessory:assetID:", v17, v7);
        }
        else
        {
          v18 = self->_log;
          if ( os_log_type_enabled(v18, OS_LOG_TYPE_ERROR) )
          {
            *(_DWORD *)buf = v19;
            v25 = "-[UARPDFUUpdater startUpdateForAccessories:assetID:]";
            v26 = 2112;
            v27 = v16;
            _os_log_error_impl(
              (void *)&_mh_execute_header,
              v18,
              OS_LOG_TYPE_ERROR,
              "%s: Unknown UARPAccessoryID %@, dropping it",
              buf,
              0x16u);
          }
        }
        objc_release(v17);
      }
      v13 = objc_msgSend(v10, "countByEnumeratingWithState:objects:count:", &v20, v28, 16LL);
    }
    while ( v13 );
  }
  objc_release(v10);
  objc_release(v7);
  objc_release(v10);
}