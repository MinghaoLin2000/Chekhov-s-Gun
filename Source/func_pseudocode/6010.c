-[PAMediaConversionServiceiCloudPhotoLibraryImageMetadataPolicy processMetadata:]
id __cdecl -[PAMediaConversionServiceiCloudPhotoLibraryImageMetadataPolicy processMetadata:](
        PAMediaConversionServiceiCloudPhotoLibraryImageMetadataPolicy *self,
        SEL a2,
        id a3)
{
  id v4; // x22
  void *v5; // x19
  void *v6; // x20
  id v7; // x21
  void *v8; // x22
  void *v9; // x24
  unsigned int v10; // w23
  id v11; // x23
  objc_super v13; // [xsp+0h] [xbp-40h] BYREF
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_msgSend(
         objc_alloc((Class)&OBJC_CLASS___PFMetadata),
         "initWithImageProperties:contentType:timeZoneLookup:",
         v4,
         0LL,
         0LL);
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "livePhotoPairingIdentifier"));
  v13.receiver = self;
  v13.super_class = (Class)&OBJC_CLASS___PAMediaConversionServiceiCloudPhotoLibraryImageMetadataPolicy;
  v7 = objc_retainAutoreleasedReturnValue(-[PAMediaConversionServiceDefaultImageMetadataPolicy processMetadata:](&v13, "processMetadata:", v4));
  objc_release(v4);
  if ( v6 )
  {
    v8 = objc_msgSend(v7, "mutableCopy");
    v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "livePhotoPairingIdentifierMetadataKey"));
    v10 = (unsigned int)+[PFMetadataUtilities addMakerApplePropertyWithKey:value:toProperties:](
                          &OBJC_CLASS___PFMetadataUtilities,
                          "addMakerApplePropertyWithKey:value:toProperties:",
                          v9,
                          v6,
                          v8);
    objc_release(v9);
    if ( v10 )
    {
      v11 = objc_retain(v8);
      objc_release(v7);
      v7 = v11;
    }
    objc_release(v8);
  }
  objc_release(v6);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}