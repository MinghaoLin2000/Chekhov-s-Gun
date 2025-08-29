-[TSUPointerKeyDictionary initWithCapacity:]
TSUPointerKeyDictionary *__cdecl -[TSUPointerKeyDictionary initWithCapacity:](
        TSUPointerKeyDictionary *self,
        SEL a2,
        unsigned __int64 a3)
{
  CFStringRef (__cdecl *copyDescription)(const void *); // x8
  TSUPointerKeyDictionary *v5; // x0
  TSUPointerKeyDictionary *v6; // x20
  __CFDictionary *mDictionary; // x0
  objc_super v9; // [xsp+0h] [xbp-60h] BYREF
  CFDictionaryKeyCallBacks keyCallBacks; // [xsp+10h] [xbp-50h] BYREF

  keyCallBacks.version = kCFTypeDictionaryKeyCallBacks.version;
  keyCallBacks.retain = 0LL;
  copyDescription = kCFTypeDictionaryKeyCallBacks.copyDescription;
  keyCallBacks.release = 0LL;
  keyCallBacks.copyDescription = copyDescription;
  keyCallBacks.equal = 0LL;
  keyCallBacks.hash = 0LL;
  v9.receiver = self;
  v9.super_class = (Class)&OBJC_CLASS___TSUPointerKeyDictionary;
  v5 = -[TSUNoCopyDictionary initWithCapacity:](&v9, "initWithCapacity:");
  v6 = v5;
  if ( v5 )
  {
    mDictionary = v5->super.mDictionary;
    if ( mDictionary )
      CFRelease(mDictionary);
    v6->super.mDictionary = CFDictionaryCreateMutable(0LL, a3, &keyCallBacks, &kCFTypeDictionaryValueCallBacks);
  }
  return v6;
}