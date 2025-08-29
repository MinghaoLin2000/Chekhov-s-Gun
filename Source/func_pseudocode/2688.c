+[AutofillNode containsMediaKind:node:withPlaylistLookup:]
bool __cdecl +[AutofillNode containsMediaKind:node:withPlaylistLookup:](
        id a1,
        SEL a2,
        unsigned __int64 a3,
        id a4,
        id a5)
{
  id v8; // x19
  id v9; // x20
  void *v10; // x23
  void *v11; // x0
  void *v12; // x24
  __int64 v13; // x25
  void *i; // x26
  void *v15; // x22
  void *v16; // x23
  unsigned __int8 v17; // w21
  __int128 v19; // [xsp+0h] [xbp-120h] BYREF
  __int128 v20; // [xsp+10h] [xbp-110h]
  __int128 v21; // [xsp+20h] [xbp-100h]
  __int128 v22; // [xsp+30h] [xbp-F0h]
  _BYTE v23[128]; // [xsp+48h] [xbp-D8h] BYREF

  v8 = objc_retain(a4);
  v9 = objc_retain(a5);
  if ( (unsigned int)objc_msgSend(v8, "isFolder") )
  {
    v21 = 0u;
    v22 = 0u;
    v19 = 0u;
    v20 = 0u;
    v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "children", 0LL));
    v11 = objc_msgSend(v10, "countByEnumeratingWithState:objects:count:", &v19, v23, 16LL);
    if ( v11 )
    {
      v12 = v11;
      v13 = *(_QWORD *)v20;
      while ( 2 )
      {
        for ( i = 0LL; i != v12; i = (char *)i + 1 )
        {
          if ( *(_QWORD *)v20 != v13 )
            objc_enumerationMutation(v10);
          if ( ((unsigned int)objc_msgSend(
                                a1,
                                "containsMediaKind:node:withPlaylistLookup:",
                                a3,
                                *(_QWORD *)(*((_QWORD *)&v19 + 1) + 8LL * (_QWORD)i),
                                v9) & 1) != 0 )
          {
            objc_release(v10);
            v17 = 1;
            goto LABEL_17;
          }
        }
        v12 = objc_msgSend(v10, "countByEnumeratingWithState:objects:count:", &v19, v23, 16LL);
        if ( v12 )
          continue;
        break;
      }
    }
    objc_release(v10);
    goto LABEL_16;
  }
  if ( ((unsigned int)objc_msgSend(v8, "isSmartPlaylist") & 1) == 0
    && ((unsigned int)objc_msgSend(v8, "isGeniusPlaylist") & 1) == 0
    && !(unsigned int)objc_msgSend(v8, "isPlaylist") )
  {
LABEL_16:
    v17 = 0;
    goto LABEL_17;
  }
  v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "persistentID"));
  v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "objectForKeyedSubscript:", v15));
  objc_release(v15);
  v17 = (unsigned __int8)objc_msgSend(v16, "containsMediaKind:", a3);
  objc_release(v16);
LABEL_17:
  objc_release(v9);
  objc_release(v8);
  return v17;
}