-[TSPCGDataConsumer initWithWriteChannel:]
TSPCGDataConsumer *__cdecl -[TSPCGDataConsumer initWithWriteChannel:](TSPCGDataConsumer *self, SEL a2, id a3)
{
  id v5; // x19
  id v6; // x21
  dispatch_queue_attr_s *v7; // x22
  dispatch_queue_t v8; // x0
  void *v9; // x8
  objc_super v11; // [xsp+0h] [xbp-30h] BYREF

  v5 = objc_retain(a3);
  v11.receiver = self;
  v11.super_class = (Class)&OBJC_CLASS___TSPCGDataConsumer;
  v6 = -[TSPCGDataConsumer init](&v11, "init");
  if ( v6 )
  {
    v7 = objc_retainAutoreleasedReturnValue(dispatch_queue_attr_make_with_autorelease_frequency(0LL, DISPATCH_AUTORELEASE_FREQUENCY_WORK_ITEM));
    v8 = dispatch_queue_create("TSPCGDataConsumer.Write", v7);
    v9 = (void *)*((_QWORD *)v6 + 1);
    *((_QWORD *)v6 + 1) = v8;
    objc_release(v9);
    objc_release(v7);
    dispatch_queue_set_specific(*((dispatch_queue_t *)v6 + 1), off_1001F5750, off_1001F5750, 0LL);
    objc_storeStrong((id *)v6 + 2, a3);
  }
  objc_release(v5);
  return (TSPCGDataConsumer *)v6;
}