+[AutofillNode parentChildrenForPlaylistNodeLookup:]
void __cdecl +[AutofillNode parentChildrenForPlaylistNodeLookup:](id a1, SEL a2, id a3)
{
  id v3; // x19
  void *v4; // x20
  void *v5; // x0
  void *v6; // x21
  __int64 v7; // x26
  void *i; // x27
  void *v9; // x23
  void *v10; // x22
  void *v11; // x24
  void *v12; // x25
  __int128 v13; // [xsp+0h] [xbp-120h] BYREF
  __int128 v14; // [xsp+10h] [xbp-110h]
  __int128 v15; // [xsp+20h] [xbp-100h]
  __int128 v16; // [xsp+30h] [xbp-F0h]
  _BYTE v17[128]; // [xsp+48h] [xbp-D8h] BYREF

  v3 = objc_retain(a3);
  v13 = 0u;
  v14 = 0u;
  v15 = 0u;
  v16 = 0u;
  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "allValues", 0LL));
  v5 = objc_msgSend(v4, "countByEnumeratingWithState:objects:count:", &v13, v17, 16LL);
  if ( v5 )
  {
    v6 = v5;
    v7 = *(_QWORD *)v14;
    do
    {
      for ( i = 0LL; i != v6; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v14 != v7 )
          objc_enumerationMutation(v4);
        v9 = *(void **)(*((_QWORD *)&v13 + 1) + 8LL * (_QWORD)i);
        v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "parentID"));
        if ( objc_msgSend(v10, "unsignedLongLongValue") )
        {
          v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "objectForKeyedSubscript:", v10));
          objc_msgSend(v9, "setParent:", v11);
          v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "children"));
          objc_msgSend(v12, "addObject:", v9);
          objc_release(v12);
          objc_release(v11);
        }
        objc_release(v10);
      }
      v6 = objc_msgSend(v4, "countByEnumeratingWithState:objects:count:", &v13, v17, 16LL);
    }
    while ( v6 );
  }
  objc_release(v4);
  objc_release(v3);
}