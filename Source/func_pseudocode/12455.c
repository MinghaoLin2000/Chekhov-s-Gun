-[NSSet tsu_containsObjectIdenticalTo:]
bool __cdecl -[NSSet tsu_containsObjectIdenticalTo:](NSSet *self, SEL a2, id a3)
{
  id v4; // x19
  NSSet *v5; // x20
  void *v6; // x21
  __int64 v7; // x22
  void *i; // x23
  __int128 v10; // [xsp+0h] [xbp-100h] BYREF
  __int128 v11; // [xsp+10h] [xbp-F0h]
  __int128 v12; // [xsp+20h] [xbp-E0h]
  __int128 v13; // [xsp+30h] [xbp-D0h]
  _BYTE v14[128]; // [xsp+48h] [xbp-B8h] BYREF

  v4 = objc_retain(a3);
  v10 = 0u;
  v11 = 0u;
  v12 = 0u;
  v13 = 0u;
  v5 = objc_retain(self);
  v6 = -[NSSet countByEnumeratingWithState:objects:count:](
         v5,
         "countByEnumeratingWithState:objects:count:",
         &v10,
         v14,
         16LL);
  if ( v6 )
  {
    v7 = *(_QWORD *)v11;
    while ( 2 )
    {
      for ( i = 0LL; i != v6; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v11 != v7 )
          objc_enumerationMutation(v5);
        if ( *(id *)(*((_QWORD *)&v10 + 1) + 8LL * (_QWORD)i) == v4 )
        {
          LOBYTE(v6) = 1;
          goto LABEL_11;
        }
      }
      v6 = -[NSSet countByEnumeratingWithState:objects:count:](
             v5,
             "countByEnumeratingWithState:objects:count:",
             &v10,
             v14,
             16LL);
      if ( v6 )
        continue;
      break;
    }
  }
LABEL_11:
  objc_release(v5);
  objc_release(v4);
  return (char)v6;
}