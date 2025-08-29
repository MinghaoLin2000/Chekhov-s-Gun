_uarpPlatformAssetProcessingCompleteInternal
__int64 __fastcall uarpPlatformAssetProcessingCompleteInternal(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6)
{
  __int64 result; // x0

  result = 30LL;
  if ( a1 && a3 )
  {
    if ( (unsigned int)uarpPlatformAssetIsKnown(a1, a2, a3) )
    {
      *(_BYTE *)(a3 + 392) = 0;
      *(_BYTE *)(a3 + 72) = 1;
      *(_QWORD *)(a3 + 696) = 0LL;
      if ( !a2 || (result = uarpAssetProcessingComplete(a1, a2, a3, a5 | a4), !(_DWORD)result) )
      {
        result = 0LL;
        if ( a4 == 4 && !a6 )
        {
          UARPLayer2AssetCorrupt(a1, a3);
          return 0LL;
        }
      }
    }
    else
    {
      return 23LL;
    }
  }
  return result;
}