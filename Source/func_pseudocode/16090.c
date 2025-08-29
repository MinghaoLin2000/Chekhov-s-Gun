_uarpAssetQuerySuperBinaryMetaData
__int64 __fastcall uarpAssetQuerySuperBinaryMetaData(__int64 a1, __int64 a2)
{
  __int64 result; // x0

  result = 0LL;
  if ( a1 && a2 )
  {
    if ( *(_BYTE *)(a2 + 460) )
      return *(_QWORD *)(a2 + 720);
    else
      return 0LL;
  }
  return result;
}