-[TSPDirectoryPackage newDocumentPropertiesWithURL:zipProvider:error:]
id __cdecl -[TSPDirectoryPackage newDocumentPropertiesWithURL:zipProvider:error:](
        TSPDirectoryPackage *self,
        SEL a2,
        id a3,
        id a4,
        id *a5)
{
  id v6; // x19
  TSPDocumentProperties *v7; // x20

  v6 = objc_retain(a3);
  v7 = -[TSPDocumentProperties initWithDocumentURL:allowMissingPropertyList:error:](
         objc_alloc(&OBJC_CLASS___TSPDocumentProperties),
         "initWithDocumentURL:allowMissingPropertyList:error:",
         v6,
         0LL,
         a5);
  objc_release(v6);
  return v7;
}