-[AMPPhotoKitImporter createAMPPHMediaGroupFromPHAssetCollection:andAddTo:orAddTo:withFetchLimit:]
void __cdecl -[AMPPhotoKitImporter createAMPPHMediaGroupFromPHAssetCollection:andAddTo:orAddTo:withFetchLimit:](
        AMPPhotoKitImporter *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        unsigned __int64 a6)
{
  id v10; // x21
  AMPPHMediaGroup *v11; // x26
  void *v12; // x24
  id v13; // x22
  __CFString *v14; // x27
  const __CFString *v15; // x20
  char v16; // w19
  const __CFString *v17; // x28
  os_log_s *v18; // x28
  AMPPHMediaGroup *v19; // x26
  id v20; // x25
  PHFetchResult *v21; // x24
  void *v22; // x25
  id v23; // [xsp+0h] [xbp-70h]
  id v24; // [xsp+8h] [xbp-68h]
  uint8_t buf[4]; // [xsp+10h] [xbp-60h] BYREF
  unsigned int v26; // [xsp+14h] [xbp-5Ch]

  v10 = objc_retain(a3);
  v23 = objc_retain(a4);
  v24 = objc_retain(a5);
  v11 = objc_alloc(&OBJC_CLASS___AMPPHMediaGroup);
  v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "localizedTitle"));
  v13 = objc_retain(v10);
  v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "uuid"));
  if ( objc_msgSend(v13, "assetCollectionType") == (void *)2 )
  {
    v15 = CFSTR("panoramaAlbum");
    v16 = 1;
    v17 = CFSTR("com.apple.Photos.SmartAlbum");
    switch ( (unsigned __int64)objc_msgSend(v13, "assetCollectionSubtype") )
    {
      case 0xC8uLL:
      case 0xCDuLL:
      case 0xCEuLL:
      case 0xD8uLL:
        break;
      case 0xC9uLL:
        goto LABEL_19;
      case 0xCAuLL:
        v15 = CFSTR("videoAlbum");
        goto LABEL_19;
      case 0xCBuLL:
        objc_release(v14);
        v17 = CFSTR("com.apple.Photos.FavoritesGroup");
        v14 = CFSTR("favoritesAlbum");
        break;
      case 0xCCuLL:
        v15 = CFSTR("videoTimelapseAlbum");
        goto LABEL_19;
      case 0xCFuLL:
        v15 = CFSTR("burstAlbum");
        goto LABEL_19;
      case 0xD0uLL:
        v15 = CFSTR("videoSloMoAlbum");
        goto LABEL_19;
      case 0xD1uLL:
        goto LABEL_4;
      case 0xD2uLL:
        v15 = CFSTR("iPhoneFrontCameraAlbum");
        goto LABEL_19;
      case 0xD3uLL:
        v15 = CFSTR("screenshotAlbum");
        goto LABEL_19;
      case 0xD4uLL:
        v15 = CFSTR("depthEffectAlbum");
        goto LABEL_19;
      case 0xD5uLL:
        v15 = CFSTR("livePhotoAlbum");
        goto LABEL_19;
      case 0xD6uLL:
        v15 = CFSTR("animatedAlbum");
        goto LABEL_19;
      case 0xD7uLL:
        v15 = CFSTR("longExposureAlbum");
LABEL_19:
        objc_release(v14);
        v16 = 0;
        v14 = (__CFString *)v15;
        break;
      default:
        v18 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_10004B750());
        if ( os_log_type_enabled(v18, OS_LOG_TYPE_ERROR) )
        {
          *(_DWORD *)buf = 67109120;
          v26 = (unsigned int)objc_msgSend(v13, "assetCollectionSubtype");
          _os_log_error_impl(
            (void *)&_mh_execute_header,
            v18,
            OS_LOG_TYPE_ERROR,
            "unknown asset collection subtype %d",
            buf,
            8u);
        }
        objc_release(v18);
        v17 = CFSTR("com.apple.Photos.SmartAlbum");
        goto LABEL_5;
    }
  }
  else
  {
LABEL_4:
    v17 = CFSTR("com.apple.Photos.Album");
LABEL_5:
    v16 = 1;
  }
  objc_release(v13);
  v19 = -[AMPPHMediaGroup initWithName:uuid:mediaLibraryTypeIdentifier:](
          v11,
          "initWithName:uuid:mediaLibraryTypeIdentifier:",
          v12,
          v14,
          v17);
  objc_release(v14);
  objc_release(v12);
  v20 = objc_retainAutoreleasedReturnValue(-[AMPPhotoKitImporter getFetchOptionsForFetchLimit:](self, "getFetchOptionsForFetchLimit:", a6));
  v21 = objc_retainAutoreleasedReturnValue(
          +[PHAsset fetchAssetsInAssetCollection:options:](
            &OBJC_CLASS___PHAsset,
            "fetchAssetsInAssetCollection:options:",
            v13,
            v20));
  objc_release(v20);
  if ( -[PHFetchResult count](v21, "count") )
  {
    -[AMPPhotoKitImporter loadMediaObjectsFromAssetFetchResult:forGroup:](
      self,
      "loadMediaObjectsFromAssetFetchResult:forGroup:",
      v21,
      v19);
    if ( (v16 & 1) != 0 )
      v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v23, "childGroups"));
    else
      v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v24, "childGroups"));
    objc_msgSend(v22, "addObject:", v19);
    objc_release(v22);
  }
  objc_release(v21);
  objc_release(v19);
  objc_release(v24);
  objc_release(v23);
  objc_release(v13);
}