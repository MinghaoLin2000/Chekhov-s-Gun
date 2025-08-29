-[IKPTRecentsService saveDatabaseByRemovingRecents:]
void __cdecl -[IKPTRecentsService saveDatabaseByRemovingRecents:](IKPTRecentsService *self, SEL a2, id a3)
{
  id v4; // x19
  void *v5; // x20
  NSMutableArray *recents; // x22
  NSFileManager *v7; // x23
  NSArray *v8; // x24
  NSArray *v9; // x23
  void *v10; // x24
  __int64 v11; // x19
  void *i; // x20
  void *v13; // x26
  NSMutableArray *v14; // x0
  NSFileManager *v15; // x27
  void *v16; // x26
  NSMutableArray *v17; // x24
  id v18; // x21
  id v19; // [xsp+8h] [xbp-1C8h]
  id v20; // [xsp+10h] [xbp-1C0h]
  id v21; // [xsp+18h] [xbp-1B8h]
  _QWORD v22[6]; // [xsp+20h] [xbp-1B0h] BYREF
  __int64 v23; // [xsp+50h] [xbp-180h] BYREF
  __int64 *v24; // [xsp+58h] [xbp-178h]
  __int64 v25; // [xsp+60h] [xbp-170h]
  char v26; // [xsp+68h] [xbp-168h]
  __int128 v27; // [xsp+70h] [xbp-160h] BYREF
  __int128 v28; // [xsp+80h] [xbp-150h]
  __int128 v29; // [xsp+90h] [xbp-140h]
  __int128 v30; // [xsp+A0h] [xbp-130h]
  _QWORD v31[4]; // [xsp+B0h] [xbp-120h] BYREF
  id v32; // [xsp+D0h] [xbp-100h]
  id v33; // [xsp+D8h] [xbp-F8h]
  _BYTE v34[128]; // [xsp+E0h] [xbp-F0h] BYREF

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  recents = self->_recents;
  v31[0] = _NSConcreteStackBlock;
  v31[1] = 3254779904LL;
  v31[2] = sub_100002380;
  v31[3] = &unk_1000041B0;
  v19 = objc_retain(v4);
  v32 = v19;
  v20 = objc_retain(v5);
  v33 = v20;
  -[NSMutableArray enumerateObjectsUsingBlock:](recents, "enumerateObjectsUsingBlock:", v31);
  -[NSMutableArray removeAllObjects](self->_recents, "removeAllObjects");
  -[NSMutableArray addObjectsFromArray:](self->_recents, "addObjectsFromArray:", v20);
  v21 = objc_retainAutoreleasedReturnValue(-[IKPTRecentsService repositoryPath](self, "repositoryPath"));
  v7 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  v8 = objc_retainAutoreleasedReturnValue(-[NSFileManager contentsOfDirectoryAtPath:error:](v7, "contentsOfDirectoryAtPath:error:", v21, 0LL));
  objc_release(v7);
  v29 = 0u;
  v30 = 0u;
  v27 = 0u;
  v28 = 0u;
  v9 = objc_retain(v8);
  v10 = -[NSArray countByEnumeratingWithState:objects:count:](
          v9,
          "countByEnumeratingWithState:objects:count:",
          &v27,
          v34,
          16LL);
  if ( v10 )
  {
    v11 = *(_QWORD *)v28;
    do
    {
      for ( i = 0LL; i != v10; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v28 != v11 )
          objc_enumerationMutation(v9);
        v13 = *(void **)(*((_QWORD *)&v27 + 1) + 8LL * (_QWORD)i);
        if ( ((unsigned int)objc_msgSend(v13, "isEqualToString:", CFSTR("Recents.plist")) & 1) == 0 )
        {
          v23 = 0LL;
          v24 = &v23;
          v25 = 0x2020000000LL;
          v26 = 0;
          v14 = self->_recents;
          v22[0] = _NSConcreteStackBlock;
          v22[1] = 3254779904LL;
          v22[2] = sub_100002480;
          v22[3] = &unk_1000041E0;
          v22[4] = v13;
          v22[5] = &v23;
          -[NSMutableArray enumerateObjectsUsingBlock:](v14, "enumerateObjectsUsingBlock:", v22);
          if ( !*((_BYTE *)v24 + 24) )
          {
            v15 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
            v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v21, "stringByAppendingPathComponent:", v13));
            -[NSFileManager removeItemAtPath:error:](v15, "removeItemAtPath:error:", v16, 0LL);
            objc_release(v16);
            objc_release(v15);
          }
          _Block_object_dispose(&v23, 8);
        }
      }
      v10 = -[NSArray countByEnumeratingWithState:objects:count:](
              v9,
              "countByEnumeratingWithState:objects:count:",
              &v27,
              v34,
              16LL);
    }
    while ( v10 );
  }
  objc_release(v9);
  v17 = self->_recents;
  v18 = objc_retainAutoreleasedReturnValue(-[IKPTRecentsService dataFilePath](self, "dataFilePath"));
  -[NSMutableArray writeToFile:atomically:](v17, "writeToFile:atomically:", v18, 1LL);
  objc_release(v18);
  objc_release(v9);
  objc_release(v21);
  objc_release(v33);
  objc_release(v32);
  objc_release(v20);
  objc_release(v19);
}