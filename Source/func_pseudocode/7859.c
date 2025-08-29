_$s16EyeCandyGraphics9CGSWindowV9eventMaskAA011SystemEventF0Vvs
__int64 __fastcall CGSWindow.eventMask.setter(__int64 a1, __int64 a2)
{
  int *v4; // x21

  v4 = CGSConnection.defaultConnection.unsafeMutableAddressor();
  sub_1000120F4();
  return CGSSetWindowEventMask((unsigned int)*v4, a2, a1);
}