-[LSRAudioDump dealloc]
void __cdecl -[LSRAudioDump dealloc](LSRAudioDump *self, SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-20h] BYREF

  -[LSRAudioDump close](self, "close");
  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___LSRAudioDump;
  -[LSRAudioDump dealloc](&v3, "dealloc");
}