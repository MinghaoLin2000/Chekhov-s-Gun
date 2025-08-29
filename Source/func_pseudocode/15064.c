_ATXActionsFromEnvResult
id __fastcall ATXActionsFromEnvResult(void *a1)
{
  id v1; // x20
  __int64 v2; // x1
  void *v3; // x19
  void *v4; // x21
  void *v5; // x0
  void *v6; // x22
  __int64 v7; // x26
  void *i; // x27
  void *v9; // x0
  void *v10; // x23
  void *v11; // x0
  void *v12; // x24
  __int64 v13; // x28
  void *j; // x20
  void *v15; // x25
  id v17; // [xsp+8h] [xbp-1E8h]
  __int128 v18; // [xsp+10h] [xbp-1E0h] BYREF
  __int128 v19; // [xsp+20h] [xbp-1D0h]
  __int128 v20; // [xsp+30h] [xbp-1C0h]
  __int128 v21; // [xsp+40h] [xbp-1B0h]
  __int128 v22; // [xsp+50h] [xbp-1A0h] BYREF
  __int128 v23; // [xsp+60h] [xbp-190h]
  __int128 v24; // [xsp+70h] [xbp-180h]
  __int128 v25; // [xsp+80h] [xbp-170h]
  _BYTE v26[128]; // [xsp+90h] [xbp-160h] BYREF
  _BYTE v27[128]; // [xsp+110h] [xbp-E0h] BYREF
  __int64 vars8; // [xsp+1F8h] [xbp+8h]

  v1 = objc_retain(a1);
  v3 = (void *)objc_opt_new(&OBJC_CLASS___NSMutableArray, v2);
  v22 = 0u;
  v23 = 0u;
  v24 = 0u;
  v25 = 0u;
  v17 = v1;
  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v1, "allValues"));
  v5 = objc_msgSend(v4, "countByEnumeratingWithState:objects:count:", &v22, v27, 16LL);
  if ( v5 )
  {
    v6 = v5;
    v7 = *(_QWORD *)v23;
    do
    {
      for ( i = 0LL; i != v6; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v23 != v7 )
          objc_enumerationMutation(v4);
        v9 = *(void **)(*((_QWORD *)&v22 + 1) + 8LL * (_QWORD)i);
        v18 = 0u;
        v19 = 0u;
        v20 = 0u;
        v21 = 0u;
        v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "actionMakers"));
        v11 = objc_msgSend(v10, "countByEnumeratingWithState:objects:count:", &v18, v26, 16LL);
        if ( v11 )
        {
          v12 = v11;
          v13 = *(_QWORD *)v19;
          do
          {
            for ( j = 0LL; j != v12; j = (char *)j + 1 )
            {
              if ( *(_QWORD *)v19 != v13 )
                objc_enumerationMutation(v10);
              v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(*(id *)(*((_QWORD *)&v18 + 1) + 8LL * (_QWORD)j), "action"));
              if ( v15 )
                objc_msgSend(v3, "addObject:", v15);
              objc_release(v15);
            }
            v12 = objc_msgSend(v10, "countByEnumeratingWithState:objects:count:", &v18, v26, 16LL);
          }
          while ( v12 );
        }
        objc_release(v10);
      }
      v6 = objc_msgSend(v4, "countByEnumeratingWithState:objects:count:", &v22, v27, 16LL);
    }
    while ( v6 );
  }
  objc_release(v4);
  objc_msgSend(v3, "sortUsingComparator:", &stru_100029CC0);
  objc_release(v17);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}