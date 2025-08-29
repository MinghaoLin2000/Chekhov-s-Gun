_$s16EyeCandyGraphics9CGSWindowV9eventMaskAA011SystemEventF0Vvg
__int64 CGSWindow.eventMask.getter()
{
  int *v0; // x20
  _BYTE v2[24]; // [xsp+10h] [xbp-30h] BYREF

  v0 = CGSConnection.defaultConnection.unsafeMutableAddressor();
  sub_10001B1D4(v0, v2);
  CGSGetWindowEventMask((unsigned int)*v0);
  return UInt32.init(_:)(0);
}