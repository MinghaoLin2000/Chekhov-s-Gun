_uarpAssetSuperBinaryVersionForProtocolVersion
__int64 __fastcall uarpAssetSuperBinaryVersionForProtocolVersion(unsigned int a1)
{
  if ( a1 < 3 )
    return 2LL;
  else
    return 3LL;
}