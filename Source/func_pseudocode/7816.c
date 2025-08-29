_$s16EyeCandyGraphics9CGDisplayV11bestDisplayyACSgSo7CGPointVFZ
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall static CGDisplay.bestDisplay(_:)(double a1, double a2)
{
  __int64 v2; // x0
  __int64 v3; // x8
  __int64 v4; // x9
  CGDirectDisplayID displays[2]; // [xsp+0h] [xbp-10h] BYREF

  *(_QWORD *)displays = 0LL;
  v2 = CGGetDisplaysWithPoint(*(CGPoint *)&a1, 1u, &displays[1], displays);
  sub_100019294(v2);
  return v3 | (v4 << 32);
}