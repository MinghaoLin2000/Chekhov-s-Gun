_$sSo11CGRegionRefa16EyeCandyGraphicsE10differenceyABSo6CGRectVF
__int64 CGRegionRef.difference(_:)()
{
  __int64 v0; // x20
  __int64 result; // x0
  void *v2; // x19
  __int64 DifferenceWithRegion; // x20

  result = CGRegionCreateWithRect();
  if ( result )
  {
    v2 = (void *)result;
    DifferenceWithRegion = CGRegionCreateDifferenceWithRegion(v0, result);
    objc_release(v2);
    return DifferenceWithRegion;
  }
  else
  {
    __break(1u);
  }
  return result;
}