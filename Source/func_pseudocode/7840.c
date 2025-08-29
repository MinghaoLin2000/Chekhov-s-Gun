_$s16EyeCandyGraphics9CGSWindowV8getLevel10connections5Int32VSgAA13CGSConnectionV_tF
// local variable allocation has failed, the output may be wrong!
Swift::Int32_optional __swiftcall CGSWindow.getLevel(connection:)(EyeCandyGraphics::CGSConnection connection)
{
  return (Swift::Int32_optional)((unsigned __int64)((unsigned int)CGSGetWindowLevel(*(_QWORD *)&connection.cid) != 0) << 32);
}