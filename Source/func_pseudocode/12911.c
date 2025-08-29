-[NSFileManager tsu_replaceItemAtURL:withItemAtURL:backupItemName:options:resultingItemURL:error:]
bool __cdecl -[NSFileManager tsu_replaceItemAtURL:withItemAtURL:backupItemName:options:resultingItemURL:error:](
        NSFileManager *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        unsigned __int64 a6,
        id *a7,
        id *a8)
{
  id v13; // x19
  id v14; // x20
  id v15; // x21
  NSArray *v16; // x27
  void *v17; // x22
  NSArray *v18; // x27
  _BOOL4 v19; // w23
  unsigned __int8 v20; // w25
  id v21; // x24
  void *v22; // x25
  id v25; // [xsp+10h] [xbp-70h] BYREF
  NSURLResourceKey v26; // [xsp+18h] [xbp-68h] BYREF
  NSURLResourceKey v27; // [xsp+20h] [xbp-60h] BYREF

  v13 = objc_retain(a3);
  v14 = objc_retain(a4);
  v15 = objc_retain(a5);
  v27 = NSURLThumbnailDictionaryKey;
  v16 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", &v27, 1LL));
  v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "resourceValuesForKeys:error:", v16, 0LL));
  objc_release(v16);
  if ( !v17 )
  {
    v26 = NSURLThumbnailDictionaryKey;
    v18 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", &v26, 1LL));
    v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "resourceValuesForKeys:error:", v18, 0LL));
    objc_release(v18);
  }
  v19 = -[NSFileManager replaceItemAtURL:withItemAtURL:backupItemName:options:resultingItemURL:error:](
          self,
          "replaceItemAtURL:withItemAtURL:backupItemName:options:resultingItemURL:error:",
          v13,
          v14,
          v15,
          a6,
          a7,
          a8);
  if ( v19 && v17 )
  {
    v25 = 0LL;
    v20 = (unsigned __int8)objc_msgSend(v13, "setResourceValues:error:", v17, &v25);
    v21 = objc_retain(v25);
    if ( (v20 & 1) == 0 )
    {
      if ( TSUDefaultCat_init_token != -1 )
        dispatch_once(&TSUDefaultCat_init_token, &stru_1001DD830);
      v22 = TSUDefaultCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_ERROR) )
        sub_100170634((int)v17, v22);
    }
    objc_release(v21);
  }
  objc_release(v17);
  objc_release(v15);
  objc_release(v14);
  objc_release(v13);
  return v19;
}