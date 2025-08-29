+[TSPFilePackage isValidPackageAtURL:]
bool __cdecl +[TSPFilePackage isValidPackageAtURL:](id a1, SEL a2, id a3)
{
  id v4; // x19
  id v5; // x21
  unsigned __int8 v6; // w20

  v4 = objc_retain(a3);
  if ( (unsigned int)objc_msgSend(v4, "checkResourceIsReachableAndReturnError:", 0LL) )
  {
    v5 = objc_retainAutoreleasedReturnValue(
           +[TSUZipFileArchive zipArchiveFromURL:options:error:](
             &OBJC_CLASS___TSUZipFileArchive,
             "zipArchiveFromURL:options:error:",
             v4,
             5LL,
             0LL));
    v6 = (unsigned __int8)objc_msgSend(a1, "isValidPackageAtZipArchive:", v5);
    objc_release(v5);
  }
  else
  {
    v6 = 0;
  }
  objc_release(v4);
  return v6;
}