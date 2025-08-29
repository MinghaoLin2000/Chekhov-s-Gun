-[NSArray tsu_isHomogeneousForClass:]
bool __cdecl -[NSArray tsu_isHomogeneousForClass:](NSArray *self, SEL a2, Class a3)
{
  void *v5; // x0
  void *v6; // x21
  __int64 v7; // x22
  void *v8; // x23
  __int128 v10; // [xsp+0h] [xbp-100h] BYREF
  __int128 v11; // [xsp+10h] [xbp-F0h]
  __int128 v12; // [xsp+20h] [xbp-E0h]
  __int128 v13; // [xsp+30h] [xbp-D0h]
  _BYTE v14[128]; // [xsp+48h] [xbp-B8h] BYREF

  v10 = 0u;
  v11 = 0u;
  v12 = 0u;
  v13 = 0u;
  v5 = -[NSArray countByEnumeratingWithState:objects:count:](
         self,
         "countByEnumeratingWithState:objects:count:",
         &v10,
         v14,
         16LL);
  if ( v5 )
  {
    v6 = v5;
    v7 = *(_QWORD *)v11;
    while ( 2 )
    {
      v8 = 0LL;
      do
      {
        if ( *(_QWORD *)v11 != v7 )
          objc_enumerationMutation(self);
        if ( (objc_opt_isKindOfClass(*(_QWORD *)(*((_QWORD *)&v10 + 1) + 8LL * (_QWORD)v8), a3) & 1) == 0 )
          return 0;
        v8 = (char *)v8 + 1;
      }
      while ( v6 != v8 );
      v6 = -[NSArray countByEnumeratingWithState:objects:count:](
             self,
             "countByEnumeratingWithState:objects:count:",
             &v10,
             v14,
             16LL);
      if ( v6 )
        continue;
      break;
    }
  }
  return 1;
}