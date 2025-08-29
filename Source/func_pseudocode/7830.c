_$s16EyeCandyGraphics9CGSWindowV17associatedWindowsSayACGvg
_QWORD *CGSWindow.associatedWindows.getter()
{
  __int64 v0; // x0

  CGSConnection.defaultConnection.unsafeMutableAddressor();
  v0 = sub_1000120F4();
  sub_10001B21C(v0);
  return CGSWindow.getAssociatedWindows(connection:)();
}