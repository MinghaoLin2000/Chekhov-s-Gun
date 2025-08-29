-[TSULinkedPointerSetEnumerator initWithFirstEntry:]
TSULinkedPointerSetEnumerator *__cdecl -[TSULinkedPointerSetEnumerator initWithFirstEntry:](
        TSULinkedPointerSetEnumerator *self,
        SEL a2,
        id a3)
{
  TSULinkedPointerSetEnumerator *result; // x0
  objc_super v5; // [xsp+0h] [xbp-20h] BYREF

  v5.receiver = self;
  v5.super_class = (Class)&OBJC_CLASS___TSULinkedPointerSetEnumerator;
  result = -[TSULinkedPointerSetEnumerator init](&v5, "init");
  if ( result )
  {
    result->mHead = (TSULinkedPointerSetEntry *)a3;
    result->mLastUsed = 0LL;
  }
  return result;
}