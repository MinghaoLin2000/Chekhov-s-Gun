_$s16EyeCandyGraphics9CGSWindowV25screenRectIncludingShadowSo6CGRectVvg
__int64 __fastcall CGSWindow.screenRectIncludingShadow.getter(__int64 a1)
{
  int *v2; // x20
  __int64 v3; // x0
  __int64 v4; // x0

  v2 = CGSConnection.defaultConnection.unsafeMutableAddressor();
  sub_1000120F4();
  v3 = CGSWindow.getSpecifiedWindowShape(_:connection:)(3LL, (unsigned int)*v2, a1);
  if ( v3 )
  {
    v4 = CGRegionRef.boundingBox.getter();
    v3 = sub_10001B25C(v4);
  }
  return sub_10000B2B0(v3);
}