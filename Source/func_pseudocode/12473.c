-[NSMapTable tsu_enumerateKeysAndObjectsUsingBlock:]
void __cdecl -[NSMapTable tsu_enumerateKeysAndObjectsUsingBlock:](NSMapTable *self, SEL a2, id a3)
{
  void (__fastcall **v4)(id, __int64, id, char *); // x19
  id v5; // x21
  void *v6; // x0
  void *v7; // x22
  __int64 v8; // x25
  __int64 v9; // x27
  __int64 v10; // x23
  id v11; // x24
  __int128 v12; // [xsp+0h] [xbp-120h] BYREF
  __int128 v13; // [xsp+10h] [xbp-110h]
  __int128 v14; // [xsp+20h] [xbp-100h]
  __int128 v15; // [xsp+30h] [xbp-F0h]
  char v16; // [xsp+47h] [xbp-D9h] BYREF
  _BYTE v17[128]; // [xsp+48h] [xbp-D8h] BYREF

  v4 = (void (__fastcall **)(id, __int64, id, char *))objc_retain(a3);
  if ( v4 )
  {
    v16 = 0;
    v12 = 0u;
    v13 = 0u;
    v14 = 0u;
    v15 = 0u;
    v5 = objc_retainAutoreleasedReturnValue(-[NSMapTable tsu_allKeys](self, "tsu_allKeys", 0LL));
    v6 = objc_msgSend(v5, "countByEnumeratingWithState:objects:count:", &v12, v17, 16LL);
    if ( v6 )
    {
      v7 = v6;
      v8 = *(_QWORD *)v13;
LABEL_4:
      v9 = 0LL;
      while ( 1 )
      {
        if ( *(_QWORD *)v13 != v8 )
          objc_enumerationMutation(v5);
        v10 = *(_QWORD *)(*((_QWORD *)&v12 + 1) + 8 * v9);
        v11 = objc_retainAutoreleasedReturnValue(-[NSMapTable objectForKey:](self, "objectForKey:", v10));
        v4[2](v4, v10, v11, &v16);
        objc_release(v11);
        if ( v16 )
          break;
        if ( v7 == (void *)++v9 )
        {
          v7 = objc_msgSend(v5, "countByEnumeratingWithState:objects:count:", &v12, v17, 16LL);
          if ( v7 )
            goto LABEL_4;
          break;
        }
      }
    }
    objc_release(v5);
  }
  objc_release(v4);
}