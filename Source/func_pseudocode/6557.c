-[MediaConversionRequestTracker copyCoreImageGraphDumpsToURL:]
void __cdecl -[MediaConversionRequestTracker copyCoreImageGraphDumpsToURL:](
        MediaConversionRequestTracker *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  NSFileManager *v5; // x21
  id v6; // x23
  NSMutableSet *v7; // x22
  void *v8; // x0
  __int128 v9; // q0
  void *v10; // x23
  __int64 v11; // x20
  void *i; // x22
  void *v13; // x26
  void *v14; // x27
  void *v15; // x28
  unsigned int v16; // w24
  id v17; // x25
  void *v18; // x24
  __int128 v19; // [xsp+0h] [xbp-170h]
  MediaConversionRequestTracker *v20; // [xsp+18h] [xbp-158h]
  NSMutableSet *obj; // [xsp+20h] [xbp-150h]
  id v22; // [xsp+28h] [xbp-148h] BYREF
  __int128 v23; // [xsp+30h] [xbp-140h] BYREF
  __int128 v24; // [xsp+40h] [xbp-130h]
  __int128 v25; // [xsp+50h] [xbp-120h]
  __int128 v26; // [xsp+60h] [xbp-110h]
  uint8_t buf[4]; // [xsp+70h] [xbp-100h] BYREF
  void *v28; // [xsp+74h] [xbp-FCh]
  __int16 v29; // [xsp+7Ch] [xbp-F4h]
  void *v30; // [xsp+7Eh] [xbp-F2h]
  __int16 v31; // [xsp+86h] [xbp-EAh]
  id v32; // [xsp+88h] [xbp-E8h]
  _BYTE v33[128]; // [xsp+90h] [xbp-E0h] BYREF

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  v6 = objc_retainAutoreleasedReturnValue(
         -[MediaConversionRequestTracker graphDumpURLsForCurrentProcessIdentifier](
           self,
           "graphDumpURLsForCurrentProcessIdentifier"));
  v7 = objc_retainAutoreleasedReturnValue(+[NSMutableSet setWithSet:](&OBJC_CLASS___NSMutableSet, "setWithSet:", v6));
  objc_release(v6);
  v20 = self;
  -[NSMutableSet minusSet:](v7, "minusSet:", self->_coreImageGraphDumpURLsAtStart);
  v25 = 0u;
  v26 = 0u;
  v23 = 0u;
  v24 = 0u;
  obj = objc_retain(v7);
  v8 = -[NSMutableSet countByEnumeratingWithState:objects:count:](
         obj,
         "countByEnumeratingWithState:objects:count:",
         &v23,
         v33,
         16LL);
  if ( v8 )
  {
    v10 = v8;
    v11 = *(_QWORD *)v24;
    *(_QWORD *)&v9 = 138543874LL;
    v19 = v9;
    do
    {
      for ( i = 0LL; i != v10; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v24 != v11 )
          objc_enumerationMutation(obj);
        v13 = *(void **)(*((_QWORD *)&v23 + 1) + 8LL * (_QWORD)i);
        v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "lastPathComponent", v19));
        v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "URLByAppendingPathComponent:", v14));
        v22 = 0LL;
        v16 = -[NSFileManager copyItemAtURL:toURL:error:](v5, "copyItemAtURL:toURL:error:", v13, v15, &v22);
        v17 = objc_retain(v22);
        if ( v16 )
        {
          v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "path"));
          -[MediaConversionRequestTracker addCoreImageGraphDumpPath:](v20, "addCoreImageGraphDumpPath:", v18);
          objc_release(v18);
        }
        else if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
        {
          *(_DWORD *)buf = v19;
          v28 = v13;
          v29 = 2114;
          v30 = v15;
          v31 = 2114;
          v32 = v17;
          _os_log_error_impl(
            (void *)&_mh_execute_header,
            (os_log_t)&_os_log_default,
            OS_LOG_TYPE_ERROR,
            "Unable to copy core image graph dump file %{public}@ to %{public}@: %{public}@",
            buf,
            0x20u);
        }
        objc_release(v17);
        objc_release(v15);
        objc_release(v14);
      }
      v10 = -[NSMutableSet countByEnumeratingWithState:objects:count:](
              obj,
              "countByEnumeratingWithState:objects:count:",
              &v23,
              v33,
              16LL);
    }
    while ( v10 );
  }
  objc_release(obj);
  objc_release(obj);
  objc_release(v5);
  objc_release(v4);
}