-[TSPExpandedDirectoryPackage packageEntryInfoForComponentLocator:isStoredOutsideObjectArchive:]
id __cdecl -[TSPExpandedDirectoryPackage packageEntryInfoForComponentLocator:isStoredOutsideObjectArchive:](
        TSPExpandedDirectoryPackage *self,
        SEL a2,
        id a3,
        bool a4)
{
  id v6; // x19
  void *v7; // x21
  id v8; // x20
  objc_super v10; // [xsp+0h] [xbp-30h] BYREF
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v6 = objc_retain(a3);
  if ( !a4 )
  {
    v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(CFSTR("Index"), "stringByAppendingPathComponent:", v6));
    objc_release(v6);
    v6 = v7;
  }
  v10.receiver = self;
  v10.super_class = (Class)&OBJC_CLASS___TSPExpandedDirectoryPackage;
  v8 = objc_retainAutoreleasedReturnValue(
         -[TSPDirectoryPackage packageEntryInfoForComponentLocator:isStoredOutsideObjectArchive:](
           &v10,
           "packageEntryInfoForComponentLocator:isStoredOutsideObjectArchive:",
           v6,
           1LL));
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v8);
}