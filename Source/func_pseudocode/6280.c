-[PAMediaConversionServiceImageConversionJob dealloc]
void __cdecl -[PAMediaConversionServiceImageConversionJob dealloc](
        PAMediaConversionServiceImageConversionJob *self,
        SEL a2)
{
  CGImageSource *imageSource; // x0
  CGImageDestination *imageDestination; // x0
  CGImage *sourceImageRef; // x0
  objc_super v6; // [xsp+0h] [xbp-20h] BYREF

  imageSource = self->_imageSource;
  if ( imageSource )
    CFRelease(imageSource);
  imageDestination = self->_imageDestination;
  if ( imageDestination )
    CFRelease(imageDestination);
  sourceImageRef = self->_sourceImageRef;
  if ( sourceImageRef )
    CGImageRelease(sourceImageRef);
  v6.receiver = self;
  v6.super_class = (Class)&OBJC_CLASS___PAMediaConversionServiceImageConversionJob;
  -[PAMediaConversionServiceImageConversionJob dealloc](&v6, "dealloc");
}