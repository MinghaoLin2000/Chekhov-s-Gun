-[TSPFilePackage didReloadZipArchive:packageURL:error:]
bool __cdecl -[TSPFilePackage didReloadZipArchive:packageURL:error:](
        TSPFilePackage *self,
        SEL a2,
        id a3,
        id a4,
        id *a5)
{
  id v8; // x19
  NSString *v9; // x20
  bool v10; // w26
  id v11; // x24
  char v12; // w8
  id v13; // x21
  id v14; // x0
  bool v15; // w23
  TSUZipArchive *v16; // x0
  TSUZipArchive *componentZipArchive; // x23
  TSUZipArchive *v18; // x0
  TSUTemporaryDirectory *v19; // x28
  id v20; // x27
  TSUTemporaryDirectory *componentZipArchiveTemporaryDirectory; // x0
  TSUTemporaryDirectory *v22; // x0
  id v23; // x24
  void *v24; // x26
  os_log_s *v25; // x24
  unsigned int v26; // w24
  id v27; // x28
  TSUZipArchive *v28; // x27
  TSUZipArchive *v29; // x0
  os_log_s *v30; // x25
  TSUZipArchive *v31; // x26
  TSUZipArchive *v32; // x0
  void *v33; // x0
  void *v34; // x25
  id v35; // x0
  objc_class *v37; // x0
  NSString *v38; // x26
  void *v39; // x27
  void *v40; // x0
  __int64 v41; // [xsp+0h] [xbp-D0h]
  id v42; // [xsp+8h] [xbp-C8h] BYREF
  id v43; // [xsp+10h] [xbp-C0h] BYREF
  id v44; // [xsp+18h] [xbp-B8h] BYREF
  id v45; // [xsp+20h] [xbp-B0h] BYREF
  objc_super v46; // [xsp+28h] [xbp-A8h] BYREF
  id v47; // [xsp+38h] [xbp-98h] BYREF
  uint8_t buf[4]; // [xsp+40h] [xbp-90h] BYREF
  NSString *v49; // [xsp+44h] [xbp-8Ch]
  __int16 v50; // [xsp+4Ch] [xbp-84h]
  void *v51; // [xsp+4Eh] [xbp-82h]
  __int16 v52; // [xsp+56h] [xbp-7Ah]
  void *v53; // [xsp+58h] [xbp-78h]
  __int16 v54; // [xsp+60h] [xbp-70h]
  id v55; // [xsp+62h] [xbp-6Eh]

  v8 = objc_retain(a3);
  v9 = (NSString *)objc_retain(a4);
  v46.receiver = self;
  v46.super_class = (Class)&OBJC_CLASS___TSPFilePackage;
  v47 = 0LL;
  v10 = -[TSPPackage didReloadZipArchive:packageURL:error:](&v46, "didReloadZipArchive:packageURL:error:", v8, v9, &v47);
  v11 = objc_retain(v47);
  v12 = !v10;
  if ( !v8 )
    v12 = 1;
  if ( (v12 & 1) == 0 )
  {
    v13 = objc_retainAutoreleasedReturnValue(
            +[TSPPackage objectArchiveEntryPathForPackageLocator:](
              &OBJC_CLASS___TSPPackage,
              "objectArchiveEntryPathForPackageLocator:",
              CFSTR("Metadata")));
    v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "entryForName:", v13));
    v15 = v14 == 0LL;
    objc_release(v14);
    if ( !v15 )
    {
      v16 = (TSUZipArchive *)objc_retain(v8);
      componentZipArchive = self->_componentZipArchive;
      self->_componentZipArchive = v16;
LABEL_6:
      v10 = 1;
LABEL_32:
      objc_release(componentZipArchive);
      objc_release(v13);
      goto LABEL_33;
    }
    v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "entryForName:", CFSTR("Index.zip")));
    componentZipArchive = v18;
    if ( !v18 )
    {
      if ( TSUDefaultCat_init_token != -1 )
        dispatch_once(&TSUDefaultCat_init_token, &stru_1001D2280);
      v30 = (os_log_s *)TSUDefaultCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_ERROR) )
        sub_10016AEB4(v30);
      goto LABEL_31;
    }
    if ( (unsigned int)-[TSUZipArchive isCompressed](v18, "isCompressed") )
    {
      v45 = v11;
      v19 = -[TSUTemporaryDirectory initWithError:](
              objc_alloc(&OBJC_CLASS___TSUTemporaryDirectory),
              "initWithError:",
              &v45);
      v20 = objc_retain(v45);
      objc_release(v11);
      componentZipArchiveTemporaryDirectory = self->_componentZipArchiveTemporaryDirectory;
      self->_componentZipArchiveTemporaryDirectory = v19;
      objc_release(componentZipArchiveTemporaryDirectory);
      v22 = self->_componentZipArchiveTemporaryDirectory;
      if ( v22 )
      {
        v23 = objc_retainAutoreleasedReturnValue(-[TSUTemporaryDirectory URL](v22, "URL"));
        v24 = objc_retainAutoreleasedReturnValue(objc_msgSend(v23, "URLByAppendingPathComponent:", CFSTR("Index.zip")));
        objc_release(v23);
        if ( UnsafePointer != -1 )
          dispatch_once(&UnsafePointer, &stru_1001D2240);
        v25 = (os_log_s *)UnsafePointer;
        if ( os_log_type_enabled((os_log_t)UnsafePointer, OS_LOG_TYPE_DEFAULT) )
        {
          *(_DWORD *)buf = 138412546;
          v49 = v9;
          v50 = 2112;
          v51 = v24;
          _os_log_impl(
            (void *)&_mh_execute_header,
            v25,
            OS_LOG_TYPE_DEFAULT,
            "Extracting compressed Index.zip from zipped package. url=%@, targetURL=%@",
            buf,
            0x16u);
        }
        v44 = v20;
        v26 = (unsigned int)objc_msgSend(
                              v8,
                              "tsp_writeZipEntry:toURL:validateCRC:error:",
                              componentZipArchive,
                              v24,
                              0LL,
                              &v44,
                              104LL);
        v27 = objc_retain(v44);
        objc_release(v20);
        if ( v26 )
        {
          v43 = v27;
          v28 = (TSUZipArchive *)objc_retainAutoreleasedReturnValue(
                                   +[TSUZipFileArchive zipArchiveFromURL:options:error:](
                                     &OBJC_CLASS___TSUZipFileArchive,
                                     "zipArchiveFromURL:options:error:",
                                     v24,
                                     0LL,
                                     &v43));
          v11 = objc_retain(v43);
          objc_release(v27);
          if ( v28 )
          {
            v29 = self->_componentZipArchive;
            self->_componentZipArchive = v28;
            objc_release(v29);
            objc_release(v24);
            goto LABEL_6;
          }
        }
        else
        {
          v11 = v27;
        }
        v33 = *(Class *)((char *)&self->super.super.isa + v41);
        *(Class *)((char *)&self->super.super.isa + v41) = 0LL;
        objc_release(v33);
        objc_release(v24);
        goto LABEL_26;
      }
    }
    else
    {
      v42 = v11;
      v31 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "containedZipArchiveForEntry:options:error:", componentZipArchive, 0LL, &v42));
      v20 = objc_retain(v42);
      objc_release(v11);
      if ( v31 )
      {
        v32 = self->_componentZipArchive;
        self->_componentZipArchive = v31;
        objc_release(v32);
        v10 = 1;
        v11 = v20;
        goto LABEL_32;
      }
    }
    v11 = v20;
LABEL_26:
    if ( TSUDefaultCat_init_token != -1 )
      dispatch_once(&TSUDefaultCat_init_token, &stru_1001D2260);
    v34 = objc_retain(TSUDefaultCat_log_t);
    if ( os_log_type_enabled((os_log_t)v34, OS_LOG_TYPE_ERROR) )
    {
      v37 = (objc_class *)objc_opt_class(v11);
      v38 = objc_retain(objc_retainAutoreleasedReturnValue(NSStringFromClass(v37)));
      v39 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "domain"));
      v40 = objc_msgSend(v11, "code");
      *(_DWORD *)buf = 138544130;
      v49 = v38;
      v50 = 2114;
      v51 = v39;
      v52 = 2048;
      v53 = v40;
      v54 = 2112;
      v55 = v11;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        (os_log_t)v34,
        OS_LOG_TYPE_ERROR,
        "Failed to load contained Index.zip with error: errorClass=%{public}@, domain=%{public}@, code=%zd (%@) ",
        buf,
        0x2Au);
      objc_release(v38);
      objc_release(v39);
      objc_release(v38);
    }
    objc_release(v34);
LABEL_31:
    v10 = 0;
    goto LABEL_32;
  }
LABEL_33:
  if ( a5 && !v10 )
  {
    if ( v11 )
    {
      *a5 = objc_retainAutorelease(v11);
    }
    else
    {
      v35 = objc_retainAutorelease(
              objc_retainAutoreleasedReturnValue(
                +[NSError tsp_unknownReadErrorWithUserInfo:](
                  &OBJC_CLASS___NSError,
                  "tsp_unknownReadErrorWithUserInfo:",
                  0LL)));
      *a5 = v35;
      objc_release(v35);
    }
  }
  objc_release(v11);
  objc_release(v9);
  objc_release(v8);
  return v10;
}