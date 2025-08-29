-[TSPPackage initWithURL:zipArchiveOrNil:zipArchiveOptions:packageIdentifier:documentProperties:decryptionKey:fileCoordinatorDelegate:error:]
// local variable allocation has failed, the output may be wrong!
TSPPackage *__cdecl -[TSPPackage initWithURL:zipArchiveOrNil:zipArchiveOptions:packageIdentifier:documentProperties:decryptionKey:fileCoordinatorDelegate:error:](
        TSPPackage *self,
        SEL a2,
        id a3,
        id a4,
        unsigned __int64 a5,
        unsigned __int8 a6,
        id a7,
        id a8,
        id a9,
        id *a10)
{
  __int64 v12; // x26
  id v16; // x19
  id v17; // x20
  id v18; // x21
  id v19; // x23
  id v20; // x24
  TSPPackage *v21; // x0
  TSPPackage *v22; // x22
  TSUZipFileArchive **p_zipArchive; // x26
  TSUZipFileArchive *v24; // x2
  TSUZipFileArchive *v25; // x0
  TSUZipFileArchive *v26; // x8

  v12 = a6;
  v16 = objc_retain(a3);
  v17 = objc_retain(a4);
  v18 = objc_retain(a7);
  v19 = objc_retain(a8);
  v20 = objc_retain(a9);
  v21 = -[TSPPackage initWithPackageIdentifier:documentProperties:fileFormatVersion:decryptionKey:fileCoordinatorDelegate:isLazyLoading:](
          self,
          "initWithPackageIdentifier:documentProperties:fileFormatVersion:decryptionKey:fileCoordinatorDelegate:isLazyLoading:",
          v12,
          v18,
          0LL,
          v19,
          v20,
          0LL);
  v22 = v21;
  if ( v21 )
  {
    p_zipArchive = &v21->_zipArchive;
    objc_storeStrong((id *)&v21->_zipArchive, a4);
    v22->_additionalZipArchiveOptions = a5;
    if ( (unsigned int)objc_msgSend((id)objc_opt_class(v22), "hasZipArchive") )
    {
      if ( (v24 = *p_zipArchive) == 0LL
        && (v25 = -[TSPPackage newZipArchiveFromPackageURL:isLazyLoading:error:](
                    v22,
                    "newZipArchiveFromPackageURL:isLazyLoading:error:",
                    v16,
                    0LL,
                    a10),
            v26 = *p_zipArchive,
            *p_zipArchive = v25,
            objc_release(v26),
            (v24 = *p_zipArchive) == 0LL)
        || !-[TSPPackage didReloadZipArchive:packageURL:error:](
              v22,
              "didReloadZipArchive:packageURL:error:",
              v24,
              v16,
              a10) )
      {
        objc_release(v22);
        v22 = 0LL;
      }
    }
  }
  objc_release(v20);
  objc_release(v19);
  objc_release(v18);
  objc_release(v17);
  objc_release(v16);
  return v22;
}