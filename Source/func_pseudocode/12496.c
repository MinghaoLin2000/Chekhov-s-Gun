-[NSPointerArray tsu_enumerateNonNullObjectUsingBlock:]
void __cdecl -[NSPointerArray tsu_enumerateNonNullObjectUsingBlock:](NSPointerArray *self, SEL a2, id a3)
{
  void (__fastcall **v4)(id, __int64, __int64, char *); // x19
  NSPointerArray *v5; // x20
  void *v6; // x0
  void *v7; // x21
  __int64 v8; // x22
  __int64 v9; // x23
  __int64 v10; // x25
  __int64 v11; // x1
  __int128 v12; // [xsp+0h] [xbp-110h] BYREF
  __int128 v13; // [xsp+10h] [xbp-100h]
  __int128 v14; // [xsp+20h] [xbp-F0h]
  __int128 v15; // [xsp+30h] [xbp-E0h]
  char v16; // [xsp+47h] [xbp-C9h] BYREF
  _BYTE v17[128]; // [xsp+48h] [xbp-C8h] BYREF

  v4 = (void (__fastcall **)(id, __int64, __int64, char *))objc_retain(a3);
  v16 = 0;
  v12 = 0u;
  v13 = 0u;
  v14 = 0u;
  v15 = 0u;
  v5 = objc_retain(self);
  v6 = -[NSPointerArray countByEnumeratingWithState:objects:count:](
         v5,
         "countByEnumeratingWithState:objects:count:",
         &v12,
         v17,
         16LL);
  if ( v6 )
  {
    v7 = v6;
    v8 = 0LL;
    v9 = *(_QWORD *)v13;
LABEL_3:
    v10 = 0LL;
    while ( 1 )
    {
      if ( *(_QWORD *)v13 != v9 )
        objc_enumerationMutation(v5);
      v11 = *(_QWORD *)(*((_QWORD *)&v12 + 1) + 8 * v10);
      if ( v11 )
      {
        v4[2](v4, v11, v8 + v10, &v16);
        if ( v16 )
          break;
      }
      if ( v7 == (void *)++v10 )
      {
        v7 = -[NSPointerArray countByEnumeratingWithState:objects:count:](
               v5,
               "countByEnumeratingWithState:objects:count:",
               &v12,
               v17,
               16LL);
        v8 += v10;
        if ( v7 )
          goto LABEL_3;
        break;
      }
    }
  }
  objc_release(v5);
  objc_release(v4);
}