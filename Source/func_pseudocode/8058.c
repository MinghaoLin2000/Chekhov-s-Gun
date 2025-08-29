-[ServiceDelegate init]
ServiceDelegate *__cdecl -[ServiceDelegate init](ServiceDelegate *self, SEL a2)
{
  ServiceDelegate *v2; // x19
  dispatch_queue_attr_s *v3; // x20
  dispatch_queue_t v4; // x0
  OS_dispatch_queue *queue; // x8
  objc_super v7; // [xsp+0h] [xbp-20h] BYREF

  v7.receiver = self;
  v7.super_class = (Class)&OBJC_CLASS___ServiceDelegate;
  v2 = -[ServiceDelegate init](&v7, "init");
  if ( v2 )
  {
    v3 = objc_retainAutoreleasedReturnValue(dispatch_queue_attr_make_with_autorelease_frequency(0LL, DISPATCH_AUTORELEASE_FREQUENCY_WORK_ITEM));
    v4 = dispatch_queue_create("com.apple.AppPredictionIntentsHelperService", v3);
    queue = v2->_queue;
    v2->_queue = (OS_dispatch_queue *)v4;
    objc_release(queue);
    objc_release(v3);
  }
  return v2;
}