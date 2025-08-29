_CopyDataAndBytesAndLengthFromDictionary
const __CFData *__fastcall CopyDataAndBytesAndLengthFromDictionary(
        CFPropertyListRef propertyList,
        const UInt8 **a2,
        CFIndex *a3)
{
  const __CFData *Data; // x0
  const __CFData *v6; // x21
  CFIndex Length; // x0
  __int64 v8; // x1

  if ( propertyList && a2 && a3 )
  {
    Data = CFPropertyListCreateData(kCFAllocatorDefault, propertyList, kCFPropertyListBinaryFormat_v1_0, 0LL, 0LL);
    if ( Data )
    {
      v6 = Data;
      *a2 = CFDataGetBytePtr(Data);
      Length = CFDataGetLength(v6);
LABEL_9:
      *a3 = Length;
      return v6;
    }
  }
  else if ( !a2 )
  {
    goto LABEL_8;
  }
  *a2 = 0LL;
LABEL_8:
  Length = 0LL;
  v6 = 0LL;
  v8 = 0LL;
  if ( a3 )
    goto LABEL_9;
  return (const __CFData *)v8;
}