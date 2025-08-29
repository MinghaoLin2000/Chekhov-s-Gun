-[AMPPhotoKitImporter recursePHCollectionList:withParent:and:withFetchLimit:]
void __cdecl -[AMPPhotoKitImporter recursePHCollectionList:withParent:and:withFetchLimit:](
        AMPPhotoKitImporter *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        unsigned __int64 a6)
{
  id v10; // x19
  id v11; // x20
  id v12; // x21
  id v13; // x25
  PHFetchResult *v14; // x24
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v10 = objc_retain(a3);
  v11 = objc_retain(a4);
  v12 = objc_retain(a5);
  v13 = objc_retainAutoreleasedReturnValue(-[AMPPhotoKitImporter getFetchOptionsForFetchLimit:](self, "getFetchOptionsForFetchLimit:", 0LL));
  v14 = objc_retainAutoreleasedReturnValue(
          +[PHCollection fetchCollectionsInCollectionList:options:](
            &OBJC_CLASS___PHCollection,
            "fetchCollectionsInCollectionList:options:",
            v10,
            v13));
  objc_release(v13);
  -[AMPPhotoKitImporter recursePHCollectionFetchResult:withParent:and:withFetchLimit:](
    self,
    "recursePHCollectionFetchResult:withParent:and:withFetchLimit:",
    v14,
    v11,
    v12,
    a6);
  objc_release(v14);
  objc_release(v12);
  objc_release(v11);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v10);
}