-[TSUNoCopyDictionary count]
unsigned __int64 __cdecl -[TSUNoCopyDictionary count](TSUNoCopyDictionary *self, SEL a2)
{
  return CFDictionaryGetCount(self->mDictionary);
}