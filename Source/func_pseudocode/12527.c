-[NSURL tsu_isInTrash]
bool __cdecl -[NSURL tsu_isInTrash](NSURL *self, SEL a2)
{
  NSFileManager *v3; // x19
  unsigned int v4; // w22
  id v5; // x0
  void *v6; // x20
  bool v7; // w22
  NSURL *v8; // x21
  NSArray *v9; // x22
  NSEnumerator *v10; // x23
  NSEnumerator *v11; // x21
  void *v12; // x0
  void *v13; // x23
  __int64 v14; // x24
  void *i; // x25
  void *v16; // x23
  os_log_s *v17; // x22
  objc_class *v18; // x0
  NSString *v19; // x23
  void *v20; // x24
  void *v21; // x0
  __int128 v23; // [xsp+0h] [xbp-150h] BYREF
  __int128 v24; // [xsp+10h] [xbp-140h]
  __int128 v25; // [xsp+20h] [xbp-130h]
  __int128 v26; // [xsp+30h] [xbp-120h]
  id v27; // [xsp+40h] [xbp-110h] BYREF
  __int64 v28; // [xsp+48h] [xbp-108h] BYREF
  uint8_t buf[4]; // [xsp+50h] [xbp-100h] BYREF
  NSURL *v30; // [xsp+54h] [xbp-FCh]
  __int16 v31; // [xsp+5Ch] [xbp-F4h]
  NSString *v32; // [xsp+5Eh] [xbp-F2h]
  __int16 v33; // [xsp+66h] [xbp-EAh]
  void *v34; // [xsp+68h] [xbp-E8h]
  __int16 v35; // [xsp+70h] [xbp-E0h]
  void *v36; // [xsp+72h] [xbp-DEh]
  __int16 v37; // [xsp+7Ah] [xbp-D6h]
  void *v38; // [xsp+7Ch] [xbp-D4h]
  _BYTE v39[128]; // [xsp+88h] [xbp-C8h] BYREF

  v3 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  v27 = 0LL;
  v28 = 2LL;
  v4 = -[NSFileManager getRelationship:ofDirectory:inDomain:toItemAtURL:error:](
         v3,
         "getRelationship:ofDirectory:inDomain:toItemAtURL:error:",
         &v28,
         102LL,
         0LL,
         self,
         &v27);
  v5 = objc_retain(v27);
  v6 = v5;
  if ( v4 )
  {
    v7 = v28 == 0;
    goto LABEL_22;
  }
  if ( !v5 )
    goto LABEL_19;
  if ( !(unsigned int)objc_msgSend(v5, "tsu_isFeatureUnsupportedError") )
  {
    if ( ((unsigned int)objc_msgSend(v6, "tsu_isNoSuchFileError") & 1) == 0 )
    {
      if ( TSUDefaultCat_init_token != -1 )
        dispatch_once(&TSUDefaultCat_init_token, &stru_1001DC548);
      v16 = TSUDefaultCat_log_t;
      v7 = 0;
      if ( !os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_DEFAULT) )
        goto LABEL_22;
      v17 = objc_retain(v16);
      v18 = (objc_class *)objc_opt_class(v6);
      v19 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v18));
      v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "domain"));
      v21 = objc_msgSend(v6, "code");
      *(_DWORD *)buf = 138413314;
      v30 = self;
      v31 = 2114;
      v32 = v19;
      v33 = 2114;
      v34 = v20;
      v35 = 2048;
      v36 = v21;
      v37 = 2112;
      v38 = v6;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v17,
        OS_LOG_TYPE_DEFAULT,
        "Failed to find relationship between URL and trash directory: %@. errorClass=%{public}@, domain=%{public}@, code=%zd (%@) ",
        buf,
        0x34u);
      objc_release(v20);
      objc_release(v19);
      objc_release(v17);
    }
LABEL_19:
    v7 = 0;
    goto LABEL_22;
  }
  v8 = objc_retainAutoreleasedReturnValue(-[NSURL URLByDeletingLastPathComponent](self, "URLByDeletingLastPathComponent"));
  v9 = objc_retainAutoreleasedReturnValue(-[NSURL pathComponents](v8, "pathComponents"));
  v10 = objc_retainAutoreleasedReturnValue(-[NSArray reverseObjectEnumerator](v9, "reverseObjectEnumerator"));
  objc_release(v9);
  objc_release(v8);
  v25 = 0u;
  v26 = 0u;
  v23 = 0u;
  v24 = 0u;
  v11 = objc_retain(v10);
  v12 = -[NSEnumerator countByEnumeratingWithState:objects:count:](
          v11,
          "countByEnumeratingWithState:objects:count:",
          &v23,
          v39,
          16LL);
  if ( v12 )
  {
    v13 = v12;
    v14 = *(_QWORD *)v24;
    while ( 2 )
    {
      for ( i = 0LL; i != v13; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v24 != v14 )
          objc_enumerationMutation(v11);
        if ( ((unsigned int)objc_msgSend(
                              *(id *)(*((_QWORD *)&v23 + 1) + 8LL * (_QWORD)i),
                              "isEqualToString:",
                              CFSTR(".Trash"),
                              (_QWORD)v23) & 1) != 0 )
        {
          v7 = 1;
          goto LABEL_21;
        }
      }
      v13 = -[NSEnumerator countByEnumeratingWithState:objects:count:](
              v11,
              "countByEnumeratingWithState:objects:count:",
              &v23,
              v39,
              16LL);
      if ( v13 )
        continue;
      break;
    }
  }
  v7 = 0;
LABEL_21:
  objc_release(v11);
  objc_release(v11);
LABEL_22:
  objc_release(v6);
  objc_release(v3);
  return v7;
}