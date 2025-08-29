_uarpPlatformGetMaxTxPayloadLength
__int64 __fastcall uarpPlatformGetMaxTxPayloadLength(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 result; // x0

  result = 30LL;
  if ( a1 && a2 )
  {
    if ( a3 )
    {
      result = 0LL;
      *a3 = *a2;
    }
  }
  return result;
}