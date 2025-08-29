+[NSProgress tsu_progressWithChildren:]
id __cdecl +[NSProgress tsu_progressWithChildren:](id a1, SEL a2, id a3)
{
  id v3; // x19
  void *v4; // x0
  void *v5; // x21
  __int64 v6; // x20
  __int64 v7; // x25
  int v8; // w24
  void *i; // x27
  void *v10; // x22
  NSProgressKind v11; // x0
  NSProgress *v12; // x20
  id v13; // x19
  void *v14; // x0
  void *v15; // x21
  __int64 v16; // x25
  void *j; // x26
  __int128 v19; // [xsp+0h] [xbp-1E0h] BYREF
  __int128 v20; // [xsp+10h] [xbp-1D0h]
  __int128 v21; // [xsp+20h] [xbp-1C0h]
  __int128 v22; // [xsp+30h] [xbp-1B0h]
  __int128 v23; // [xsp+40h] [xbp-1A0h] BYREF
  __int128 v24; // [xsp+50h] [xbp-190h]
  __int128 v25; // [xsp+60h] [xbp-180h]
  __int128 v26; // [xsp+70h] [xbp-170h]
  _BYTE v27[128]; // [xsp+88h] [xbp-158h] BYREF
  _BYTE v28[128]; // [xsp+108h] [xbp-D8h] BYREF
  __int64 vars8; // [xsp+1E8h] [xbp+8h]

  v3 = objc_retain(a3);
  v23 = 0u;
  v24 = 0u;
  v25 = 0u;
  v26 = 0u;
  v4 = objc_msgSend(v3, "countByEnumeratingWithState:objects:count:", &v23, v28, 16LL);
  if ( v4 )
  {
    v5 = v4;
    v6 = 0LL;
    v7 = *(_QWORD *)v24;
    v8 = 1;
    do
    {
      for ( i = 0LL; i != v5; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v24 != v7 )
          objc_enumerationMutation(v3);
        v10 = *(void **)(*((_QWORD *)&v23 + 1) + 8LL * (_QWORD)i);
        v6 += (__int64)objc_msgSend(v10, "totalUnitCount");
        v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "kind"));
        LODWORD(v10) = v11 == NSProgressKindFile;
        objc_release(v11);
        v8 &= (unsigned int)v10;
      }
      v5 = objc_msgSend(v3, "countByEnumeratingWithState:objects:count:", &v23, v28, 16LL);
    }
    while ( v5 );
  }
  else
  {
    v6 = 0LL;
    v8 = 1;
  }
  v12 = objc_retainAutoreleasedReturnValue(
          +[NSProgress discreteProgressWithTotalUnitCount:](
            &OBJC_CLASS___NSProgress,
            "discreteProgressWithTotalUnitCount:",
            v6));
  v19 = 0u;
  v20 = 0u;
  v21 = 0u;
  v22 = 0u;
  v13 = objc_retain(v3);
  v14 = objc_msgSend(v13, "countByEnumeratingWithState:objects:count:", &v19, v27, 16LL);
  if ( v14 )
  {
    v15 = v14;
    v16 = *(_QWORD *)v20;
    do
    {
      for ( j = 0LL; j != v15; j = (char *)j + 1 )
      {
        if ( *(_QWORD *)v20 != v16 )
          objc_enumerationMutation(v13);
        -[NSProgress addChild:withPendingUnitCount:](
          v12,
          "addChild:withPendingUnitCount:",
          *(_QWORD *)(*((_QWORD *)&v19 + 1) + 8LL * (_QWORD)j),
          objc_msgSend(*(id *)(*((_QWORD *)&v19 + 1) + 8LL * (_QWORD)j), "totalUnitCount", (_QWORD)v19));
      }
      v15 = objc_msgSend(v13, "countByEnumeratingWithState:objects:count:", &v19, v27, 16LL);
    }
    while ( v15 );
  }
  objc_release(v13);
  if ( v8 )
    -[NSProgress setKind:](v12, "setKind:", NSProgressKindFile);
  objc_release(v13);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v12);
}