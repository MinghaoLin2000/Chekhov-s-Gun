_$s16EyeCandyGraphics9CGSWindowV10resolution04CoreC07CGFloatVSgvg
__int64 CGSWindow.resolution.getter()
{
  __int64 v0; // x0
  __int64 v1; // x0
  __int64 v2; // x1

  CGSConnection.defaultConnection.unsafeMutableAddressor();
  v0 = sub_1000120F4();
  v1 = sub_10001B21C(v0);
  return CGSWindow.getResolution(connection:)(v1, v2);
}