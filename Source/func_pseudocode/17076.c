-[NDANFDecodingService init]
NDANFDecodingService *__cdecl -[NDANFDecodingService init](NDANFDecodingService *self, SEL a2)
{
  NDANFDecodingService *v2; // x19
  NDANFHelper *v3; // x0
  NDANFHelper *anfHelper; // x8
  objc_super v6; // [xsp+0h] [xbp-20h] BYREF

  v6.receiver = self;
  v6.super_class = (Class)&OBJC_CLASS___NDANFDecodingService;
  v2 = -[NDANFDecodingService init](&v6, "init");
  if ( v2 )
  {
    v3 = objc_alloc_init(&OBJC_CLASS___NDANFHelper);
    anfHelper = v2->_anfHelper;
    v2->_anfHelper = v3;
    objc_release(anfHelper);
  }
  return v2;
}