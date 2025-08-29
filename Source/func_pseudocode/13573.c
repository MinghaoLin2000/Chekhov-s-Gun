-[TSUMutableLinkedPointerSet removeObject:]
void __cdecl -[TSUMutableLinkedPointerSet removeObject:](TSUMutableLinkedPointerSet *self, SEL a2, id a3)
{
  TSULinkedPointerSetEntry *Value; // x0
  TSULinkedPointerSetEntry *mPrevious; // x8
  TSULinkedPointerSetEntry *mNext; // x8
  __CFDictionary *mDictionary; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  Value = (TSULinkedPointerSetEntry *)CFDictionaryGetValue(self->mDictionary, a3);
  if ( Value )
  {
    if ( Value == self->mHead )
      self->mHead = Value->mNext;
    if ( Value == self->mTail )
      self->mTail = Value->mPrevious;
    mPrevious = Value->mPrevious;
    if ( mPrevious )
      mPrevious->mNext = Value->mNext;
    mNext = Value->mNext;
    if ( mNext )
      mNext->mPrevious = Value->mPrevious;
    mDictionary = self->mDictionary;
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    CFDictionaryRemoveValue(mDictionary, a3);
  }
}