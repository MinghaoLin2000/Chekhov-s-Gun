-[NSString tsu_pathExtensionConformsToUTI:]
bool __cdecl -[NSString tsu_pathExtensionConformsToUTI:](NSString *self, SEL a2, id a3)
{
  id v4; // x19
  id v5; // x20
  void *v6; // x21
  __int64 v7; // x23
  void *i; // x24
  void *v9; // x22
  __int128 v11; // [xsp+0h] [xbp-110h] BYREF
  __int128 v12; // [xsp+10h] [xbp-100h]
  __int128 v13; // [xsp+20h] [xbp-F0h]
  __int128 v14; // [xsp+30h] [xbp-E0h]
  _BYTE v15[128]; // [xsp+48h] [xbp-C8h] BYREF

  v4 = objc_retain(a3);
  v11 = 0u;
  v12 = 0u;
  v13 = 0u;
  v14 = 0u;
  v5 = objc_retain(objc_retainAutoreleasedReturnValue(-[NSString tsu_allFilenameExtensionIdentifiersForTag](self, "tsu_allFilenameExtensionIdentifiersForTag")));
  v6 = objc_msgSend(v5, "countByEnumeratingWithState:objects:count:", &v11, v15, 16LL);
  if ( v6 )
  {
    v7 = *(_QWORD *)v12;
    while ( 2 )
    {
      for ( i = 0LL; i != v6; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v12 != v7 )
          objc_enumerationMutation(v5);
        v9 = *(void **)(*((_QWORD *)&v11 + 1) + 8LL * (_QWORD)i);
        if ( ((unsigned int)objc_msgSend(v9, "tsu_isDynamic", (_QWORD)v11) & 1) == 0
          && ((unsigned int)objc_msgSend(v9, "tsu_conformsToUTI:", v4) & 1) != 0 )
        {
          LOBYTE(v6) = 1;
          goto LABEL_12;
        }
      }
      v6 = objc_msgSend(v5, "countByEnumeratingWithState:objects:count:", &v11, v15, 16LL);
      if ( v6 )
        continue;
      break;
    }
  }
LABEL_12:
  objc_release(v5);
  objc_release(v5);
  objc_release(v4);
  return (char)v6;
}