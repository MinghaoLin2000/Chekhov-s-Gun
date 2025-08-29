_uarpAssetTagStructChdr
int *uarpAssetTagStructChdr()
{
  int *result; // x0

  aChdr[4] = 0;
  result = &dword_10002AC94;
  dword_10002AC94 = *(_DWORD *)aChdr;
  return result;
}