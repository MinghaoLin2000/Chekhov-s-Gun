-[VideoStillImageExtractionTask performConversion]
void __cdecl -[VideoStillImageExtractionTask performConversion](VideoStillImageExtractionTask *self, SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-20h] BYREF

  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___VideoStillImageExtractionTask;
  -[VideoConversionTask performConversion](&v3, "performConversion");
  -[VideoConversionTask loadAsset](self, "loadAsset");
  -[VideoStillImageExtractionTask extractStillImage](self, "extractStillImage");
  -[VideoStillImageExtractionTask storeImage](self, "storeImage");
  -[VideoConversionTask callCompletionHandler](self, "callCompletionHandler");
}