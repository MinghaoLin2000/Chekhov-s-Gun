-[TSPDocumentProperties initWithDocumentURL:allowMissingPropertyList:error:]
// local variable allocation has failed, the output may be wrong!
TSPDocumentProperties *__cdecl -[TSPDocumentProperties initWithDocumentURL:allowMissingPropertyList:error:](
        TSPDocumentProperties *self,
        SEL a2,
        id a3,
        bool a4,
        id *a5)
{
  _BOOL8 v6; // x22
  id v8; // x19
  TSPDocumentProperties *v9; // x0
  TSPDocumentProperties *v10; // x20

  v6 = a4;
  v8 = objc_retain(a3);
  if ( +[TSPDirectoryPackage isValidPackageAtURL:](&OBJC_CLASS___TSPDirectoryPackage, "isValidPackageAtURL:", v8)
    || +[TSPExpandedDirectoryPackage isValidPackageAtURL:](
         &OBJC_CLASS___TSPExpandedDirectoryPackage,
         "isValidPackageAtURL:",
         v8) )
  {
    v9 = -[TSPDocumentProperties initWithDocumentBundleURL:allowMissingPropertyList:error:](
           self,
           "initWithDocumentBundleURL:allowMissingPropertyList:error:",
           v8,
           v6,
           a5);
  }
  else
  {
    v9 = -[TSPDocumentProperties initWithDocumentFileURL:allowMissingPropertyList:error:](
           self,
           "initWithDocumentFileURL:allowMissingPropertyList:error:",
           v8,
           v6,
           a5);
  }
  v10 = objc_retain(v9);
  objc_release(v8);
  objc_release(v10);
  return v10;
}