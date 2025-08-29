+[AutofillNode loadPlaylistNodes:playlistNodesLookup:forMediaKind:fromPlaylists:]
void __cdecl +[AutofillNode loadPlaylistNodes:playlistNodesLookup:forMediaKind:fromPlaylists:](
        id a1,
        SEL a2,
        id a3,
        id a4,
        unsigned __int64 a5,
        id a6)
{
  id v9; // x20
  id v10; // x24
  void *v11; // x23
  id v12; // x24
  void *v13; // x0
  void *v14; // x25
  __int64 v15; // x21
  void *i; // x19
  void *v17; // x26
  void *v18; // x27
  void *v19; // x28
  void *v20; // x28
  void *v21; // x28
  void *v22; // x21
  unsigned __int64 v23; // [xsp+0h] [xbp-130h]
  id v24; // [xsp+8h] [xbp-128h]
  __int128 v25; // [xsp+10h] [xbp-120h] BYREF
  __int128 v26; // [xsp+20h] [xbp-110h]
  __int128 v27; // [xsp+30h] [xbp-100h]
  __int128 v28; // [xsp+40h] [xbp-F0h]
  _BYTE v29[128]; // [xsp+50h] [xbp-E0h] BYREF

  v23 = a5;
  v24 = objc_retain(a3);
  v9 = objc_retain(a4);
  v10 = objc_retain(a6);
  v11 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  v25 = 0u;
  v26 = 0u;
  v27 = 0u;
  v28 = 0u;
  v12 = objc_retain(v10);
  v13 = objc_msgSend(v12, "countByEnumeratingWithState:objects:count:", &v25, v29, 16LL);
  if ( v13 )
  {
    v14 = v13;
    v15 = *(_QWORD *)v26;
    do
    {
      for ( i = 0LL; i != v14; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v26 != v15 )
          objc_enumerationMutation(v12);
        v17 = *(void **)(*((_QWORD *)&v25 + 1) + 8LL * (_QWORD)i);
        if ( ((unsigned int)objc_msgSend(v17, "isPrimary", v23) & 1) == 0 && !objc_msgSend(v17, "distinguishedKind") )
        {
          v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "nodeWithPlaylist:", v17));
          v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v17, "parentID"));
          objc_release(v19);
          if ( !v19 )
            objc_msgSend(v24, "addObject:", v18);
          v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v18, "persistentID"));
          objc_msgSend(v9, "setObject:forKeyedSubscript:", v18, v20);
          objc_release(v20);
          v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v18, "persistentID"));
          objc_msgSend(v11, "setObject:forKeyedSubscript:", v17, v21);
          objc_release(v21);
          objc_release(v18);
        }
      }
      v14 = objc_msgSend(v12, "countByEnumeratingWithState:objects:count:", &v25, v29, 16LL);
    }
    while ( v14 );
  }
  objc_release(v12);
  objc_msgSend(a1, "parentChildrenForPlaylistNodeLookup:", v9);
  v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "prunePlaylistNodes:withPlaylistLookup:forMediaKind:", v24, v11, v23));
  objc_msgSend(v24, "removeAllObjects");
  objc_msgSend(v24, "addObjectsFromArray:", v22);
  objc_release(v22);
  objc_release(v11);
  objc_release(v12);
  objc_release(v9);
  objc_release(v24);
}