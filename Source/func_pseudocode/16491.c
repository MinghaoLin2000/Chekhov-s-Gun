_updateReachabilityForAccessoryID
void __fastcall updateReachabilityForAccessoryID(void *a1, unsigned int a2)
{
  id v2; // x26
  id v3; // x0
  void *v4; // x20
  id v5; // x0
  void *v6; // x22
  id v7; // x23
  void *v8; // x25
  void *v9; // x24
  NSMutableDictionary *v10; // x25
  NSNumber *v11; // x21
  NSDictionary *v12; // x21
  void *v13; // x22
  void *v14; // x23
  id v15; // x22
  void *v16; // x0
  void *v17; // x24
  __int64 v18; // x19
  void *i; // x21
  __int64 v20; // x26
  void *v21; // x27
  void *v22; // x25
  NSMutableDictionary *v23; // x27
  NSNumber *v24; // x28
  NSDictionary *v25; // x28
  __int128 v27; // [xsp+10h] [xbp-120h] BYREF
  __int128 v28; // [xsp+20h] [xbp-110h]
  __int128 v29; // [xsp+30h] [xbp-100h]
  __int128 v30; // [xsp+40h] [xbp-F0h]
  _BYTE v31[128]; // [xsp+50h] [xbp-E0h] BYREF

  v2 = objc_retain(a1);
  v3 = objc_retainAutoreleasedReturnValue(+[AUDeveloperSettingsDatabase sharedDatabase](&OBJC_CLASS___AUDeveloperSettingsDatabase, "sharedDatabase"));
  v4 = v3;
  if ( v2 )
  {
    v5 = objc_retainAutoreleasedReturnValue(getAccessoryDatabaseKeyForAccessoryID(v2));
    if ( v5 )
    {
      v6 = v5;
      v7 = objc_retainAutoreleasedReturnValue(+[AUDeveloperSettingsDatabase sharedDatabase](&OBJC_CLASS___AUDeveloperSettingsDatabase, "sharedDatabase"));
      v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "accessoriesDictionary"));
      v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "objectForKey:", v6));
      objc_release(v8);
      if ( v9 )
      {
        v10 = objc_retainAutoreleasedReturnValue(
                +[NSMutableDictionary dictionaryWithDictionary:](
                  &OBJC_CLASS___NSMutableDictionary,
                  "dictionaryWithDictionary:",
                  v9));
        v11 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithBool:](&OBJC_CLASS___NSNumber, "numberWithBool:", a2));
        -[NSMutableDictionary setObject:forKeyedSubscript:](
          v10,
          "setObject:forKeyedSubscript:",
          v11,
          CFSTR("accessoryReachable"));
        objc_release(v11);
        v12 = objc_retainAutoreleasedReturnValue(+[NSDictionary dictionaryWithDictionary:](&OBJC_CLASS___NSDictionary, "dictionaryWithDictionary:", v10));
        objc_msgSend(v7, "addAccessoryWithSerialNumber:info:", v6, v12);
        objc_release(v12);
        objc_release(v10);
      }
      objc_release(v9);
      objc_release(v7);
      objc_release(v6);
    }
  }
  else
  {
    v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "accessoriesDictionary"));
    v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "allKeys"));
    objc_release(v13);
    v29 = 0u;
    v30 = 0u;
    v27 = 0u;
    v28 = 0u;
    v15 = objc_retain(v14);
    v16 = objc_msgSend(v15, "countByEnumeratingWithState:objects:count:", &v27, v31, 16LL);
    if ( v16 )
    {
      v17 = v16;
      v18 = *(_QWORD *)v28;
      do
      {
        for ( i = 0LL; i != v17; i = (char *)i + 1 )
        {
          if ( *(_QWORD *)v28 != v18 )
            objc_enumerationMutation(v15);
          v20 = *(_QWORD *)(*((_QWORD *)&v27 + 1) + 8LL * (_QWORD)i);
          v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "accessoriesDictionary"));
          v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v21, "objectForKey:", v20));
          objc_release(v21);
          if ( v22 )
          {
            v23 = objc_retainAutoreleasedReturnValue(
                    +[NSMutableDictionary dictionaryWithDictionary:](
                      &OBJC_CLASS___NSMutableDictionary,
                      "dictionaryWithDictionary:",
                      v22));
            v24 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithBool:](&OBJC_CLASS___NSNumber, "numberWithBool:", a2));
            -[NSMutableDictionary setObject:forKeyedSubscript:](
              v23,
              "setObject:forKeyedSubscript:",
              v24,
              CFSTR("accessoryReachable"));
            objc_release(v24);
            v25 = objc_retainAutoreleasedReturnValue(
                    +[NSDictionary dictionaryWithDictionary:](
                      &OBJC_CLASS___NSDictionary,
                      "dictionaryWithDictionary:",
                      v23));
            objc_msgSend(v4, "addAccessoryWithSerialNumber:info:", v20, v25);
            objc_release(v25);
            objc_release(v23);
          }
          objc_release(v22);
        }
        v17 = objc_msgSend(v15, "countByEnumeratingWithState:objects:count:", &v27, v31, 16LL);
      }
      while ( v17 );
    }
    objc_release(v15);
    objc_release(v15);
    v2 = 0LL;
  }
  objc_release(v4);
  objc_release(v2);
}