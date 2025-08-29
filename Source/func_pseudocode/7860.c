_$s16EyeCandyGraphics9CGSWindowV9eventMaskAA011SystemEventF0VvM
__int64 (__fastcall *__fastcall CGSWindow.eventMask.modify(EyeCandyGraphics::SystemEventMask **a1, Swift::UInt32 a2))()
{
  EyeCandyGraphics::SystemEventMask *v4; // x19
  int *v5; // x22
  __int64 v6; // x0

  v4 = (EyeCandyGraphics::SystemEventMask *)malloc(0x58uLL);
  *a1 = v4;
  v4[21].rawValue = a2;
  v5 = CGSConnection.defaultConnection.unsafeMutableAddressor();
  *(_QWORD *)&v4[18].rawValue = v5;
  sub_10001B1D4(v5, v4);
  v6 = (unsigned int)*v5;
  v4[6].rawValue = 0;
  CGSGetWindowEventMask(v6);
  v4[20].rawValue = UInt32.init(_:)(v4[6]);
  return sub_10001A868;
}