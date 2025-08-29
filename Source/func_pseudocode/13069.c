-[TSUNoCopyDictionary allKeys]
id __cdecl -[TSUNoCopyDictionary allKeys](TSUNoCopyDictionary *self, SEL a2)
{
  unsigned __int64 Count; // x0
  unsigned __int64 v4; // x19
  const void **v5; // x21
  NSArray *v6; // x19
  void *keys[16]; // [xsp+8h] [xbp-B8h] BYREF

  Count = CFDictionaryGetCount(self->mDictionary);
  v4 = Count;
  v5 = (const void **)keys;
  if ( Count >= 0x10 )
    v5 = (const void **)malloc_type_malloc(8 * Count, 0x80040B8603338uLL);
  CFDictionaryGetKeysAndValues(self->mDictionary, v5, 0LL);
  v6 = +[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", v5, v4);
  if ( v5 != (const void **)keys )
    free(v5);
  return v6;
}