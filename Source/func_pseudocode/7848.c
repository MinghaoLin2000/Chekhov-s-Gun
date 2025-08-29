_$s16EyeCandyGraphics9CGSWindowV5titleSSSgvg
__int64 CGSWindow.title.getter()
{
  __int64 v0; // x0
  EyeCandyGraphics::CGSConnection v1; // w0

  CGSConnection.defaultConnection.unsafeMutableAddressor();
  v0 = sub_1000120F4();
  v1.cid = sub_10001B21C(v0);
  return CGSWindow.getTitle(connection:)(v1).value._countAndFlagsBits;
}