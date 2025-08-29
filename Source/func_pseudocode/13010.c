-[TSUZipReadChannel dealloc]
void __cdecl -[TSUZipReadChannel dealloc](TSUZipReadChannel *self, SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-20h] BYREF

  -[TSUZipReadChannel close](self, "close");
  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___TSUZipReadChannel;
  -[TSUZipReadChannel dealloc](&v3, "dealloc");
}