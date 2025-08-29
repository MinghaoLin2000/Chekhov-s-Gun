+[PAMediaConversionServiceSharedUtilitiesServiceSide imageSizeForImageData:]
CGSize __cdecl +[PAMediaConversionServiceSharedUtilitiesServiceSide imageSizeForImageData:](id a1, SEL a2, id a3)
{
  const __CFData *v5; // x19
  NSNumber *v6; // x21
  CGImageSource *v7; // x20
  CFDictionaryRef v8; // x21
  void *v9; // x22
  double width; // d8
  void *v11; // x23
  double height; // d9
  double v13; // d0
  double v14; // d1
  NSAssertionHandler *v15; // x22
  uint8_t buf[8]; // [xsp+10h] [xbp-70h] BYREF
  _QWORD v17[2]; // [xsp+18h] [xbp-68h] BYREF
  _QWORD v18[2]; // [xsp+28h] [xbp-58h] BYREF
  CGSize result; // 0:d0.8,8:d1.8

  v5 = (const __CFData *)objc_retain(a3);
  if ( !v5 )
  {
    v15 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v15,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      a1,
      CFSTR("PAMediaConversionServiceSharedUtilitiesServiceSide.m"),
      2092LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("data"));
    objc_release(v15);
  }
  v18[0] = &__kCFBooleanFalse;
  v17[0] = kCGImageSourceShouldCache;
  v17[1] = kCGImageSourceRasterizationDPI;
  v6 = objc_retainAutoreleasedReturnValue(
         +[NSNumber numberWithInteger:](
           &OBJC_CLASS___NSNumber,
           "numberWithInteger:",
           +[PFMediaUtilities defaultRasterizationDPI](&OBJC_CLASS___PFMediaUtilities, "defaultRasterizationDPI")));
  v18[1] = v6;
  v7 = CGImageSourceCreateWithData(
         v5,
         (CFDictionaryRef)+[NSDictionary dictionaryWithObjects:forKeys:count:](
                            &OBJC_CLASS___NSDictionary,
                            "dictionaryWithObjects:forKeys:count:",
                            v18,
                            v17,
                            2LL));
  objc_release(v6);
  if ( v7 )
  {
    v8 = CGImageSourceCopyPropertiesAtIndex(v7, 0LL, 0LL);
    v9 = objc_retainAutoreleasedReturnValue(-[__CFDictionary objectForKeyedSubscript:](v8, "objectForKeyedSubscript:", kCGImagePropertyPixelWidth));
    width = (double)(__int64)objc_msgSend(v9, "integerValue");
    v11 = objc_retainAutoreleasedReturnValue(-[__CFDictionary objectForKeyedSubscript:](v8, "objectForKeyedSubscript:", kCGImagePropertyPixelHeight));
    height = (double)(__int64)objc_msgSend(v11, "integerValue");
    objc_release(v11);
    objc_release(v9);
    CFRelease(v7);
    objc_release(v8);
  }
  else
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
    {
      *(_WORD *)buf = 0;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_ERROR,
        "Unable to create image source from output data",
        buf,
        2u);
    }
    width = CGSizeZero.width;
    height = CGSizeZero.height;
  }
  objc_release(v5);
  v13 = width;
  v14 = height;
  result.height = v14;
  result.width = v13;
  return result;
}