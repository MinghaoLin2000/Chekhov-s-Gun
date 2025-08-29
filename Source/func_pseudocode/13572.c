-[TSUMutableLinkedPointerSet insertFirstObject:]
void __cdecl -[TSUMutableLinkedPointerSet insertFirstObject:](TSUMutableLinkedPointerSet *self, SEL a2, id a3)
{
  TSULinkedPointerSetEntry *v5; // x0
  TSULinkedPointerSetEntry *v6; // x21
  TSULinkedPointerSetEntry *mHead; // x10
  TSUMutableLinkedPointerSet *v8; // x9
  TSULinkedPointerSetEntry *v9; // x8
  __int64 vars8; // [xsp+28h] [xbp+8h]

  -[TSUMutableLinkedPointerSet removeObject:](self, "removeObject:");
  v5 = -[TSULinkedPointerSetEntry initWithObject:previousEntry:](
         objc_alloc(&OBJC_CLASS___TSULinkedPointerSetEntry),
         "initWithObject:previousEntry:",
         a3,
         0LL);
  v6 = v5;
  mHead = self->mHead;
  v8 = self;
  v9 = v5;
  if ( mHead )
  {
    mHead->mPrevious = v5;
    v9 = self->mHead;
    v8 = (TSUMutableLinkedPointerSet *)v5;
  }
  v8->mTail = v9;
  self->mHead = v5;
  CFDictionarySetValue(self->mDictionary, a3, v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}