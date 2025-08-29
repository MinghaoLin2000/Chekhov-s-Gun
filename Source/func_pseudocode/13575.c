-[TSUMutableLinkedPointerSet count]
unsigned __int64 __cdecl -[TSUMutableLinkedPointerSet count](TSUMutableLinkedPointerSet *self, SEL a2)
{
  return CFDictionaryGetCount(self->mDictionary);
}