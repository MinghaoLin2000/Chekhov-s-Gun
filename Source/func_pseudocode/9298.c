+[TSPPackageConverter newPackageConverterWithURL:preserveExtendedAttributes:error:]
// local variable allocation has failed, the output may be wrong!
id __cdecl +[TSPPackageConverter newPackageConverterWithURL:preserveExtendedAttributes:error:](
        id a1,
        SEL a2,
        id a3,
        bool a4,
        id *a5)
{
  _BOOL8 v6; // x22
  id v7; // x19
  TSPPackageConverterFileCoordinatorDelegate *v8; // x20
  id v9; // x0
  void *v10; // x23
  unsigned __int64 v11; // x0
  objc_class *v12; // x0
  void *v13; // x21

  v6 = a4;
  v7 = objc_retain(a3);
  v8 = -[TSPPackageConverterFileCoordinatorDelegate initWithURL:](
         objc_alloc(&OBJC_CLASS___TSPPackageConverterFileCoordinatorDelegate),
         "initWithURL:",
         v7);
  v9 = +[TSPPackage newLazyPackageWithURL:packageIdentifier:decryptionKey:fileCoordinatorDelegate:](
         &OBJC_CLASS___TSPPackage,
         "newLazyPackageWithURL:packageIdentifier:decryptionKey:fileCoordinatorDelegate:",
         v7,
         1LL,
         0LL,
         v8);
  v10 = v9;
  if ( v9 )
  {
    v11 = (unsigned __int64)objc_msgSend(v9, "packageType");
    if ( v11 >= 3 )
      v12 = 0LL;
    else
      v12 = (objc_class *)objc_opt_class(*(&off_1001D26A0)[v11]);
    v13 = objc_msgSend(
            objc_alloc(v12),
            "initWithURL:package:fileCoordinatorDelegate:preserveExtendedAttributes:error:",
            v7,
            v10,
            v8,
            v6,
            a5);
  }
  else
  {
    v13 = 0LL;
  }
  objc_release(v10);
  objc_release(v8);
  objc_release(v7);
  return v13;
}