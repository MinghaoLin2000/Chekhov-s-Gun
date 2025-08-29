-[TSUMutableLinkedPointerSet objectEnumeratorAfterObject:]
id __cdecl -[TSUMutableLinkedPointerSet objectEnumeratorAfterObject:](TSUMutableLinkedPointerSet *self, SEL a2, id a3)
{
  id result; // x0
  TSULinkedPointerSetEnumerator *v4; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  result = (id)CFDictionaryGetValue(self->mDictionary, a3);
  if ( result )
  {
    v4 = -[TSULinkedPointerSetEnumerator initWithFirstEntry:](
           objc_alloc(&OBJC_CLASS___TSULinkedPointerSetEnumerator),
           "initWithFirstEntry:",
           *((_QWORD *)result + 3));
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return objc_autorelease(v4);
  }
  return result;
}