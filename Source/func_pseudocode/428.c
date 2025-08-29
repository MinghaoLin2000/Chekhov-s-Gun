-[FileEventObserver dealloc]
void __cdecl -[FileEventObserver dealloc](FileEventObserver *self, SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-20h] BYREF

  -[FileEventObserver stopObserving](self, "stopObserving");
  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___FileEventObserver;
  -[FileEventObserver dealloc](&v3, "dealloc");
}