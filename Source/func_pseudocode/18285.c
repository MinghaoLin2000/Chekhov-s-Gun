-[ColorPickerImageLoader loadImagesWithReply:]
void __cdecl -[ColorPickerImageLoader loadImagesWithReply:](ColorPickerImageLoader *self, SEL a2, id a3)
{
  NSString *v3; // x19
  NSFileManager *v4; // x19
  NSArray *v5; // x24
  void *v6; // x25
  __int64 v7; // x22
  void *i; // x28
  void *v9; // x19
  void *v10; // x23
  unsigned __int8 v11; // w20
  NSString *v12; // x19
  dispatch_semaphore_t v13; // x22
  dispatch_queue_s *v14; // x23
  id v15; // x24
  void *v16; // x25
  __int64 v17; // x19
  void *j; // x21
  __int64 v19; // x9
  unsigned __int64 k; // x19
  dispatch_time_t v21; // x0
  NSArray *v22; // [xsp+8h] [xbp-258h]
  void (__fastcall **v23)(id, _QWORD); // [xsp+10h] [xbp-250h]
  id v24; // [xsp+18h] [xbp-248h]
  NSString *v25; // [xsp+20h] [xbp-240h]
  _QWORD block[6]; // [xsp+30h] [xbp-230h] BYREF
  id v28; // [xsp+60h] [xbp-200h]
  __int64 *v29; // [xsp+68h] [xbp-1F8h]
  __int128 v30; // [xsp+70h] [xbp-1F0h] BYREF
  __int128 v31; // [xsp+80h] [xbp-1E0h]
  __int128 v32; // [xsp+90h] [xbp-1D0h]
  __int128 v33; // [xsp+A0h] [xbp-1C0h]
  __int128 v34; // [xsp+B0h] [xbp-1B0h] BYREF
  __int128 v35; // [xsp+C0h] [xbp-1A0h]
  __int128 v36; // [xsp+D0h] [xbp-190h]
  __int128 v37; // [xsp+E0h] [xbp-180h]
  _BYTE v38[128]; // [xsp+F0h] [xbp-170h] BYREF
  __int64 v39; // [xsp+170h] [xbp-F0h] BYREF
  __int64 *v40; // [xsp+178h] [xbp-E8h]
  __int64 v41; // [xsp+180h] [xbp-E0h]
  __int64 (__fastcall *v42)(); // [xsp+188h] [xbp-D8h]
  __int64 (__fastcall *v43)(); // [xsp+190h] [xbp-D0h]
  id v44; // [xsp+198h] [xbp-C8h]

  v23 = (void (__fastcall **)(id, _QWORD))objc_retain(a3);
  v3 = objc_retainAutoreleasedReturnValue(NSHomeDirectory());
  v25 = objc_retainAutoreleasedReturnValue(-[NSString stringByAppendingString:](v3, "stringByAppendingString:", CFSTR("/Library/Colors")));
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  v22 = objc_retainAutoreleasedReturnValue(-[NSFileManager contentsOfDirectoryAtPath:error:](v4, "contentsOfDirectoryAtPath:error:", v25, 0LL));
  objc_release(v4);
  v24 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableArray);
  v36 = 0u;
  v37 = 0u;
  v34 = 0u;
  v35 = 0u;
  v5 = objc_retain(v22);
  v6 = -[NSArray countByEnumeratingWithState:objects:count:](
         v5,
         "countByEnumeratingWithState:objects:count:",
         &v34,
         &v39,
         16LL);
  if ( v6 )
  {
    v7 = *(_QWORD *)v35;
    do
    {
      for ( i = 0LL; i != v6; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v35 != v7 )
          objc_enumerationMutation(v5);
        v9 = *(void **)(*((_QWORD *)&v34 + 1) + 8LL * (_QWORD)i);
        if ( ((unsigned int)objc_msgSend(v9, "hasPrefix:", CFSTR(".")) & 1) == 0 )
        {
          v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "pathExtension"));
          v11 = (unsigned __int8)objc_msgSend(v10, "isEqual:", CFSTR("tiff"));
          objc_release(v10);
          if ( (v11 & 1) != 0 )
          {
            v12 = objc_retainAutoreleasedReturnValue(-[NSString stringByAppendingFormat:](v25, "stringByAppendingFormat:", CFSTR("/%@"), v9));
            objc_msgSend(v24, "addObject:", v12);
            objc_release(v12);
          }
        }
      }
      v6 = -[NSArray countByEnumeratingWithState:objects:count:](
             v5,
             "countByEnumeratingWithState:objects:count:",
             &v34,
             &v39,
             16LL);
    }
    while ( v6 );
  }
  objc_release(v5);
  objc_release(v5);
  objc_release(v25);
  v39 = 0LL;
  v40 = &v39;
  v41 = 0x3032000000LL;
  v42 = sub_100003140;
  v43 = sub_100003150;
  v44 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableDictionary);
  v13 = dispatch_semaphore_create(0LL);
  v14 = dispatch_queue_create("ColorPickerImageLoader.WorkQueue", &_dispatch_queue_attr_concurrent);
  v30 = 0u;
  v31 = 0u;
  v32 = 0u;
  v33 = 0u;
  v15 = objc_retain(v24);
  v16 = objc_msgSend(v15, "countByEnumeratingWithState:objects:count:", &v30, v38, 16LL);
  if ( v16 )
  {
    v17 = *(_QWORD *)v31;
    do
    {
      for ( j = 0LL; j != v16; j = (char *)j + 1 )
      {
        if ( *(_QWORD *)v31 != v17 )
          objc_enumerationMutation(v15);
        v19 = *(_QWORD *)(*((_QWORD *)&v30 + 1) + 8LL * (_QWORD)j);
        block[0] = _NSConcreteStackBlock;
        block[1] = 3254779904LL;
        block[2] = sub_100003158;
        block[3] = &unk_100004118;
        block[4] = v19;
        block[5] = self;
        v29 = &v39;
        v28 = objc_retain(v13);
        dispatch_async(v14, block);
        objc_release(v28);
      }
      v16 = objc_msgSend(v15, "countByEnumeratingWithState:objects:count:", &v30, v38, 16LL);
    }
    while ( v16 );
  }
  objc_release(v15);
  for ( k = 0LL; (unsigned __int64)objc_msgSend(v15, "count") > k; ++k )
  {
    v21 = dispatch_time(0LL, 1000000000LL);
    dispatch_semaphore_wait(v13, v21);
  }
  v23[2](v23, v40[5]);
  objc_release(v14);
  objc_release(v13);
  _Block_object_dispose(&v39, 8);
  objc_release(v44);
  objc_release(v15);
  objc_release(v23);
}