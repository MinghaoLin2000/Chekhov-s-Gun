-[TSPPackage enumerateDataUsingBlock:]
void __cdecl -[TSPPackage enumerateDataUsingBlock:](TSPPackage *self, SEL a2, id a3)
{
  void (__fastcall **v4)(id, _QWORD, char *); // x19
  NSHashTable *v5; // x20
  void *v6; // x21
  __int64 v7; // x22
  __int64 v8; // x24
  __int128 v9; // [xsp+0h] [xbp-110h] BYREF
  __int128 v10; // [xsp+10h] [xbp-100h]
  __int128 v11; // [xsp+20h] [xbp-F0h]
  __int128 v12; // [xsp+30h] [xbp-E0h]
  char v13; // [xsp+47h] [xbp-C9h] BYREF
  _BYTE v14[128]; // [xsp+48h] [xbp-C8h] BYREF

  v4 = (void (__fastcall **)(id, _QWORD, char *))objc_retain(a3);
  if ( v4 )
  {
    v13 = 0;
    v9 = 0u;
    v10 = 0u;
    v11 = 0u;
    v12 = 0u;
    v5 = objc_retain(self->_packageDatas);
    v6 = -[NSHashTable countByEnumeratingWithState:objects:count:](
           v5,
           "countByEnumeratingWithState:objects:count:",
           &v9,
           v14,
           16LL);
    if ( v6 )
    {
      v7 = *(_QWORD *)v10;
LABEL_4:
      v8 = 0LL;
      while ( 1 )
      {
        if ( *(_QWORD *)v10 != v7 )
          objc_enumerationMutation(v5);
        v4[2](v4, *(_QWORD *)(*((_QWORD *)&v9 + 1) + 8 * v8), &v13);
        if ( v13 )
          break;
        if ( v6 == (void *)++v8 )
        {
          v6 = -[NSHashTable countByEnumeratingWithState:objects:count:](
                 v5,
                 "countByEnumeratingWithState:objects:count:",
                 &v9,
                 v14,
                 16LL);
          if ( v6 )
            goto LABEL_4;
          break;
        }
      }
    }
    objc_release(v5);
  }
  objc_release(v4);
}