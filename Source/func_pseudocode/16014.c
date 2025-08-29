_UARPSuperBinaryQueryAssetLength
__int64 __fastcall UARPSuperBinaryQueryAssetLength(int a1, int a2)
{
  __int64 result; // x0
  _OWORD __dst[3]; // [xsp+10h] [xbp-40h] BYREF

  memset(__dst, 0, 44);
  result = uarpPlatformEndpointAssetGetBytesAtOffset(a1, 0, a2, __dst);
  if ( !(_DWORD)result )
    return 11LL;
  return result;
}