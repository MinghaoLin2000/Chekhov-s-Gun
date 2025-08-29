-[TSUTemporaryDirectory dealloc]
void __cdecl -[TSUTemporaryDirectory dealloc](TSUTemporaryDirectory *self, SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-20h] BYREF

  if ( self->_path && !self->_leak )
    -[TSUTemporaryDirectory removeDirectory](self, "removeDirectory");
  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___TSUTemporaryDirectory;
  -[TSUTemporaryDirectory dealloc](&v3, "dealloc");
}