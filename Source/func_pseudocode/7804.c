_$s16EyeCandyGraphics9CGDisplayV11isProjectorSbvg
__int64 __fastcall CGDisplay.isProjector.getter(__int64 a1)
{
  __int64 v1; // x0

  v1 = CGSDisplayStatusQuery(a1, 28LL);
  return sub_100019284(v1);
}