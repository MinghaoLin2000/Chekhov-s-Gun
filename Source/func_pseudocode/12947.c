-[TSUBufferedReadChannel dealloc]
void __cdecl -[TSUBufferedReadChannel dealloc](TSUBufferedReadChannel *self, SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-20h] BYREF

  -[TSUBufferedReadChannel _close](self, "_close");
  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___TSUBufferedReadChannel;
  -[TSUBufferedReadChannel dealloc](&v3, "dealloc");
}