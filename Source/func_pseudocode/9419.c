-[TSPPackage newZipArchiveFromPackageURL:isLazyLoading:error:]
id __cdecl -[TSPPackage newZipArchiveFromPackageURL:isLazyLoading:error:](
        TSPPackage *self,
        SEL a2,
        id a3,
        bool a4,
        id *a5)
{
  id v8; // x19
  void *v9; // x20
  unsigned __int64 v10; // x3
  id v11; // x23
  id v12; // x21
  id v13; // x24
  void *v14; // x24
  NSFileManager *v15; // x24
  void *v16; // x25
  unsigned int v17; // w26
  unsigned int v18; // w8
  void *v19; // x24
  id v20; // x25
  void *v21; // x24
  id v22; // x25
  objc_class *v24; // x0
  NSString *v25; // x25
  void *v26; // x26
  void *v27; // x0
  id v28; // [xsp+8h] [xbp-98h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-90h] BYREF
  void *v30; // [xsp+14h] [xbp-8Ch]
  __int16 v31; // [xsp+1Ch] [xbp-84h]
  NSString *v32; // [xsp+1Eh] [xbp-82h]
  __int16 v33; // [xsp+26h] [xbp-7Ah]
  void *v34; // [xsp+28h] [xbp-78h]
  __int16 v35; // [xsp+30h] [xbp-70h]
  void *v36; // [xsp+32h] [xbp-6Eh]
  __int16 v37; // [xsp+3Ah] [xbp-66h]
  id v38; // [xsp+3Ch] [xbp-64h]

  v8 = objc_retain(a3);
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend((id)objc_opt_class(self), "zipArchiveURLFromPackageURL:", v8));
  v10 = (unsigned __int64)objc_msgSend((id)objc_opt_class(self), "zipArchiveOptions") | self->_additionalZipArchiveOptions | 4;
  v28 = 0LL;
  v11 = objc_retainAutoreleasedReturnValue(
          +[TSUZipFileArchive zipArchiveFromURL:options:error:](
            &OBJC_CLASS___TSUZipFileArchive,
            "zipArchiveFromURL:options:error:",
            v9,
            v10,
            &v28));
  v12 = objc_retain(v28);
  if ( !v11 )
  {
    if ( !a4 )
    {
      if ( TSUDefaultCat_init_token != -1 )
        dispatch_once(&TSUDefaultCat_init_token, &stru_1001D2FC0);
      v14 = objc_retain(TSUDefaultCat_log_t);
      if ( os_log_type_enabled((os_log_t)v14, OS_LOG_TYPE_ERROR) )
      {
        v24 = (objc_class *)objc_opt_class(v12);
        v25 = objc_retain(objc_retainAutoreleasedReturnValue(NSStringFromClass(v24)));
        v26 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "domain"));
        v27 = objc_msgSend(v12, "code");
        *(_DWORD *)buf = 138413314;
        v30 = v9;
        v31 = 2114;
        v32 = v25;
        v33 = 2114;
        v34 = v26;
        v35 = 2048;
        v36 = v27;
        v37 = 2112;
        v38 = v12;
        _os_log_error_impl(
          (void *)&_mh_execute_header,
          (os_log_t)v14,
          OS_LOG_TYPE_ERROR,
          "Couldn't read zip file archive from URL %@. errorClass=%{public}@, domain=%{public}@, code=%zd (%@) ",
          buf,
          0x34u);
        objc_release(v25);
        objc_release(v26);
        objc_release(v25);
      }
      objc_release(v14);
      if ( ((unsigned int)objc_msgSend(v9, "checkResourceIsReachableAndReturnError:", 0LL) & 1) == 0 )
      {
        v13 = objc_retainAutoreleasedReturnValue(
                +[NSError tsp_errorWithError:hints:](
                  &OBJC_CLASS___NSError,
                  "tsp_errorWithError:hints:",
                  v12,
                  &off_1001E3290));
        objc_release(v12);
LABEL_23:
        if ( a5 )
        {
          v12 = objc_retainAutorelease(v13);
          *a5 = v12;
        }
        else
        {
          v12 = v13;
        }
        goto LABEL_26;
      }
      if ( !objc_msgSend(v9, "tsu_fileSize") )
      {
        if ( (unsigned int)objc_msgSend(v12, "tsp_isReadError") )
        {
          v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "userInfo"));
          v22 = objc_retainAutoreleasedReturnValue(
                  +[NSError tsp_readCorruptedDocumentErrorWithUserInfo:](
                    &OBJC_CLASS___NSError,
                    "tsp_readCorruptedDocumentErrorWithUserInfo:",
                    v21));
          objc_release(v12);
          objc_release(v21);
          v12 = v22;
        }
        v13 = objc_retainAutoreleasedReturnValue(
                +[NSError tsp_errorWithError:hints:](
                  &OBJC_CLASS___NSError,
                  "tsp_errorWithError:hints:",
                  v12,
                  &off_1001E32A8));
        objc_release(v12);
        goto LABEL_23;
      }
      if ( !+[TSUZipFileArchive isZipArchiveAtURL:error:](
              &OBJC_CLASS___TSUZipFileArchive,
              "isZipArchiveAtURL:error:",
              v9,
              0LL) )
      {
        buf[0] = 0;
        v15 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
        v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "path"));
        v17 = -[NSFileManager fileExistsAtPath:isDirectory:](v15, "fileExistsAtPath:isDirectory:", v16, buf);
        objc_release(v16);
        objc_release(v15);
        if ( buf[0] )
          v18 = 0;
        else
          v18 = v17;
        if ( v18 == 1
          && +[TSUZipFileArchive isZipSignatureAllZerosAtURL:](
               &OBJC_CLASS___TSUZipFileArchive,
               "isZipSignatureAllZerosAtURL:",
               v9) )
        {
          v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "userInfo"));
          v20 = objc_retainAutoreleasedReturnValue(
                  +[NSError tsp_readCorruptedDocumentErrorWithUserInfo:](
                    &OBJC_CLASS___NSError,
                    "tsp_readCorruptedDocumentErrorWithUserInfo:",
                    v19));
          objc_release(v12);
          objc_release(v19);
          v13 = objc_retainAutoreleasedReturnValue(
                  +[NSError tsp_errorWithError:hints:](
                    &OBJC_CLASS___NSError,
                    "tsp_errorWithError:hints:",
                    v20,
                    &off_1001E32C0));
        }
        else
        {
          v13 = objc_retainAutoreleasedReturnValue(
                  +[NSError tsp_errorWithError:hints:](
                    &OBJC_CLASS___NSError,
                    "tsp_errorWithError:hints:",
                    v12,
                    &off_1001E32D8));
          v20 = v12;
        }
        objc_release(v20);
        goto LABEL_23;
      }
    }
    v13 = v12;
    goto LABEL_23;
  }
LABEL_26:
  objc_release(v9);
  objc_release(v12);
  objc_release(v8);
  return v11;
}