-[TSPIOHandlerWriteChannelAdapter initWithHandler:]
TSPIOHandlerWriteChannelAdapter *__cdecl -[TSPIOHandlerWriteChannelAdapter initWithHandler:](
        TSPIOHandlerWriteChannelAdapter *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  TSPIOHandlerWriteChannelAdapter *v5; // x20
  id v6; // x0
  id handler; // x8
  objc_super v9; // [xsp+0h] [xbp-20h] BYREF

  v4 = objc_retain(a3);
  v9.receiver = self;
  v9.super_class = (Class)&OBJC_CLASS___TSPIOHandlerWriteChannelAdapter;
  v5 = -[TSPIOHandlerWriteChannelAdapter init](&v9, "init");
  if ( v5 )
  {
    v6 = objc_retainBlock(v4);
    handler = v5->_handler;
    v5->_handler = v6;
    objc_release(handler);
  }
  objc_release(v4);
  return v5;
}