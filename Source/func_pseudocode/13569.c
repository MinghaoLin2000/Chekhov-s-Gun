-[TSUMutableLinkedPointerSet containsObject:]
bool __cdecl -[TSUMutableLinkedPointerSet containsObject:](TSUMutableLinkedPointerSet *self, SEL a2, id a3)
{
  return CFDictionaryContainsKey(self->mDictionary, a3) != 0;
}