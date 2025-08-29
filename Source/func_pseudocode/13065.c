-[TSUNoCopyDictionary getObjects:andKeys:count:]
void __cdecl -[TSUNoCopyDictionary getObjects:andKeys:count:](
        TSUNoCopyDictionary *self,
        SEL a2,
        id *a3,
        id *a4,
        unsigned __int64 a5)
{
  unsigned __int64 Count; // x0
  unsigned __int64 v10; // x8
  bool v11; // zf
  __CFDictionary *mDictionary; // x0
  __int64 vars8; // [xsp+38h] [xbp+8h]

  Count = CFDictionaryGetCount(self->mDictionary);
  if ( Count >= a5 )
    v10 = a5;
  else
    v10 = Count;
  if ( v10 )
    v11 = ((unsigned __int64)a3 | (unsigned __int64)a4) == 0;
  else
    v11 = 1;
  if ( !v11 )
  {
    mDictionary = self->mDictionary;
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    CFDictionaryGetKeysAndValues(mDictionary, (const void **)a4, (const void **)a3);
  }
}