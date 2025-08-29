_$s16EyeCandyGraphics9CGSWindowV12setEventMask_10connectionyAA06SystemfG0V_AA13CGSConnectionVtF
// local variable allocation has failed, the output may be wrong!
Swift::Void __swiftcall CGSWindow.setEventMask(_:connection:)(
        EyeCandyGraphics::SystemEventMask _,
        EyeCandyGraphics::CGSConnection connection)
{
  __int64 v2; // x2

  CGSSetWindowEventMask(*(_QWORD *)&connection.cid, v2, *(_QWORD *)&_.rawValue);
}