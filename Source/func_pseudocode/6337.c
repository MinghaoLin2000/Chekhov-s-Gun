+[PAMediaConversionServiceImagingUtilities imagePropertiesByImageIndexInImageSource:processedWithMetadataPolicy:]
id __cdecl +[PAMediaConversionServiceImagingUtilities imagePropertiesByImageIndexInImageSource:processedWithMetadataPolicy:](
        id a1,
        SEL a2,
        CGImageSource *a3,
        id a4)
{
  id v5; // x20
  size_t Count; // x21
  void *v7; // x22
  size_t i; // x23
  CFDictionaryRef v9; // x24
  const __CFDictionary *v10; // x25
  NSNull *v11; // x25
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v5 = objc_retain(a4);
  Count = CGImageSourceGetCount(a3);
  v7 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  if ( Count )
  {
    for ( i = 0LL; i != Count; ++i )
    {
      v9 = CGImageSourceCopyPropertiesAtIndex(a3, i, 0LL);
      if ( v5 )
      {
        v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "processMetadata:", v9));
        objc_release(v9);
        v9 = v10;
      }
      if ( v9 )
      {
        objc_msgSend(v7, "addObject:", v9);
      }
      else
      {
        v11 = objc_retainAutoreleasedReturnValue(+[NSNull null](&OBJC_CLASS___NSNull, "null"));
        objc_msgSend(v7, "addObject:", v11);
        objc_release(v11);
      }
      objc_release(v9);
    }
  }
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}