-[MediaConversionRequestTracker graphDumpURLsForCurrentProcessIdentifier]
id __cdecl -[MediaConversionRequestTracker graphDumpURLsForCurrentProcessIdentifier](
        MediaConversionRequestTracker *self,
        SEL a2)
{
  NSString *v2; // x20
  NSString *v3; // x19
  NSArray *v4; // x21
  void *v5; // x0
  void *v6; // x26
  void *v7; // x22
  void *v8; // x21
  __int64 v9; // x23
  NSURL *v10; // x19
  NSURL *v11; // x25
  NSArray *v12; // x28
  id v13; // x0
  void *v14; // x27
  NSArray *v15; // x25
  void *v16; // x0
  void *v17; // x23
  char v18; // w28
  __int64 v19; // x27
  void *i; // x26
  void *v21; // x19
  void *v22; // x21
  void *v23; // x19
  void *v24; // x0
  void *v25; // x28
  NSURL *v26; // x27
  void *v27; // x25
  void *v28; // x21
  bool v29; // zf
  void *v31; // [xsp+30h] [xbp-260h]
  NSArray *obj; // [xsp+38h] [xbp-258h]
  void *v33; // [xsp+40h] [xbp-250h]
  id v34; // [xsp+48h] [xbp-248h]
  __int64 v35; // [xsp+50h] [xbp-240h]
  NSFileManager *v36; // [xsp+58h] [xbp-238h]
  NSArray *v37; // [xsp+60h] [xbp-230h]
  NSURL *v38; // [xsp+68h] [xbp-228h]
  __int128 v39; // [xsp+70h] [xbp-220h] BYREF
  __int128 v40; // [xsp+80h] [xbp-210h]
  __int128 v41; // [xsp+90h] [xbp-200h]
  __int128 v42; // [xsp+A0h] [xbp-1F0h]
  id v43; // [xsp+B8h] [xbp-1D8h] BYREF
  __int128 v44; // [xsp+C0h] [xbp-1D0h] BYREF
  __int128 v45; // [xsp+D0h] [xbp-1C0h]
  __int128 v46; // [xsp+E0h] [xbp-1B0h]
  __int128 v47; // [xsp+F0h] [xbp-1A0h]
  uint8_t v48[128]; // [xsp+100h] [xbp-190h] BYREF
  uint8_t buf[4]; // [xsp+180h] [xbp-110h] BYREF
  __int64 v50; // [xsp+184h] [xbp-10Ch]
  __int16 v51; // [xsp+18Ch] [xbp-104h]
  void *v52; // [xsp+18Eh] [xbp-102h]
  _QWORD v53[2]; // [xsp+198h] [xbp-F8h] BYREF
  _BYTE v54[128]; // [xsp+1A8h] [xbp-E8h] BYREF
  __int64 vars8; // [xsp+298h] [xbp+8h]

  v36 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  v2 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithFormat:](
           &OBJC_CLASS___NSString,
           "stringWithFormat:",
           CFSTR("^%d_.+_program_graph.*\\.pdf$"),
           getpid()));
  v44 = 0u;
  v45 = 0u;
  v46 = 0u;
  v47 = 0u;
  v53[0] = CFSTR("/tmp");
  v3 = objc_retainAutoreleasedReturnValue(NSTemporaryDirectory());
  v53[1] = v3;
  v4 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", v53, 2LL));
  objc_release(v3);
  obj = v4;
  v5 = -[NSArray countByEnumeratingWithState:objects:count:](
         v4,
         "countByEnumeratingWithState:objects:count:",
         &v44,
         v54,
         16LL);
  if ( !v5 )
  {
    v7 = 0LL;
    goto LABEL_33;
  }
  v6 = v5;
  v7 = 0LL;
  v35 = *(_QWORD *)v45;
  while ( 2 )
  {
    v8 = 0LL;
    v31 = v6;
    do
    {
      if ( *(_QWORD *)v45 != v35 )
        objc_enumerationMutation(obj);
      v9 = *(_QWORD *)(*((_QWORD *)&v44 + 1) + 8LL * (_QWORD)v8);
      v10 = objc_retainAutoreleasedReturnValue(+[NSURL fileURLWithPath:](&OBJC_CLASS___NSURL, "fileURLWithPath:", v9));
      v11 = objc_retainAutoreleasedReturnValue(-[NSURL URLByResolvingSymlinksInPath](v10, "URLByResolvingSymlinksInPath"));
      objc_release(v10);
      v43 = 0LL;
      v12 = objc_retainAutoreleasedReturnValue(
              -[NSFileManager contentsOfDirectoryAtURL:includingPropertiesForKeys:options:error:](
                v36,
                "contentsOfDirectoryAtURL:includingPropertiesForKeys:options:error:",
                v11,
                0LL,
                7LL,
                &v43));
      v13 = objc_retain(v43);
      v14 = v13;
      if ( v12 )
      {
        v38 = v11;
        v41 = 0u;
        v42 = 0u;
        v39 = 0u;
        v40 = 0u;
        v15 = objc_retain(v12);
        v16 = -[NSArray countByEnumeratingWithState:objects:count:](
                v15,
                "countByEnumeratingWithState:objects:count:",
                &v39,
                v48,
                16LL);
        if ( v16 )
        {
          v17 = v16;
          v37 = v12;
          v33 = v8;
          v34 = v14;
          v18 = 0;
          v19 = *(_QWORD *)v40;
          do
          {
            for ( i = 0LL; i != v17; i = (char *)i + 1 )
            {
              if ( *(_QWORD *)v40 != v19 )
                objc_enumerationMutation(v15);
              v21 = *(void **)(*((_QWORD *)&v39 + 1) + 8LL * (_QWORD)i);
              v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v21, "lastPathComponent"));
              if ( objc_msgSend(v22, "rangeOfString:options:", v2, 1024LL) != (void *)0x7FFFFFFFFFFFFFFFLL )
              {
                if ( !v7 )
                  v7 = objc_retainAutoreleasedReturnValue(+[NSMutableSet set](&OBJC_CLASS___NSMutableSet, "set"));
                objc_msgSend(v7, "addObject:", v21);
                v18 = 1;
              }
              objc_release(v22);
            }
            v17 = -[NSArray countByEnumeratingWithState:objects:count:](
                    v15,
                    "countByEnumeratingWithState:objects:count:",
                    &v39,
                    v48,
                    16LL);
          }
          while ( v17 );
          objc_release(v15);
          if ( (v18 & 1) != 0 )
          {
            objc_release(v15);
            objc_release(v34);
            objc_release(v38);
            goto LABEL_33;
          }
          v6 = v31;
          v8 = v33;
          v14 = v34;
          v12 = v37;
          v11 = v38;
        }
        else
        {
          objc_release(v15);
          v11 = v38;
        }
      }
      else
      {
        v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "domain"));
        if ( (unsigned int)objc_msgSend(v23, "isEqualToString:", NSCocoaErrorDomain) )
        {
          v24 = objc_msgSend(v14, "code");
          v25 = v14;
          v26 = v11;
          v27 = v8;
          v28 = v24;
          objc_release(v23);
          v29 = v28 == (void *)257;
          v8 = v27;
          v11 = v26;
          v14 = v25;
          v12 = 0LL;
          if ( v29 )
            goto LABEL_28;
        }
        else
        {
          objc_release(v23);
        }
        if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
        {
          *(_DWORD *)buf = 138543618;
          v50 = v9;
          v51 = 2114;
          v52 = v14;
          _os_log_error_impl(
            (void *)&_mh_execute_header,
            (os_log_t)&_os_log_default,
            OS_LOG_TYPE_ERROR,
            "Unable to enumerate contents of temp directory %{public}@: %{public}@",
            buf,
            0x16u);
        }
      }
LABEL_28:
      objc_release(v12);
      objc_release(v14);
      objc_release(v11);
      v8 = (char *)v8 + 1;
    }
    while ( v8 != v6 );
    v6 = -[NSArray countByEnumeratingWithState:objects:count:](
           obj,
           "countByEnumeratingWithState:objects:count:",
           &v44,
           v54,
           16LL);
    if ( v6 )
      continue;
    break;
  }
LABEL_33:
  objc_release(obj);
  objc_release(v2);
  objc_release(v36);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}