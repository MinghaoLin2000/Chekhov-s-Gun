-[TSULogCatThreadSafeMutableSet initWithArray:]
TSULogCatThreadSafeMutableSet *__cdecl -[TSULogCatThreadSafeMutableSet initWithArray:](
        TSULogCatThreadSafeMutableSet *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  TSULogCatThreadSafeMutableSet *v5; // x20
  NSMutableSet *v6; // x0
  NSMutableSet *objects; // x8
  dispatch_queue_attr_s *v8; // x21
  dispatch_queue_t v9; // x0
  OS_dispatch_queue *logCatQueue; // x8
  objc_super v12; // [xsp+0h] [xbp-30h] BYREF

  v4 = objc_retain(a3);
  v12.receiver = self;
  v12.super_class = (Class)&OBJC_CLASS___TSULogCatThreadSafeMutableSet;
  v5 = -[TSULogCatThreadSafeMutableSet init](&v12, "init");
  if ( v5 )
  {
    v6 = (NSMutableSet *)objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSMutableSet), "initWithArray:", v4);
    objects = v5->_objects;
    v5->_objects = v6;
    objc_release(objects);
    v8 = objc_retainAutoreleasedReturnValue(dispatch_queue_attr_make_with_autorelease_frequency(0LL, DISPATCH_AUTORELEASE_FREQUENCY_WORK_ITEM));
    v9 = dispatch_queue_create("TSULogCatQueue", v8);
    logCatQueue = v5->_logCatQueue;
    v5->_logCatQueue = (OS_dispatch_queue *)v9;
    objc_release(logCatQueue);
    objc_release(v8);
  }
  objc_release(v4);
  return v5;
}