_$s16EyeCandyGraphics9CGSWindowV5levels5Int32VSgvg
__int64 CGSWindow.level.getter()
{
  __int64 v0; // x0
  EyeCandyGraphics::CGSConnection v1; // w0
  unsigned __int64 v2; // x0

  CGSConnection.defaultConnection.unsafeMutableAddressor();
  v0 = sub_1000120F4();
  v1.cid = sub_10001B21C(v0);
  *(Swift::Int32_optional *)&v2 = CGSWindow.getLevel(connection:)(v1);
  return (unsigned int)v2 | ((HIDWORD(v2) & 1) << 32);
}