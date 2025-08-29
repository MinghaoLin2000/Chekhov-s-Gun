-[GCSettingsMediator mergeGames:]
id __cdecl -[GCSettingsMediator mergeGames:](GCSettingsMediator *self, SEL a2, id a3)
{
  id v4; // x19
  __int64 v5; // x1
  os_log_s *v6; // x20
  void *v7; // x22
  void *v8; // x0
  void *v9; // x20
  void *v10; // x23
  id v11; // x24
  void *v12; // x0
  id v13; // x24
  __int64 v14; // x1
  os_log_s *v15; // x19
  NSMutableDictionary *v16; // x25
  void *v17; // x0
  __int64 v18; // x1
  void *v19; // x27
  void *v20; // x26
  void *v21; // x22
  void *v22; // x19
  void *v23; // x21
  void *v24; // x21
  void *v25; // x23
  void *v26; // x20
  void *v27; // x28
  __int64 v28; // x0
  __int64 v29; // x1
  os_log_s *v30; // x23
  os_log_s *v31; // x1
  const char *v32; // x3
  void *v33; // x20
  void *v34; // x20
  void *v35; // x21
  void *v36; // x28
  void *v37; // x0
  __int64 v38; // x1
  os_log_s *v39; // x21
  void *v40; // x0
  __int64 v41; // x1
  os_log_s *v42; // x19
  id v43; // x19
  id v45; // [xsp+8h] [xbp-198h]
  id v46; // [xsp+10h] [xbp-190h]
  id v47; // [xsp+18h] [xbp-188h]
  id v48; // [xsp+20h] [xbp-180h]
  GCSettingsMediator *v49; // [xsp+28h] [xbp-178h]
  id obj; // [xsp+50h] [xbp-150h]
  __int64 v51; // [xsp+58h] [xbp-148h]
  __int128 v52; // [xsp+60h] [xbp-140h] BYREF
  __int128 v53; // [xsp+70h] [xbp-130h]
  __int128 v54; // [xsp+80h] [xbp-120h]
  __int128 v55; // [xsp+90h] [xbp-110h]
  uint8_t buf[4]; // [xsp+A0h] [xbp-100h] BYREF
  id v57; // [xsp+A4h] [xbp-FCh]
  __int16 v58; // [xsp+ACh] [xbp-F4h]
  void *v59; // [xsp+AEh] [xbp-F2h]
  _BYTE v60[128]; // [xsp+C0h] [xbp-E0h] BYREF
  __int64 vars8; // [xsp+1A8h] [xbp+8h]

  v4 = objc_retain(a3);
  v6 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)getGCSLogger(v4, v5));
  if ( os_log_type_enabled(v6, OS_LOG_TYPE_INFO) )
  {
    *(_DWORD *)buf = 138412290;
    v57 = v4;
    _os_log_impl((void *)&_mh_execute_header, v6, OS_LOG_TYPE_INFO, "GCSettingsMediator::mergeGames %@", buf, 0xCu);
  }
  objc_release(v6);
  if ( v4 )
    v7 = v4;
  else
    v7 = &__NSDictionary0__struct;
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "objectForKeyedSubscript:", CFSTR("data")));
  v9 = &__NSArray0__struct;
  if ( v8 )
    v10 = v8;
  else
    v10 = &__NSArray0__struct;
  v11 = objc_retainAutoreleasedReturnValue(-[GCSettingsMediator games](self, "games"));
  v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "objectForKeyedSubscript:", CFSTR("data")));
  if ( v12 )
    v9 = v12;
  v48 = v7;
  v49 = self;
  v46 = v11;
  v13 = objc_retainAutoreleasedReturnValue(
          -[GCSettingsMediator mergedTombstonesForRemoteDictionary:localDictionary:](
            self,
            "mergedTombstonesForRemoteDictionary:localDictionary:",
            v7,
            v11));
  v15 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)getGCSLogger(v13, v14));
  if ( os_log_type_enabled(v15, OS_LOG_TYPE_INFO) )
  {
    *(_DWORD *)buf = 138412290;
    v57 = v13;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v15,
      OS_LOG_TYPE_INFO,
      "GCSettingsMediator::mergeGames tombstoneLookup %@",
      buf,
      0xCu);
  }
  objc_release(v15);
  v16 = objc_opt_new(&OBJC_CLASS___NSMutableDictionary);
  v45 = v9;
  v47 = v10;
  v52 = 0u;
  v53 = 0u;
  v54 = 0u;
  v55 = 0u;
  obj = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "arrayByAddingObjectsFromArray:", v10));
  v17 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v52, v60, 16LL);
  if ( v17 )
  {
    v19 = v17;
    v51 = *(_QWORD *)v53;
    do
    {
      v20 = 0LL;
      do
      {
        if ( *(_QWORD *)v53 != v51 )
          objc_enumerationMutation(obj);
        v21 = objc_msgSend(
                objc_alloc((Class)&OBJC_CLASS___GCSGame),
                "initWithJSONObject:",
                *(_QWORD *)(*((_QWORD *)&v52 + 1) + 8LL * (_QWORD)v20));
        v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v21, "bundleIdentifier"));
        v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "objectForKeyedSubscript:", v22));
        objc_release(v23);
        if ( v23 )
        {
          v24 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "objectForKeyedSubscript:", v22));
          v25 = objc_retainAutoreleasedReturnValue(objc_msgSend(v24, "creationDate"));
          v26 = objc_retainAutoreleasedReturnValue(objc_msgSend(v21, "modifiedDate"));
          v27 = objc_msgSend(v25, "compare:", v26);
          objc_release(v26);
          objc_release(v25);
          objc_release(v24);
          if ( v27 != (void *)-1LL )
          {
            v30 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)getGCSLogger(v28, v29));
            if ( !os_log_type_enabled(v30, OS_LOG_TYPE_INFO) )
              goto LABEL_30;
            *(_DWORD *)buf = 138412290;
            v57 = v21;
            v31 = v30;
            v32 = "GCSettingsMediator::mergeGames valid tombstone for dataObj %@";
LABEL_29:
            _os_log_impl((void *)&_mh_execute_header, v31, OS_LOG_TYPE_INFO, v32, buf, 0xCu);
            goto LABEL_30;
          }
        }
        v33 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v16, "objectForKeyedSubscript:", v22));
        objc_release(v33);
        if ( !v33 )
        {
          v40 = -[NSMutableDictionary setObject:forKeyedSubscript:](v16, "setObject:forKeyedSubscript:", v21, v22);
          v30 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)getGCSLogger(v40, v41));
          if ( !os_log_type_enabled(v30, OS_LOG_TYPE_INFO) )
            goto LABEL_30;
          *(_DWORD *)buf = 138412290;
          v57 = v21;
          v31 = v30;
          v32 = "GCSettingsMediator::mergeGames saving dataObj %@";
          goto LABEL_29;
        }
        v30 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v16, "objectForKeyedSubscript:", v22));
        v34 = objc_retainAutoreleasedReturnValue(-[os_log_s modifiedDate](v30, "modifiedDate"));
        v35 = objc_retainAutoreleasedReturnValue(objc_msgSend(v21, "modifiedDate"));
        v36 = objc_msgSend(v34, "compare:", v35);
        objc_release(v35);
        objc_release(v34);
        if ( v36 == (void *)-1LL )
        {
          v37 = -[NSMutableDictionary setObject:forKeyedSubscript:](v16, "setObject:forKeyedSubscript:", v21, v22);
          v39 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)getGCSLogger(v37, v38));
          if ( os_log_type_enabled(v39, OS_LOG_TYPE_INFO) )
          {
            *(_DWORD *)buf = 138412546;
            v57 = v30;
            v58 = 2112;
            v59 = v21;
            _os_log_impl(
              (void *)&_mh_execute_header,
              v39,
              OS_LOG_TYPE_INFO,
              "GCSettingsMediator::mergeGames overwriting dataObj %@ with dataObj %@",
              buf,
              0x16u);
          }
          objc_release(v39);
        }
LABEL_30:
        objc_release(v30);
        objc_release(v22);
        objc_release(v21);
        v20 = (char *)v20 + 1;
      }
      while ( v19 != v20 );
      v17 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v52, v60, 16LL);
      v19 = v17;
    }
    while ( v17 );
  }
  v42 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)getGCSLogger(v17, v18));
  if ( os_log_type_enabled(v42, OS_LOG_TYPE_INFO) )
  {
    *(_DWORD *)buf = 138412290;
    v57 = v16;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v42,
      OS_LOG_TYPE_INFO,
      "GCSettingsMediator::mergeGames dataLookup %@",
      buf,
      0xCu);
  }
  objc_release(v42);
  v43 = objc_retainAutoreleasedReturnValue(
          -[GCSettingsMediator mergedDictForTombstonesLookup:dataLookup:](
            v49,
            "mergedDictForTombstonesLookup:dataLookup:",
            v13,
            v16));
  -[GCSettingsMediator setGames:](v49, "setGames:", v43);
  objc_release(obj);
  objc_release(v16);
  objc_release(v13);
  objc_release(v45);
  objc_release(v46);
  objc_release(v47);
  objc_release(v48);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v43);
}