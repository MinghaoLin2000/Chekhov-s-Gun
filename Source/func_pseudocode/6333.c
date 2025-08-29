+[PAMediaConversionServiceImagingUtilities primaryImagePropertiesForFileAtURL:]
id __cdecl +[PAMediaConversionServiceImagingUtilities primaryImagePropertiesForFileAtURL:](id a1, SEL a2, id a3)
{
  const __CFURL *v3; // x19
  NSDictionary *v4; // x20
  CGImageSource *v5; // x0
  CGImageSource *v6; // x22
  size_t PrimaryImageIndex; // x0
  CFDictionaryRef v8; // x21
  int v10; // [xsp+0h] [xbp-60h] BYREF
  const __CFURL *v11; // [xsp+4h] [xbp-5Ch]
  _QWORD v12[2]; // [xsp+18h] [xbp-48h] BYREF
  _QWORD v13[2]; // [xsp+28h] [xbp-38h] BYREF
  __int64 vars8; // [xsp+68h] [xbp+8h]

  v3 = (const __CFURL *)objc_retain(a3);
  v12[0] = kCGImageSourceShouldCache;
  v12[1] = CFSTR("kCGImageSourceRawPropertiesHint");
  v13[0] = &__kCFBooleanFalse;
  v13[1] = CFSTR("ImportOnly");
  v4 = objc_retainAutoreleasedReturnValue(
         +[NSDictionary dictionaryWithObjects:forKeys:count:](
           &OBJC_CLASS___NSDictionary,
           "dictionaryWithObjects:forKeys:count:",
           v13,
           v12,
           2LL));
  v5 = CGImageSourceCreateWithURL(v3, (CFDictionaryRef)v4);
  if ( v5 )
  {
    v6 = v5;
    PrimaryImageIndex = CGImageSourceGetPrimaryImageIndex(v5);
    v8 = CGImageSourceCopyPropertiesAtIndex(v6, PrimaryImageIndex, 0LL);
    CFRelease(v6);
  }
  else
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
    {
      v10 = 138412290;
      v11 = v3;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_ERROR,
        "Unable to create image source for %@, skipping",
        (uint8_t *)&v10,
        0xCu);
    }
    v8 = 0LL;
  }
  objc_release(v4);
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v8);
}