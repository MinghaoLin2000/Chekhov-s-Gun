_uarpPlatformAssetFindByAssetID
__int64 __fastcall uarpPlatformAssetFindByAssetID(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 result; // x0

  for ( result = *(_QWORD *)(a1 + 568); result; result = *(_QWORD *)(result + 712) )
  {
    if ( *(_DWORD *)(result + 304) == a3 && *(_QWORD *)(result + 696) == a2 && *(unsigned __int16 *)(result + 44) == a4 )
      break;
  }
  return result;
}