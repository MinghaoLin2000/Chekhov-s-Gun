_$sSo10WindowTagsV16EyeCandyGraphicsE10connection6windowAbC13CGSConnectionV_AC9CGSWindowVtcfC
// local variable allocation has failed, the output may be wrong!
__C::WindowTags __swiftcall WindowTags.init(connection:window:)(
        EyeCandyGraphics::CGSConnection connection,
        EyeCandyGraphics::CGSWindow window)
{
  __C::WindowTags v3; // [xsp+0h] [xbp-10h] BYREF

  v3.rawValue = 0LL;
  if ( (unsigned int)CGSGetWindowTags(*(_QWORD *)&connection.cid, *(_QWORD *)&window.wid, &v3, 64LL) )
    return 0LL;
  else
    return v3;
}