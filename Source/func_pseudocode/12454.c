+[NSSet tsu_intersectionOfSets:]
id __cdecl +[NSSet tsu_intersectionOfSets:](id a1, SEL a2, id a3)
{
  id v3; // x19
  void *v4; // x0
  void *v5; // x21
  NSMutableSet *v6; // x20
  __int64 v7; // x23
  void *i; // x24
  __int64 v9; // x2
  __int128 v11; // [xsp+0h] [xbp-110h] BYREF
  __int128 v12; // [xsp+10h] [xbp-100h]
  __int128 v13; // [xsp+20h] [xbp-F0h]
  __int128 v14; // [xsp+30h] [xbp-E0h]
  _BYTE v15[128]; // [xsp+48h] [xbp-C8h] BYREF
  __int64 vars8; // [xsp+118h] [xbp+8h]

  v3 = objc_retain(a3);
  v11 = 0u;
  v12 = 0u;
  v13 = 0u;
  v14 = 0u;
  v4 = objc_msgSend(v3, "countByEnumeratingWithState:objects:count:", &v11, v15, 16LL);
  if ( !v4 )
    goto LABEL_12;
  v5 = v4;
  v6 = 0LL;
  v7 = *(_QWORD *)v12;
  do
  {
    for ( i = 0LL; i != v5; i = (char *)i + 1 )
    {
      if ( *(_QWORD *)v12 != v7 )
        objc_enumerationMutation(v3);
      v9 = *(_QWORD *)(*((_QWORD *)&v11 + 1) + 8LL * (_QWORD)i);
      if ( v6 )
        -[NSMutableSet intersectSet:](v6, "intersectSet:", v9);
      else
        v6 = objc_retainAutoreleasedReturnValue(+[NSMutableSet setWithSet:](&OBJC_CLASS___NSMutableSet, "setWithSet:", v9));
    }
    v5 = objc_msgSend(v3, "countByEnumeratingWithState:objects:count:", &v11, v15, 16LL);
  }
  while ( v5 );
  if ( !v6 )
LABEL_12:
    v6 = objc_retainAutoreleasedReturnValue(+[NSMutableSet set](&OBJC_CLASS___NSMutableSet, "set"));
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}