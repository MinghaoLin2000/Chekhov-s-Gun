-[TSULinkedPointerSetEntry dealloc]
void __cdecl -[TSULinkedPointerSetEntry dealloc](TSULinkedPointerSetEntry *self, SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-20h] BYREF

  objc_release(self->mObject);
  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___TSULinkedPointerSetEntry;
  -[TSULinkedPointerSetEntry dealloc](&v3, "dealloc");
}