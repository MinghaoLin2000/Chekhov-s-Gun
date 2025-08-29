-[TSUNoCopyDictionary initWithCFDictionary:]
TSUNoCopyDictionary *__cdecl -[TSUNoCopyDictionary initWithCFDictionary:](
        TSUNoCopyDictionary *self,
        SEL a2,
        __CFDictionary *a3)
{
  TSUNoCopyDictionary *v4; // x20
  objc_super v6; // [xsp+0h] [xbp-20h] BYREF

  v6.receiver = self;
  v6.super_class = (Class)&OBJC_CLASS___TSUNoCopyDictionary;
  v4 = -[TSUNoCopyDictionary init](&v6, "init");
  if ( v4 )
    v4->mDictionary = CFDictionaryCreateMutableCopy(0LL, 0LL, a3);
  return v4;
}