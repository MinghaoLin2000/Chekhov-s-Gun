_uarpPlatformSetMaxRxPayloadLength
__int64 __fastcall uarpPlatformSetMaxRxPayloadLength(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // x0

  result = 30LL;
  if ( a1 )
  {
    if ( a2 )
    {
      result = 0LL;
      *(_DWORD *)(a2 + 4) = a3;
    }
  }
  return result;
}