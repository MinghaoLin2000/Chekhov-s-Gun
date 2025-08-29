_uarpPlatformSetMaxTxPayloadLength
__int64 __fastcall uarpPlatformSetMaxTxPayloadLength(__int64 a1, _DWORD *a2, int a3)
{
  __int64 result; // x0

  result = 30LL;
  if ( a1 )
  {
    if ( a2 )
    {
      result = 0LL;
      *a2 = a3;
    }
  }
  return result;
}