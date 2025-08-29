-[NSArray tsu_containsObjectPassingTest:]
bool __cdecl -[NSArray tsu_containsObjectPassingTest:](NSArray *self, SEL a2, id a3)
{
  void *v5; // x0
  void *v6; // x21
  __int64 v7; // x22
  void *i; // x24
  __int128 v10; // [xsp+0h] [xbp-110h] BYREF
  __int128 v11; // [xsp+10h] [xbp-100h]
  __int128 v12; // [xsp+20h] [xbp-F0h]
  __int128 v13; // [xsp+30h] [xbp-E0h]
  _BYTE v14[128]; // [xsp+48h] [xbp-C8h] BYREF

  if ( a3 )
  {
    v12 = 0u;
    v13 = 0u;
    v10 = 0u;
    v11 = 0u;
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
        for ( i = 0LL; i != v6; i = (char *)i + 1 )
        {
          if ( *(_QWORD *)v11 != v7 )
            objc_enumerationMutation(self);
          if ( ((*((__int64 (__fastcall **)(id, _QWORD))a3 + 2))(
                  a3,
                  *(_QWORD *)(*((_QWORD *)&v10 + 1) + 8LL * (_QWORD)i)) & 1) != 0 )
          {
            LOBYTE(v5) = 1;
            return (char)v5;
          }
        }
        v6 = -[NSArray countByEnumeratingWithState:objects:count:](
               self,
               "countByEnumeratingWithState:objects:count:",
               &v10,
               v14,
               16LL);
        LOBYTE(v5) = 0;
        if ( v6 )
          continue;
        break;
      }
    }
  }
  else
  {
    LOBYTE(v5) = 0;
  }
  return (char)v5;
}