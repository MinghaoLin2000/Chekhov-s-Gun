_$s16EyeCandyGraphics9CGSWindowV3pids5Int32Vvg
__int64 CGSWindow.pid.getter()
{
  __int64 v0; // x0
  EyeCandyGraphics::CGSConnection v1; // w0
  __int64 v2; // x21

  CGSConnection.defaultConnection.unsafeMutableAddressor();
  v0 = sub_1000120F4();
  v1.cid = sub_10001B21C(v0);
  CGSWindow.getOwner(connection:)(v1);
  if ( !v2 )
    return CGSConnection.pid.getter();
  swift_errorRelease(v2);
  return 0LL;
}