-[AMPPhotoKitImporter loadMediaObjectsFromAssetFetchResult:forGroup:]
void __cdecl -[AMPPhotoKitImporter loadMediaObjectsFromAssetFetchResult:forGroup:](
        AMPPhotoKitImporter *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  id v7; // x20
  id v8; // x21
  void **v9; // [xsp+0h] [xbp-50h] BYREF
  __int64 v10; // [xsp+8h] [xbp-48h]
  __int64 (__fastcall *v11)(int, id); // [xsp+10h] [xbp-40h]
  void *v12; // [xsp+18h] [xbp-38h]
  AMPPhotoKitImporter *v13; // [xsp+20h] [xbp-30h]
  id v14; // [xsp+28h] [xbp-28h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v9 = _NSConcreteStackBlock;
  v10 = 3254779904LL;
  v11 = sub_10004BD7C;
  v12 = &unk_1000B97D8;
  v13 = self;
  v8 = objc_retain(objc_alloc_init((Class)&OBJC_CLASS___NSMutableArray));
  v14 = v8;
  objc_msgSend(v6, "enumerateObjectsUsingBlock:", &v9);
  objc_msgSend(v7, "setMediaObjects:", v8, v9, v10, v11, v12, v13);
  objc_release(v14);
  objc_release(v8);
  objc_release(v7);
  objc_release(v6);
}