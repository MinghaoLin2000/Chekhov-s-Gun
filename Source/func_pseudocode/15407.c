-[UARPUpdaterDisplayControllerDelegate updateRestoreProgress:operation:]
void __cdecl -[UARPUpdaterDisplayControllerDelegate updateRestoreProgress:operation:](
        UARPUpdaterDisplayControllerDelegate *self,
        SEL a2,
        id a3,
        signed __int64 a4)
{
  id v6; // x19
  NSMutableDictionary *v7; // x21
  void *v8; // x23
  void *v9; // x24
  void *v10; // x23
  __int64 v11; // x8
  int v12; // w8
  bool v13; // cc
  OS_os_log *log; // x24
  NSNumber *v15; // x22
  void *v16; // x21
  unsigned int v17; // w24
  unsigned int v18; // w23
  void *v19; // x22
  __int64 v20; // x25
  void *v21; // x28
  int v22; // w27
  id v23; // x21
  id v24; // x22
  void *v25; // x21
  OS_os_log *v26; // x22
  id v27; // x22
  __int128 v28; // [xsp+0h] [xbp-140h] BYREF
  __int128 v29; // [xsp+10h] [xbp-130h]
  __int128 v30; // [xsp+20h] [xbp-120h]
  __int128 v31; // [xsp+30h] [xbp-110h]
  uint8_t buf[4]; // [xsp+40h] [xbp-100h] BYREF
  const char *v33; // [xsp+44h] [xbp-FCh]
  __int16 v34; // [xsp+4Ch] [xbp-F4h]
  unsigned int v35; // [xsp+4Eh] [xbp-F2h]
  __int16 v36; // [xsp+52h] [xbp-EEh]
  unsigned int v37; // [xsp+54h] [xbp-ECh]
  _BYTE v38[128]; // [xsp+60h] [xbp-E0h] BYREF

  v6 = objc_retain(a3);
  v7 = objc_retain(self->_restoreProgress);
  objc_sync_enter(v7);
  if ( !self->_inPostLogout
    || (v8 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_restoreProgress, "objectForKeyedSubscript:", v6)),
        objc_release(v8),
        !v8) )
  {
    objc_sync_exit(v7);
    objc_release(v7);
    goto LABEL_29;
  }
  v9 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_restoreProgress, "objectForKeyedSubscript:", v6));
  v10 = objc_msgSend(v9, "intValue");
  objc_release(v9);
  switch ( a4 )
  {
    case 100LL:
      v11 = 100LL;
      goto LABEL_13;
    case 101LL:
      if ( (int)v10 >= 996 )
        v12 = 996;
      else
        v12 = (int)v10;
      v11 = (unsigned int)(v12 + 3);
LABEL_13:
      v13 = (int)v11 < (int)v10;
      v10 = (void *)v11;
      if ( v13 )
        goto LABEL_19;
      goto LABEL_18;
    case 1000LL:
      v11 = 1000LL;
      goto LABEL_13;
  }
  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_ERROR) )
    sub_1000157B8(a4, log);
LABEL_18:
  v15 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithInt:](&OBJC_CLASS___NSNumber, "numberWithInt:", v10));
  -[NSMutableDictionary setObject:forKeyedSubscript:](self->_restoreProgress, "setObject:forKeyedSubscript:", v15, v6);
  objc_release(v15);
LABEL_19:
  objc_sync_exit(v7);
  objc_release(v7);
  v30 = 0u;
  v31 = 0u;
  v28 = 0u;
  v29 = 0u;
  v16 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary allValues](self->_restoreProgress, "allValues", 0LL));
  v17 = 0;
  v18 = 0;
  v19 = objc_msgSend(v16, "countByEnumeratingWithState:objects:count:", &v28, v38, 16LL);
  if ( v19 )
  {
    v20 = *(_QWORD *)v29;
    do
    {
      v21 = 0LL;
      v22 = 1000 * (_DWORD)v19;
      do
      {
        if ( *(_QWORD *)v29 != v20 )
          objc_enumerationMutation(v16);
        v17 += (unsigned int)objc_msgSend(*(id *)(*((_QWORD *)&v28 + 1) + 8LL * (_QWORD)v21), "intValue");
        v21 = (char *)v21 + 1;
      }
      while ( v19 != v21 );
      v19 = objc_msgSend(v16, "countByEnumeratingWithState:objects:count:", &v28, v38, 16LL);
      v18 += v22;
    }
    while ( v19 );
  }
  objc_release(v16);
  v23 = objc_alloc((Class)&OBJC_CLASS___UARPConsent);
  v24 = objc_retainAutoreleasedReturnValue(
          -[UARPUpdaterDisplayControllerDelegate localizedStringForKey:](
            self,
            "localizedStringForKey:",
            CFSTR("Apple Studio Display")));
  v25 = objc_msgSend(v23, "initWithAccessoryName:assetVersion:", v24, &stru_100020E10);
  objc_release(v24);
  v26 = self->_log;
  if ( os_log_type_enabled(v26, OS_LOG_TYPE_DEFAULT) )
  {
    *(_DWORD *)buf = 136315650;
    v33 = "-[UARPUpdaterDisplayControllerDelegate updateRestoreProgress:operation:]";
    v34 = 1024;
    v35 = v17;
    v36 = 1024;
    v37 = v18;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v26,
      OS_LOG_TYPE_DEFAULT,
      "%s: Setting SU total progress to %d/%d",
      buf,
      0x18u);
  }
  v27 = objc_alloc_init((Class)&OBJC_CLASS___UARPController);
  objc_msgSend(v27, "setDelegate:", self);
  objc_msgSend(v27, "progressForUARPConsentInPostLogout:bytesSent:bytesTotal:", v25, v17, v18);
  objc_release(v27);
  objc_release(v25);
LABEL_29:
  objc_release(v6);
}