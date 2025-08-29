_$s16EyeCandyGraphics9CGSWindowV12getEventMask10connectionAA06SystemfG0VAA13CGSConnectionV_tF
// local variable allocation has failed, the output may be wrong!
EyeCandyGraphics::SystemEventMask __swiftcall CGSWindow.getEventMask(connection:)(
        EyeCandyGraphics::CGSConnection connection)
{
  EyeCandyGraphics::SystemEventMask v2; // [xsp+4h] [xbp-Ch]

  v2.rawValue = 0;
  CGSGetWindowEventMask(*(_QWORD *)&connection.cid);
  return (EyeCandyGraphics::SystemEventMask)UInt32.init(_:)(v2);
}