_DictionaryCreateFromBytesAndLength
CFPropertyListRef __fastcall DictionaryCreateFromBytesAndLength(UInt8 *bytes, CFIndex length)
{
  const __CFData *v2; // x0
  const __CFData *v3; // x19
  CFPropertyListRef v4; // x20

  if ( !bytes )
    return 0LL;
  if ( length < 1 )
    return 0LL;
  v2 = CFDataCreate(kCFAllocatorDefault, bytes, length);
  if ( !v2 )
    return 0LL;
  v3 = v2;
  v4 = CFPropertyListCreateWithData(kCFAllocatorDefault, v2, 0LL, 0LL, 0LL);
  CFRelease(v3);
  return v4;
}