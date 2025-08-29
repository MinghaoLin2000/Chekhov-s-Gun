-[TSUNoCopyDictionary objectForKey:]
id __cdecl -[TSUNoCopyDictionary objectForKey:](TSUNoCopyDictionary *self, SEL a2, id a3)
{
  if ( a3 )
    return (id)CFDictionaryGetValue(self->mDictionary, a3);
  else
    return 0LL;
}