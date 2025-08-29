+[PAMediaConversionServiceSharedPhotoStreamImageMetadataPolicy _filterImageProperties:metadataWithKey:preserveProperties:]
void __cdecl +[PAMediaConversionServiceSharedPhotoStreamImageMetadataPolicy _filterImageProperties:metadataWithKey:preserveProperties:](
        id a1,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v7; // x19
  id v8; // x20
  id v9; // x21
  void *v10; // x22
  id v11; // x23
  void *v12; // x0
  void *v13; // x25
  NSMutableDictionary *v14; // x24
  __int64 v15; // x28
  void *i; // x19
  __int64 v17; // x27
  void *v18; // x26
  id v19; // [xsp+0h] [xbp-130h]
  void *v20; // [xsp+8h] [xbp-128h]
  __int128 v21; // [xsp+10h] [xbp-120h] BYREF
  __int128 v22; // [xsp+20h] [xbp-110h]
  __int128 v23; // [xsp+30h] [xbp-100h]
  __int128 v24; // [xsp+40h] [xbp-F0h]
  _BYTE v25[128]; // [xsp+50h] [xbp-E0h] BYREF

  v7 = objc_retain(a3);
  v8 = objc_retain(a4);
  v9 = objc_retain(a5);
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "objectForKey:", v8));
  if ( v10 )
  {
    v23 = 0u;
    v24 = 0u;
    v21 = 0u;
    v22 = 0u;
    v11 = objc_retain(v9);
    v12 = objc_msgSend(v11, "countByEnumeratingWithState:objects:count:", &v21, v25, 16LL);
    if ( v12 )
    {
      v13 = v12;
      v19 = v9;
      v20 = v7;
      v14 = 0LL;
      v15 = *(_QWORD *)v22;
      do
      {
        for ( i = 0LL; i != v13; i = (char *)i + 1 )
        {
          if ( *(_QWORD *)v22 != v15 )
            objc_enumerationMutation(v11);
          v17 = *(_QWORD *)(*((_QWORD *)&v21 + 1) + 8LL * (_QWORD)i);
          v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "objectForKey:", v17, v19));
          if ( v18 )
          {
            if ( !v14 )
              v14 = objc_retainAutoreleasedReturnValue(
                      +[NSMutableDictionary dictionaryWithCapacity:](
                        &OBJC_CLASS___NSMutableDictionary,
                        "dictionaryWithCapacity:",
                        objc_msgSend(v11, "count")));
            -[NSMutableDictionary setObject:forKey:](v14, "setObject:forKey:", v18, v17);
          }
          objc_release(v18);
        }
        v13 = objc_msgSend(v11, "countByEnumeratingWithState:objects:count:", &v21, v25, 16LL);
      }
      while ( v13 );
      objc_release(v11);
      v9 = v19;
      v7 = v20;
      if ( v14 )
      {
        objc_msgSend(v20, "setObject:forKey:", v14, v8);
        objc_release(v14);
        goto LABEL_17;
      }
    }
    else
    {
      objc_release(v11);
    }
    objc_msgSend(v7, "removeObjectForKey:", v8);
  }
LABEL_17:
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
  objc_release(v7);
}