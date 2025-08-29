-[AMPPhotoKitImporter recursePHCollectionFetchResult:withParent:and:withFetchLimit:]
void __cdecl -[AMPPhotoKitImporter recursePHCollectionFetchResult:withParent:and:withFetchLimit:](
        AMPPhotoKitImporter *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        unsigned __int64 a6)
{
  id v9; // x20
  id v10; // x19
  _QWORD v11[5]; // [xsp+0h] [xbp-70h] BYREF
  id v12; // [xsp+28h] [xbp-48h]
  id v13; // [xsp+30h] [xbp-40h]
  unsigned __int64 v14; // [xsp+38h] [xbp-38h]

  v11[0] = _NSConcreteStackBlock;
  v11[1] = 3254779904LL;
  v11[2] = sub_10004CA2C;
  v11[3] = &unk_1000B9808;
  v11[4] = self;
  v12 = objc_retain(a4);
  v13 = objc_retain(a5);
  v14 = a6;
  v9 = objc_retain(v13);
  v10 = objc_retain(v12);
  objc_msgSend(a3, "enumerateObjectsUsingBlock:", v11);
  objc_release(v13);
  objc_release(v12);
  objc_release(v9);
  objc_release(v10);
}