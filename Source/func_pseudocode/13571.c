-[TSUMutableLinkedPointerSet addObject:]
void __cdecl -[TSUMutableLinkedPointerSet addObject:](TSUMutableLinkedPointerSet *self, SEL a2, id a3)
{
  TSULinkedPointerSetEntry *v5; // x0
  TSULinkedPointerSetEntry *v6; // x21
  TSULinkedPointerSetEntry *mTail; // x8
  TSULinkedPointerSetEntry **p_mNext; // x8
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( !CFDictionaryContainsKey(self->mDictionary, a3) )
  {
    v5 = -[TSULinkedPointerSetEntry initWithObject:previousEntry:](
           objc_alloc(&OBJC_CLASS___TSULinkedPointerSetEntry),
           "initWithObject:previousEntry:",
           a3,
           self->mTail);
    v6 = v5;
    mTail = self->mTail;
    if ( mTail )
      p_mNext = &mTail->mNext;
    else
      p_mNext = &self->mHead;
    *p_mNext = v5;
    self->mTail = v5;
    CFDictionarySetValue(self->mDictionary, a3, v5);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_release(v6);
  }
}