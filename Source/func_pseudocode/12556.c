-[NSArray tsu_arrayByReversingOrder]
id __cdecl -[NSArray tsu_arrayByReversingOrder](NSArray *self, SEL a2)
{
  NSMutableArray *v3; // x19
  NSEnumerator *v4; // x20
  void *v5; // x0
  void *v6; // x21
  __int64 v7; // x22
  void *v8; // x23
  __int128 v10; // [xsp+0h] [xbp-100h] BYREF
  __int128 v11; // [xsp+10h] [xbp-F0h]
  __int128 v12; // [xsp+20h] [xbp-E0h]
  __int128 v13; // [xsp+30h] [xbp-D0h]
  _BYTE v14[128]; // [xsp+48h] [xbp-B8h] BYREF

  v3 = +[NSMutableArray arrayWithCapacity:](
         &OBJC_CLASS___NSMutableArray,
         "arrayWithCapacity:",
         -[NSArray count](self, "count"));
  v10 = 0u;
  v11 = 0u;
  v12 = 0u;
  v13 = 0u;
  v4 = -[NSArray reverseObjectEnumerator](self, "reverseObjectEnumerator", 0LL);
  v5 = -[NSEnumerator countByEnumeratingWithState:objects:count:](
         v4,
         "countByEnumeratingWithState:objects:count:",
         &v10,
         v14,
         16LL);
  if ( v5 )
  {
    v6 = v5;
    v7 = *(_QWORD *)v11;
    do
    {
      v8 = 0LL;
      do
      {
        if ( *(_QWORD *)v11 != v7 )
          objc_enumerationMutation(v4);
        -[NSMutableArray addObject:](v3, "addObject:", *(_QWORD *)(*((_QWORD *)&v10 + 1) + 8LL * (_QWORD)v8));
        v8 = (char *)v8 + 1;
      }
      while ( v6 != v8 );
      v6 = -[NSEnumerator countByEnumeratingWithState:objects:count:](
             v4,
             "countByEnumeratingWithState:objects:count:",
             &v10,
             v14,
             16LL);
    }
    while ( v6 );
  }
  return v3;
}