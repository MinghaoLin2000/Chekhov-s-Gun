-[TSPSnappyReadChannel dealloc]
void __cdecl -[TSPSnappyReadChannel dealloc](TSPSnappyReadChannel *self, SEL a2)
{
  objc_super v3; // [xsp+10h] [xbp-20h] BYREF

  -[TSPSnappyReadChannel close](self, "close");
  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___TSPSnappyReadChannel;
  -[TSPSnappyReadChannel dealloc](&v3, "dealloc");
}