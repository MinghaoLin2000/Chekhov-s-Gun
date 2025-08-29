-[TSUNoCopyDictionary countByEnumeratingWithState:objects:count:]
unsigned __int64 __cdecl -[TSUNoCopyDictionary countByEnumeratingWithState:objects:count:](
        TSUNoCopyDictionary *self,
        SEL a2,
        $655AB7B2D2422B1B18367FB7F2D120EF *a3,
        id *a4,
        unsigned __int64 a5)
{
  unsigned __int64 Count; // x0
  unsigned __int64 v10; // x22
  const void **v11; // x24

  Count = CFDictionaryGetCount(self->mDictionary);
  if ( a3->var0 >= Count )
    return 0LL;
  v10 = Count;
  v11 = (const void **)malloc_type_malloc(8 * Count, 0x80040B8603338uLL);
  CFDictionaryGetKeysAndValues(self->mDictionary, v11, 0LL);
  if ( v10 - a3->var0 < a5 )
    a5 = v10 - a3->var0;
  memcpy(a4, &v11[a3->var0], 8 * a5);
  free(v11);
  a3->var0 += a5;
  a3->var1 = a4;
  a3->var2 = (unsigned __int64 *)&a3->var2;
  return a5;
}