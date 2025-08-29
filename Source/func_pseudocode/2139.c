-[AMPPhotoKitImporter loadGroupsWithFetchLimit:]
void __cdecl -[AMPPhotoKitImporter loadGroupsWithFetchLimit:](AMPPhotoKitImporter *self, SEL a2, unsigned __int64 a3)
{
  id v5; // x19
  void *v6; // x20
  AMPPHMediaGroup *v7; // x21
  id v8; // x24
  AMPPHMediaGroup *v9; // x21
  AMPPHMediaGroup *v10; // x24
  NSMutableArray *v11; // x25
  __int64 v12; // x25
  AMPPHMediaGroup *v13; // x24
  PHFetchResult *v14; // x24
  AMPPHMediaGroup *v15; // x25
  id v16; // x26
  AMPPHMediaGroup *v17; // x25
  AMPPHMediaGroup *v18; // x26
  NSMutableArray *v19; // x27
  AMPPHMediaGroup *v20; // x26
  AMPPHMediaGroup *v21; // x25
  _QWORD v22[5]; // [xsp+8h] [xbp-F8h] BYREF
  id v23; // [xsp+30h] [xbp-D0h]
  id v24; // [xsp+38h] [xbp-C8h]
  unsigned __int64 v25; // [xsp+40h] [xbp-C0h]
  _QWORD v26[5]; // [xsp+48h] [xbp-B8h] BYREF
  __int64 v27; // [xsp+70h] [xbp-90h] BYREF
  __int64 *v28; // [xsp+78h] [xbp-88h]
  __int64 v29; // [xsp+80h] [xbp-80h]
  __int64 (__fastcall *v30)(); // [xsp+88h] [xbp-78h]
  __int64 (__fastcall *v31)(); // [xsp+90h] [xbp-70h]
  id v32; // [xsp+98h] [xbp-68h]

  v5 = objc_retainAutoreleasedReturnValue(-[AMPPhotoKitImporter getFetchOptionsForFetchLimit:](self, "getFetchOptionsForFetchLimit:", 0LL));
  v6 = objc_retainAutoreleasedReturnValue(
         +[PHCollectionList fetchRootAlbumCollectionListWithOptions:](
           &OBJC_CLASS___PHCollectionList,
           "fetchRootAlbumCollectionListWithOptions:",
           v5));
  v27 = 0LL;
  v28 = &v27;
  v29 = 0x3032000000LL;
  v30 = sub_10004B738;
  v31 = sub_10004B748;
  v32 = 0LL;
  v26[0] = _NSConcreteStackBlock;
  v26[1] = 3254779904LL;
  v26[2] = sub_10004D1D8;
  v26[3] = &unk_1000B9838;
  v26[4] = &v27;
  objc_msgSend(v6, "enumerateObjectsUsingBlock:", v26);
  v7 = objc_alloc(&OBJC_CLASS___AMPPHMediaGroup);
  v8 = objc_retainAutoreleasedReturnValue((id)sub_10004C2D4(CFSTR("Media Types")));
  v9 = -[AMPPHMediaGroup initWithName:uuid:mediaLibraryTypeIdentifier:](
         v7,
         "initWithName:uuid:mediaLibraryTypeIdentifier:",
         v8,
         CFSTR("AllMediaTypesGroup"),
         CFSTR("com.apple.Photos.AllMediaTypesGroup"));
  objc_release(v8);
  v10 = objc_retainAutoreleasedReturnValue(-[AMPPhotoKitImporter rootMediaGroup](self, "rootMediaGroup"));
  v11 = objc_retainAutoreleasedReturnValue(-[AMPPHMediaGroup childGroups](v10, "childGroups"));
  -[NSMutableArray addObject:](v11, "addObject:", v9);
  objc_release(v11);
  objc_release(v10);
  v12 = v28[5];
  v13 = objc_retainAutoreleasedReturnValue(-[AMPPhotoKitImporter rootMediaGroup](self, "rootMediaGroup"));
  -[AMPPhotoKitImporter recursePHCollectionList:withParent:and:withFetchLimit:](
    self,
    "recursePHCollectionList:withParent:and:withFetchLimit:",
    v12,
    v13,
    v9,
    a3);
  objc_release(v13);
  v14 = objc_retainAutoreleasedReturnValue(
          +[PHAssetCollection fetchAssetCollectionsWithType:subtype:options:](
            &OBJC_CLASS___PHAssetCollection,
            "fetchAssetCollectionsWithType:subtype:options:",
            1LL,
            101LL,
            v5));
  if ( v14 )
  {
    v15 = objc_alloc(&OBJC_CLASS___AMPPHMediaGroup);
    v16 = objc_retainAutoreleasedReturnValue((id)sub_10004C2D4(CFSTR("Shared Albums")));
    v17 = -[AMPPHMediaGroup initWithName:uuid:mediaLibraryTypeIdentifier:](
            v15,
            "initWithName:uuid:mediaLibraryTypeIdentifier:",
            v16,
            CFSTR("SharedGroup"),
            CFSTR("com.apple.Photos.SharedGroup"));
    objc_release(v16);
    v18 = objc_retainAutoreleasedReturnValue(-[AMPPhotoKitImporter rootMediaGroup](self, "rootMediaGroup"));
    v19 = objc_retainAutoreleasedReturnValue(-[AMPPHMediaGroup childGroups](v18, "childGroups"));
    -[NSMutableArray addObject:](v19, "addObject:", v17);
    objc_release(v19);
    objc_release(v18);
    v22[0] = _NSConcreteStackBlock;
    v22[1] = 3254779904LL;
    v22[2] = sub_10004D1E8;
    v22[3] = &unk_1000B9868;
    v22[4] = self;
    v20 = objc_retain(v17);
    v23 = v20;
    v24 = objc_retain(v9);
    v25 = a3;
    -[PHFetchResult enumerateObjectsUsingBlock:](v14, "enumerateObjectsUsingBlock:", v22);
    objc_release(v24);
    objc_release(v23);
    objc_release(v20);
  }
  v21 = objc_retainAutoreleasedReturnValue(-[AMPPhotoKitImporter rootMediaGroup](self, "rootMediaGroup"));
  -[AMPPhotoKitImporter createPeopleGroupAndAddTo:withFetchLimit:](
    self,
    "createPeopleGroupAndAddTo:withFetchLimit:",
    v21,
    a3);
  objc_release(v21);
  objc_release(v14);
  objc_release(v9);
  _Block_object_dispose(&v27, 8);
  objc_release(v32);
  objc_release(v6);
  objc_release(v5);
}