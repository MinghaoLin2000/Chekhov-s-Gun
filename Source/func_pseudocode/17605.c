-[CGPDFService init]
CGPDFService *__cdecl -[CGPDFService init](CGPDFService *self, SEL a2)
{
  CGPDFService *v2; // x19
  NSOperationQueue *v3; // x0
  NSOperationQueue *requestQueue; // x8
  objc_super v6; // [xsp+0h] [xbp-20h] BYREF

  v6.receiver = self;
  v6.super_class = (Class)&OBJC_CLASS___CGPDFService;
  v2 = -[CGPDFService init](&v6, "init");
  if ( v2 )
  {
    v3 = (NSOperationQueue *)objc_alloc_init((Class)&OBJC_CLASS___NSOperationQueue);
    requestQueue = v2->_requestQueue;
    v2->_requestQueue = v3;
    objc_release(requestQueue);
    -[NSOperationQueue setMaxConcurrentOperationCount:](v2->_requestQueue, "setMaxConcurrentOperationCount:", 4LL);
  }
  return v2;
}