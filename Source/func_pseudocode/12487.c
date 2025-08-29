-[TSUKVOToken dealloc]
void __cdecl -[TSUKVOToken dealloc](TSUKVOToken *self, SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-20h] BYREF

  objc_release(self->_keyPath);
  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___TSUKVOToken;
  -[TSUKVOToken dealloc](&v3, "dealloc");
}