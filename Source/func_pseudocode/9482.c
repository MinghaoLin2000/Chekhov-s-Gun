-[TSPDocumentProperties initWithDocumentFileURL:allowMissingPropertyList:error:]
// local variable allocation has failed, the output may be wrong!
TSPDocumentProperties *__cdecl -[TSPDocumentProperties initWithDocumentFileURL:allowMissingPropertyList:error:](
        TSPDocumentProperties *self,
        SEL a2,
        id a3,
        bool a4,
        id *a5)
{
  _BOOL8 v6; // x23
  id v8; // x20
  id v9; // x21
  TSPDocumentProperties *v10; // x23

  v6 = a4;
  v8 = objc_retain(a3);
  v9 = objc_retainAutoreleasedReturnValue(
         +[TSUZipFileArchive zipArchiveFromURL:options:error:](
           &OBJC_CLASS___TSUZipFileArchive,
           "zipArchiveFromURL:options:error:",
           v8,
           5LL,
           a5));
  if ( !v9 )
    goto LABEL_6;
  if ( !+[TSPFilePackage isValidPackageAtZipArchive:](&OBJC_CLASS___TSPFilePackage, "isValidPackageAtZipArchive:", v9) )
  {
    if ( a5 )
    {
      v10 = 0LL;
      *a5 = objc_autorelease(
              objc_retainAutoreleasedReturnValue(
                +[NSError tsp_readCorruptedDocumentErrorWithUserInfo:](
                  &OBJC_CLASS___NSError,
                  "tsp_readCorruptedDocumentErrorWithUserInfo:",
                  0LL)));
      goto LABEL_7;
    }
LABEL_6:
    v10 = 0LL;
    goto LABEL_7;
  }
  self = objc_retain(
           -[TSPDocumentProperties initWithFilePackageURL:zipArchive:allowMissingPropertyList:error:](
             self,
             "initWithFilePackageURL:zipArchive:allowMissingPropertyList:error:",
             v8,
             v9,
             v6,
             a5));
  v10 = self;
LABEL_7:
  objc_release(v9);
  objc_release(v8);
  objc_release(self);
  return v10;
}