-[AMPPhotoKitImporter createPeopleGroupAndAddTo:withFetchLimit:]
void __cdecl -[AMPPhotoKitImporter createPeopleGroupAndAddTo:withFetchLimit:](
        AMPPhotoKitImporter *self,
        SEL a2,
        id a3,
        unsigned __int64 a4)
{
  AMPPHMediaGroup *v6; // x20
  id v7; // x19
  void *v8; // x26
  NSSortDescriptor *v9; // x25
  NSArray *v10; // x20
  void *v11; // x19
  void *v12; // x25
  __int64 v13; // x22
  void *v14; // x21
  void *v15; // x28
  AMPPHMediaGroup *v16; // x27
  void *v17; // x19
  void *v18; // x20
  AMPPHMediaGroup *v19; // x27
  id v20; // x19
  void *v21; // x28
  NSMutableArray *v22; // x19
  void *v23; // x19
  id v24; // [xsp+0h] [xbp-150h]
  id v25; // [xsp+8h] [xbp-148h]
  id obj; // [xsp+10h] [xbp-140h]
  AMPPHMediaGroup *v27; // [xsp+18h] [xbp-138h]
  __int128 v28; // [xsp+20h] [xbp-130h] BYREF
  __int128 v29; // [xsp+30h] [xbp-120h]
  __int128 v30; // [xsp+40h] [xbp-110h]
  __int128 v31; // [xsp+50h] [xbp-100h]
  _BYTE v32[128]; // [xsp+68h] [xbp-E8h] BYREF
  NSSortDescriptor *v33; // [xsp+E8h] [xbp-68h] BYREF

  v24 = objc_retain(a3);
  v25 = objc_retainAutoreleasedReturnValue(-[AMPPhotoKitImporter getPersonDictionary](self, "getPersonDictionary"));
  if ( objc_msgSend(v25, "count") )
  {
    v6 = objc_alloc(&OBJC_CLASS___AMPPHMediaGroup);
    v7 = objc_retainAutoreleasedReturnValue((id)sub_10004C2D4(CFSTR("People")));
    v27 = -[AMPPHMediaGroup initWithName:uuid:mediaLibraryTypeIdentifier:](
            v6,
            "initWithName:uuid:mediaLibraryTypeIdentifier:",
            v7,
            CFSTR("peopleAlbum"),
            CFSTR("com.apple.Photos.FacesAlbum"));
    objc_release(v7);
    v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v25, "allValues"));
    v9 = objc_retainAutoreleasedReturnValue(
           +[NSSortDescriptor sortDescriptorWithKey:ascending:selector:](
             &OBJC_CLASS___NSSortDescriptor,
             "sortDescriptorWithKey:ascending:selector:",
             CFSTR("name"),
             1LL,
             "caseInsensitiveCompare:"));
    v33 = v9;
    v10 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", &v33, 1LL));
    v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "sortedArrayUsingDescriptors:", v10));
    objc_release(v10);
    objc_release(v9);
    objc_release(v8);
    v30 = 0u;
    v31 = 0u;
    v28 = 0u;
    v29 = 0u;
    obj = objc_retain(v11);
    v12 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v28, v32, 16LL);
    if ( v12 )
    {
      v13 = *(_QWORD *)v29;
      do
      {
        v14 = 0LL;
        do
        {
          if ( *(_QWORD *)v29 != v13 )
            objc_enumerationMutation(obj);
          v15 = *(void **)(*((_QWORD *)&v28 + 1) + 8LL * (_QWORD)v14);
          v16 = objc_alloc(&OBJC_CLASS___AMPPHMediaGroup);
          v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "name"));
          v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "uuid"));
          v19 = -[AMPPHMediaGroup initWithName:uuid:mediaLibraryTypeIdentifier:](
                  v16,
                  "initWithName:uuid:mediaLibraryTypeIdentifier:",
                  v17,
                  v18,
                  CFSTR("com.apple.Photos.FacesAlbum"));
          objc_release(v18);
          objc_release(v17);
          v20 = objc_retainAutoreleasedReturnValue(-[AMPPhotoKitImporter getFetchOptionsForFetchLimit:](self, "getFetchOptionsForFetchLimit:", a4));
          v21 = objc_retainAutoreleasedReturnValue(
                  +[PHAsset fetchAssetsForPerson:options:](
                    &OBJC_CLASS___PHAsset,
                    "fetchAssetsForPerson:options:",
                    v15,
                    v20));
          objc_release(v20);
          -[AMPPhotoKitImporter loadMediaObjectsFromAssetFetchResult:forGroup:](
            self,
            "loadMediaObjectsFromAssetFetchResult:forGroup:",
            v21,
            v19);
          v22 = objc_retainAutoreleasedReturnValue(-[AMPPHMediaGroup childGroups](v27, "childGroups"));
          -[NSMutableArray addObject:](v22, "addObject:", v19);
          objc_release(v22);
          objc_release(v21);
          objc_release(v19);
          v14 = (char *)v14 + 1;
        }
        while ( v12 != v14 );
        v12 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v28, v32, 16LL);
      }
      while ( v12 );
    }
    objc_release(obj);
    v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v24, "childGroups"));
    objc_msgSend(v23, "addObject:", v27);
    objc_release(v23);
    objc_release(obj);
    objc_release(v27);
  }
  objc_release(v25);
  objc_release(v24);
}