-[VideoConversionService init]
VideoConversionService *__cdecl -[VideoConversionService init](VideoConversionService *self, SEL a2)
{
  VideoConversionService *v2; // x19
  MediaConversionQueue *v3; // x0
  MediaConversionQueue *requestQueue; // x8
  objc_super v6; // [xsp+0h] [xbp-20h] BYREF

  v6.receiver = self;
  v6.super_class = (Class)&OBJC_CLASS___VideoConversionService;
  v2 = -[VideoConversionService init](&v6, "init");
  if ( v2 )
  {
    v3 = -[MediaConversionQueue initWithDelegate:](
           objc_alloc(&OBJC_CLASS___MediaConversionQueue),
           "initWithDelegate:",
           v2);
    requestQueue = v2->_requestQueue;
    v2->_requestQueue = v3;
    objc_release(requestQueue);
  }
  return v2;
}