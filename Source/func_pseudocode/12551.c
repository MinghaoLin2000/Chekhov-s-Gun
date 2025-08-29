-[NSArray tsu_indexesOfObjects:]
id __cdecl -[NSArray tsu_indexesOfObjects:](NSArray *self, SEL a2, id a3)
{
  void *v5; // x21
  void *v6; // x0
  void *v7; // x22
  __int64 v8; // x23
  void *v9; // x25
  NSUInteger v10; // x0
  __int128 v12; // [xsp+0h] [xbp-110h] BYREF
  __int128 v13; // [xsp+10h] [xbp-100h]
  __int128 v14; // [xsp+20h] [xbp-F0h]
  __int128 v15; // [xsp+30h] [xbp-E0h]
  _BYTE v16[128]; // [xsp+48h] [xbp-C8h] BYREF

  v5 = +[NSMutableIndexSet indexSet](&OBJC_CLASS___NSMutableIndexSet, "indexSet");
  v12 = 0u;
  v13 = 0u;
  v14 = 0u;
  v15 = 0u;
  v6 = objc_msgSend(a3, "countByEnumeratingWithState:objects:count:", &v12, v16, 16LL);
  if ( v6 )
  {
    v7 = v6;
    v8 = *(_QWORD *)v13;
    do
    {
      v9 = 0LL;
      do
      {
        if ( *(_QWORD *)v13 != v8 )
          objc_enumerationMutation(a3);
        v10 = -[NSArray indexOfObject:](self, "indexOfObject:", *(_QWORD *)(*((_QWORD *)&v12 + 1) + 8LL * (_QWORD)v9));
        if ( v10 != 0x7FFFFFFFFFFFFFFFLL )
          objc_msgSend(v5, "addIndex:", v10);
        v9 = (char *)v9 + 1;
      }
      while ( v7 != v9 );
      v7 = objc_msgSend(a3, "countByEnumeratingWithState:objects:count:", &v12, v16, 16LL);
    }
    while ( v7 );
  }
  return v5;
}