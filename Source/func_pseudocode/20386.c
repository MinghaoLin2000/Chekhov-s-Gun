-[device_http_t dealloc]
void __cdecl -[device_http_t dealloc](device_http_t *self, SEL a2)
{
  platform_http_t *streamedPrinterEndpoint; // x0
  objc_super v4; // [xsp+0h] [xbp-20h] BYREF

  streamedPrinterEndpoint = self->_streamedPrinterEndpoint;
  self->_streamedPrinterEndpoint = 0LL;
  objc_release(streamedPrinterEndpoint);
  v4.receiver = self;
  v4.super_class = (Class)&OBJC_CLASS___device_http_t;
  -[device_http_t dealloc](&v4, "dealloc");
}