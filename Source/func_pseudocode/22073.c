-[FMMFileLogger dealloc]
void __cdecl -[FMMFileLogger dealloc](FMMFileLogger *self, SEL a2)
{
  OS_dispatch_queue *serialQueue; // x0
  objc_super v4; // [xsp+0h] [xbp-20h] BYREF

  serialQueue = self->_serialQueue;
  if ( serialQueue )
    dispatch_release((dispatch_object_t)serialQueue);
  v4.receiver = self;
  v4.super_class = (Class)&OBJC_CLASS___FMMFileLogger;
  -[FMMFileLogger dealloc](&v4, "dealloc");
}