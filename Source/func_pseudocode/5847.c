-[GCSettingsMediator mergedDictForTombstonesLookup:dataLookup:]
id __cdecl -[GCSettingsMediator mergedDictForTombstonesLookup:dataLookup:](
        GCSettingsMediator *self,
        SEL a2,
        id a3,
        id a4)
{
  id v5; // x19
  id v6; // x20
  void *v7; // x21
  void *v8; // x22
  void *v9; // x0
  void *v10; // x23
  __int64 v11; // x26
  void *i; // x27
  void *v13; // x24
  void *v14; // x22
  void *v15; // x23
  void *v16; // x0
  void *v17; // x24
  __int64 v18; // x26
  void *j; // x27
  void *v20; // x25
  NSDictionary *v21; // x23
  __int128 v23; // [xsp+0h] [xbp-200h] BYREF
  __int128 v24; // [xsp+10h] [xbp-1F0h]
  __int128 v25; // [xsp+20h] [xbp-1E0h]
  __int128 v26; // [xsp+30h] [xbp-1D0h]
  __int128 v27; // [xsp+40h] [xbp-1C0h] BYREF
  __int128 v28; // [xsp+50h] [xbp-1B0h]
  __int128 v29; // [xsp+60h] [xbp-1A0h]
  __int128 v30; // [xsp+70h] [xbp-190h]
  _QWORD v31[2]; // [xsp+88h] [xbp-178h] BYREF
  _QWORD v32[2]; // [xsp+98h] [xbp-168h] BYREF
  _BYTE v33[128]; // [xsp+A8h] [xbp-158h] BYREF
  _BYTE v34[128]; // [xsp+128h] [xbp-D8h] BYREF
  __int64 vars8; // [xsp+208h] [xbp+8h]

  v5 = objc_retain(a3);
  v6 = objc_retain(a4);
  v7 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v27 = 0u;
  v28 = 0u;
  v29 = 0u;
  v30 = 0u;
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "allValues"));
  v9 = objc_msgSend(v8, "countByEnumeratingWithState:objects:count:", &v27, v34, 16LL);
  if ( v9 )
  {
    v10 = v9;
    v11 = *(_QWORD *)v28;
    do
    {
      for ( i = 0LL; i != v10; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v28 != v11 )
          objc_enumerationMutation(v8);
        v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(*(id *)(*((_QWORD *)&v27 + 1) + 8LL * (_QWORD)i), "jsonObject"));
        objc_msgSend(v7, "addObject:", v13);
        objc_release(v13);
      }
      v10 = objc_msgSend(v8, "countByEnumeratingWithState:objects:count:", &v27, v34, 16LL);
    }
    while ( v10 );
  }
  objc_release(v8);
  v14 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v23 = 0u;
  v24 = 0u;
  v25 = 0u;
  v26 = 0u;
  v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "allValues", 0LL));
  v16 = objc_msgSend(v15, "countByEnumeratingWithState:objects:count:", &v23, v33, 16LL);
  if ( v16 )
  {
    v17 = v16;
    v18 = *(_QWORD *)v24;
    do
    {
      for ( j = 0LL; j != v17; j = (char *)j + 1 )
      {
        if ( *(_QWORD *)v24 != v18 )
          objc_enumerationMutation(v15);
        v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(*(id *)(*((_QWORD *)&v23 + 1) + 8LL * (_QWORD)j), "jsonObject"));
        objc_msgSend(v14, "addObject:", v20);
        objc_release(v20);
      }
      v17 = objc_msgSend(v15, "countByEnumeratingWithState:objects:count:", &v23, v33, 16LL);
    }
    while ( v17 );
  }
  objc_release(v15);
  v31[0] = CFSTR("tombstones");
  v31[1] = CFSTR("data");
  v32[0] = v7;
  v32[1] = v14;
  v21 = objc_retainAutoreleasedReturnValue(
          +[NSDictionary dictionaryWithObjects:forKeys:count:](
            &OBJC_CLASS___NSDictionary,
            "dictionaryWithObjects:forKeys:count:",
            v32,
            v31,
            2LL));
  objc_release(v14);
  objc_release(v7);
  objc_release(v6);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v21);
}