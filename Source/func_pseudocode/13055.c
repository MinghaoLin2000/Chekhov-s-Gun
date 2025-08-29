-[TSUNoCopyDictionary initWithCapacity:]
TSUNoCopyDictionary *__cdecl -[TSUNoCopyDictionary initWithCapacity:](
        TSUNoCopyDictionary *self,
        SEL a2,
        unsigned __int64 a3)
{
  TSUNoCopyDictionary *v4; // x20
  objc_super v6; // [xsp+0h] [xbp-20h] BYREF

  v6.receiver = self;
  v6.super_class = (Class)&OBJC_CLASS___TSUNoCopyDictionary;
  v4 = -[TSUNoCopyDictionary init](&v6, "init");
  if ( v4 )
    v4->mDictionary = CFDictionaryCreateMutable(
                        0LL,
                        a3,
                        &kCFTypeDictionaryKeyCallBacks,
                        &kCFTypeDictionaryValueCallBacks);
  return v4;
}