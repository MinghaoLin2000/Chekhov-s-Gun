_$s16EyeCandyGraphics9CGDisplayV10connection6windowACSgAA13CGSConnectionV_AA9CGSWindowVtcfC
// local variable allocation has failed, the output may be wrong!
EyeCandyGraphics::CGDisplay_optional __swiftcall CGDisplay.init(connection:window:)(
        EyeCandyGraphics::CGSConnection connection,
        EyeCandyGraphics::CGSWindow window)
{
  __int64 v2; // x0
  __int64 v3; // x1
  void *v4; // x20
  Swift::String v5; // x0
  __int64 v6; // x0
  __int64 v7; // x19
  unsigned __int8 v8; // w8

  v2 = CGSCopyManagedDisplayForWindow(*(_QWORD *)&connection.cid, *(_QWORD *)&window.wid);
  if ( !v2
    || (v4 = (void *)v2,
        v5._countAndFlagsBits = sub_10001CAD0(v2, v3),
        *(EyeCandyGraphics::CGDisplay_optional *)&v6 = CGDisplay.init(uuidString:)(v5),
        v7 = v6,
        objc_release(v4),
        (v7 & 0x100000000LL) != 0) )
  {
    LODWORD(v7) = 0;
    v8 = 1;
  }
  else
  {
    v8 = 0;
  }
  return (EyeCandyGraphics::CGDisplay_optional)((unsigned int)v7 | ((unsigned __int64)v8 << 32));
}