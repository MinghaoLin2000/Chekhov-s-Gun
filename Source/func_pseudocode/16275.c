_CFDictionaryBuildKeySetInt32
void __fastcall CFDictionaryBuildKeySetInt32(__CFDictionary *a1, const void *a2, int a3)
{
  CFNumberRef v5; // x21
  int valuePtr; // [xsp+Ch] [xbp-24h] BYREF

  valuePtr = a3;
  v5 = CFNumberCreate(kCFAllocatorDefault, kCFNumberSInt32Type, &valuePtr);
  CFDictionarySetValue(a1, a2, v5);
  CFRelease(v5);
}