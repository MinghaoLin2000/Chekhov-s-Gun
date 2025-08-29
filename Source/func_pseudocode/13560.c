-[TSUMutableLinkedPointerSet init]
TSUMutableLinkedPointerSet *__cdecl -[TSUMutableLinkedPointerSet init](TSUMutableLinkedPointerSet *self, SEL a2)
{
  TSUMutableLinkedPointerSet *v2; // x19
  CFMutableDictionaryRef Mutable; // x0
  objc_super v5; // [xsp+0h] [xbp-20h] BYREF

  v5.receiver = self;
  v5.super_class = (Class)&OBJC_CLASS___TSUMutableLinkedPointerSet;
  v2 = -[TSUMutableLinkedPointerSet init](&v5, "init");
  if ( v2 )
  {
    Mutable = CFDictionaryCreateMutable(0LL, 0LL, 0LL, &kCFTypeDictionaryValueCallBacks);
    v2->mHead = 0LL;
    v2->mTail = 0LL;
    v2->mDictionary = Mutable;
  }
  return v2;
}