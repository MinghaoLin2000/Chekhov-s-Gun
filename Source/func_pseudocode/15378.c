-[UARPUpdaterDisplayControllerDelegate downloadAsset:internal:withForce:]
int __cdecl -[UARPUpdaterDisplayControllerDelegate downloadAsset:internal:withForce:](
        UARPUpdaterDisplayControllerDelegate *self,
        SEL a2,
        id a3,
        bool a4,
        bool a5)
{
  _BOOL4 v5; // w26
  id v7; // x19
  __int64 v8; // x10
  __int64 v9; // x20
  OS_os_log *log; // x20
  int v11; // w24
  void *v12; // x20
  unsigned __int8 v13; // w21
  OS_os_log *v14; // x20
  _BOOL4 stopUpdate; // w8
  _BOOL4 audienceChange; // w9
  OS_os_log *v18; // x20
  id v19; // x23
  void *v20; // x20
  void *v21; // x20
  void *v22; // x20
  void *v23; // x20
  void *v24; // x21
  void *v25; // x27
  void *v26; // x20
  __int64 v27; // x22
  void *i; // x28
  void *v29; // x21
  void *v30; // x25
  void *v31; // x21
  void *v32; // x25
  unsigned __int8 v33; // w0
  OS_os_log *v34; // x20
  unsigned __int8 v35; // w0
  OS_os_log *v36; // x20
  OS_os_log *v37; // x20
  OS_os_log *v38; // x20
  OS_os_log *v39; // x20
  bool *p_audienceChange; // [xsp+8h] [xbp-188h]
  bool *p_stopUpdate; // [xsp+10h] [xbp-180h]
  NSMutableDictionary *v42; // [xsp+18h] [xbp-178h]
  id v43; // [xsp+20h] [xbp-170h]
  DisplayMobileAssetUpdater *obj; // [xsp+28h] [xbp-168h]
  _BOOL4 v45; // [xsp+34h] [xbp-15Ch]
  id v46; // [xsp+38h] [xbp-158h]
  id v47; // [xsp+40h] [xbp-150h]
  void *v48; // [xsp+48h] [xbp-148h] BYREF
  __int128 v49; // [xsp+50h] [xbp-140h] BYREF
  __int128 v50; // [xsp+60h] [xbp-130h]
  __int128 v51; // [xsp+70h] [xbp-120h]
  __int128 v52; // [xsp+80h] [xbp-110h]
  uint8_t v53[128]; // [xsp+90h] [xbp-100h] BYREF
  uint8_t buf[4]; // [xsp+110h] [xbp-80h] BYREF
  const char *v55; // [xsp+114h] [xbp-7Ch]
  __int16 v56; // [xsp+11Ch] [xbp-74h]
  _BOOL4 v57; // [xsp+11Eh] [xbp-72h]
  __int16 v58; // [xsp+122h] [xbp-6Eh]
  _BOOL4 v59; // [xsp+124h] [xbp-6Ch]

  v45 = a5;
  v5 = a4;
  v7 = objc_retain(a3);
  if ( v5 )
    v8 = 24LL;
  else
    v8 = 32LL;
  if ( v5 )
    v9 = 32LL;
  else
    v9 = 24LL;
  v47 = objc_retain(*(id *)((char *)&self->super.isa + v8));
  v46 = objc_retain(*(id *)((char *)&self->super.isa + v9));
  if ( v7 )
  {
    objc_msgSend(v7, "refreshState");
    if ( objc_msgSend(v7, "state") == (void *)2 )
    {
      log = self->_log;
      if ( os_log_type_enabled(log, OS_LOG_TYPE_DEFAULT) )
      {
        *(_DWORD *)buf = 136315138;
        v55 = "-[UARPUpdaterDisplayControllerDelegate downloadAsset:internal:withForce:]";
        _os_log_impl((void *)&_mh_execute_header, log, OS_LOG_TYPE_DEFAULT, "%s: Asset already downloaded", buf, 0xCu);
      }
      v11 = 1;
      goto LABEL_20;
    }
    v12 = objc_retainAutoreleasedReturnValue(+[SUPreferenceManager defaultManager](&OBJC_CLASS___SUPreferenceManager, "defaultManager"));
    v13 = (unsigned __int8)objc_msgSend(v12, "downloadUpdatesInBackground");
    objc_release(v12);
    if ( (v13 & 1) != 0 || v45 )
    {
      obj = objc_retain(self->_mobileAssetInternalUpdater);
      objc_sync_enter(obj);
      if ( self->_stopUpdate || self->_audienceChange )
      {
        v14 = self->_log;
        if ( os_log_type_enabled(v14, OS_LOG_TYPE_DEFAULT) )
        {
          stopUpdate = self->_stopUpdate;
          audienceChange = self->_audienceChange;
          *(_DWORD *)buf = 136315650;
          v55 = "-[UARPUpdaterDisplayControllerDelegate downloadAsset:internal:withForce:]";
          v56 = 1024;
          v57 = stopUpdate;
          v58 = 1024;
          v59 = audienceChange;
          _os_log_impl(
            (void *)&_mh_execute_header,
            v14,
            OS_LOG_TYPE_DEFAULT,
            "%s: Aborting download (%d:%d)",
            buf,
            0x18u);
        }
        v11 = 7;
LABEL_19:
        objc_sync_exit(obj);
        objc_release(obj);
        goto LABEL_20;
      }
      objc_msgSend(v7, "refreshState");
      if ( objc_msgSend(v7, "state") == (void *)2 )
      {
        v18 = self->_log;
        if ( os_log_type_enabled(v18, OS_LOG_TYPE_DEFAULT) )
        {
          *(_DWORD *)buf = 136315138;
          v55 = "-[UARPUpdaterDisplayControllerDelegate downloadAsset:internal:withForce:]";
          _os_log_impl((void *)&_mh_execute_header, v18, OS_LOG_TYPE_DEFAULT, "%s: Asset already downloaded", buf, 0xCu);
        }
        v11 = 1;
        goto LABEL_19;
      }
      p_audienceChange = &self->_audienceChange;
      p_stopUpdate = &self->_stopUpdate;
      v19 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableArray);
      v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "attributes"));
      v43 = objc_retainAutoreleasedReturnValue(objc_msgSend(v20, "objectForKeyedSubscript:", CFSTR("_DownloadSize")));
      objc_release(v20);
      if ( v43 )
      {
        v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "assetId"));
        objc_msgSend(v19, "addObject:", v21);
        objc_release(v21);
        v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v46, "asset"));
        objc_release(v22);
        if ( v22 )
        {
          v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v46, "asset"));
          v24 = objc_retainAutoreleasedReturnValue(objc_msgSend(v23, "assetId"));
          objc_msgSend(v19, "addObject:", v24);
          objc_release(v24);
          objc_release(v23);
        }
        v42 = objc_retain(self->_restoreInfo);
        objc_sync_enter(v42);
        v49 = 0u;
        v50 = 0u;
        v51 = 0u;
        v52 = 0u;
        v25 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary allValues](self->_restoreInfo, "allValues"));
        v26 = objc_msgSend(v25, "countByEnumeratingWithState:objects:count:", &v49, v53, 16LL);
        if ( v26 )
        {
          v27 = *(_QWORD *)v50;
          do
          {
            for ( i = 0LL; i != v26; i = (char *)i + 1 )
            {
              if ( *(_QWORD *)v50 != v27 )
                objc_enumerationMutation(v25);
              v29 = *(void **)(*((_QWORD *)&v49 + 1) + 8LL * (_QWORD)i);
              v30 = objc_retainAutoreleasedReturnValue(objc_msgSend(v29, "asset"));
              objc_release(v30);
              if ( v30 )
              {
                v31 = objc_retainAutoreleasedReturnValue(objc_msgSend(v29, "asset"));
                v32 = objc_retainAutoreleasedReturnValue(objc_msgSend(v31, "assetId"));
                objc_msgSend(v19, "addObject:", v32);
                objc_release(v32);
                objc_release(v31);
              }
            }
            v26 = objc_msgSend(v25, "countByEnumeratingWithState:objects:count:", &v49, v53, 16LL);
          }
          while ( v26 );
        }
        objc_release(v25);
        objc_sync_exit(v42);
        objc_release(v42);
        objc_msgSend(v47, "syncPurgeAssetsExceptIDs:", v19);
        v48 = objc_msgSend(v43, "unsignedLongValue");
        v33 = (unsigned __int8)objc_msgSend(v7, "spaceCheck:", &v48);
        v34 = self->_log;
        if ( (v33 & 1) != 0 )
        {
          if ( os_log_type_enabled(self->_log, OS_LOG_TYPE_DEFAULT) )
          {
            *(_DWORD *)buf = 136315650;
            v55 = "-[UARPUpdaterDisplayControllerDelegate downloadAsset:internal:withForce:]";
            v56 = 1024;
            v57 = v5;
            v58 = 1024;
            v59 = v45;
            _os_log_impl(
              (void *)&_mh_execute_header,
              v34,
              OS_LOG_TYPE_DEFAULT,
              "%s: Downloading asset (internal=%d force=%u)",
              buf,
              0x18u);
          }
          v35 = (unsigned __int8)objc_msgSend(v47, "syncDownloadAsset:", v7);
          v36 = self->_log;
          if ( (v35 & 1) != 0 )
          {
            if ( os_log_type_enabled(self->_log, OS_LOG_TYPE_DEFAULT) )
            {
              *(_DWORD *)buf = 136315138;
              v55 = "-[UARPUpdaterDisplayControllerDelegate downloadAsset:internal:withForce:]";
              _os_log_impl((void *)&_mh_execute_header, v36, OS_LOG_TYPE_DEFAULT, "%s: Asset downloaded", buf, 0xCu);
            }
            v11 = 1;
          }
          else
          {
            if ( os_log_type_enabled(self->_log, OS_LOG_TYPE_ERROR) )
              sub_100013EB4(p_stopUpdate, p_audienceChange, v36);
            if ( *p_stopUpdate )
            {
              v11 = 7;
            }
            else if ( *p_audienceChange )
            {
              v11 = 7;
            }
            else
            {
              v11 = 6;
            }
          }
        }
        else
        {
          if ( os_log_type_enabled(self->_log, OS_LOG_TYPE_ERROR) )
            sub_100013F44(v34);
          v11 = 5;
        }
        objc_release(v43);
        objc_release(v19);
        objc_sync_exit(obj);
        objc_release(obj);
      }
      else
      {
        v39 = self->_log;
        if ( os_log_type_enabled(v39, OS_LOG_TYPE_ERROR) )
          sub_100013E3C(v39);
        objc_release(v19);
        objc_sync_exit(obj);
        objc_release(obj);
        v11 = 4;
      }
    }
    else
    {
      v38 = self->_log;
      if ( os_log_type_enabled(v38, OS_LOG_TYPE_ERROR) )
        sub_100013FBC(v38);
      v11 = 3;
    }
  }
  else
  {
    v37 = self->_log;
    if ( os_log_type_enabled(v37, OS_LOG_TYPE_ERROR) )
      sub_100013DC4(v37);
    v11 = 2;
  }
LABEL_20:
  objc_release(v46);
  objc_release(v47);
  objc_release(v7);
  return v11;
}