_$s16EyeCandyGraphics9CGDisplayV8vblDeltaSdvg
double __fastcall CGDisplay.vblDelta.getter(__int64 a1)
{
  double result; // d0
  unsigned __int64 v2[8]; // [xsp+0h] [xbp-40h] BYREF

  SLSDisplayGetTiming(v2, 0LL, a1);
  result = (double)v2[0] * 0.000000001;
  if ( !v2[0] )
    return 0.0166666667;
  return result;
}