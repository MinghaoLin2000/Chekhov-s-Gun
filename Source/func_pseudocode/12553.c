-[NSArray tsu_intersectionWithArray:]
id __cdecl -[NSArray tsu_intersectionWithArray:](NSArray *self, SEL a2, id a3)
{
  void *v5; // x21
  void *v6; // x0
  void *v7; // x22
  __int64 v8; // x24
  void *i; // x26
  __int64 v10; // x23
  __int128 v12; // [xsp+0h] [xbp-120h] BYREF
  __int128 v13; // [xsp+10h] [xbp-110h]
  __int128 v14; // [xsp+20h] [xbp-100h]
  __int128 v15; // [xsp+30h] [xbp-F0h]
  _BYTE v16[128]; // [xsp+48h] [xbp-D8h] BYREF

  v5 = +[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array");
  if ( a3 )
  {
    v14 = 0u;
    v15 = 0u;
    v12 = 0u;
    v13 = 0u;
    v6 = -[NSArray countByEnumeratingWithState:objects:count:](
           self,
           "countByEnumeratingWithState:objects:count:",
           &v12,
           v16,
           16LL);
    if ( v6 )
    {
      v7 = v6;
      v8 = *(_QWORD *)v13;
      do
      {
        for ( i = 0LL; i != v7; i = (char *)i + 1 )
        {
          if ( *(_QWORD *)v13 != v8 )
            objc_enumerationMutation(self);
          v10 = *(_QWORD *)(*((_QWORD *)&v12 + 1) + 8LL * (_QWORD)i);
          if ( objc_msgSend(a3, "indexOfObject:", v10) != (void *)0x7FFFFFFFFFFFFFFFLL )
            objc_msgSend(v5, "addObject:", v10);
        }
        v7 = -[NSArray countByEnumeratingWithState:objects:count:](
               self,
               "countByEnumeratingWithState:objects:count:",
               &v12,
               v16,
               16LL);
      }
      while ( v7 );
    }
  }
  return v5;
}