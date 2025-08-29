-[PAMediaConversionServiceImageConversionJob sourceImageRef]
CGImage *__cdecl -[PAMediaConversionServiceImageConversionJob sourceImageRef](
        PAMediaConversionServiceImageConversionJob *self,
        SEL a2)
{
  CGImage *result; // x0
  NSNumber *v4; // x21
  NSDictionary *v5; // x20
  CGImage *ImageAtIndex; // x0
  NSURL *v7; // x21
  NSString *v8; // x22
  int v9; // [xsp+0h] [xbp-50h] BYREF
  NSString *v10; // [xsp+4h] [xbp-4Ch]
  __int64 v11; // [xsp+18h] [xbp-38h] BYREF
  NSNumber *v12; // [xsp+20h] [xbp-30h] BYREF

  result = self->_sourceImageRef;
  if ( !result )
  {
    if ( -[PAMediaConversionServiceImageConversionJob sourceRequiresRasterization](self, "sourceRequiresRasterization") )
    {
      v11 = kCGImageSourceRasterizationDPI;
      v4 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithInteger:](&OBJC_CLASS___NSNumber, "numberWithInteger:", self->_rasterizationDPI));
      v12 = v4;
      v5 = objc_retainAutoreleasedReturnValue(
             +[NSDictionary dictionaryWithObjects:forKeys:count:](
               &OBJC_CLASS___NSDictionary,
               "dictionaryWithObjects:forKeys:count:",
               &v12,
               &v11,
               1LL));
      objc_release(v4);
    }
    else
    {
      v5 = 0LL;
    }
    ImageAtIndex = CGImageSourceCreateImageAtIndex(self->_imageSource, 0LL, (CFDictionaryRef)v5);
    self->_sourceImageRef = ImageAtIndex;
    if ( !ImageAtIndex && os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
    {
      v7 = objc_retainAutoreleasedReturnValue(-[PAMediaConversionServiceImageConversionJob mainSourceResourceURL](self, "mainSourceResourceURL"));
      v8 = objc_retainAutoreleasedReturnValue(-[NSURL path](v7, "path"));
      v9 = 138412290;
      v10 = v8;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_ERROR,
        "Unable to create image ref from %@",
        (uint8_t *)&v9,
        0xCu);
      objc_release(v8);
      objc_release(v7);
    }
    objc_release(v5);
    return self->_sourceImageRef;
  }
  return result;
}