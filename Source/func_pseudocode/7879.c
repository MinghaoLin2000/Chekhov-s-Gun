_$s16EyeCandyGraphics9CGSWindowV6getPid10connections5Int32VAA13CGSConnectionV_tF
Swift::Int32 __swiftcall CGSWindow.getPid(connection:)(EyeCandyGraphics::CGSConnection connection)
{
  __int64 v1; // x21

  CGSWindow.getOwner(connection:)(connection);
  if ( !v1 )
    return CGSConnection.pid.getter();
  swift_errorRelease(v1);
  return 0;
}