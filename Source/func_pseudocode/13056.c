-[TSUNoCopyDictionary dealloc]
void __cdecl -[TSUNoCopyDictionary dealloc](TSUNoCopyDictionary *self, SEL a2)
{
  __CFDictionary *mDictionary; // x0
  objc_super v4; // [xsp+0h] [xbp-20h] BYREF

  mDictionary = self->mDictionary;
  if ( mDictionary )
  {
    CFRelease(mDictionary);
    self->mDictionary = 0LL;
  }
  v4.receiver = self;
  v4.super_class = (Class)&OBJC_CLASS___TSUNoCopyDictionary;
  -[TSUNoCopyDictionary dealloc](&v4, "dealloc");
}