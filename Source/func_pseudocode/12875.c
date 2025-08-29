-[TSURetainedPointerKeyDictionary initWithCapacity:]
TSURetainedPointerKeyDictionary *__cdecl -[TSURetainedPointerKeyDictionary initWithCapacity:](
        TSURetainedPointerKeyDictionary *self,
        SEL a2,
        unsigned __int64 a3)
{
  CFStringRef (__cdecl *copyDescription)(const void *); // x8
  TSURetainedPointerKeyDictionary *v5; // x0
  TSURetainedPointerKeyDictionary *v6; // x20
  __CFDictionary *mDictionary; // x0
  objc_super v9; // [xsp+0h] [xbp-60h] BYREF
  CFDictionaryKeyCallBacks keyCallBacks; // [xsp+10h] [xbp-50h] BYREF

  *(_OWORD *)&keyCallBacks.retain = *(_OWORD *)&kCFTypeDictionaryKeyCallBacks.retain;
  copyDescription = kCFTypeDictionaryKeyCallBacks.copyDescription;
  keyCallBacks.equal = 0LL;
  keyCallBacks.hash = 0LL;
  keyCallBacks.copyDescription = copyDescription;
  v9.receiver = self;
  v9.super_class = (Class)&OBJC_CLASS___TSURetainedPointerKeyDictionary;
  keyCallBacks.version = kCFTypeDictionaryKeyCallBacks.version;
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