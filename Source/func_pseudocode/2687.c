+[AutofillNode prunePlaylistNodes:withPlaylistLookup:forMediaKind:]
id __cdecl +[AutofillNode prunePlaylistNodes:withPlaylistLookup:forMediaKind:](
        id a1,
        SEL a2,
        id a3,
        id a4,
        unsigned __int64 a5)
{
  id v8; // x23
  id v9; // x22
  void *v10; // x21
  id v11; // x23
  void *v12; // x0
  void *v13; // x24
  __int64 v14; // x26
  void *i; // x27
  __int64 v16; // x25
  __int128 v18; // [xsp+0h] [xbp-120h] BYREF
  __int128 v19; // [xsp+10h] [xbp-110h]
  __int128 v20; // [xsp+20h] [xbp-100h]
  __int128 v21; // [xsp+30h] [xbp-F0h]
  _BYTE v22[128]; // [xsp+48h] [xbp-D8h] BYREF
  __int64 vars8; // [xsp+128h] [xbp+8h]

  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  v10 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v18 = 0u;
  v19 = 0u;
  v20 = 0u;
  v21 = 0u;
  v11 = objc_retain(v8);
  v12 = objc_msgSend(v11, "countByEnumeratingWithState:objects:count:", &v18, v22, 16LL);
  if ( v12 )
  {
    v13 = v12;
    v14 = *(_QWORD *)v19;
    do
    {
      for ( i = 0LL; i != v13; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v19 != v14 )
          objc_enumerationMutation(v11);
        v16 = *(_QWORD *)(*((_QWORD *)&v18 + 1) + 8LL * (_QWORD)i);
        if ( (unsigned int)objc_msgSend(a1, "containsMediaKind:node:withPlaylistLookup:", a5, v16, v9, (_QWORD)v18) )
          objc_msgSend(v10, "addObject:", v16);
      }
      v13 = objc_msgSend(v11, "countByEnumeratingWithState:objects:count:", &v18, v22, 16LL);
    }
    while ( v13 );
  }
  objc_release(v11);
  objc_release(v9);
  objc_release(v11);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v10);
}