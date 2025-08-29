-[TSULinkedPointerSetEntry initWithObject:previousEntry:]
TSULinkedPointerSetEntry *__cdecl -[TSULinkedPointerSetEntry initWithObject:previousEntry:](
        TSULinkedPointerSetEntry *self,
        SEL a2,
        id a3,
        id a4)
{
  TSULinkedPointerSetEntry *v6; // x21
  objc_super v8; // [xsp+0h] [xbp-30h] BYREF

  v8.receiver = self;
  v8.super_class = (Class)&OBJC_CLASS___TSULinkedPointerSetEntry;
  v6 = -[TSULinkedPointerSetEntry init](&v8, "init");
  if ( v6 )
  {
    v6->mObject = objc_retain(a3);
    v6->mPrevious = (TSULinkedPointerSetEntry *)a4;
    v6->mNext = 0LL;
  }
  return v6;
}