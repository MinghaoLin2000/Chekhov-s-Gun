-[LocalSocketProxy initWithLocalSocketPath:]
LocalSocketProxy *__cdecl -[LocalSocketProxy initWithLocalSocketPath:](LocalSocketProxy *self, SEL a2, id a3)
{
  id v5; // x19
  LocalSocketProxy *v6; // x20
  dispatch_queue_attr_s *v7; // x22
  dispatch_queue_t v8; // x0
  OS_dispatch_queue *queue; // x8
  NSMutableSet *v10; // x0
  NSMutableSet *connections; // x8
  objc_super v13; // [xsp+0h] [xbp-30h] BYREF

  v5 = objc_retain(a3);
  v13.receiver = self;
  v13.super_class = (Class)&OBJC_CLASS___LocalSocketProxy;
  v6 = -[LocalSocketProxy init](&v13, "init");
  if ( v6 )
  {
    v7 = objc_retainAutoreleasedReturnValue(dispatch_queue_attr_make_with_autorelease_frequency(0LL, DISPATCH_AUTORELEASE_FREQUENCY_WORK_ITEM));
    v8 = dispatch_queue_create("LocalSocketProxy", v7);
    queue = v6->_queue;
    v6->_queue = (OS_dispatch_queue *)v8;
    objc_release(queue);
    objc_release(v7);
    objc_storeStrong((id *)&v6->_path, a3);
    v10 = objc_opt_new(&OBJC_CLASS___NSMutableSet);
    connections = v6->_connections;
    v6->_connections = v10;
    objc_release(connections);
  }
  objc_release(v5);
  return v6;
}