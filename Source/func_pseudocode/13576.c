-[TSUMutableLinkedPointerSet array]
id __cdecl -[TSUMutableLinkedPointerSet array](TSUMutableLinkedPointerSet *self, SEL a2)
{
  CFIndex Count; // x19
  id result; // x0
  id v5; // x20
  NSArray *v6; // x19

  Count = CFDictionaryGetCount(self->mDictionary);
  result = malloc_type_malloc(8 * Count, 0x80040B8603338uLL);
  if ( result )
  {
    v5 = result;
    CFDictionaryGetKeysAndValues(self->mDictionary, (const void **)result, 0LL);
    v6 = +[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", v5, Count);
    free(v5);
    return v6;
  }
  return result;
}