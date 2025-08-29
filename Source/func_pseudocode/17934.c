-[IKPTRecentsService loadDatabaseIfNeeded]
void __cdecl -[IKPTRecentsService loadDatabaseIfNeeded](IKPTRecentsService *self, SEL a2)
{
  NSFileManager *v3; // x20
  id v4; // x21
  unsigned __int8 v5; // w22
  NSString *v6; // x21
  NSString *v7; // x22
  NSString *v8; // x20
  NSFileManager *v9; // x21
  NSFileManager *v10; // x21
  id v11; // x20
  NSFileManager *v12; // x22
  unsigned __int8 v13; // w23
  NSFileManager *v14; // x22
  id v15; // x23
  NSArray *v16; // x22
  NSArray *v17; // x22
  void *v18; // x0
  void *v19; // x24
  __int64 v20; // x28
  void *i; // x21
  void *v22; // x26
  void *v23; // x25
  id v24; // x27
  NSData *v25; // x26
  id v26; // [xsp+0h] [xbp-140h]
  NSString *v27; // [xsp+8h] [xbp-138h]
  __int128 v28; // [xsp+10h] [xbp-130h] BYREF
  __int128 v29; // [xsp+20h] [xbp-120h]
  __int128 v30; // [xsp+30h] [xbp-110h]
  __int128 v31; // [xsp+40h] [xbp-100h]
  __int64 v32; // [xsp+58h] [xbp-E8h] BYREF
  _BYTE v33[128]; // [xsp+60h] [xbp-E0h] BYREF

  v3 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  v4 = objc_retainAutoreleasedReturnValue(-[IKPTRecentsService repositoryPath](self, "repositoryPath"));
  v5 = -[NSFileManager fileExistsAtPath:](v3, "fileExistsAtPath:", v4);
  objc_release(v4);
  objc_release(v3);
  if ( (v5 & 1) != 0 )
  {
    if ( self->_loaded )
      return;
  }
  else
  {
    -[NSMutableArray removeAllObjects](self->_recents, "removeAllObjects");
    -[NSMutableDictionary removeAllObjects](self->_thumbnailData, "removeAllObjects");
    self->_loaded = 0;
  }
  v32 = 0LL;
  v6 = objc_retainAutoreleasedReturnValue(NSHomeDirectory());
  v7 = objc_retainAutoreleasedReturnValue(-[NSString stringByAppendingPathComponent:](v6, "stringByAppendingPathComponent:", CFSTR("Library")));
  v8 = objc_retainAutoreleasedReturnValue(-[NSString stringByAppendingPathComponent:](v7, "stringByAppendingPathComponent:", CFSTR("Images")));
  objc_release(v7);
  objc_release(v6);
  v9 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  LOBYTE(v7) = -[NSFileManager fileExistsAtPath:](v9, "fileExistsAtPath:", v8);
  objc_release(v9);
  if ( ((unsigned __int8)v7 & 1) == 0 )
  {
    v10 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
    -[NSFileManager createDirectoryAtPath:withIntermediateDirectories:attributes:error:](
      v10,
      "createDirectoryAtPath:withIntermediateDirectories:attributes:error:",
      v8,
      0LL,
      0LL,
      &v32);
    objc_release(v10);
  }
  v27 = v8;
  v11 = objc_retainAutoreleasedReturnValue(-[IKPTRecentsService repositoryPath](self, "repositoryPath"));
  v12 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  v13 = -[NSFileManager fileExistsAtPath:](v12, "fileExistsAtPath:", v11);
  objc_release(v12);
  if ( (v13 & 1) == 0 )
  {
    v14 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
    -[NSFileManager createDirectoryAtPath:withIntermediateDirectories:attributes:error:](
      v14,
      "createDirectoryAtPath:withIntermediateDirectories:attributes:error:",
      v11,
      0LL,
      0LL,
      &v32);
    objc_release(v14);
    -[IKPTRecentsService migrateOlderRecentPicturesIfNeeded](self, "migrateOlderRecentPicturesIfNeeded");
  }
  -[NSMutableArray removeAllObjects](self->_recents, "removeAllObjects", v11);
  v15 = objc_retainAutoreleasedReturnValue(-[IKPTRecentsService dataFilePath](self, "dataFilePath"));
  v16 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithContentsOfFile:](&OBJC_CLASS___NSArray, "arrayWithContentsOfFile:", v15));
  objc_release(v15);
  v30 = 0u;
  v31 = 0u;
  v28 = 0u;
  v29 = 0u;
  v17 = objc_retain(v16);
  v18 = -[NSArray countByEnumeratingWithState:objects:count:](
          v17,
          "countByEnumeratingWithState:objects:count:",
          &v28,
          v33,
          16LL);
  if ( v18 )
  {
    v19 = v18;
    v20 = *(_QWORD *)v29;
    do
    {
      for ( i = 0LL; i != v19; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v29 != v20 )
          objc_enumerationMutation(v17);
        v22 = *(void **)(*((_QWORD *)&v28 + 1) + 8LL * (_QWORD)i);
        v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v22, "objectForKey:", CFSTR("original")));
        if ( v23 )
        {
          -[NSMutableArray addObject:](self->_recents, "addObject:", v22);
          v24 = objc_retainAutoreleasedReturnValue(-[IKPTRecentsService thumbnailPathForImageID:](self, "thumbnailPathForImageID:", v23));
          v25 = objc_retainAutoreleasedReturnValue(+[NSData dataWithContentsOfFile:](&OBJC_CLASS___NSData, "dataWithContentsOfFile:", v24));
          objc_release(v24);
          if ( v25 )
            -[NSMutableDictionary setObject:forKey:](self->_thumbnailData, "setObject:forKey:", v25, v23);
          objc_release(v25);
        }
        objc_release(v23);
      }
      v19 = -[NSArray countByEnumeratingWithState:objects:count:](
              v17,
              "countByEnumeratingWithState:objects:count:",
              &v28,
              v33,
              16LL);
    }
    while ( v19 );
  }
  objc_release(v17);
  self->_loaded = 1;
  objc_release(v17);
  objc_release(v26);
  objc_release(v27);
}