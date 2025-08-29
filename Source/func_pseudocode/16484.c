_getURLForAssetURLType
__CFString *__fastcall getURLForAssetURLType(unsigned __int64 a1)
{
  __int64 v1; // x30
  __CFString *v2; // x0

  if ( a1 <= 6 && ((0x75u >> a1) & 1) != 0 )
  {
    v2 = objc_retain(*off_100031860[a1]);
    if ( ((v1 ^ (2 * v1)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
  }
  else
  {
    v2 = 0LL;
    if ( ((v1 ^ (2 * v1)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
  }
  return objc_autoreleaseReturnValue(v2);
}