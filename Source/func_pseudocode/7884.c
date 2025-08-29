_$s16EyeCandyGraphics9CGSWindowV4tagsSo10WindowTagsVvg
__C::WindowTags CGSWindow.tags.getter()
{
  __int64 v0; // x0
  EyeCandyGraphics::CGSConnection v1; // w0
  EyeCandyGraphics::CGSWindow v2; // w1

  CGSConnection.defaultConnection.unsafeMutableAddressor();
  v0 = sub_1000120F4();
  v1.cid = sub_10001B21C(v0);
  return WindowTags.init(connection:window:)(v1, v2);
}