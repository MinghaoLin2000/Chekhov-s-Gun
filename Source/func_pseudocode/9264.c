+[TSPFilePackage isValidPackageAtZipArchive:]
bool __cdecl +[TSPFilePackage isValidPackageAtZipArchive:](id a1, SEL a2, id a3)
{
  id v3; // x19
  id v4; // x20
  void *v5; // x21
  bool v6; // w22
  id v7; // x0

  v3 = objc_retain(a3);
  v4 = objc_retainAutoreleasedReturnValue(
         +[TSPPackage objectArchiveEntryPathForPackageLocator:](
           &OBJC_CLASS___TSPPackage,
           "objectArchiveEntryPathForPackageLocator:",
           CFSTR("Metadata")));
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "entryForName:", v4));
  if ( v5 )
  {
    v6 = 1;
  }
  else
  {
    v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "entryForName:", CFSTR("Index.zip")));
    v6 = v7 != 0LL;
    objc_release(v7);
  }
  objc_release(v5);
  objc_release(v4);
  objc_release(v3);
  return v6;
}