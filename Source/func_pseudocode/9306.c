-[TSPPackageConverter path:matchesFilter:]
bool __cdecl -[TSPPackageConverter path:matchesFilter:](TSPPackageConverter *self, SEL a2, id a3, id a4)
{
  id v5; // x19
  id v6; // x20
  void *v7; // x21
  __int64 v8; // x23
  void *i; // x25
  __int128 v11; // [xsp+0h] [xbp-110h] BYREF
  __int128 v12; // [xsp+10h] [xbp-100h]
  __int128 v13; // [xsp+20h] [xbp-F0h]
  __int128 v14; // [xsp+30h] [xbp-E0h]
  _BYTE v15[128]; // [xsp+48h] [xbp-C8h] BYREF

  v5 = objc_retain(a3);
  v11 = 0u;
  v12 = 0u;
  v13 = 0u;
  v14 = 0u;
  v6 = objc_retain(objc_retain(a4));
  v7 = objc_msgSend(v6, "countByEnumeratingWithState:objects:count:", &v11, v15, 16LL);
  if ( v7 )
  {
    v8 = *(_QWORD *)v12;
    while ( 2 )
    {
      for ( i = 0LL; i != v7; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v12 != v8 )
          objc_enumerationMutation(v6);
        if ( objc_msgSend(
               *(id *)(*((_QWORD *)&v11 + 1) + 8LL * (_QWORD)i),
               "rangeOfFirstMatchInString:options:range:",
               v5,
               0LL,
               0LL,
               objc_msgSend(v5, "length", (_QWORD)v11)) != (void *)0x7FFFFFFFFFFFFFFFLL )
        {
          LOBYTE(v7) = 1;
          goto LABEL_11;
        }
      }
      v7 = objc_msgSend(v6, "countByEnumeratingWithState:objects:count:", &v11, v15, 16LL);
      if ( v7 )
        continue;
      break;
    }
  }
LABEL_11:
  objc_release(v6);
  objc_release(v6);
  objc_release(v5);
  return (char)v7;
}