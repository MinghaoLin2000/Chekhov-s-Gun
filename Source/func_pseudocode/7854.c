_$s16EyeCandyGraphics9CGSWindowV10resolution04CoreC07CGFloatVSgvs
__int64 __fastcall CGSWindow.resolution.setter(__int64 result, char a2)
{
  double v2; // d8
  __int64 v3; // x0
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (a2 & 1) == 0 )
  {
    v2 = *(double *)&result;
    CGSConnection.defaultConnection.unsafeMutableAddressor();
    v3 = sub_1000120F4();
    v4 = sub_10001B21C(v3);
    return CGSSetWindowResolution(v4, v5, v2);
  }
  return result;
}