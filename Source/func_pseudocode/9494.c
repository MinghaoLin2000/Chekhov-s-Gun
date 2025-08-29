+[TSPDocumentProperties documentIsEncryptedAtURL:]
bool __cdecl +[TSPDocumentProperties documentIsEncryptedAtURL:](id a1, SEL a2, id a3)
{
  id v3; // x19
  void *v4; // x20
  NSFileManager *v5; // x21
  SFUZipArchive *v6; // x23
  void *v7; // x24
  unsigned __int8 v8; // w22
  id v9; // x0
  char v11; // [xsp+Fh] [xbp-31h] BYREF

  v3 = objc_retain(a3);
  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "path"));
  v5 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  v11 = 0;
  if ( !-[NSFileManager fileExistsAtPath:isDirectory:](v5, "fileExistsAtPath:isDirectory:", v4, &v11) )
    goto LABEL_11;
  if ( v11 )
  {
    v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "stringByAppendingPathComponent:", CFSTR(".iwpv2")));
    if ( !-[NSFileManager fileExistsAtPath:](v5, "fileExistsAtPath:", v6) )
    {
      v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "stringByAppendingPathComponent:", CFSTR(".iwpv")));
      v8 = -[NSFileManager fileExistsAtPath:](v5, "fileExistsAtPath:", v7);
      v9 = v7;
LABEL_9:
      objc_release(v9);
      goto LABEL_10;
    }
    goto LABEL_7;
  }
  if ( !+[SFUZipArchive isZipArchiveAtPath:](&OBJC_CLASS___SFUZipArchive, "isZipArchiveAtPath:", v4) )
  {
LABEL_11:
    v8 = 0;
    goto LABEL_12;
  }
  v6 = -[SFUZipArchive initWithPath:collapseCommonRootDirectory:](
         objc_alloc(&OBJC_CLASS___SFUZipArchive),
         "initWithPath:collapseCommonRootDirectory:",
         v4,
         1LL);
  if ( !-[SFUZipArchive isEncrypted](v6, "isEncrypted") )
  {
    v9 = objc_retainAutoreleasedReturnValue(-[SFUZipArchive entryWithName:](v6, "entryWithName:", CFSTR(".iwpv2")));
    v8 = v9 != 0LL;
    goto LABEL_9;
  }
LABEL_7:
  v8 = 1;
LABEL_10:
  objc_release(v6);
LABEL_12:
  objc_release(v5);
  objc_release(v4);
  objc_release(v3);
  return v8;
}