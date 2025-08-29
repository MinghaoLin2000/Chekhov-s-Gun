-[TSPExpandedDirectoryPackage newRawReadChannelForComponentLocator:isStoredOutsideObjectArchive:error:]
id __cdecl -[TSPExpandedDirectoryPackage newRawReadChannelForComponentLocator:isStoredOutsideObjectArchive:error:](
        TSPExpandedDirectoryPackage *self,
        SEL a2,
        id a3,
        bool a4,
        id *a5)
{
  id v8; // x19
  void *v9; // x22
  id v10; // x20
  objc_super v12; // [xsp+0h] [xbp-30h] BYREF

  v8 = objc_retain(a3);
  if ( !a4 )
  {
    v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(CFSTR("Index"), "stringByAppendingPathComponent:", v8));
    objc_release(v8);
    v8 = v9;
  }
  v12.receiver = self;
  v12.super_class = (Class)&OBJC_CLASS___TSPExpandedDirectoryPackage;
  v10 = -[TSPDirectoryPackage newRawReadChannelForComponentLocator:isStoredOutsideObjectArchive:error:](
          &v12,
          "newRawReadChannelForComponentLocator:isStoredOutsideObjectArchive:error:",
          v8,
          1LL,
          a5);
  objc_release(v8);
  return v10;
}