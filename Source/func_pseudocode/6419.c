-[VideoTranscodingTask performConversion]
void __cdecl -[VideoTranscodingTask performConversion](VideoTranscodingTask *self, SEL a2)
{
  NSAssertionHandler *v4; // x21
  objc_super v5; // [xsp+10h] [xbp-30h] BYREF

  if ( (void *)-[VideoConversionTask status](self, "status") != (void *)4
    && (void *)-[VideoConversionTask status](self, "status") != (void *)5 )
  {
    v4 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v4,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("VideoConversionService.m"),
      299LL,
      CFSTR("Job in unexpected status %ld"),
      -[VideoConversionTask status](self, "status"));
    objc_release(v4);
  }
  if ( (void *)-[VideoConversionTask status](self, "status") != (void *)4 )
  {
    v5.receiver = self;
    v5.super_class = (Class)&OBJC_CLASS___VideoTranscodingTask;
    -[VideoConversionTask performConversion](&v5, "performConversion");
    -[VideoConversionTask loadAsset](self, "loadAsset");
    -[VideoTranscodingTask performExport](self, "performExport");
  }
}