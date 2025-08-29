+[TSPPackage newLazyPackageWithURL:packageIdentifier:decryptionKey:fileCoordinatorDelegate:]
// local variable allocation has failed, the output may be wrong!
id __cdecl +[TSPPackage newLazyPackageWithURL:packageIdentifier:decryptionKey:fileCoordinatorDelegate:](
        id a1,
        SEL a2,
        id a3,
        unsigned __int8 a4,
        id a5,
        id a6)
{
  __int64 v8; // x22
  id v9; // x19
  id v10; // x20
  id v11; // x21
  __objc2_class **v12; // x8
  unsigned int v13; // w0
  void *v14; // x22

  v8 = a4;
  v9 = objc_retain(a3);
  v10 = objc_retain(a5);
  v11 = objc_retain(a6);
  if ( +[TSPDirectoryPackage isValidPackageAtURL:](&OBJC_CLASS___TSPDirectoryPackage, "isValidPackageAtURL:", v9) )
  {
    v12 = off_1001D0D60;
  }
  else
  {
    v13 = +[TSPExpandedDirectoryPackage isValidPackageAtURL:](
            &OBJC_CLASS___TSPExpandedDirectoryPackage,
            "isValidPackageAtURL:",
            v9);
    v12 = off_1001D0D78;
    if ( v13 )
      v12 = off_1001D0D70;
  }
  v14 = objc_msgSend(
          objc_alloc((Class)objc_opt_class(*v12)),
          "initWithPackageIdentifier:documentProperties:fileFormatVersion:decryptionKey:fileCoordinatorDelegate:isLazyLoading:",
          v8,
          0LL,
          0LL,
          v10,
          v11,
          1LL);
  objc_release(v11);
  objc_release(v10);
  objc_release(v9);
  return v14;
}