_uarpPlatformAssetFindByTag
__int64 __fastcall uarpPlatformAssetFindByTag(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 i; // x19

  for ( i = *(_QWORD *)(a1 + 568); i; i = *(_QWORD *)(i + 712) )
  {
    if ( *(_DWORD *)(i + 304) == a3 && *(_QWORD *)(i + 696) == a2 && (unsigned int)uarpAssetTagCompare(i + 48, a4) )
      break;
  }
  return i;
}