_CFDictionaryBuildKeySetTag
void __fastcall CFDictionaryBuildKeySetTag(
        __CFDictionary *a1,
        const void *a2,
        const __CFString *a3,
        const __CFString *a4)
{
  __CFString *Mutable; // x23
  __int64 vars8; // [xsp+38h] [xbp+8h]

  Mutable = CFStringCreateMutable(kCFAllocatorDefault, 0LL);
  CFStringAppend(Mutable, a3);
  CFStringAppend(Mutable, CFSTR(","));
  CFStringAppend(Mutable, a4);
  CFDictionarySetValue(a1, a2, Mutable);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  CFRelease(Mutable);
}