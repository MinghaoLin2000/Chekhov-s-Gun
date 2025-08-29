-[TSUReadChannelInputStreamAdapter dealloc]
void __cdecl -[TSUReadChannelInputStreamAdapter dealloc](TSUReadChannelInputStreamAdapter *self, SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-20h] BYREF

  -[TSUReadChannelInputStreamAdapter close](self, "close");
  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___TSUReadChannelInputStreamAdapter;
  -[TSUReadChannelInputStreamAdapter dealloc](&v3, "dealloc");
}