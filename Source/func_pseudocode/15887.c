_uarpPlatformAssetRelease
__int64 __fastcall uarpPlatformAssetRelease(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // x0

  result = UARPLayer2AssetReleased2(a1, a2, a3);
  a3[88] = 0LL;
  return result;
}