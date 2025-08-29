_uarpPlatformGetMaxRxPayloadLength
__int64 __fastcall uarpPlatformGetMaxRxPayloadLength(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // x0

  result = 30LL;
  if ( a1 && a2 )
  {
    if ( a3 )
    {
      result = 0LL;
      *a3 = *(_DWORD *)(a2 + 4);
    }
  }
  return result;
}