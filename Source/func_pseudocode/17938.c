-[IKPTRecentsService migrateOlderRecentPicturesIfNeeded]
void __cdecl -[IKPTRecentsService migrateOlderRecentPicturesIfNeeded](IKPTRecentsService *self, SEL a2)
{
  id v3; // x21
  NSFileManager *v4; // x20
  NSFileManager *v5; // x20
  id v6; // x19
  unsigned int v7; // w21
  void *v8; // x20
  NSArray *v9; // x19
  unsigned __int64 v10; // x9
  void *v11; // x20
  void *v12; // x27
  unsigned __int64 v13; // x8
  void *v14; // x23
  NSMutableDictionary *v15; // x28
  void *v16; // x21
  void *v17; // x20
  void *v18; // x22
  void *v19; // x25
  NSURL *v20; // x19
  NSURL *v21; // x25
  NSFileManager *v22; // x26
  void *v23; // x26
  NSString *v24; // x24
  NSString *v25; // x23
  void *v26; // x0
  void *v27; // x19
  void *v28; // [xsp+10h] [xbp-190h]
  unsigned __int64 v29; // [xsp+18h] [xbp-188h]
  NSArray *obj; // [xsp+20h] [xbp-180h]
  __int64 v31; // [xsp+30h] [xbp-170h]
  void *v32; // [xsp+38h] [xbp-168h]
  void *v33; // [xsp+40h] [xbp-160h]
  void *v34; // [xsp+48h] [xbp-158h]
  id v35; // [xsp+50h] [xbp-150h]
  id v36; // [xsp+58h] [xbp-148h]
  id v37; // [xsp+60h] [xbp-140h]
  id v38; // [xsp+68h] [xbp-138h] BYREF
  __int128 v39; // [xsp+70h] [xbp-130h] BYREF
  __int128 v40; // [xsp+80h] [xbp-120h]
  __int128 v41; // [xsp+90h] [xbp-110h]
  __int128 v42; // [xsp+A0h] [xbp-100h]
  char v43; // [xsp+BEh] [xbp-E2h] BYREF
  char v44; // [xsp+BFh] [xbp-E1h] BYREF
  _BYTE v45[128]; // [xsp+C0h] [xbp-E0h] BYREF

  v3 = objc_retainAutoreleasedReturnValue(-[IKPTRecentsService oldRepositoryPath](self, "oldRepositoryPath"));
  v44 = 0;
  v4 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  v36 = v3;
  LOBYTE(v3) = -[NSFileManager fileExistsAtPath:isDirectory:](v4, "fileExistsAtPath:isDirectory:", v3, &v44);
  objc_release(v4);
  if ( ((unsigned __int8)v3 & 1) != 0 || v44 )
  {
    v35 = objc_retainAutoreleasedReturnValue(-[IKPTRecentsService repositoryPath](self, "repositoryPath"));
    v43 = 0;
    v5 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
    v6 = objc_retainAutoreleasedReturnValue(-[IKPTRecentsService repositoryPath](self, "repositoryPath"));
    v7 = -[NSFileManager fileExistsAtPath:isDirectory:](v5, "fileExistsAtPath:isDirectory:", v6, &v43);
    objc_release(v6);
    objc_release(v5);
    if ( v7 && v43 )
    {
      v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v36, "stringByAppendingPathComponent:", CFSTR("Recents.plist")));
      v9 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithContentsOfFile:](&OBJC_CLASS___NSArray, "arrayWithContentsOfFile:", v8));
      v34 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
      v39 = 0u;
      v40 = 0u;
      v41 = 0u;
      v42 = 0u;
      obj = objc_retain(v9);
      v32 = -[NSArray countByEnumeratingWithState:objects:count:](
              obj,
              "countByEnumeratingWithState:objects:count:",
              &v39,
              v45,
              16LL);
      if ( v32 )
      {
        v28 = v8;
        v10 = 0LL;
        v11 = 0LL;
        v31 = *(_QWORD *)v40;
        while ( 2 )
        {
          v12 = 0LL;
          v29 = v10;
          v13 = 18 - v10;
          if ( v10 > 0x12 )
            v13 = 0LL;
          v33 = (void *)v13;
          v14 = v11;
          do
          {
            if ( *(_QWORD *)v40 != v31 )
              objc_enumerationMutation(obj);
            if ( v33 == v12 )
            {
              v11 = v14;
              goto LABEL_21;
            }
            v15 = objc_retainAutoreleasedReturnValue(
                    +[NSMutableDictionary dictionaryWithDictionary:](
                      &OBJC_CLASS___NSMutableDictionary,
                      "dictionaryWithDictionary:",
                      *(_QWORD *)(*((_QWORD *)&v39 + 1) + 8LL * (_QWORD)v12)));
            v16 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKey:](v15, "objectForKey:", CFSTR("icon32")));
            if ( !v16 )
              v16 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKey:](v15, "objectForKey:", CFSTR("icon64")));
            -[NSMutableDictionary removeObjectForKey:](v15, "removeObjectForKey:", CFSTR("icon32"));
            -[NSMutableDictionary removeObjectForKey:](v15, "removeObjectForKey:", CFSTR("icon64"));
            objc_msgSend(v34, "addObject:", v15);
            v17 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKey:](v15, "objectForKey:", CFSTR("original")));
            v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v35, "stringByAppendingPathComponent:", v17));
            v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v36, "stringByAppendingPathComponent:", v17));
            v20 = objc_retainAutoreleasedReturnValue(+[NSURL fileURLWithPath:](&OBJC_CLASS___NSURL, "fileURLWithPath:", v19));
            objc_release(v19);
            v21 = objc_retainAutoreleasedReturnValue(+[NSURL fileURLWithPath:](&OBJC_CLASS___NSURL, "fileURLWithPath:", v18));
            v22 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
            v38 = v14;
            -[NSFileManager copyItemAtURL:toURL:error:](v22, "copyItemAtURL:toURL:error:", v20, v21, &v38);
            v37 = objc_retain(v38);
            objc_release(v14);
            objc_release(v22);
            v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v18, "stringByDeletingPathExtension"));
            v24 = objc_retainAutoreleasedReturnValue(
                    +[NSString stringWithFormat:](
                      &OBJC_CLASS___NSString,
                      "stringWithFormat:",
                      CFSTR("%@-thumbnail"),
                      v23));
            v25 = objc_retainAutoreleasedReturnValue(-[NSString stringByAppendingPathExtension:](v24, "stringByAppendingPathExtension:", CFSTR("tiff")));
            objc_release(v24);
            objc_release(v23);
            if ( v16 )
              objc_msgSend(v16, "writeToFile:atomically:", v25, 0LL);
            objc_release(v25);
            objc_release(v21);
            objc_release(v20);
            objc_release(v18);
            objc_release(v17);
            objc_release(v16);
            objc_release(v15);
            v12 = (char *)v12 + 1;
            v11 = v37;
            v14 = v37;
          }
          while ( v32 != v12 );
          v26 = -[NSArray countByEnumeratingWithState:objects:count:](
                  obj,
                  "countByEnumeratingWithState:objects:count:",
                  &v39,
                  v45,
                  16LL);
          v10 = (unsigned __int64)v12 + v29;
          v32 = v26;
          if ( v26 )
            continue;
          break;
        }
LABEL_21:
        objc_release(v11);
        v8 = v28;
      }
      objc_release(obj);
      v27 = objc_retainAutoreleasedReturnValue(objc_msgSend(v35, "stringByAppendingPathComponent:", CFSTR("Recents.plist")));
      objc_msgSend(v34, "writeToFile:atomically:", v27, 0LL);
      objc_release(v27);
      objc_release(v34);
      objc_release(obj);
      objc_release(v8);
    }
    objc_release(v35);
  }
  objc_release(v36);
}