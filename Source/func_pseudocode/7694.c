_$sSo11CGRegionRefa16EyeCandyGraphicsE8offsetByyABSo7CGPointVF
id CGRegionRef.offsetBy(_:)()
{
  void *v0; // x20
  id result; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  result = (id)CGRegionCreateWithOffset(v0);
  if ( !result )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return objc_retain(v0);
  }
  return result;
}