-[NSFileManager tsu_removeContentsOfDirectoryAtURL:reason:urlsToExclude:logContext:]
void __cdecl -[NSFileManager tsu_removeContentsOfDirectoryAtURL:reason:urlsToExclude:logContext:](
        NSFileManager *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6)
{
  id v10; // x19
  id v11; // x20
  id v12; // x21
  id v13; // x22
  id v14; // x23
  void *v15; // x25
  unsigned int v16; // w26
  NSArray *v17; // x25
  id v18; // x0
  void *v19; // x26
  NSArray *v20; // x27
  void *v21; // x0
  void *v22; // x28
  __int64 v23; // x25
  void *i; // x21
  void *v25; // x26
  void *v26; // x27
  dispatch_queue_global_s *v27; // x25
  objc_class *v28; // x0
  void *v29; // x27
  void *v30; // x0
  NSString *v31; // [xsp+8h] [xbp-1F8h]
  os_log_s *log; // [xsp+10h] [xbp-1F0h]
  id v33; // [xsp+18h] [xbp-1E8h]
  id v34; // [xsp+18h] [xbp-1E8h]
  NSArray *v35; // [xsp+20h] [xbp-1E0h]
  id v36; // [xsp+20h] [xbp-1E0h]
  id v37; // [xsp+28h] [xbp-1D8h]
  id v38; // [xsp+28h] [xbp-1D8h]
  _QWORD block[4]; // [xsp+30h] [xbp-1D0h] BYREF
  id v40; // [xsp+50h] [xbp-1B0h]
  NSFileManager *v41; // [xsp+58h] [xbp-1A8h]
  id v42; // [xsp+60h] [xbp-1A0h]
  id v43; // [xsp+68h] [xbp-198h]
  __int128 v44; // [xsp+70h] [xbp-190h] BYREF
  __int128 v45; // [xsp+80h] [xbp-180h]
  __int128 v46; // [xsp+90h] [xbp-170h]
  __int128 v47; // [xsp+A0h] [xbp-160h]
  id v48; // [xsp+B8h] [xbp-148h] BYREF
  uint8_t v49[128]; // [xsp+C0h] [xbp-140h] BYREF
  uint8_t buf[4]; // [xsp+140h] [xbp-C0h] BYREF
  id v51; // [xsp+144h] [xbp-BCh]
  __int16 v52; // [xsp+14Ch] [xbp-B4h]
  id v53; // [xsp+14Eh] [xbp-B2h]
  __int16 v54; // [xsp+156h] [xbp-AAh]
  id v55; // [xsp+158h] [xbp-A8h]
  __int16 v56; // [xsp+160h] [xbp-A0h]
  id v57; // [xsp+162h] [xbp-9Eh]
  __int16 v58; // [xsp+16Ah] [xbp-96h]
  NSString *v59; // [xsp+16Ch] [xbp-94h]
  __int16 v60; // [xsp+174h] [xbp-8Ch]
  void *v61; // [xsp+176h] [xbp-8Ah]
  __int16 v62; // [xsp+17Eh] [xbp-82h]
  void *v63; // [xsp+180h] [xbp-80h]
  __int16 v64; // [xsp+188h] [xbp-78h]
  void *v65; // [xsp+18Ah] [xbp-76h]

  v10 = objc_retain(a3);
  v11 = objc_retain(a4);
  v12 = objc_retain(a5);
  v13 = objc_retain(a6);
  v14 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableSet);
  if ( v10 )
  {
    v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "path"));
    v16 = -[NSFileManager fileExistsAtPath:](self, "fileExistsAtPath:", v15);
    objc_release(v15);
    if ( v16 )
    {
      v48 = 0LL;
      v17 = objc_retainAutoreleasedReturnValue(
              -[NSFileManager contentsOfDirectoryAtURL:includingPropertiesForKeys:options:error:](
                self,
                "contentsOfDirectoryAtURL:includingPropertiesForKeys:options:error:",
                v10,
                0LL,
                0LL,
                &v48));
      v18 = objc_retain(v48);
      v19 = v18;
      if ( v17 )
      {
        v33 = v18;
        v35 = v17;
        v37 = v12;
        v46 = 0u;
        v47 = 0u;
        v44 = 0u;
        v45 = 0u;
        v20 = objc_retain(v17);
        v21 = -[NSArray countByEnumeratingWithState:objects:count:](
                v20,
                "countByEnumeratingWithState:objects:count:",
                &v44,
                v49,
                16LL);
        if ( v21 )
        {
          v22 = v21;
          v23 = *(_QWORD *)v45;
          do
          {
            for ( i = 0LL; i != v22; i = (char *)i + 1 )
            {
              if ( *(_QWORD *)v45 != v23 )
                objc_enumerationMutation(v20);
              v25 = objc_retainAutoreleasedReturnValue(objc_msgSend(*(id *)(*((_QWORD *)&v44 + 1) + 8LL * (_QWORD)i), "URLByStandardizingPath"));
              objc_msgSend(v14, "addObject:", v25);
              objc_release(v25);
            }
            v22 = -[NSArray countByEnumeratingWithState:objects:count:](
                    v20,
                    "countByEnumeratingWithState:objects:count:",
                    &v44,
                    v49,
                    16LL);
          }
          while ( v22 );
        }
        objc_release(v20);
        v12 = v37;
        objc_msgSend(v14, "minusSet:", v37);
        v19 = v33;
        v17 = v35;
      }
      else
      {
        if ( TSUDefaultCat_init_token != -1 )
          dispatch_once(&TSUDefaultCat_init_token, &stru_1001DD850);
        v26 = TSUDefaultCat_log_t;
        if ( os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_ERROR) )
        {
          log = objc_retain(v26);
          v38 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "publicString"));
          v36 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "privateString"));
          v34 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "path"));
          v28 = (objc_class *)objc_opt_class(v19);
          v31 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v28));
          v29 = objc_retainAutoreleasedReturnValue(objc_msgSend(v19, "domain"));
          v30 = objc_msgSend(v19, "code");
          *(_DWORD *)buf = 138545154;
          v51 = v38;
          v52 = 2112;
          v53 = v36;
          v54 = 2112;
          v55 = v34;
          v56 = 2114;
          v57 = v11;
          v58 = 2114;
          v59 = v31;
          v60 = 2114;
          v61 = v29;
          v62 = 2048;
          v63 = v30;
          v64 = 2112;
          v65 = v19;
          _os_log_error_impl(
            (void *)&_mh_execute_header,
            log,
            OS_LOG_TYPE_ERROR,
            "%{public}@ %@ Failed to enumerate the directory at '%@' due to '%{public}@ after error: errorClass=%{public}"
            "@, domain=%{public}@, code=%zd (%@) ",
            buf,
            0x52u);
          objc_release(v34);
          objc_release(v29);
          objc_release(v31);
          objc_release(v36);
          objc_release(v38);
          objc_release(log);
        }
      }
      objc_release(v17);
      objc_release(v19);
    }
  }
  if ( objc_msgSend(v14, "count") )
  {
    v27 = objc_retainAutoreleasedReturnValue(dispatch_get_global_queue(-2LL, 0LL));
    block[0] = _NSConcreteStackBlock;
    block[1] = 3254779904LL;
    block[2] = sub_10013A680;
    block[3] = &unk_1001DD8B0;
    v40 = objc_retain(v14);
    v41 = self;
    v42 = objc_retain(v13);
    v43 = objc_retain(v11);
    dispatch_async(v27, block);
    objc_release(v27);
    objc_release(v43);
    objc_release(v42);
    objc_release(v40);
  }
  objc_release(v14);
  objc_release(v13);
  objc_release(v12);
  objc_release(v11);
  objc_release(v10);
}