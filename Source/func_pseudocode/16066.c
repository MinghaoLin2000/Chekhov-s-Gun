_uarpPlatformAssetFindByAssetContextAndList
__int64 __fastcall uarpPlatformAssetFindByAssetContextAndList(__int64 result, __int64 a2, int a3)
{
  if ( result )
  {
    for ( result = *(_QWORD *)(result + 568); result; result = *(_QWORD *)(result + 712) )
    {
      if ( *(_DWORD *)(result + 304) == a3 && *(_QWORD *)(result + 704) == a2 )
        break;
    }
  }
  return result;
}