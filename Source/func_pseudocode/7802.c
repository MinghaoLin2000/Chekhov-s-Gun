_$s16EyeCandyGraphics9CGDisplayV4isTVSbvg
__int64 __fastcall CGDisplay.isTV.getter(__int64 a1)
{
  __int64 v1; // x0

  v1 = CGSDisplayStatusQuery(a1, 27LL);
  return sub_100019284(v1);
}