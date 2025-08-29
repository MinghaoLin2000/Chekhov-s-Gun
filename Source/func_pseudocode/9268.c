+[TSPFilePackage isValidOrEmptyPackageOrTangierEditingFormatAtURL:hasNativeUTI:]
bool __cdecl +[TSPFilePackage isValidOrEmptyPackageOrTangierEditingFormatAtURL:hasNativeUTI:](
        id a1,
        SEL a2,
        id a3,
        bool a4)
{
  _BOOL4 v4; // w21
  id v6; // x19
  id v7; // x20
  unsigned int v8; // w22

  v4 = a4;
  v6 = objc_retain(a3);
  if ( (unsigned int)objc_msgSend(v6, "checkResourceIsReachableAndReturnError:", 0LL) )
  {
    v7 = objc_retainAutoreleasedReturnValue(
           +[TSUZipFileArchive zipArchiveFromURL:options:error:](
             &OBJC_CLASS___TSUZipFileArchive,
             "zipArchiveFromURL:options:error:",
             v6,
             5LL,
             0LL));
    if ( v7 )
    {
      if ( ((unsigned int)objc_msgSend(a1, "isValidPackageAtZipArchive:", v7) & 1) != 0 )
      {
        LOBYTE(v8) = 1;
      }
      else
      {
        v8 = (unsigned int)objc_msgSend(a1, "isValidTangierEditingFormatAtZipArchive:", v7);
        if ( ((v8 | !v4) & 1) == 0 )
          v8 = (unsigned int)objc_msgSend(v7, "hasNonEmptyEntries") ^ 1;
      }
    }
    else
    {
      LOBYTE(v8) = 0;
    }
    objc_release(v7);
  }
  else
  {
    LOBYTE(v8) = 0;
  }
  objc_release(v6);
  return v8;
}