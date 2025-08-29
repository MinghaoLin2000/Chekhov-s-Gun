-[http_ipp_response_t initWithTransportStatus:]
http_ipp_response_t *__cdecl -[http_ipp_response_t initWithTransportStatus:](http_ipp_response_t *self, SEL a2, int a3)
{
  http_ipp_response_t *result; // x0
  objc_super v5; // [xsp+0h] [xbp-20h] BYREF

  v5.receiver = self;
  v5.super_class = (Class)&OBJC_CLASS___http_ipp_response_t;
  result = -[http_ipp_response_t init](&v5, "init");
  if ( result )
    result->ivar_transportStatus = a3;
  return result;
}