_uarpAssetTagChdr
__int64 uarpAssetTagChdr()
{
  aChdr[4] = 0;
  return uarpPayloadTagPack();
}