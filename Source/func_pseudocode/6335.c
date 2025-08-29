+[PAMediaConversionServiceImagingUtilities dataForSingleImageJPEGPassthroughConversionForImageSource:primaryImageProperties:]
id __cdecl +[PAMediaConversionServiceImagingUtilities dataForSingleImageJPEGPassthroughConversionForImageSource:primaryImageProperties:](
        id a1,
        SEL a2,
        CGImageSource *a3,
        id a4)
{
  id v5; // x22
  __CFData *v6; // x19
  __CFString *v7; // x21
  CGImageDestination *v8; // x23
  void *v9; // x21
  size_t PrimaryImageIndex; // x0
  int v12; // [xsp+0h] [xbp-50h] BYREF
  CGImageSource *v13; // [xsp+4h] [xbp-4Ch]
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v5 = objc_retain(a4);
  v6 = objc_retainAutoreleasedReturnValue(+[NSMutableData data](&OBJC_CLASS___NSMutableData, "data"));
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(UTTypeJPEG, "identifier"));
  v8 = CGImageDestinationCreateWithData(v6, v7, 1uLL, 0LL);
  objc_release(v7);
  v9 = objc_msgSend(v5, "mutableCopy");
  objc_release(v5);
  objc_msgSend(v9, "setObject:forKeyedSubscript:", &__kCFBooleanTrue, kCGImageDestinationPreserveGainMap);
  PrimaryImageIndex = CGImageSourceGetPrimaryImageIndex(a3);
  CGImageDestinationAddImageFromSource(v8, a3, PrimaryImageIndex, (CFDictionaryRef)v9);
  LOBYTE(v5) = CGImageDestinationFinalize(v8);
  CFRelease(v8);
  if ( ((unsigned __int8)v5 & 1) == 0 )
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
    {
      v12 = 138412290;
      v13 = a3;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_ERROR,
        "Unable to perform single image JPEG passthrough conversion for source %@",
        (uint8_t *)&v12,
        0xCu);
    }
    objc_release(v6);
    v6 = 0LL;
  }
  objc_release(v9);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}