-[RemoteViewBridgeSendRight dealloc]
void __cdecl -[RemoteViewBridgeSendRight dealloc](RemoteViewBridgeSendRight *self, SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-20h] BYREF

  -[RemoteViewBridgeSendRight invalidate](self, "invalidate");
  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___RemoteViewBridgeSendRight;
  -[RemoteViewBridgeSendRight dealloc](&v3, "dealloc");
}