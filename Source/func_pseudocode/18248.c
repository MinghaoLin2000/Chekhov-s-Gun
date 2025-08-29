-[INHService loadSchemaURLsForBundleIdentifiers:completion:]
void __cdecl -[INHService loadSchemaURLsForBundleIdentifiers:completion:](INHService *self, SEL a2, id a3, id a4)
{
  id v6; // x21
  id v7; // x20
  unsigned __int8 v8; // w19
  id v9; // x0
  void *v10; // x22
  void *v11; // x23
  __int64 v12; // x28
  LSBundleRecord *v13; // x27
  id v14; // x21
  os_log_s *v15; // x19
  void *v16; // x20
  void *v17; // x25
  NSSet *v18; // x19
  void *v19; // x20
  NSMutableSet *v20; // x20
  void *v21; // x0
  void *v22; // x25
  __int64 v23; // x24
  void *i; // x21
  void *v25; // x26
  NSMutableDictionary *v26; // x1
  id v27; // [xsp+8h] [xbp-288h]
  id v28; // [xsp+10h] [xbp-280h]
  id v29; // [xsp+18h] [xbp-278h]
  id obj; // [xsp+38h] [xbp-258h]
  NSMutableDictionary *v31; // [xsp+40h] [xbp-250h]
  __int64 v32; // [xsp+48h] [xbp-248h]
  void *v33; // [xsp+50h] [xbp-240h]
  id v34; // [xsp+58h] [xbp-238h]
  __int128 v35; // [xsp+60h] [xbp-230h] BYREF
  __int128 v36; // [xsp+70h] [xbp-220h]
  __int128 v37; // [xsp+80h] [xbp-210h]
  __int128 v38; // [xsp+90h] [xbp-200h]
  id v39; // [xsp+A8h] [xbp-1E8h] BYREF
  __int128 v40; // [xsp+B0h] [xbp-1E0h] BYREF
  __int128 v41; // [xsp+C0h] [xbp-1D0h]
  __int128 v42; // [xsp+D0h] [xbp-1C0h]
  __int128 v43; // [xsp+E0h] [xbp-1B0h]
  id v44; // [xsp+F8h] [xbp-198h] BYREF
  uint8_t v45[128]; // [xsp+100h] [xbp-190h] BYREF
  uint8_t buf[4]; // [xsp+180h] [xbp-110h] BYREF
  const char *v47; // [xsp+184h] [xbp-10Ch]
  __int16 v48; // [xsp+18Ch] [xbp-104h]
  __int64 v49; // [xsp+18Eh] [xbp-102h]
  __int16 v50; // [xsp+196h] [xbp-FAh]
  id v51; // [xsp+198h] [xbp-F8h]
  _BYTE v52[128]; // [xsp+1A8h] [xbp-E8h] BYREF

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  if ( !objc_msgSend(v6, "count") )
  {
    (*((void (__fastcall **)(id, _QWORD, _QWORD))v7 + 2))(v7, 0LL, 0LL);
    goto LABEL_32;
  }
  v44 = 0LL;
  v8 = -[INHService _checkServiceAccessWithError:](self, "_checkServiceAccessWithError:", &v44);
  v9 = objc_retain(v44);
  v10 = v9;
  if ( (v8 & 1) == 0 )
  {
    (*((void (__fastcall **)(id, _QWORD, id))v7 + 2))(v7, 0LL, v9);
    goto LABEL_31;
  }
  v27 = v9;
  v28 = v7;
  v31 = objc_opt_new(&OBJC_CLASS___NSMutableDictionary);
  v40 = 0u;
  v41 = 0u;
  v42 = 0u;
  v43 = 0u;
  v29 = v6;
  obj = objc_retain(v6);
  v33 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v40, v52, 16LL);
  if ( !v33 )
    goto LABEL_25;
  v32 = *(_QWORD *)v41;
  do
  {
    v11 = 0LL;
    do
    {
      if ( *(_QWORD *)v41 != v32 )
        objc_enumerationMutation(obj);
      v12 = *(_QWORD *)(*((_QWORD *)&v40 + 1) + 8LL * (_QWORD)v11);
      v39 = 0LL;
      v13 = objc_retainAutoreleasedReturnValue(
              +[LSBundleRecord bundleRecordWithBundleIdentifier:allowPlaceholder:error:](
                &OBJC_CLASS___LSBundleRecord,
                "bundleRecordWithBundleIdentifier:allowPlaceholder:error:",
                v12,
                0LL,
                &v39));
      v14 = objc_retain(v39);
      if ( v14 )
      {
        v15 = (os_log_s *)INSiriLogContextIntents;
        if ( os_log_type_enabled(INSiriLogContextIntents, OS_LOG_TYPE_ERROR) )
        {
          *(_DWORD *)buf = 136315650;
          v47 = "-[INHService loadSchemaURLsForBundleIdentifiers:completion:]";
          v48 = 2112;
          v49 = v12;
          v50 = 2112;
          v51 = v14;
          _os_log_error_impl(
            (void *)&_mh_execute_header,
            v15,
            OS_LOG_TYPE_ERROR,
            "%s Error getting bundle record for bundle identifier %@: %@",
            buf,
            0x20u);
        }
      }
      if ( v13 )
      {
        v16 = objc_retainAutoreleasedReturnValue(-[LSBundleRecord intentDefinitionURLs](v13, "intentDefinitionURLs"));
        v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "allValues"));
        v18 = objc_retainAutoreleasedReturnValue(+[NSSet setWithArray:](&OBJC_CLASS___NSSet, "setWithArray:", v17));
        objc_release(v17);
        objc_release(v16);
        if ( !-[NSSet count](v18, "count") )
          goto LABEL_23;
      }
      else
      {
        v19 = objc_retainAutoreleasedReturnValue(objc_msgSend((id)_INVCIntentDefinitionManagerClass(), "intentDefinitionURLsForBundleID:", v12));
        v18 = objc_retainAutoreleasedReturnValue(+[NSSet setWithArray:](&OBJC_CLASS___NSSet, "setWithArray:", v19));
        objc_release(v19);
      }
      v34 = v14;
      v20 = objc_opt_new(&OBJC_CLASS___NSMutableSet);
      v35 = 0u;
      v36 = 0u;
      v37 = 0u;
      v38 = 0u;
      v18 = objc_retain(v18);
      v21 = -[NSSet countByEnumeratingWithState:objects:count:](
              v18,
              "countByEnumeratingWithState:objects:count:",
              &v35,
              v45,
              16LL);
      if ( v21 )
      {
        v22 = v21;
        v23 = *(_QWORD *)v36;
        do
        {
          for ( i = 0LL; i != v22; i = (char *)i + 1 )
          {
            if ( *(_QWORD *)v36 != v23 )
              objc_enumerationMutation(v18);
            v25 = objc_msgSend(
                    objc_alloc((Class)&OBJC_CLASS___NSSecurityScopedURLWrapper),
                    "initWithURL:readonly:",
                    *(_QWORD *)(*((_QWORD *)&v35 + 1) + 8LL * (_QWORD)i),
                    1LL);
            -[NSMutableSet addObject:](v20, "addObject:", v25);
            objc_release(v25);
          }
          v22 = -[NSSet countByEnumeratingWithState:objects:count:](
                  v18,
                  "countByEnumeratingWithState:objects:count:",
                  &v35,
                  v45,
                  16LL);
        }
        while ( v22 );
      }
      objc_release(v18);
      -[NSMutableDictionary setObject:forKey:](v31, "setObject:forKey:", v20, v12);
      objc_release(v20);
      v14 = v34;
LABEL_23:
      objc_release(v18);
      objc_release(v13);
      objc_release(v14);
      v11 = (char *)v11 + 1;
    }
    while ( v11 != v33 );
    v33 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v40, v52, 16LL);
  }
  while ( v33 );
LABEL_25:
  objc_release(obj);
  if ( -[NSMutableDictionary count](v31, "count") )
    v26 = v31;
  else
    v26 = 0LL;
  v7 = v28;
  (*((void (__fastcall **)(id, NSMutableDictionary *, _QWORD))v28 + 2))(v28, v26, 0LL);
  objc_release(v31);
  v6 = v29;
  v10 = v27;
LABEL_31:
  objc_release(v10);
LABEL_32:
  objc_release(v7);
  objc_release(v6);
}