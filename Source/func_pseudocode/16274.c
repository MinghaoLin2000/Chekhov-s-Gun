_CFDictionaryBuildKeySetInt64
void __fastcall CFDictionaryBuildKeySetInt64(__CFDictionary *a1, const void *a2, __int64 a3)
{
  CFNumberRef v5; // x21
  __int64 valuePtr; // [xsp+8h] [xbp-28h] BYREF

  valuePtr = a3;
  v5 = CFNumberCreate(kCFAllocatorDefault, kCFNumberSInt64Type, &valuePtr);
  CFDictionarySetValue(a1, a2, v5);
  CFRelease(v5);
}