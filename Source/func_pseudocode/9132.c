-[TSPDirectoryPackage prepareForDocumentReplacementWithSuccess:forSafeSave:originalURL:]
void __cdecl -[TSPDirectoryPackage prepareForDocumentReplacementWithSuccess:forSafeSave:originalURL:](
        TSPDirectoryPackage *self,
        SEL a2,
        bool a3,
        bool a4,
        id a5)
{
  _BOOL4 v5; // w20
  id v7; // x0
  void *v8; // x19
  TSUZipFileArchive *v9; // x21
  unsigned __int8 v10; // w22
  id v11; // x20
  unsigned int v12; // w22
  void *v13; // x21
  NSString *v14; // x21
  NSString *v15; // x23
  id v16; // x24
  void *v17; // x25
  objc_class *v18; // x0
  NSString *v19; // x26
  void *v20; // x27
  id v21; // x23
  void *v22; // x24
  objc_class *v23; // x0
  NSString *v24; // x25
  void *v25; // x26
  void *v26; // x0
  id v27; // [xsp+28h] [xbp-C8h] BYREF
  uint8_t buf[4]; // [xsp+30h] [xbp-C0h] BYREF
  unsigned int v29; // [xsp+34h] [xbp-BCh]
  __int16 v30; // [xsp+38h] [xbp-B8h]
  const char *v31; // [xsp+3Ah] [xbp-B6h]
  __int16 v32; // [xsp+42h] [xbp-AEh]
  const char *v33; // [xsp+44h] [xbp-ACh]
  __int16 v34; // [xsp+4Ch] [xbp-A4h]
  int v35; // [xsp+4Eh] [xbp-A2h]
  __int16 v36; // [xsp+52h] [xbp-9Eh]
  void *v37; // [xsp+54h] [xbp-9Ch]
  __int16 v38; // [xsp+5Ch] [xbp-94h]
  NSString *v39; // [xsp+5Eh] [xbp-92h]
  __int16 v40; // [xsp+66h] [xbp-8Ah]
  void *v41; // [xsp+68h] [xbp-88h]
  __int16 v42; // [xsp+70h] [xbp-80h]
  void *v43; // [xsp+72h] [xbp-7Eh]
  __int16 v44; // [xsp+7Ah] [xbp-76h]
  id v45; // [xsp+7Ch] [xbp-74h]

  v5 = a3;
  v7 = objc_retain(a5);
  v8 = v7;
  if ( v5 && (unsigned int)objc_msgSend(v7, "tsu_volumeRenameOpenFail") )
  {
    v9 = objc_retainAutoreleasedReturnValue(-[TSPPackage zipArchive](self, "zipArchive"));
    v27 = 0LL;
    v10 = -[TSUZipFileArchive copyToTemporaryLocationRelativeToURL:error:](
            v9,
            "copyToTemporaryLocationRelativeToURL:error:",
            v8,
            &v27);
    v11 = objc_retain(v27);
    objc_release(v9);
    if ( (v10 & 1) == 0 )
    {
      v12 = +[TSUAssertionHandler _atomicIncrementAssertCount](
              &OBJC_CLASS___TSUAssertionHandler,
              "_atomicIncrementAssertCount");
      if ( TSUAssertCat_init_token != -1 )
        dispatch_once(&TSUAssertCat_init_token, &stru_1001D1970);
      v13 = objc_retain(TSUAssertCat_log_t);
      if ( os_log_type_enabled((os_log_t)v13, OS_LOG_TYPE_ERROR) )
      {
        v21 = objc_retainAutoreleasedReturnValue(
                +[TSPDirectoryPackage objectArchiveURLForPackageURL:](
                  &OBJC_CLASS___TSPDirectoryPackage,
                  "objectArchiveURLForPackageURL:",
                  v8));
        v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v21, "path"));
        v23 = (objc_class *)objc_opt_class(v11);
        v24 = objc_retain(objc_retainAutoreleasedReturnValue(NSStringFromClass(v23)));
        v25 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "domain"));
        v26 = objc_msgSend(v11, "code");
        *(_DWORD *)buf = 67111170;
        v29 = v12;
        v30 = 2082;
        v31 = "-[TSPDirectoryPackage prepareForDocumentReplacementWithSuccess:forSafeSave:originalURL:]";
        v32 = 2082;
        v33 = "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/persistence/src/TSPDirectoryPackage.mm";
        v34 = 1024;
        v35 = 261;
        v36 = 2112;
        v37 = v22;
        v38 = 2114;
        v39 = v24;
        v40 = 2114;
        v41 = v25;
        v42 = 2048;
        v43 = v26;
        v44 = 2112;
        v45 = v11;
        _os_log_error_impl(
          (void *)&_mh_execute_header,
          (os_log_t)v13,
          OS_LOG_TYPE_ERROR,
          "#Assert *** Assertion failure #%u: %{public}s %{public}s:%d Failed to copy object archive %@ to temporary loca"
          "tion. errorClass=%{public}@, domain=%{public}@, code=%zd (%@) ",
          buf,
          0x54u);
        objc_release(v24);
        objc_release(v22);
        objc_release(v21);
        objc_release(v25);
        objc_release(v24);
      }
      objc_release(v13);
      v14 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "-[TSPDirectoryPackage prepareForDocumentReplacementWithSuccess:forSafeSave:originalURL:]"));
      v15 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithUTF8String:](
                &OBJC_CLASS___NSString,
                "stringWithUTF8String:",
                "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sour"
                "ces/iWorkXPC/shared/persistence/src/TSPDirectoryPackage.mm"));
      v16 = objc_retainAutoreleasedReturnValue(
              +[TSPDirectoryPackage objectArchiveURLForPackageURL:](
                &OBJC_CLASS___TSPDirectoryPackage,
                "objectArchiveURLForPackageURL:",
                v8));
      v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "path"));
      v18 = (objc_class *)objc_opt_class(v11);
      v19 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v18));
      v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "domain"));
      +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
        &OBJC_CLASS___TSUAssertionHandler,
        "handleFailureInFunction:file:lineNumber:isFatal:description:",
        v14,
        v15,
        261LL,
        0LL,
        "Failed to copy object archive %@ to temporary location. errorClass=%{public}@, domain=%{public}@, code=%zd (%@) ",
        v17,
        v19,
        v20,
        objc_msgSend(v11, "code"),
        v11);
      objc_release(v20);
      objc_release(v19);
      objc_release(v17);
      objc_release(v16);
      objc_release(v15);
      objc_release(v14);
      +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    }
    objc_release(v11);
  }
  objc_release(v8);
}