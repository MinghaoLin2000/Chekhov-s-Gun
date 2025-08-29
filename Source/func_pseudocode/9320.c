-[TSPDirectoryPackageConverter performAccessor:filePathCharacterIndex:fileURL:needsReadChannel:zipArchive:error:]
bool __cdecl -[TSPDirectoryPackageConverter performAccessor:filePathCharacterIndex:fileURL:needsReadChannel:zipArchive:error:](
        TSPDirectoryPackageConverter *self,
        SEL a2,
        id a3,
        unsigned __int64 a4,
        id a5,
        bool a6,
        id a7,
        id *a8)
{
  _BOOL4 v10; // w23
  __int64 (__fastcall **v14)(id, void *, id, void *, _QWORD, os_log_t); // x19
  id v15; // x20
  void *v16; // x27
  void *v17; // x28
  void *v18; // x21
  void *v19; // x22
  id v20; // x23
  char v21; // w24
  os_log_s *v23; // x24
  os_log_t v24; // x26
  unsigned __int8 v25; // w24
  id v26; // x26
  id v27; // x27
  void *v28; // x26
  unsigned __int8 v29; // w24
  id v30; // x28
  id v31; // x27
  void *v32; // x28
  objc_class *v33; // x0
  void *v34; // x0
  objc_class *v35; // x0
  void *v36; // x0
  void *v37; // x26
  objc_class *v38; // x0
  NSString *v39; // x24
  void *v40; // x27
  void *v41; // x0
  id v42; // [xsp+8h] [xbp-D8h]
  id v43; // [xsp+8h] [xbp-D8h]
  id v44; // [xsp+10h] [xbp-D0h]
  NSString *v45; // [xsp+10h] [xbp-D0h]
  NSString *v46; // [xsp+18h] [xbp-C8h]
  id v47; // [xsp+18h] [xbp-C8h]
  os_log_t log; // [xsp+20h] [xbp-C0h]
  id v49; // [xsp+28h] [xbp-B8h] BYREF
  id v50; // [xsp+30h] [xbp-B0h] BYREF
  id v51; // [xsp+38h] [xbp-A8h] BYREF
  id v52; // [xsp+40h] [xbp-A0h] BYREF
  id v53; // [xsp+48h] [xbp-98h] BYREF
  uint8_t buf[4]; // [xsp+50h] [xbp-90h] BYREF
  id v55; // [xsp+54h] [xbp-8Ch]
  __int16 v56; // [xsp+5Ch] [xbp-84h]
  NSString *v57; // [xsp+5Eh] [xbp-82h]
  __int16 v58; // [xsp+66h] [xbp-7Ah]
  id v59; // [xsp+68h] [xbp-78h]
  __int16 v60; // [xsp+70h] [xbp-70h]
  void *v61; // [xsp+72h] [xbp-6Eh]
  __int16 v62; // [xsp+7Ah] [xbp-66h]
  id v63; // [xsp+7Ch] [xbp-64h]

  v10 = a6;
  v14 = (__int64 (__fastcall **)(id, void *, id, void *, _QWORD, os_log_t))objc_retain(a3);
  v15 = objc_retain(a5);
  v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "path"));
  v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "stringByStandardizingPath"));
  v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v17, "precomposedStringWithCanonicalMapping"));
  objc_release(v17);
  objc_release(v16);
  v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v18, "substringFromIndex:", a4));
  if ( ((unsigned int)objc_msgSend(v19, "isEqualToString:", CFSTR("Index.zip")) & 1) != 0
    || -[TSPPackageConverter isDocumentPropertiesPath:](self, "isDocumentPropertiesPath:", v19)
    || a7 && -[TSPPackageConverter isObjectArchivePath:](self, "isObjectArchivePath:", v19) )
  {
    v20 = 0LL;
    v21 = 1;
    goto LABEL_6;
  }
  if ( !v10 )
  {
    v20 = 0LL;
    v23 = 0LL;
    goto LABEL_16;
  }
  v53 = 0LL;
  v23 = -[TSUFileIOChannel initForReadingURL:error:](
          objc_alloc(&OBJC_CLASS___TSUFileIOChannel),
          "initForReadingURL:error:",
          v15,
          &v53);
  v20 = objc_retain(v53);
  if ( v23 )
  {
LABEL_16:
    log = v23;
    v52 = 0LL;
    v51 = 0LL;
    v25 = (unsigned __int8)objc_msgSend(v15, "getResourceValue:forKey:error:", &v52, NSURLFileSizeKey, &v51);
    v26 = objc_retain(v52);
    v27 = objc_retain(v51);
    if ( (v25 & 1) == 0 )
    {
      objc_release(v26);
      if ( TSUDefaultCat_init_token != -1 )
        dispatch_once(&TSUDefaultCat_init_token, &stru_1001D25E0);
      v28 = objc_retain(TSUDefaultCat_log_t);
      if ( os_log_type_enabled((os_log_t)v28, OS_LOG_TYPE_ERROR) )
      {
        v42 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "path"));
        v33 = (objc_class *)objc_opt_class(v27);
        v46 = objc_retain(objc_retainAutoreleasedReturnValue(NSStringFromClass(v33)));
        v44 = objc_retainAutoreleasedReturnValue(objc_msgSend(v27, "domain"));
        v34 = objc_msgSend(v27, "code");
        *(_DWORD *)buf = 138413314;
        v55 = v42;
        v56 = 2114;
        v57 = v46;
        v58 = 2114;
        v59 = v44;
        v60 = 2048;
        v61 = v34;
        v62 = 2112;
        v63 = v27;
        _os_log_error_impl(
          (void *)&_mh_execute_header,
          (os_log_t)v28,
          OS_LOG_TYPE_ERROR,
          "Failed to retrieve file size for path: %@. errorClass=%{public}@, domain=%{public}@, code=%zd (%@) ",
          buf,
          0x34u);
        objc_release(v46);
        objc_release(v42);
        objc_release(v44);
        objc_release(v46);
      }
      objc_release(v28);
      v26 = 0LL;
    }
    objc_release(v27);
    v50 = 0LL;
    v49 = 0LL;
    v29 = (unsigned __int8)objc_msgSend(
                             v15,
                             "getResourceValue:forKey:error:",
                             &v50,
                             NSURLContentModificationDateKey,
                             &v49);
    v30 = objc_retain(v50);
    v31 = objc_retain(v49);
    if ( (v29 & 1) == 0 )
    {
      objc_release(v30);
      if ( TSUDefaultCat_init_token != -1 )
        dispatch_once(&TSUDefaultCat_init_token, &stru_1001D2600);
      v32 = objc_retain(TSUDefaultCat_log_t);
      if ( os_log_type_enabled((os_log_t)v32, OS_LOG_TYPE_ERROR) )
      {
        v47 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "path"));
        v35 = (objc_class *)objc_opt_class(v31);
        v45 = objc_retain(objc_retainAutoreleasedReturnValue(NSStringFromClass(v35)));
        v43 = objc_retainAutoreleasedReturnValue(objc_msgSend(v31, "domain"));
        v36 = objc_msgSend(v31, "code");
        *(_DWORD *)buf = 138413314;
        v55 = v47;
        v56 = 2114;
        v57 = v45;
        v58 = 2114;
        v59 = v43;
        v60 = 2048;
        v61 = v36;
        v62 = 2112;
        v63 = v31;
        _os_log_error_impl(
          (void *)&_mh_execute_header,
          (os_log_t)v32,
          OS_LOG_TYPE_ERROR,
          "Failed to retrieve content modification date for path: %@. errorClass=%{public}@, domain=%{public}@, code=%zd (%@) ",
          buf,
          0x34u);
        objc_release(v45);
        objc_release(v47);
        objc_release(v43);
        objc_release(v45);
      }
      objc_release(v32);
      v30 = 0LL;
    }
    v21 = v14[2](v14, v19, v30, objc_msgSend(v26, "unsignedLongLongValue"), 0LL, log);
    -[os_log_s close](log, "close");
    objc_release(v30);
    objc_release(v31);
    objc_release(v26);
    goto LABEL_29;
  }
  if ( TSUDefaultCat_init_token != -1 )
    dispatch_once(&TSUDefaultCat_init_token, &stru_1001D2620);
  v24 = objc_retain(TSUDefaultCat_log_t);
  if ( os_log_type_enabled(v24, OS_LOG_TYPE_ERROR) )
  {
    log = v24;
    v37 = objc_retain(objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "path")));
    v38 = (objc_class *)objc_opt_class(v20);
    v39 = objc_retain(objc_retainAutoreleasedReturnValue(NSStringFromClass(v38)));
    v40 = objc_retainAutoreleasedReturnValue(objc_msgSend(v20, "domain"));
    v41 = objc_msgSend(v20, "code");
    *(_DWORD *)buf = 138413314;
    v55 = v37;
    v56 = 2114;
    v57 = v39;
    v58 = 2114;
    v59 = v40;
    v60 = 2048;
    v61 = v41;
    v62 = 2112;
    v63 = v20;
    _os_log_error_impl(
      (void *)&_mh_execute_header,
      log,
      OS_LOG_TYPE_ERROR,
      "Failed to read file from document directory: %@. errorClass=%{public}@, domain=%{public}@, code=%zd (%@) ",
      buf,
      0x34u);
    objc_release(v39);
    objc_release(v37);
    objc_release(v40);
    objc_release(v39);
    objc_release(v37);
    v21 = 0;
LABEL_29:
    v24 = log;
    goto LABEL_30;
  }
  v21 = 0;
LABEL_30:
  objc_release(v24);
LABEL_6:
  if ( a8 )
    *a8 = objc_retainAutorelease(v20);
  objc_release(v19);
  objc_release(v18);
  objc_release(v20);
  objc_release(v15);
  objc_release(v14);
  return v21;
}