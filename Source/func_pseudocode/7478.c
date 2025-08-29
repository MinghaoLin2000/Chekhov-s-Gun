_$s16EyeCandyGraphics8CGSSpaceV7destroy10connectionyAA13CGSConnectionV_tF
// local variable allocation has failed, the output may be wrong!
Swift::Void __swiftcall CGSSpace.destroy(connection:)(EyeCandyGraphics::CGSConnection connection)
{
  __int64 v1; // x1

  if ( v1 )
    _CGSSpaceDestroy(*(_QWORD *)&connection.cid);
}