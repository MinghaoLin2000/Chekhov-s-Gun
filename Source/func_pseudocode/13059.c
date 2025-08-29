-[TSUNoCopyDictionary removeObjectForKey:]
void __cdecl -[TSUNoCopyDictionary removeObjectForKey:](TSUNoCopyDictionary *self, SEL a2, id a3)
{
  CFDictionaryRemoveValue(self->mDictionary, a3);
}