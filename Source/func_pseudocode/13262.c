-[TSUFileIOChannel dealloc]
void __cdecl -[TSUFileIOChannel dealloc](TSUFileIOChannel *self, SEL a2)
{
  unsigned __int8 v3; // w8
  OS_dispatch_io *channel; // x0
  objc_super v5; // [xsp+0h] [xbp-20h] BYREF

  v3 = atomic_load((unsigned __int8 *)&self->_isClosed);
  if ( (v3 & 1) == 0 )
  {
    channel = self->_channel;
    if ( channel )
      dispatch_io_close((dispatch_io_t)channel, 0LL);
  }
  v5.receiver = self;
  v5.super_class = (Class)&OBJC_CLASS___TSUFileIOChannel;
  -[TSUFileIOChannel dealloc](&v5, "dealloc");
}