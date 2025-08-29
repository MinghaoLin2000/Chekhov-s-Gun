+[TSUZipFileArchive isZipArchiveAtURL:error:]
bool __cdecl +[TSUZipFileArchive isZipArchiveAtURL:error:](id a1, SEL a2, id a3, id *a4)
{
  id v6; // x19
  void *v7; // x21
  void *v8; // x24
  __int64 v9; // x23
  unsigned __int8 v10; // w22
  id v11; // x23
  id v12; // x0

  v6 = objc_retain(a3);
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "path"));
  if ( objc_msgSend(v7, "length") )
  {
    v8 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "path")));
    v9 = open((const char *)objc_msgSend(v8, "fileSystemRepresentation"), 0, 0LL);
    objc_release(v8);
    if ( (v9 & 0x80000000) != 0 )
    {
      v11 = objc_retainAutoreleasedReturnValue(
              +[NSError tsu_fileReadPOSIXErrorWithNumber:userInfo:](
                &OBJC_CLASS___NSError,
                "tsu_fileReadPOSIXErrorWithNumber:userInfo:",
                (unsigned int)*__error(),
                0LL));
      v10 = 0;
      if ( !a4 )
        goto LABEL_12;
      goto LABEL_8;
    }
    v10 = (unsigned __int8)objc_msgSend(a1, "isZipArchiveAtFD:", v9);
    close(v9);
  }
  else
  {
    v10 = 0;
  }
  v11 = 0LL;
  if ( !a4 )
    goto LABEL_12;
LABEL_8:
  if ( (v10 & 1) == 0 )
  {
    if ( v11 )
    {
      *a4 = objc_retainAutorelease(v11);
    }
    else
    {
      v12 = objc_retainAutorelease(
              objc_retainAutoreleasedReturnValue(
                +[NSError tsu_fileReadUnknownErrorWithUserInfo:](
                  &OBJC_CLASS___NSError,
                  "tsu_fileReadUnknownErrorWithUserInfo:",
                  0LL)));
      *a4 = v12;
      objc_release(v12);
    }
  }
LABEL_12:
  objc_release(v11);
  objc_release(v7);
  objc_release(v6);
  return v10;
}