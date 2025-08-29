-[TSPFilePackage newDocumentPropertiesWithURL:zipProvider:error:]
id __cdecl -[TSPFilePackage newDocumentPropertiesWithURL:zipProvider:error:](
        TSPFilePackage *self,
        SEL a2,
        id a3,
        id a4,
        id *a5)
{
  id v7; // x19
  __int64 (__fastcall **v8)(id, id *); // x20
  id v9; // x22
  TSPDocumentProperties *v10; // x21

  v7 = objc_retain(a3);
  v8 = (__int64 (__fastcall **)(id, id *))objc_retain(a4);
  v9 = objc_retainAutoreleasedReturnValue((id)v8[2](v8, a5));
  if ( v9 )
    v10 = -[TSPDocumentProperties initWithFilePackageURL:zipArchive:allowMissingPropertyList:error:](
            objc_alloc(&OBJC_CLASS___TSPDocumentProperties),
            "initWithFilePackageURL:zipArchive:allowMissingPropertyList:error:",
            v7,
            v9,
            0LL,
            a5);
  else
    v10 = 0LL;
  objc_release(v9);
  objc_release(v8);
  objc_release(v7);
  return v10;
}