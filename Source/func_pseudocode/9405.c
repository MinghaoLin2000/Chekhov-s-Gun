+[TSPPackage newPackageWithURL:options:packageIdentifier:decryptionKey:fileCoordinatorDelegate:error:]
// local variable allocation has failed, the output may be wrong!
id __cdecl +[TSPPackage newPackageWithURL:options:packageIdentifier:decryptionKey:fileCoordinatorDelegate:error:](
        id a1,
        SEL a2,
        id a3,
        unsigned __int64 a4,
        unsigned __int8 a5,
        id a6,
        id a7,
        id *a8)
{
  __int64 v11; // x25
  id v13; // x19
  id v14; // x27
  id v15; // x21
  TSPDocumentProperties *v16; // x24
  id v17; // x23
  TSPFilePackage *v18; // x25
  id v19; // x26
  NSFileManager *v20; // x23
  void *v21; // x24
  unsigned int v22; // w27
  TSPDocumentProperties *v23; // x27
  id v24; // x28
  id v25; // x0
  id v26; // x23
  id v27; // x0
  id v28; // x24
  _UNKNOWN **v29; // x3
  id v30; // x26
  unsigned int v31; // w24
  void *v33; // x25
  id v34; // [xsp+10h] [xbp-A0h]
  id v35; // [xsp+18h] [xbp-98h] BYREF
  id v36; // [xsp+20h] [xbp-90h] BYREF
  id v37; // [xsp+28h] [xbp-88h] BYREF
  id v38; // [xsp+30h] [xbp-80h] BYREF
  id v39; // [xsp+38h] [xbp-78h] BYREF
  id v40; // [xsp+40h] [xbp-70h] BYREF
  char v41; // [xsp+4Fh] [xbp-61h] BYREF
  id v42; // [xsp+50h] [xbp-60h] BYREF
  id v43; // [xsp+58h] [xbp-58h] BYREF

  v11 = a5;
  v13 = objc_retain(a3);
  v14 = objc_retain(a6);
  v15 = objc_retain(a7);
  if ( !+[TSPDirectoryPackage isValidPackageAtURL:](&OBJC_CLASS___TSPDirectoryPackage, "isValidPackageAtURL:", v13) )
  {
    v41 = 0;
    v34 = v14;
    v20 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
    v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "path"));
    v22 = -[NSFileManager fileExistsAtPath:isDirectory:](v20, "fileExistsAtPath:isDirectory:", v21, &v41);
    objc_release(v21);
    objc_release(v20);
    v40 = 0LL;
    v16 = (TSPDocumentProperties *)objc_retainAutoreleasedReturnValue(
                                     +[TSUZipFileArchive zipArchiveFromURL:options:error:](
                                       &OBJC_CLASS___TSUZipFileArchive,
                                       "zipArchiveFromURL:options:error:",
                                       v13,
                                       a4 | 5,
                                       &v40));
    v17 = objc_retain(v40);
    if ( v16 )
    {
      if ( +[TSPFilePackage isValidPackageAtZipArchive:](
             &OBJC_CLASS___TSPFilePackage,
             "isValidPackageAtZipArchive:",
             v16) )
      {
        v39 = v17;
        v23 = -[TSPDocumentProperties initWithFilePackageURL:zipArchive:allowMissingPropertyList:error:](
                objc_alloc(&OBJC_CLASS___TSPDocumentProperties),
                "initWithFilePackageURL:zipArchive:allowMissingPropertyList:error:",
                v13,
                v16,
                1LL,
                &v39);
        v24 = objc_retain(v39);
        objc_release(v17);
        if ( v23 )
        {
          v38 = v24;
          v18 = -[TSPPackage initWithURL:zipArchiveOrNil:zipArchiveOptions:packageIdentifier:documentProperties:decryptionKey:fileCoordinatorDelegate:error:](
                  objc_alloc(&OBJC_CLASS___TSPFilePackage),
                  "initWithURL:zipArchiveOrNil:zipArchiveOptions:packageIdentifier:documentProperties:decryptionKey:fileC"
                  "oordinatorDelegate:error:",
                  v13,
                  v16,
                  a4,
                  v11,
                  v23,
                  v34,
                  v15,
                  &v38);
          v25 = v38;
LABEL_11:
          v26 = objc_retain(v25);
          objc_release(v24);
          v24 = v26;
LABEL_21:
          objc_release(v23);
          v17 = v24;
          goto LABEL_22;
        }
        goto LABEL_20;
      }
      v14 = v34;
      if ( ((unsigned int)-[TSPDocumentProperties hasNonEmptyEntries](v16, "hasNonEmptyEntries") & 1) != 0 )
        goto LABEL_13;
      v23 = (TSPDocumentProperties *)objc_retainAutoreleasedReturnValue(
                                       +[NSError tsp_readCorruptZipOfPackageErrorWithUserInfo:](
                                         &OBJC_CLASS___NSError,
                                         "tsp_readCorruptZipOfPackageErrorWithUserInfo:",
                                         0LL));
      objc_release(v17);
      v27 = objc_retainAutoreleasedReturnValue(
              +[NSError tsp_errorWithError:hints:](
                &OBJC_CLASS___NSError,
                "tsp_errorWithError:hints:",
                v23,
                &off_1001E3230));
    }
    else
    {
      if ( +[TSPExpandedDirectoryPackage isValidPackageAtURL:](
             &OBJC_CLASS___TSPExpandedDirectoryPackage,
             "isValidPackageAtURL:",
             v13) )
      {
        v37 = v17;
        v23 = -[TSPDocumentProperties initWithDocumentURL:allowMissingPropertyList:error:](
                objc_alloc(&OBJC_CLASS___TSPDocumentProperties),
                "initWithDocumentURL:allowMissingPropertyList:error:",
                v13,
                1LL,
                &v37);
        v24 = objc_retain(v37);
        objc_release(v17);
        if ( v23 )
        {
          v36 = v24;
          v18 = -[TSPPackage initWithURL:zipArchiveOrNil:zipArchiveOptions:packageIdentifier:documentProperties:decryptionKey:fileCoordinatorDelegate:error:](
                  objc_alloc(&OBJC_CLASS___TSPExpandedDirectoryPackage),
                  "initWithURL:zipArchiveOrNil:zipArchiveOptions:packageIdentifier:documentProperties:decryptionKey:fileC"
                  "oordinatorDelegate:error:",
                  v13,
                  0LL,
                  a4,
                  v11,
                  v23,
                  v34,
                  v15,
                  &v36);
          v25 = v36;
          goto LABEL_11;
        }
LABEL_20:
        v18 = 0LL;
        goto LABEL_21;
      }
      v18 = 0LL;
      if ( ((unsigned int)objc_msgSend(v17, "tsu_isReadError") & v22) != 1 || v41 )
        goto LABEL_22;
      if ( +[TSUZipFileArchive isZipArchiveAtURL:error:](
             &OBJC_CLASS___TSUZipFileArchive,
             "isZipArchiveAtURL:error:",
             v13,
             0LL) )
      {
        v18 = 0LL;
LABEL_22:
        v14 = v34;
        goto LABEL_23;
      }
      v14 = v34;
      if ( !+[TSUZipFileArchive isZipSignatureAllZerosAtURL:](
              &OBJC_CLASS___TSUZipFileArchive,
              "isZipSignatureAllZerosAtURL:",
              v13) )
        goto LABEL_13;
      v33 = objc_retainAutoreleasedReturnValue(objc_msgSend(v17, "userInfo"));
      v23 = (TSPDocumentProperties *)objc_retainAutoreleasedReturnValue(
                                       +[NSError tsp_readCorruptZipOfPackageErrorWithUserInfo:](
                                         &OBJC_CLASS___NSError,
                                         "tsp_readCorruptZipOfPackageErrorWithUserInfo:",
                                         v33));
      objc_release(v17);
      objc_release(v33);
      v27 = objc_retainAutoreleasedReturnValue(
              +[NSError tsp_errorWithError:hints:](
                &OBJC_CLASS___NSError,
                "tsp_errorWithError:hints:",
                v23,
                &off_1001E3248));
    }
    v24 = v27;
    goto LABEL_20;
  }
  v43 = 0LL;
  v16 = -[TSPDocumentProperties initWithDocumentURL:allowMissingPropertyList:error:](
          objc_alloc(&OBJC_CLASS___TSPDocumentProperties),
          "initWithDocumentURL:allowMissingPropertyList:error:",
          v13,
          1LL,
          &v43);
  v17 = objc_retain(v43);
  if ( !v16 )
  {
LABEL_13:
    v18 = 0LL;
    goto LABEL_23;
  }
  v42 = v17;
  v18 = -[TSPPackage initWithURL:zipArchiveOrNil:zipArchiveOptions:packageIdentifier:documentProperties:decryptionKey:fileCoordinatorDelegate:error:](
          objc_alloc(&OBJC_CLASS___TSPDirectoryPackage),
          "initWithURL:zipArchiveOrNil:zipArchiveOptions:packageIdentifier:documentProperties:decryptionKey:fileCoordinat"
          "orDelegate:error:",
          v13,
          0LL,
          a4,
          v11,
          v16,
          v14,
          v15,
          &v42);
  v19 = objc_retain(v42);
  objc_release(v17);
  v17 = v19;
LABEL_23:
  objc_release(v16);
  if ( a8 && !v18 )
  {
    v41 = 0;
    if ( ((unsigned int)objc_msgSend(v17, "tsp_isCorruptZipOfPackageError") & 1) != 0
      || !+[TSPPackage isZeroLengthFileOrEmptyDirectory:isDirectory:](
            &OBJC_CLASS___TSPPackage,
            "isZeroLengthFileOrEmptyDirectory:isDirectory:",
            v13,
            &v41) )
    {
      if ( v17 )
        goto LABEL_35;
      v35 = 0LL;
      v31 = (unsigned int)objc_msgSend(v13, "checkResourceIsReachableAndReturnError:", &v35);
      v17 = objc_retain(v35);
      if ( !v31 )
        goto LABEL_35;
      v30 = objc_retainAutoreleasedReturnValue(
              +[NSError tsp_unknownReadErrorWithUserInfo:](
                &OBJC_CLASS___NSError,
                "tsp_unknownReadErrorWithUserInfo:",
                0LL));
      v28 = v17;
    }
    else
    {
      v28 = objc_retainAutoreleasedReturnValue(
              +[NSError tsp_readCorruptZipOfPackageErrorWithUserInfo:](
                &OBJC_CLASS___NSError,
                "tsp_readCorruptZipOfPackageErrorWithUserInfo:",
                0LL));
      objc_release(v17);
      if ( v41 )
        v29 = &off_1001E3260;
      else
        v29 = &off_1001E3278;
      v30 = objc_retainAutoreleasedReturnValue(+[NSError tsp_errorWithError:hints:](&OBJC_CLASS___NSError, "tsp_errorWithError:hints:", v28, v29));
    }
    objc_release(v28);
    v17 = v30;
LABEL_35:
    v17 = objc_retainAutorelease(v17);
    *a8 = v17;
  }
  objc_release(v17);
  objc_release(v15);
  objc_release(v14);
  objc_release(v13);
  return v18;
}