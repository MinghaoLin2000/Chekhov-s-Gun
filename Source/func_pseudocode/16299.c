-[AUDeveloperSettingsDatabase migrateExistingDefaults]
void __cdecl -[AUDeveloperSettingsDatabase migrateExistingDefaults](AUDeveloperSettingsDatabase *self, SEL a2)
{
  id v2; // x20
  void *v3; // x19
  id v4; // x21
  void *v5; // x0
  void *v6; // x22
  __int64 v7; // x23
  void *i; // x19
  __int64 v9; // x28
  void *v10; // x20
  __int64 v11; // x0
  char isKindOfClass; // w26
  id v13; // x26
  id v14; // x27
  NSDictionary *v15; // x20
  NSArray *v16; // x24
  unsigned __int8 v17; // w25
  void *v18; // x20
  void *v19; // x24
  NSString *v20; // x24
  NSDictionary *v21; // x24
  void *v22; // [xsp+8h] [xbp-148h]
  id v24; // [xsp+18h] [xbp-138h] BYREF
  id v25; // [xsp+20h] [xbp-130h] BYREF
  unsigned __int64 v26; // [xsp+28h] [xbp-128h] BYREF
  __int128 v27; // [xsp+30h] [xbp-120h] BYREF
  __int128 v28; // [xsp+40h] [xbp-110h]
  __int128 v29; // [xsp+50h] [xbp-100h]
  __int128 v30; // [xsp+60h] [xbp-F0h]
  _BYTE v31[128]; // [xsp+70h] [xbp-E0h] BYREF

  v2 = objc_retainAutoreleasedReturnValue(-[AUDeveloperSettingsDatabase seedParticipationDictionary](self, "seedParticipationDictionary"));
  v3 = objc_msgSend(v2, "mutableCopy");
  objc_release(v2);
  if ( objc_msgSend(v3, "count") )
  {
    v29 = 0u;
    v30 = 0u;
    v27 = 0u;
    v28 = 0u;
    v22 = v3;
    v4 = objc_retain(v3);
    v5 = objc_msgSend(v4, "countByEnumeratingWithState:objects:count:", &v27, v31, 16LL);
    if ( v5 )
    {
      v6 = v5;
      v7 = *(_QWORD *)v28;
      do
      {
        for ( i = 0LL; i != v6; i = (char *)i + 1 )
        {
          if ( *(_QWORD *)v28 != v7 )
            objc_enumerationMutation(v4);
          v9 = *(_QWORD *)(*((_QWORD *)&v27 + 1) + 8LL * (_QWORD)i);
          v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKeyedSubscript:", v9));
          v11 = objc_opt_class(&OBJC_CLASS___NSString);
          isKindOfClass = objc_opt_isKindOfClass(v10, v11);
          objc_release(v10);
          if ( (isKindOfClass & 1) != 0 )
          {
            v25 = 0LL;
            v26 = 4LL;
            v24 = 0LL;
            -[AUDeveloperSettingsDatabase accessoryNameForIdentifier:name:serialNumber:fusingType:](
              self,
              "accessoryNameForIdentifier:name:serialNumber:fusingType:",
              v9,
              &v25,
              &v24,
              &v26);
            v13 = objc_retain(v25);
            v14 = objc_retain(v24);
            if ( v14 )
            {
              v15 = objc_retainAutoreleasedReturnValue(-[AUDeveloperSettingsDatabase accessoriesDictionary](self, "accessoriesDictionary"));
              v16 = objc_retainAutoreleasedReturnValue(-[NSDictionary allKeys](v15, "allKeys"));
              v17 = -[NSArray containsObject:](v16, "containsObject:", v14);
              objc_release(v16);
              objc_release(v15);
              if ( (v17 & 1) == 0 )
              {
                v18 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
                v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKeyedSubscript:", v9));
                objc_msgSend(v18, "setObject:forKeyedSubscript:", v19, CFSTR("assetLocation"));
                objc_release(v19);
                if ( v13 )
                  objc_msgSend(v18, "setObject:forKeyedSubscript:", v13, CFSTR("name"));
                if ( v26 <= 2 )
                {
                  v20 = objc_retainAutoreleasedReturnValue(
                          +[NSString stringWithUTF8String:](
                            &OBJC_CLASS___NSString,
                            "stringWithUTF8String:",
                            AUDeveloperSettingsAccessoryFusingTypeToString()));
                  objc_msgSend(v18, "setObject:forKeyedSubscript:", v20, CFSTR("fusing"));
                  objc_release(v20);
                }
                v21 = objc_retainAutoreleasedReturnValue(
                        +[NSDictionary dictionaryWithDictionary:](
                          &OBJC_CLASS___NSDictionary,
                          "dictionaryWithDictionary:",
                          v18));
                -[AUDeveloperSettingsDatabase addAccessoryWithSerialNumber:info:](
                  self,
                  "addAccessoryWithSerialNumber:info:",
                  v14,
                  v21);
                objc_release(v21);
                objc_release(v18);
              }
            }
            objc_release(v14);
            objc_release(v13);
          }
        }
        v6 = objc_msgSend(v4, "countByEnumeratingWithState:objects:count:", &v27, v31, 16LL);
      }
      while ( v6 );
    }
    objc_release(v4);
    v3 = v22;
  }
  objc_release(v3);
}