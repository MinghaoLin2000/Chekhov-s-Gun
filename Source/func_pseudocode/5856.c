-[GCSettingsMediator mergeProfiles:]
id __cdecl -[GCSettingsMediator mergeProfiles:](GCSettingsMediator *self, SEL a2, id a3)
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
  void *v22; // x21
  void *v23; // x19
  void *v24; // x21
  void *v25; // x21
  void *v26; // x23
  void *v27; // x20
  void *v28; // x28
  __int64 v29; // x0
  __int64 v30; // x1
  os_log_s *v31; // x23
  os_log_s *v32; // x1
  const char *v33; // x3
  void *v34; // x20
  void *v35; // x20
  void *v36; // x21
  void *v37; // x28
  void *v38; // x0
  __int64 v39; // x1
  os_log_s *v40; // x21
  void *v41; // x0
  __int64 v42; // x1
  os_log_s *v43; // x19
  id v44; // x19
  id v46; // [xsp+8h] [xbp-198h]
  id v47; // [xsp+10h] [xbp-190h]
  id v48; // [xsp+18h] [xbp-188h]
  id v49; // [xsp+20h] [xbp-180h]
  GCSettingsMediator *v50; // [xsp+28h] [xbp-178h]
  id obj; // [xsp+50h] [xbp-150h]
  __int64 v52; // [xsp+58h] [xbp-148h]
  __int128 v53; // [xsp+60h] [xbp-140h] BYREF
  __int128 v54; // [xsp+70h] [xbp-130h]
  __int128 v55; // [xsp+80h] [xbp-120h]
  __int128 v56; // [xsp+90h] [xbp-110h]
  uint8_t buf[4]; // [xsp+A0h] [xbp-100h] BYREF
  id v58; // [xsp+A4h] [xbp-FCh]
  __int16 v59; // [xsp+ACh] [xbp-F4h]
  void *v60; // [xsp+AEh] [xbp-F2h]
  _BYTE v61[128]; // [xsp+C0h] [xbp-E0h] BYREF
  __int64 vars8; // [xsp+1A8h] [xbp+8h]

  v4 = objc_retain(a3);
  v6 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)getGCSLogger(v4, v5));
  if ( os_log_type_enabled(v6, OS_LOG_TYPE_INFO) )
  {
    *(_DWORD *)buf = 138412290;
    v58 = v4;
    _os_log_impl((void *)&_mh_execute_header, v6, OS_LOG_TYPE_INFO, "GCSettingsMediator::mergeProfiles %@", buf, 0xCu);
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
  v11 = objc_retainAutoreleasedReturnValue(-[GCSettingsMediator profiles](self, "profiles"));
  v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "objectForKeyedSubscript:", CFSTR("data")));
  if ( v12 )
    v9 = v12;
  v49 = v7;
  v50 = self;
  v47 = v11;
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
    v58 = v13;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v15,
      OS_LOG_TYPE_INFO,
      "GCSettingsMediator::mergeProfiles tombstoneLookup %@",
      buf,
      0xCu);
  }
  objc_release(v15);
  v16 = objc_opt_new(&OBJC_CLASS___NSMutableDictionary);
  v46 = v9;
  v48 = v10;
  v53 = 0u;
  v54 = 0u;
  v55 = 0u;
  v56 = 0u;
  obj = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "arrayByAddingObjectsFromArray:", v10));
  v17 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v53, v61, 16LL);
  if ( v17 )
  {
    v19 = v17;
    v52 = *(_QWORD *)v54;
    do
    {
      v20 = 0LL;
      do
      {
        if ( *(_QWORD *)v54 != v52 )
          objc_enumerationMutation(obj);
        v21 = objc_msgSend(
                objc_alloc((Class)&OBJC_CLASS___GCSProfile),
                "initWithJSONObject:",
                *(_QWORD *)(*((_QWORD *)&v53 + 1) + 8LL * (_QWORD)v20));
        v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v21, "uuid"));
        v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v22, "UUIDString"));
        objc_release(v22);
        v24 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "objectForKeyedSubscript:", v23));
        objc_release(v24);
        if ( v24 )
        {
          v25 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "objectForKeyedSubscript:", v23));
          v26 = objc_retainAutoreleasedReturnValue(objc_msgSend(v25, "creationDate"));
          v27 = objc_retainAutoreleasedReturnValue(objc_msgSend(v21, "modifiedDate"));
          v28 = objc_msgSend(v26, "compare:", v27);
          objc_release(v27);
          objc_release(v26);
          objc_release(v25);
          if ( v28 != (void *)-1LL )
          {
            v31 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)getGCSLogger(v29, v30));
            if ( !os_log_type_enabled(v31, OS_LOG_TYPE_INFO) )
              goto LABEL_30;
            *(_DWORD *)buf = 138412290;
            v58 = v21;
            v32 = v31;
            v33 = "GCSettingsMediator::mergeProfiles valid tombstone for dataObj %@";
LABEL_29:
            _os_log_impl((void *)&_mh_execute_header, v32, OS_LOG_TYPE_INFO, v33, buf, 0xCu);
            goto LABEL_30;
          }
        }
        v34 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v16, "objectForKeyedSubscript:", v23));
        objc_release(v34);
        if ( !v34 )
        {
          v41 = -[NSMutableDictionary setObject:forKeyedSubscript:](v16, "setObject:forKeyedSubscript:", v21, v23);
          v31 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)getGCSLogger(v41, v42));
          if ( !os_log_type_enabled(v31, OS_LOG_TYPE_INFO) )
            goto LABEL_30;
          *(_DWORD *)buf = 138412290;
          v58 = v21;
          v32 = v31;
          v33 = "GCSettingsMediator::mergeProfiles saving dataObj %@";
          goto LABEL_29;
        }
        v31 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v16, "objectForKeyedSubscript:", v23));
        v35 = objc_retainAutoreleasedReturnValue(-[os_log_s modifiedDate](v31, "modifiedDate"));
        v36 = objc_retainAutoreleasedReturnValue(objc_msgSend(v21, "modifiedDate"));
        v37 = objc_msgSend(v35, "compare:", v36);
        objc_release(v36);
        objc_release(v35);
        if ( v37 == (void *)-1LL )
        {
          v38 = -[NSMutableDictionary setObject:forKeyedSubscript:](v16, "setObject:forKeyedSubscript:", v21, v23);
          v40 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)getGCSLogger(v38, v39));
          if ( os_log_type_enabled(v40, OS_LOG_TYPE_INFO) )
          {
            *(_DWORD *)buf = 138412546;
            v58 = v31;
            v59 = 2112;
            v60 = v21;
            _os_log_impl(
              (void *)&_mh_execute_header,
              v40,
              OS_LOG_TYPE_INFO,
              "GCSettingsMediator::mergeProfiles overwriting dataObj %@ with dataObj %@",
              buf,
              0x16u);
          }
          objc_release(v40);
        }
LABEL_30:
        objc_release(v31);
        objc_release(v23);
        objc_release(v21);
        v20 = (char *)v20 + 1;
      }
      while ( v19 != v20 );
      v17 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v53, v61, 16LL);
      v19 = v17;
    }
    while ( v17 );
  }
  v43 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)getGCSLogger(v17, v18));
  if ( os_log_type_enabled(v43, OS_LOG_TYPE_INFO) )
  {
    *(_DWORD *)buf = 138412290;
    v58 = v16;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v43,
      OS_LOG_TYPE_INFO,
      "GCSettingsMediator::mergeProfiles dataLookup %@",
      buf,
      0xCu);
  }
  objc_release(v43);
  v44 = objc_retainAutoreleasedReturnValue(
          -[GCSettingsMediator mergedDictForTombstonesLookup:dataLookup:](
            v50,
            "mergedDictForTombstonesLookup:dataLookup:",
            v13,
            v16));
  -[GCSettingsMediator setProfiles:](v50, "setProfiles:", v44);
  objc_release(obj);
  objc_release(v16);
  objc_release(v13);
  objc_release(v46);
  objc_release(v47);
  objc_release(v48);
  objc_release(v49);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v44);
}