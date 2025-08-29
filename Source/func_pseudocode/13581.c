-[TSULinkedPointerSetReverseEnumerator initWithLastEntry:]
TSULinkedPointerSetReverseEnumerator *__cdecl -[TSULinkedPointerSetReverseEnumerator initWithLastEntry:](
        TSULinkedPointerSetReverseEnumerator *self,
        SEL a2,
        id a3)
{
  TSULinkedPointerSetReverseEnumerator *result; // x0
  objc_super v5; // [xsp+0h] [xbp-20h] BYREF

  v5.receiver = self;
  v5.super_class = (Class)&OBJC_CLASS___TSULinkedPointerSetReverseEnumerator;
  result = -[TSULinkedPointerSetReverseEnumerator init](&v5, "init");
  if ( result )
  {
    result->mTail = (TSULinkedPointerSetEntry *)a3;
    result->mLastUsed = 0LL;
  }
  return result;
}