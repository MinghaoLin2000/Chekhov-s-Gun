_$s16EyeCandyGraphics9CGSWindowV30screenBoundsIgnoringTransformsSo6CGRectVvg
__int64 CGSWindow.screenBoundsIgnoringTransforms.getter()
{
  __int64 v0; // x0
  __int64 v1; // x0

  CGSConnection.defaultConnection.unsafeMutableAddressor();
  v0 = sub_1000120F4();
  v1 = sub_10001B21C(v0);
  return SLSGetWindowFrameBounds(v1);
}