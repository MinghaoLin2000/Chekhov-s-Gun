-[TSUNoCopyDictionary removeAllObjects]
void __cdecl -[TSUNoCopyDictionary removeAllObjects](TSUNoCopyDictionary *self, SEL a2)
{
  CFDictionaryRemoveAllValues(self->mDictionary);
}