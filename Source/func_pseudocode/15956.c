_uarpAssetTagIsValid
bool __fastcall uarpAssetTagIsValid(_BYTE *a1)
{
  return *a1 || a1[1] || a1[2] || a1[3];
}