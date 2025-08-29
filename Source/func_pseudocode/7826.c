_$s16EyeCandyGraphics9CGSWindowV11makeContext10connectionSo12CGContextRefaSgAA13CGSConnectionV_tF
// local variable allocation has failed, the output may be wrong!
CGContextRef_optional __swiftcall CGSWindow.makeContext(connection:)(EyeCandyGraphics::CGSConnection connection)
{
  return (CGContextRef_optional)_CGWindowContextCreate(*(_QWORD *)&connection.cid);
}