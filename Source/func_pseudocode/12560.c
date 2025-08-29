-[NSArray tsu_firstObjectPassingTest:]
id __cdecl -[NSArray tsu_firstObjectPassingTest:](NSArray *self, SEL a2, id a3)
{
  void *v5; // x0
  void *v6; // x21
  __int64 v7; // x23
  __int64 v8; // x25
  void *v9; // x22
  __int128 v11; // [xsp+0h] [xbp-110h] BYREF
  __int128 v12; // [xsp+10h] [xbp-100h]
  __int128 v13; // [xsp+20h] [xbp-F0h]
  __int128 v14; // [xsp+30h] [xbp-E0h]
  _BYTE v15[128]; // [xsp+48h] [xbp-C8h] BYREF

  if ( !a3 )
    return 0LL;
  v13 = 0u;
  v14 = 0u;
  v11 = 0u;
  v12 = 0u;
  v5 = -[NSArray countByEnumeratingWithState:objects:count:](
         self,
         "countByEnumeratingWithState:objects:count:",
         &v11,
         v15,
         16LL);
  if ( !v5 )
    return 0LL;
  v6 = v5;
  v7 = *(_QWORD *)v12;
LABEL_4:
  v8 = 0LL;
  while ( 1 )
  {
    if ( *(_QWORD *)v12 != v7 )
      objc_enumerationMutation(self);
    v9 = *(void **)(*((_QWORD *)&v11 + 1) + 8 * v8);
    if ( ((*((__int64 (__fastcall **)(id, void *))a3 + 2))(a3, v9) & 1) != 0 )
      return v9;
    if ( v6 == (void *)++v8 )
    {
      v6 = -[NSArray countByEnumeratingWithState:objects:count:](
             self,
             "countByEnumeratingWithState:objects:count:",
             &v11,
             v15,
             16LL);
      v9 = 0LL;
      if ( v6 )
        goto LABEL_4;
      return v9;
    }
  }
}