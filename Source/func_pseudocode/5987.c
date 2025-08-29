-[PAMediaConversionServiceSharedPhotoStreamImageMetadataPolicy processMetadata:]
id __cdecl -[PAMediaConversionServiceSharedPhotoStreamImageMetadataPolicy processMetadata:](
        PAMediaConversionServiceSharedPhotoStreamImageMetadataPolicy *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  void *v5; // x21
  void *v6; // x20
  NSArray *v7; // x23
  objc_super v9; // [xsp+8h] [xbp-68h] BYREF
  _QWORD v10[4]; // [xsp+18h] [xbp-58h] BYREF
  __int64 vars8; // [xsp+78h] [xbp+8h]

  v9.receiver = self;
  v9.super_class = (Class)&OBJC_CLASS___PAMediaConversionServiceSharedPhotoStreamImageMetadataPolicy;
  v4 = objc_retainAutoreleasedReturnValue(-[PAMediaConversionServiceDefaultImageMetadataPolicy processMetadata:](&v9, "processMetadata:", a3));
  if ( -[PAMediaConversionServiceSharedPhotoStreamImageMetadataPolicy metadataNeedsProcessing:](
         self,
         "metadataNeedsProcessing:",
         v4) )
  {
    v5 = objc_msgSend(v4, "mutableCopy");
    objc_msgSend(v5, "removeObjectForKey:", kCGImagePropertyIPTCDictionary);
    v6 = (void *)objc_opt_class(self);
    v10[0] = kCGImagePropertyTIFFMake;
    v10[1] = kCGImagePropertyTIFFModel;
    v10[2] = kCGImagePropertyTIFFCopyright;
    v10[3] = kCGImagePropertyTIFFDateTime;
    v7 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", v10, 4LL));
    objc_msgSend(
      v6,
      "_filterImageProperties:metadataWithKey:preserveProperties:",
      v5,
      kCGImagePropertyTIFFDictionary,
      v7);
    objc_release(v7);
    objc_release(v4);
    v4 = v5;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}