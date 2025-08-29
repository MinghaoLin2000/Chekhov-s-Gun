-[TSUNoCopyDictionary mutableCopyWithZone:]
id __cdecl -[TSUNoCopyDictionary mutableCopyWithZone:](TSUNoCopyDictionary *self, SEL a2, _NSZone *a3)
{
  void *v4; // x0
  __CFDictionary *mDictionary; // x2
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_msgSend((id)objc_opt_class(self), "allocWithZone:", a3);
  mDictionary = self->mDictionary;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return _objc_msgSend(v4, "initWithCFDictionary:", mDictionary);
}