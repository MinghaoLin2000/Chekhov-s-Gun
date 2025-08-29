-[VideoTranscodingTask callCompletionHandler]
void __cdecl -[VideoTranscodingTask callCompletionHandler](VideoTranscodingTask *self, SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-20h] BYREF

  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___VideoTranscodingTask;
  -[VideoConversionTask callCompletionHandler](&v3, "callCompletionHandler");
  -[VideoTranscodingTask cancelProgressUpdateTimerAndMarkEndTime](self, "cancelProgressUpdateTimerAndMarkEndTime");
}