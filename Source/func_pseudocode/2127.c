-[AMPPhotoKitImporter getFetchOptionsForFetchLimit:]
id __cdecl -[AMPPhotoKitImporter getFetchOptionsForFetchLimit:](AMPPhotoKitImporter *self, SEL a2, unsigned __int64 a3)
{
  PHPhotoLibrary *v4; // x21
  void *v5; // x19
  NSArray *v6; // x21
  _QWORD v8[2]; // [xsp+8h] [xbp-38h] BYREF
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(-[AMPPhotoKitImporter photoLibrary](self, "photoLibrary"));
  v5 = objc_retainAutoreleasedReturnValue(-[PHPhotoLibrary librarySpecificFetchOptions](v4, "librarySpecificFetchOptions"));
  objc_release(v4);
  if ( v5 )
  {
    objc_msgSend(v5, "setIncludeUserSmartAlbums:", 1LL);
    v8[0] = PHAssetPropertySetPhotosInfoPanelExtended;
    v8[1] = PHAssetPropertySetDescription;
    v6 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", v8, 2LL));
    objc_msgSend(v5, "addFetchPropertySets:", v6);
    objc_release(v6);
    if ( a3 )
      objc_msgSend(v5, "setFetchLimit:", a3);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}