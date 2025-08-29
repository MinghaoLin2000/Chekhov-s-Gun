-[MapRenderingService init]
MapRenderingService *__cdecl -[MapRenderingService init](MapRenderingService *self, SEL a2)
{
  MapRenderingService *v2; // x19
  dispatch_queue_t v3; // x0
  OS_dispatch_queue *mapRenderingWorker; // x8
  NSMutableDictionary *v5; // x0
  NSMutableDictionary *mapURLToRenderedImageData; // x8
  NSMutableSet *v7; // x0
  NSMutableSet *mapURLs; // x8
  objc_super v10; // [xsp+0h] [xbp-20h] BYREF

  v10.receiver = self;
  v10.super_class = (Class)&OBJC_CLASS___MapRenderingService;
  v2 = -[MapRenderingService init](&v10, "init");
  if ( v2 )
  {
    v3 = dispatch_queue_create("MapRenderingWorker", 0LL);
    mapRenderingWorker = v2->_mapRenderingWorker;
    v2->_mapRenderingWorker = (OS_dispatch_queue *)v3;
    objc_release(mapRenderingWorker);
    v5 = (NSMutableDictionary *)objc_alloc_init((Class)&OBJC_CLASS___NSMutableDictionary);
    mapURLToRenderedImageData = v2->_mapURLToRenderedImageData;
    v2->_mapURLToRenderedImageData = v5;
    objc_release(mapURLToRenderedImageData);
    v7 = (NSMutableSet *)objc_alloc_init((Class)&OBJC_CLASS___NSMutableSet);
    mapURLs = v2->_mapURLs;
    v2->_mapURLs = v7;
    objc_release(mapURLs);
  }
  return v2;
}