_uarpPlatformCreateRxAsset
__int64 __fastcall uarpPlatformCreateRxAsset(__int64 a1, __int64 a2)
{
  int v4; // w8
  __int64 result; // x0
  __int64 v6; // [xsp+8h] [xbp-18h] BYREF

  v6 = 0LL;
  v4 = UARPLayer2RequestBuffer(a1, &v6, 0x2D8u);
  result = 0LL;
  if ( !v4 )
  {
    result = v6;
    if ( v6 )
    {
      *(_QWORD *)(v6 + 696) = a2;
      *(_DWORD *)(result + 304) = 0;
      *(_QWORD *)(result + 712) = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 568) = result;
    }
  }
  return result;
}