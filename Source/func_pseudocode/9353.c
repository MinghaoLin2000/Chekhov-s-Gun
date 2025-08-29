-[TSPDirectoryPackageWriter newPackageWithPackageIdentifier:documentProperties:fileFormatVersion:decryptionKey:fileCoordinatorDelegate:]
// local variable allocation has failed, the output may be wrong!
id __cdecl -[TSPDirectoryPackageWriter newPackageWithPackageIdentifier:documentProperties:fileFormatVersion:decryptionKey:fileCoordinatorDelegate:](
        TSPDirectoryPackageWriter *self,
        SEL a2,
        unsigned __int8 a3,
        id a4,
        unsigned __int64 a5,
        id a6,
        id a7)
{
  __int64 v10; // x23
  id v11; // x19
  id v12; // x20
  id v13; // x22
  TSPDirectoryPackage *v14; // x21

  v10 = a3;
  v11 = objc_retain(a4);
  v12 = objc_retain(a6);
  v13 = objc_retain(a7);
  v14 = -[TSPPackage initWithPackageIdentifier:documentProperties:fileFormatVersion:decryptionKey:fileCoordinatorDelegate:isLazyLoading:](
          objc_alloc(&OBJC_CLASS___TSPDirectoryPackage),
          "initWithPackageIdentifier:documentProperties:fileFormatVersion:decryptionKey:fileCoordinatorDelegate:isLazyLoading:",
          v10,
          v11,
          a5,
          v12,
          v13,
          0LL);
  objc_release(v13);
  objc_release(v12);
  objc_release(v11);
  return v14;
}