_$s16EyeCandyGraphics9CGSWindowV28getScreenRectIncludingShadow10connectionSo6CGRectVAA13CGSConnectionV_tF
__int64 __fastcall CGSWindow.getScreenRectIncludingShadow(connection:)(__int64 a1, __int64 a2)
{
  __int64 v2; // x0
  __int64 v3; // x0

  v2 = CGSWindow.getSpecifiedWindowShape(_:connection:)(3LL, a1, a2);
  if ( v2 )
  {
    v3 = CGRegionRef.boundingBox.getter();
    v2 = sub_10001B25C(v3);
  }
  return sub_10000B2B0(v2);
}