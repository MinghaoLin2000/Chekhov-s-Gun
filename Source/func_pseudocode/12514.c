-[NSURL tsu_fileSize:error:]
bool __cdecl -[NSURL tsu_fileSize:error:](NSURL *self, SEL a2, unsigned __int64 *a3, id *a4)
{
  NSURL *v5; // x19
  id v6; // x0
  id v7; // x24
  char *v8; // x23
  NSFileManager *v9; // x19
  NSDirectoryEnumerator *v10; // x25
  NSDirectoryEnumerator *v11; // x25
  void *v12; // x0
  void *v13; // x26
  __int64 v14; // x21
  char v15; // w20
  void *v16; // x27
  void *v17; // x28
  void *v18; // x19
  id v19; // x28
  void *v20; // x19
  objc_class *v21; // x0
  void *v22; // x0
  void *v23; // x0
  NSURL *v26; // [xsp+28h] [xbp-1A8h]
  id v27; // [xsp+30h] [xbp-1A0h]
  os_log_s *log; // [xsp+38h] [xbp-198h]
  NSString *v29; // [xsp+40h] [xbp-190h]
  id *v30; // [xsp+48h] [xbp-188h]
  id v31; // [xsp+50h] [xbp-180h] BYREF
  id v32; // [xsp+58h] [xbp-178h] BYREF
  __int128 v33; // [xsp+60h] [xbp-170h] BYREF
  __int128 v34; // [xsp+70h] [xbp-160h]
  __int128 v35; // [xsp+80h] [xbp-150h]
  __int128 v36; // [xsp+90h] [xbp-140h]
  id v37; // [xsp+A8h] [xbp-128h] BYREF
  uint8_t buf[4]; // [xsp+B0h] [xbp-120h] BYREF
  NSURL *v39; // [xsp+B4h] [xbp-11Ch]
  __int16 v40; // [xsp+BCh] [xbp-114h]
  NSString *v41; // [xsp+BEh] [xbp-112h]
  __int16 v42; // [xsp+C6h] [xbp-10Ah]
  id v43; // [xsp+C8h] [xbp-108h]
  __int16 v44; // [xsp+D0h] [xbp-100h]
  void *v45; // [xsp+D2h] [xbp-FEh]
  __int16 v46; // [xsp+DAh] [xbp-F6h]
  id v47; // [xsp+DCh] [xbp-F4h]
  _BYTE v48[128]; // [xsp+E8h] [xbp-E8h] BYREF

  v5 = self;
  -[NSURL removeCachedResourceValueForKey:](self, "removeCachedResourceValueForKey:", NSURLFileSizeKey);
  v37 = 0LL;
  v26 = v5;
  LODWORD(v5) = -[NSURL getResourceValue:forKey:error:](
                  v5,
                  "getResourceValue:forKey:error:",
                  &v37,
                  NSURLFileSizeKey,
                  0LL);
  v6 = objc_retain(v37);
  v7 = v6;
  v8 = 0LL;
  if ( (_DWORD)v5 )
    v8 = (char *)objc_msgSend(v6, "unsignedLongLongValue");
  v9 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  v10 = objc_retainAutoreleasedReturnValue(
          -[NSFileManager enumeratorAtURL:includingPropertiesForKeys:options:errorHandler:](
            v9,
            "enumeratorAtURL:includingPropertiesForKeys:options:errorHandler:",
            v26,
            0LL,
            0LL,
            0LL));
  objc_release(v9);
  v35 = 0u;
  v36 = 0u;
  v33 = 0u;
  v34 = 0u;
  v11 = objc_retain(v10);
  v12 = -[NSDirectoryEnumerator countByEnumeratingWithState:objects:count:](
          v11,
          "countByEnumeratingWithState:objects:count:",
          &v33,
          v48,
          16LL);
  if ( !v12 )
  {
    v15 = 1;
    goto LABEL_24;
  }
  v13 = v12;
  v30 = a4;
  v14 = *(_QWORD *)v34;
  v15 = 1;
  do
  {
    v16 = 0LL;
    do
    {
      v17 = v7;
      if ( *(_QWORD *)v34 != v14 )
        objc_enumerationMutation(v11);
      v18 = *(void **)(*((_QWORD *)&v33 + 1) + 8LL * (_QWORD)v16);
      objc_msgSend(v18, "removeCachedResourceValueForKey:", NSURLFileSizeKey);
      v31 = 0LL;
      v32 = 0LL;
      LODWORD(v18) = (unsigned int)objc_msgSend(v18, "getResourceValue:forKey:error:", &v32, NSURLFileSizeKey, &v31);
      v7 = objc_retain(v32);
      objc_release(v17);
      v19 = objc_retain(v31);
      if ( (_DWORD)v18 )
      {
        v8 = &v8[(_QWORD)objc_msgSend(v7, "unsignedLongLongValue")];
        goto LABEL_17;
      }
      if ( (v15 & 1) != 0 )
      {
        if ( TSUDefaultCat_init_token != -1 )
          dispatch_once(&TSUDefaultCat_init_token, &stru_1001DC418);
        v15 = (char)v30;
        v20 = TSUDefaultCat_log_t;
        if ( !os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_ERROR) )
        {
          if ( !v30 )
            goto LABEL_17;
LABEL_15:
          v15 = 0;
          *v30 = objc_retainAutorelease(v19);
          goto LABEL_17;
        }
        log = objc_retain(v20);
        v21 = (objc_class *)objc_opt_class(v19);
        v29 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v21));
        v27 = objc_retainAutoreleasedReturnValue(objc_msgSend(v19, "domain"));
        v22 = objc_msgSend(v19, "code");
        *(_DWORD *)buf = 138413314;
        v39 = v26;
        v40 = 2114;
        v41 = v29;
        v42 = 2114;
        v43 = v27;
        v44 = 2048;
        v45 = v22;
        v46 = 2112;
        v47 = v19;
        _os_log_error_impl(
          (void *)&_mh_execute_header,
          log,
          OS_LOG_TYPE_ERROR,
          "Unable to get NSURLFileSizeKey for URL: \"%@\". errorClass=%{public}@, domain=%{public}@, code=%zd (%@) ",
          buf,
          0x34u);
        objc_release(v27);
        objc_release(v29);
        objc_release(log);
        if ( v30 )
          goto LABEL_15;
      }
      else
      {
        v15 = 0;
      }
LABEL_17:
      objc_release(v19);
      v16 = (char *)v16 + 1;
    }
    while ( v13 != v16 );
    v23 = -[NSDirectoryEnumerator countByEnumeratingWithState:objects:count:](
            v11,
            "countByEnumeratingWithState:objects:count:",
            &v33,
            v48,
            16LL);
    v13 = v23;
  }
  while ( v23 );
LABEL_24:
  objc_release(v11);
  if ( a3 )
    *a3 = (unsigned __int64)v8;
  objc_release(v11);
  objc_release(v7);
  return v15 & 1;
}