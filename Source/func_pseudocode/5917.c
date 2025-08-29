-[LoginUserService _authenticationAuthority:contaians:]
bool __cdecl -[LoginUserService _authenticationAuthority:contaians:](LoginUserService *self, SEL a2, id a3, id a4)
{
  id v5; // x19
  id v6; // x20
  id v7; // x21
  void *v8; // x22
  __int64 v9; // x23
  void *i; // x24
  __int64 v11; // x1
  __int128 v13; // [xsp+0h] [xbp-110h] BYREF
  __int128 v14; // [xsp+10h] [xbp-100h]
  __int128 v15; // [xsp+20h] [xbp-F0h]
  __int128 v16; // [xsp+30h] [xbp-E0h]
  _BYTE v17[128]; // [xsp+48h] [xbp-C8h] BYREF

  v5 = objc_retain(a3);
  v6 = objc_retain(a4);
  if ( v5 )
  {
    v15 = 0u;
    v16 = 0u;
    v13 = 0u;
    v14 = 0u;
    v7 = objc_retain(v5);
    v8 = objc_msgSend(v7, "countByEnumeratingWithState:objects:count:", &v13, v17, 16LL);
    if ( v8 )
    {
      v9 = *(_QWORD *)v14;
      while ( 2 )
      {
        for ( i = 0LL; i != v8; i = (char *)i + 1 )
        {
          if ( *(_QWORD *)v14 != v9 )
            objc_enumerationMutation(v7);
          objc_msgSend(*(id *)(*((_QWORD *)&v13 + 1) + 8LL * (_QWORD)i), "rangeOfString:", v6, (_QWORD)v13);
          if ( v11 )
          {
            LOBYTE(v8) = 1;
            goto LABEL_12;
          }
        }
        v8 = objc_msgSend(v7, "countByEnumeratingWithState:objects:count:", &v13, v17, 16LL);
        if ( v8 )
          continue;
        break;
      }
    }
LABEL_12:
    objc_release(v7);
  }
  else
  {
    LOBYTE(v8) = 0;
  }
  objc_release(v6);
  objc_release(v5);
  return (char)v8;
}