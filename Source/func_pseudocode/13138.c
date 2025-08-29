+[NSOperationQueue tsu_newSerialOperationQueueWithName:]
id __cdecl +[NSOperationQueue tsu_newSerialOperationQueueWithName:](id a1, SEL a2, id a3)
{
  id v4; // x20
  dispatch_queue_attr_t v5; // x0
  dispatch_queue_s *v6; // x19

  v4 = objc_alloc_init((Class)&OBJC_CLASS___NSOperationQueue);
  objc_msgSend(v4, "setName:", a3);
  objc_msgSend(v4, "setMaxConcurrentOperationCount:", 1LL);
  v5 = dispatch_queue_attr_make_with_autorelease_frequency(0LL, DISPATCH_AUTORELEASE_FREQUENCY_WORK_ITEM);
  v6 = TSUCreateRecursiveQueue(a3, v5);
  objc_msgSend(v4, "setUnderlyingQueue:", v6);
  objc_release(v6);
  return v4;
}