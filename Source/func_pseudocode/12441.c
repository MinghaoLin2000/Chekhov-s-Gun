-[NSString tsu_conformsToAnyUTI:]
bool __cdecl -[NSString tsu_conformsToAnyUTI:](NSString *self, SEL a2, id a3)
{
  id v4; // x19
  void *v5; // x0
  void *v6; // x21
  __int64 v7; // x22
  void *i; // x23
  bool v9; // w20
  __int128 v11; // [xsp+0h] [xbp-100h] BYREF
  __int128 v12; // [xsp+10h] [xbp-F0h]
  __int128 v13; // [xsp+20h] [xbp-E0h]
  __int128 v14; // [xsp+30h] [xbp-D0h]
  _BYTE v15[128]; // [xsp+48h] [xbp-B8h] BYREF

  v11 = 0u;
  v12 = 0u;
  v13 = 0u;
  v14 = 0u;
  v4 = objc_retain(objc_retain(a3));
  v5 = objc_msgSend(v4, "countByEnumeratingWithState:objects:count:", &v11, v15, 16LL);
  if ( v5 )
  {
    v6 = v5;
    v7 = *(_QWORD *)v12;
    while ( 2 )
    {
      for ( i = 0LL; i != v6; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v12 != v7 )
          objc_enumerationMutation(v4);
        if ( -[NSString tsu_conformsToUTI:](
               self,
               "tsu_conformsToUTI:",
               *(_QWORD *)(*((_QWORD *)&v11 + 1) + 8LL * (_QWORD)i),
               (_QWORD)v11) )
        {
          v9 = 1;
          goto LABEL_11;
        }
      }
      v6 = objc_msgSend(v4, "countByEnumeratingWithState:objects:count:", &v11, v15, 16LL);
      if ( v6 )
        continue;
      break;
    }
  }
  v9 = 0;
LABEL_11:
  objc_release(v4);
  objc_release(v4);
  return v9;
}