-[NSURL tsu_removeCachedResourceValueForKeys:]
void __cdecl -[NSURL tsu_removeCachedResourceValueForKeys:](NSURL *self, SEL a2, id a3)
{
  id v4; // x20
  void *v5; // x0
  void *v6; // x21
  __int64 v7; // x22
  void *v8; // x23
  __int128 v9; // [xsp+0h] [xbp-100h] BYREF
  __int128 v10; // [xsp+10h] [xbp-F0h]
  __int128 v11; // [xsp+20h] [xbp-E0h]
  __int128 v12; // [xsp+30h] [xbp-D0h]
  _BYTE v13[128]; // [xsp+48h] [xbp-B8h] BYREF

  v4 = objc_retain(a3);
  v9 = 0u;
  v10 = 0u;
  v11 = 0u;
  v12 = 0u;
  v5 = objc_msgSend(v4, "countByEnumeratingWithState:objects:count:", &v9, v13, 16LL);
  if ( v5 )
  {
    v6 = v5;
    v7 = *(_QWORD *)v10;
    do
    {
      v8 = 0LL;
      do
      {
        if ( *(_QWORD *)v10 != v7 )
          objc_enumerationMutation(v4);
        -[NSURL removeCachedResourceValueForKey:](
          self,
          "removeCachedResourceValueForKey:",
          *(_QWORD *)(*((_QWORD *)&v9 + 1) + 8LL * (_QWORD)v8));
        v8 = (char *)v8 + 1;
      }
      while ( v6 != v8 );
      v6 = objc_msgSend(v4, "countByEnumeratingWithState:objects:count:", &v9, v13, 16LL);
    }
    while ( v6 );
  }
  objc_release(v4);
}