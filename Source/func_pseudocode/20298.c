-[ipp_request_t init]
ipp_request_t *__cdecl -[ipp_request_t init](ipp_request_t *self, SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-10h] BYREF

  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___ipp_request_t;
  return -[ipp_t init](&v3, "init");
}