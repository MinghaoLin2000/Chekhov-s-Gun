-[TSUZipArchive enumerateEntriesUsingBlock:]
void __cdecl -[TSUZipArchive enumerateEntriesUsingBlock:](TSUZipArchive *self, SEL a2, id a3)
{
  void (__fastcall **v4)(id, void *, void *, _BYTE *); // x19
  NSMutableOrderedSet *v5; // x20
  void *v6; // x0
  void *v7; // x21
  __int64 v8; // x25
  __int64 v9; // x27
  void *v10; // x23
  void *v11; // x22
  void *v12; // x24
  __int128 v13; // [xsp+0h] [xbp-120h] BYREF
  __int128 v14; // [xsp+10h] [xbp-110h]
  __int128 v15; // [xsp+20h] [xbp-100h]
  __int128 v16; // [xsp+30h] [xbp-F0h]
  char v17; // [xsp+47h] [xbp-D9h] BYREF
  _BYTE v18[128]; // [xsp+48h] [xbp-D8h] BYREF

  v4 = (void (__fastcall **)(id, void *, void *, _BYTE *))objc_retain(a3);
  v17 = 0;
  v13 = 0u;
  v14 = 0u;
  v15 = 0u;
  v16 = 0u;
  v5 = objc_retain(self->_entries);
  v6 = -[NSMutableOrderedSet countByEnumeratingWithState:objects:count:](
         v5,
         "countByEnumeratingWithState:objects:count:",
         &v13,
         v18,
         16LL);
  if ( v6 )
  {
    v7 = v6;
    v8 = *(_QWORD *)v14;
LABEL_3:
    v9 = 0LL;
    while ( 1 )
    {
      if ( *(_QWORD *)v14 != v8 )
        objc_enumerationMutation(v5);
      v10 = *(void **)(*((_QWORD *)&v13 + 1) + 8 * v9);
      v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "collapsedName", (_QWORD)v13));
      if ( v11 )
      {
        v4[2](v4, v11, v10, &v17);
      }
      else
      {
        v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "name"));
        v4[2](v4, v12, v10, &v17);
        objc_release(v12);
      }
      objc_release(v11);
      if ( v17 )
        break;
      if ( v7 == (void *)++v9 )
      {
        v7 = -[NSMutableOrderedSet countByEnumeratingWithState:objects:count:](
               v5,
               "countByEnumeratingWithState:objects:count:",
               &v13,
               v18,
               16LL);
        if ( v7 )
          goto LABEL_3;
        break;
      }
    }
  }
  objc_release(v5);
  objc_release(v4);
}