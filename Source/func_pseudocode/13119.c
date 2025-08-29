-[TSUBacktrace dealloc]
void __cdecl -[TSUBacktrace dealloc](TSUBacktrace *self, SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-20h] BYREF

  free(self->_callstack);
  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___TSUBacktrace;
  -[TSUBacktrace dealloc](&v3, "dealloc");
}