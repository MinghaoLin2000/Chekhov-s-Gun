-[TSUMutableLinkedPointerSet reverseObjectEnumerator]
id __cdecl -[TSUMutableLinkedPointerSet reverseObjectEnumerator](TSUMutableLinkedPointerSet *self, SEL a2)
{
  TSULinkedPointerSetReverseEnumerator *v2; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = -[TSULinkedPointerSetReverseEnumerator initWithLastEntry:](
         objc_alloc(&OBJC_CLASS___TSULinkedPointerSetReverseEnumerator),
         "initWithLastEntry:",
         self->mTail);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autorelease(v2);
}