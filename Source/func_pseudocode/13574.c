-[TSUMutableLinkedPointerSet removeAllObjects]
void __cdecl -[TSUMutableLinkedPointerSet removeAllObjects](TSUMutableLinkedPointerSet *self, SEL a2)
{
  self->mHead = 0LL;
  self->mTail = 0LL;
  CFDictionaryRemoveAllValues(self->mDictionary);
}