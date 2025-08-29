-[VideoConversionHangDetector initWithThresholdTimeInterval:]
VideoConversionHangDetector *__cdecl -[VideoConversionHangDetector initWithThresholdTimeInterval:](
        VideoConversionHangDetector *self,
        SEL a2,
        double a3)
{
  VideoConversionHangDetector *result; // x0
  NSAssertionHandler *v7; // x21
  objc_super v8; // [xsp+10h] [xbp-40h] BYREF

  if ( a3 <= 0.0 )
  {
    v7 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v7,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("VideoConversionService.m"),
      52LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("thresholdTimeInterval > 0"));
    objc_release(v7);
  }
  v8.receiver = self;
  v8.super_class = (Class)&OBJC_CLASS___VideoConversionHangDetector;
  result = -[VideoConversionHangDetector init](&v8, "init");
  if ( result )
    result->_hangDetectionThresholdTimeInterval = a3;
  return result;
}