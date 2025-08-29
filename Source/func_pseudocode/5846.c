-[GCSettingsMediator mergedTombstonesForRemoteDictionary:localDictionary:]
id __cdecl -[GCSettingsMediator mergedTombstonesForRemoteDictionary:localDictionary:](
        GCSettingsMediator *self,
        SEL a2,
        id a3,
        id a4)
{
  id v5; // x21
  void *v6; // x0
  void *v7; // x22
  void *v8; // x0
  void *v9; // x2
  void *v10; // x19
  NSString *(__cdecl **v11)(Class); // x21
  double v12; // d0
  NSDate *v13; // x27
  NSMutableDictionary *v14; // x22
  void *v15; // x0
  void *v16; // x25
  __int64 v17; // x26
  void *v18; // x24
  void *v19; // x28
  void *v20; // x19
  void *v21; // x20
  __int64 v22; // x0
  __int64 v23; // x1
  void *v24; // x19
  void *v25; // x20
  os_log_s *v26; // x19
  __int64 v27; // x25
  NSString *(__cdecl **v28)(Class); // x23
  void *v29; // x20
  void *v30; // x19
  void *v31; // x21
  void *v32; // x26
  void *v33; // x19
  id v35; // [xsp+8h] [xbp-168h]
  id v36; // [xsp+10h] [xbp-160h]
  id v37; // [xsp+18h] [xbp-158h]
  void *v38; // [xsp+30h] [xbp-140h]
  id obj; // [xsp+38h] [xbp-138h]
  __int128 v40; // [xsp+40h] [xbp-130h] BYREF
  __int128 v41; // [xsp+50h] [xbp-120h]
  __int128 v42; // [xsp+60h] [xbp-110h]
  __int128 v43; // [xsp+70h] [xbp-100h]
  uint8_t buf[4]; // [xsp+80h] [xbp-F0h] BYREF
  void *v45; // [xsp+84h] [xbp-ECh]
  _BYTE v46[128]; // [xsp+90h] [xbp-E0h] BYREF
  __int64 vars8; // [xsp+178h] [xbp+8h]

  v5 = objc_retain(a4);
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(a3, "objectForKeyedSubscript:", CFSTR("tombstones")));
  if ( v6 )
    v7 = v6;
  else
    v7 = &__NSArray0__struct;
  v37 = v5;
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "objectForKeyedSubscript:", CFSTR("tombstones")));
  if ( v8 )
    v9 = v8;
  else
    v9 = &__NSArray0__struct;
  v35 = v9;
  v36 = v7;
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "arrayByAddingObjectsFromArray:"));
  v11 = &NSStringFromClass_ptr;
  +[GCSTombstone timeToLiveSeconds](&OBJC_CLASS___GCSTombstone, "timeToLiveSeconds");
  v13 = objc_retainAutoreleasedReturnValue(+[NSDate dateWithTimeIntervalSinceNow:](&OBJC_CLASS___NSDate, "dateWithTimeIntervalSinceNow:", -v12));
  v14 = objc_opt_new(&OBJC_CLASS___NSMutableDictionary);
  v40 = 0u;
  v41 = 0u;
  v42 = 0u;
  v43 = 0u;
  obj = objc_retain(v10);
  v15 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v40, v46, 16LL);
  if ( v15 )
  {
    v16 = v15;
    v17 = *(_QWORD *)v41;
    do
    {
      v18 = 0LL;
      v38 = v16;
      do
      {
        if ( *(_QWORD *)v41 != v17 )
          objc_enumerationMutation(obj);
        v19 = objc_msgSend(
                objc_alloc((Class)v11[22]),
                "initWithJSONObject:",
                *(_QWORD *)(*((_QWORD *)&v40 + 1) + 8LL * (_QWORD)v18));
        v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v19, "creationDate"));
        v21 = objc_msgSend(v20, "compare:", v13);
        objc_release(v20);
        if ( v21 == (void *)-1LL )
        {
          v26 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)getGCSLogger(v22, v23));
          if ( os_log_type_enabled(v26, OS_LOG_TYPE_INFO) )
          {
            *(_DWORD *)buf = 138412290;
            v45 = v19;
            _os_log_impl(
              (void *)&_mh_execute_header,
              v26,
              OS_LOG_TYPE_INFO,
              "GCSettingsMediator::mergedTombstonesForRemoteDictionary:localDictionary - deleting tombstone %@",
              buf,
              0xCu);
          }
        }
        else
        {
          v24 = objc_retainAutoreleasedReturnValue(objc_msgSend(v19, "identifier"));
          v25 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v14, "objectForKeyedSubscript:", v24));
          objc_release(v25);
          objc_release(v24);
          v26 = objc_retainAutoreleasedReturnValue(objc_msgSend(v19, "identifier"));
          if ( v25 )
          {
            v27 = v17;
            v28 = v11;
            v29 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v14, "objectForKeyedSubscript:", v26));
            objc_release(v26);
            v30 = objc_retainAutoreleasedReturnValue(objc_msgSend(v29, "creationDate"));
            v31 = objc_retainAutoreleasedReturnValue(objc_msgSend(v19, "creationDate"));
            v32 = objc_msgSend(v30, "compare:", v31);
            objc_release(v31);
            objc_release(v30);
            if ( v32 == (void *)-1LL )
            {
              v33 = objc_retainAutoreleasedReturnValue(objc_msgSend(v19, "identifier"));
              -[NSMutableDictionary setObject:forKeyedSubscript:](v14, "setObject:forKeyedSubscript:", v19, v33);
              objc_release(v33);
            }
            v26 = (os_log_s *)v29;
            v11 = v28;
            v17 = v27;
            v16 = v38;
          }
          else
          {
            -[NSMutableDictionary setObject:forKeyedSubscript:](v14, "setObject:forKeyedSubscript:", v19, v26);
          }
        }
        objc_release(v26);
        objc_release(v19);
        v18 = (char *)v18 + 1;
      }
      while ( v16 != v18 );
      v16 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v40, v46, 16LL);
    }
    while ( v16 );
  }
  objc_release(obj);
  objc_release(v13);
  objc_release(obj);
  objc_release(v35);
  objc_release(v36);
  objc_release(v37);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v14);
}