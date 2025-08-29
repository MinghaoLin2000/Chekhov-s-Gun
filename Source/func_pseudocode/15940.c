_uarpAssetTagChdr4cc
char *uarpAssetTagChdr4cc()
{
  char *result; // x0

  result = aChdr;
  aChdr[4] = 0;
  return result;
}