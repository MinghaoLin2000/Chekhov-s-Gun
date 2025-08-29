+[TSPCGDataConsumer newCGDataConsumerForWriteChannel:]
CGDataConsumer *__cdecl +[TSPCGDataConsumer newCGDataConsumerForWriteChannel:](id a1, SEL a2, id a3)
{
  id v3; // x19
  TSPCGDataConsumer *v4; // x0
  TSPCGDataConsumer *v5; // x20
  CGDataConsumer *v6; // x21

  v3 = objc_retain(a3);
  v4 = -[TSPCGDataConsumer initWithWriteChannel:](
         objc_alloc(&OBJC_CLASS___TSPCGDataConsumer),
         "initWithWriteChannel:",
         v3);
  v5 = v4;
  if ( v4 )
    v6 = CGDataConsumerCreate(objc_retain(v4), (const CGDataConsumerCallbacks *)&off_1001D2DF0);
  else
    v6 = 0LL;
  objc_release(v5);
  objc_release(v3);
  return v6;
}