-[PAMediaConversionServiceImageConversionJob _validateSource]
bool __cdecl -[PAMediaConversionServiceImageConversionJob _validateSource](
        PAMediaConversionServiceImageConversionJob *self,
        SEL a2)
{
  NSURL *v3; // x19
  NSNumber *v4; // x21
  NSMutableData *v5; // x0
  NSMutableData *imageDestinationData; // x8
  bool v7; // w21
  CGImageDestination *v8; // x0
  NSString *v10; // x20
  int v11; // [xsp+0h] [xbp-60h] BYREF
  NSString *v12; // [xsp+4h] [xbp-5Ch]
  _QWORD v13[2]; // [xsp+18h] [xbp-48h] BYREF
  _QWORD v14[2]; // [xsp+28h] [xbp-38h] BYREF

  v3 = objc_retainAutoreleasedReturnValue(-[PAMediaConversionServiceImageConversionJob mainSourceResourceURL](self, "mainSourceResourceURL"));
  v14[0] = &__kCFBooleanFalse;
  v13[0] = kCGImageSourceShouldCache;
  v13[1] = kCGImageSourceRasterizationDPI;
  v4 = objc_retainAutoreleasedReturnValue(
         +[NSNumber numberWithInteger:](
           &OBJC_CLASS___NSNumber,
           "numberWithInteger:",
           +[PFMediaUtilities defaultRasterizationDPI](&OBJC_CLASS___PFMediaUtilities, "defaultRasterizationDPI")));
  v14[1] = v4;
  self->_imageSource = CGImageSourceCreateWithURL(
                         (CFURLRef)v3,
                         (CFDictionaryRef)+[NSDictionary dictionaryWithObjects:forKeys:count:](
                                            &OBJC_CLASS___NSDictionary,
                                            "dictionaryWithObjects:forKeys:count:",
                                            v14,
                                            v13,
                                            2LL));
  objc_release(v4);
  if ( !self->_imageSource )
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
    {
      v10 = objc_retainAutoreleasedReturnValue(-[NSURL path](v3, "path"));
      v11 = 138412290;
      v12 = v10;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_ERROR,
        "Unable to create image source from %@",
        (uint8_t *)&v11,
        0xCu);
      objc_release(v10);
    }
    goto LABEL_7;
  }
  v5 = objc_retainAutoreleasedReturnValue(+[NSMutableData data](&OBJC_CLASS___NSMutableData, "data"));
  imageDestinationData = self->_imageDestinationData;
  self->_imageDestinationData = v5;
  objc_release(imageDestinationData);
  v7 = 1;
  v8 = CGImageDestinationCreateWithData(
         (CFMutableDataRef)self->_imageDestinationData,
         (CFStringRef)self->_outputFileType,
         1uLL,
         0LL);
  self->_imageDestination = v8;
  if ( !v8 )
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
    {
      LOWORD(v11) = 0;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_ERROR,
        "Unable to create output image destination",
        (uint8_t *)&v11,
        2u);
    }
LABEL_7:
    v7 = 0;
  }
  objc_release(v3);
  return v7;
}