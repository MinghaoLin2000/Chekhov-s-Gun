-[NSArray tsu_allObjectsPassTest:]
bool __cdecl -[NSArray tsu_allObjectsPassTest:](NSArray *self, SEL a2, id a3)
{
  void *v5; // x0
  void *v6; // x21
  __int64 v7; // x22
  __int64 v8; // x24
  int v9; // w0
  __int128 v11; // [xsp+0h] [xbp-110h] BYREF
  __int128 v12; // [xsp+10h] [xbp-100h]
  __int128 v13; // [xsp+20h] [xbp-F0h]
  __int128 v14; // [xsp+30h] [xbp-E0h]
  _BYTE v15[128]; // [xsp+48h] [xbp-C8h] BYREF

  v11 = 0u;
  v12 = 0u;
  v13 = 0u;
  v14 = 0u;
  v5 = -[NSArray countByEnumeratingWithState:objects:count:](
         self,
         "countByEnumeratingWithState:objects:count:",
         &v11,
         v15,
         16LL);
  if ( v5 )
  {
    v6 = v5;
    v7 = *(_QWORD *)v12;
LABEL_3:
    v8 = 0LL;
    while ( 1 )
    {
      if ( *(_QWORD *)v12 != v7 )
        objc_enumerationMutation(self);
      v9 = (*((__int64 (__fastcall **)(id, _QWORD))a3 + 2))(a3, *(_QWORD *)(*((_QWORD *)&v11 + 1) + 8 * v8));
      if ( !v9 )
        break;
      if ( v6 == (void *)++v8 )
      {
        v6 = -[NSArray countByEnumeratingWithState:objects:count:](
               self,
               "countByEnumeratingWithState:objects:count:",
               &v11,
               v15,
               16LL);
        if ( v6 )
          goto LABEL_3;
        goto LABEL_9;
      }
    }
  }
  else
  {
LABEL_9:
    LOBYTE(v9) = 1;
  }
  return v9;
}