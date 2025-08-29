_$s16EyeCandyGraphics9CGDisplayV24animationStartTimeOffsetSdvg
void __fastcall CGDisplay.animationStartTimeOffset.getter(__int64 a1)
{
  unsigned __int64 v1[3]; // [xsp+0h] [xbp-60h] BYREF

  SLSDisplayGetTiming(v1, 0LL, a1);
  if ( (double)v1[0] * 0.000000001 > 0.0 )
    CACurrentMediaTime();
}